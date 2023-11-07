// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__109(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__109\n"); );
    // Body
    vlSelf->top__DOT___0540_ = (1U & (~ (((~ (IData)(vlSelf->top__DOT___0014_)) 
                                          & (IData)(vlSelf->top__DOT___0019_)) 
                                         | ((IData)(vlSelf->top__DOT___0289_) 
                                            & (IData)(vlSelf->top__DOT___0259_)))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__113(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__113\n"); );
    // Body
    vlSelf->top__DOT___0348_ = (1U & (~ (((IData)(vlSelf->top__DOT___1206_) 
                                          & (IData)(vlSelf->top__DOT___0651_)) 
                                         | ((IData)(vlSelf->top__DOT___0994_) 
                                            & (IData)(vlSelf->top__DOT___1283_)))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__114(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__114\n"); );
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
    vlSelf->top__DOT___1422_ = (1U & (~ (((IData)(vlSelf->top__DOT___0594_) 
                                          & (IData)(
                                                    (vlSelf->top__DOT___3818_ 
                                                     >> 0x20U))) 
                                         | ((IData)(vlSelf->top__DOT___0158_) 
                                            & (IData)(vlSelf->top__DOT___0263_)))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__117(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__117\n"); );
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
    vlSelf->top__DOT____VdfgTmp_h9dfe06e9__0 = ((0x400U 
                                                 & (vlSelf->top__DOT___3637_ 
                                                    >> 4U)) 
                                                | ((0x3f8U 
                                                    & (vlSelf->top__DOT___2001_[2U] 
                                                       >> 0xbU)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h76511b29__0)));
    vlSelf->top__DOT___0382_ = (1U & (((((IData)(vlSelf->top__DOT___1353_) 
                                         << 3U) | (
                                                   (4U 
                                                    & (vlSelf->top__DOT___2001_[3U] 
                                                       << 1U)) 
                                                   | (((IData)(vlSelf->top__DOT___1359_) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (IData)(vlSelf->top__DOT___3697_))))) 
                                       + ((8U & ((IData)(vlSelf->top__DOT___3669_) 
                                                 << 2U)) 
                                          | ((4U & 
                                              ((IData)(vlSelf->top__DOT___3669_) 
                                               << 2U)) 
                                             | (((IData)(vlSelf->top__DOT___0018_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0675_))))) 
                                      >> 3U));
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
    vlSelf->top__DOT___0381_ = ((IData)(vlSelf->top__DOT___0383_) 
                                & (~ (IData)(vlSelf->top__DOT___0382_)));
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
    vlSelf->top__DOT___1218_ = (1U & (~ ((IData)(vlSelf->top__DOT___0057_) 
                                         & (IData)(vlSelf->top__DOT___0885_))));
    vlSelf->top__DOT___0631_ = ((IData)(vlSelf->top__DOT___0057_) 
                                & (IData)(vlSelf->top__DOT___0401_));
    vlSelf->top__DOT___0243_ = ((IData)(vlSelf->top__DOT___0057_) 
                                & (IData)(vlSelf->top__DOT___0217_));
    vlSelf->top__DOT___0220_ = ((IData)(vlSelf->top__DOT___0221_) 
                                & (~ (IData)(vlSelf->top__DOT___0046_)));
    vlSelf->top__DOT___1834_ = ((IData)(vlSelf->top__DOT___0221_) 
                                ^ (IData)(vlSelf->top__DOT___0099_));
    vlSelf->top__DOT___2026_ = (((QData)((IData)((0x3ffU 
                                                  & ((vlSelf->top__DOT___3653_[2U] 
                                                      << 6U) 
                                                     | (vlSelf->top__DOT___3653_[1U] 
                                                        >> 0x1aU))))) 
                                 << 0x22U) | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT___3653_[1U] 
                                                                   >> 0x19U)))) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  (0x3fffffU 
                                                                   & (vlSelf->top__DOT___3653_[1U] 
                                                                      >> 3U)))) 
                                                  << 0xbU) 
                                                 | (QData)((IData)(
                                                                   ((0x400U 
                                                                     & (vlSelf->top__DOT___3653_[1U] 
                                                                        << 8U)) 
                                                                    | ((0x380U 
                                                                        & ((vlSelf->top__DOT___3653_[1U] 
                                                                            << 8U) 
                                                                           | (0x80U 
                                                                              & (vlSelf->top__DOT___3653_[0U] 
                                                                                >> 0x18U)))) 
                                                                       | (((IData)(vlSelf->top__DOT___0116_) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->top__DOT___0095_) 
                                                                              << 5U) 
                                                                             | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0111_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0309_)))))))))))));
    vlSelf->top__DOT___0363_ = ((IData)(vlSelf->top__DOT___0221_) 
                                & (~ ((IData)(vlSelf->top__DOT___3707_) 
                                      >> 0xcU)));
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
    vlSelf->top__DOT___1424_ = (1U & (~ (((IData)(vlSelf->top__DOT___0368_) 
                                          & (IData)(vlSelf->top__DOT___0057_)) 
                                         | ((IData)(vlSelf->top__DOT___0032_) 
                                            & (vlSelf->top__DOT___3751_ 
                                               >> 0x11U)))));
    vlSelf->top__DOT___1076_ = (1U & (~ ((((IData)(vlSelf->top__DOT___3718_) 
                                           >> 1U) & 
                                          ((IData)(vlSelf->top__DOT___3823_) 
                                           >> 5U)) 
                                         | (IData)(vlSelf->top__DOT___0631_))));
    vlSelf->top__DOT___1916_ = ((0x1fcU & (IData)(vlSelf->top__DOT___1916_)) 
                                | (((IData)(vlSelf->top__DOT___0631_) 
                                    << 1U) | (IData)(vlSelf->top__DOT___1299_)));
    vlSelf->top__DOT___0669_ = ((IData)(vlSelf->top__DOT___0631_) 
                                & (IData)(vlSelf->top__DOT___0134_));
    vlSelf->top__DOT___1984_ = (((QData)((IData)((0xffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___3791_ 
                                                             >> 0x19U))))) 
                                 << 0x27U) | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3791_ 
                                                                           >> 0x18U))))) 
                                               << 0x26U) 
                                              | (((QData)((IData)(
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___3791_ 
                                                                              >> 0x16U))))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3791_ 
                                                                                >> 0x15U))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0xfffffU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3791_ 
                                                                                >> 1U))))) 
                                                        << 0xfU) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->top__DOT___0243_) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->top__DOT___0739_) 
                                                                              << 0xdU) 
                                                                             | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                << 1U)) 
                                                                                | ((0xf00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                << 1U)) 
                                                                                | ((0x60U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0253_))))))))))))))))));
    vlSelf->top__DOT___1471_ = (1U & (~ (((IData)(vlSelf->top__DOT___1472_) 
                                          & (IData)(vlSelf->top__DOT___0032_)) 
                                         | ((IData)(vlSelf->top__DOT___0243_) 
                                            & (IData)(vlSelf->top__DOT___3753_)))));
    vlSelf->top__DOT___0904_ = (1U & (~ (((IData)(vlSelf->top__DOT___0243_) 
                                          & ((IData)(vlSelf->top__DOT___3618_) 
                                             >> 6U)) 
                                         | ((IData)(vlSelf->top__DOT___1386_) 
                                            & ((IData)(vlSelf->top__DOT___3710_) 
                                               >> 7U)))));
    vlSelf->top__DOT___2261_[0U] = (IData)((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT___3653_[1U] 
                                                                 >> 0x19U)))) 
                                             << 0x39U) 
                                            | (((QData)((IData)(
                                                                (0x3fffffU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___2026_ 
                                                                            >> 0xbU))))) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT___3653_[1U] 
                                                                       >> 2U)))) 
                                                   << 0x22U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT___2026_ 
                                                                                >> 7U))))) 
                                                      << 0x1fU) 
                                                     | (QData)((IData)(
                                                                       (0x7fffffffU 
                                                                        & vlSelf->top__DOT___3653_[0U]))))))));
    vlSelf->top__DOT___2261_[1U] = (((IData)((vlSelf->top__DOT___2026_ 
                                              >> 0x22U)) 
                                     << 0x1aU) | (IData)(
                                                         ((((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->top__DOT___3653_[1U] 
                                                                                >> 0x19U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0x3fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2026_ 
                                                                                >> 0xbU))))) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3653_[1U] 
                                                                                >> 2U)))) 
                                                                  << 0x22U) 
                                                                 | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2026_ 
                                                                                >> 7U))))) 
                                                                     << 0x1fU) 
                                                                    | (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & vlSelf->top__DOT___3653_[0U]))))))) 
                                                          >> 0x20U)));
    vlSelf->top__DOT___2261_[2U] = (((IData)((0x3ffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->top__DOT___3653_[3U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT___3653_[2U])) 
                                                    >> 4U)))) 
                                     << 4U) | (0xfU 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___2026_ 
                                                           >> 0x22U)) 
                                                  >> 6U)));
    vlSelf->top__DOT___2261_[3U] = (((IData)((0x3ffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->top__DOT___3653_[3U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT___3653_[2U])) 
                                                    >> 4U)))) 
                                     >> 0x1cU) | ((IData)(
                                                          ((0x3ffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3653_[3U])) 
                                                                << 0x1cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->top__DOT___3653_[2U])) 
                                                                  >> 4U))) 
                                                           >> 0x20U)) 
                                                  << 4U));
    vlSelf->top__DOT___0456_ = ((IData)(vlSelf->top__DOT___0071_) 
                                & (IData)(vlSelf->top__DOT___0363_));
    vlSelf->top__DOT___0801_ = (1U & (~ (((IData)(vlSelf->top__DOT___1306_) 
                                          & (IData)(vlSelf->top__DOT___0203_)) 
                                         | ((IData)(vlSelf->top__DOT___0191_) 
                                            & ((IData)(vlSelf->top__DOT___3822_) 
                                               >> 1U)))));
    vlSelf->top__DOT___2234_ = ((0x1fffffff9ULL & vlSelf->top__DOT___2234_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0423_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0193_)))) 
                                   << 1U));
    vlSelf->top__DOT___1752_ = ((IData)(vlSelf->top__DOT___0669_) 
                                | (IData)(vlSelf->top__DOT___0623_));
    vlSelf->top__DOT___1513_ = ((IData)(vlSelf->top__DOT___0456_) 
                                | (IData)(vlSelf->top__DOT___1211_));
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

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__124(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__124\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h36267824__0 = (((IData)(vlSelf->top__DOT___0311_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0678_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0348_)));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__126(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__126\n"); );
    // Body
    vlSelf->top__DOT___1390_ = (1U & (~ (((IData)(vlSelf->top__DOT___0263_) 
                                          & (IData)(vlSelf->top__DOT___0946_)) 
                                         | ((IData)(vlSelf->top__DOT___0195_) 
                                            & (IData)(vlSelf->top__DOT___1391_)))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__127(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__127\n"); );
    // Body
    vlSelf->top__DOT___0059_ = (1U & (~ (((IData)(vlSelf->top__DOT___1255_) 
                                          & (IData)(vlSelf->top__DOT___0149_)) 
                                         | ((IData)(vlSelf->top__DOT___0606_) 
                                            & (IData)(vlSelf->top__DOT___1253_)))));
    vlSelf->top__DOT___0155_ = (1U & (((IData)(vlSelf->top__DOT___0733_) 
                                       + (((IData)(vlSelf->top__DOT___0059_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0205_))) 
                                      >> 1U));
    vlSelf->top__DOT___0117_ = ((IData)(vlSelf->top__DOT___0059_) 
                                & (~ (IData)(vlSelf->top__DOT___0118_)));
    vlSelf->top__DOT___1888_ = ((3U & (IData)(vlSelf->top__DOT___1888_)) 
                                | ((0x2000U & ((IData)(vlSelf->top__DOT___3707_) 
                                               << 2U)) 
                                   | ((0x1000U & ((IData)(vlSelf->top__DOT___3707_) 
                                                  << 2U)) 
                                      | ((0x800U & 
                                          ((IData)(vlSelf->top__DOT___3707_) 
                                           << 2U)) 
                                         | ((0x7e0U 
                                             & ((IData)(vlSelf->top__DOT___3707_) 
                                                << 2U)) 
                                            | ((0x10U 
                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->top__DOT___0059_) 
                                                   << 3U) 
                                                  | ((IData)(vlSelf->top__DOT___0148_) 
                                                     << 2U))))))));
    vlSelf->top__DOT___1974_ = (((IData)(vlSelf->top__DOT___0155_) 
                                 << 1U) | (1U & ((IData)(vlSelf->top__DOT___0733_) 
                                                 + (IData)(vlSelf->top__DOT___0205_))));
    vlSelf->top__DOT___0052_ = ((IData)(vlSelf->top__DOT___0155_) 
                                & (~ (IData)(vlSelf->top__DOT___0154_)));
    vlSelf->top__DOT____VdfgTmp_hf587ad98__0 = ((0x20U 
                                                 & ((IData)(vlSelf->top__DOT___3618_) 
                                                    >> 1U)) 
                                                | (((IData)(vlSelf->top__DOT___0581_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___0318_) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                             << 1U)) 
                                                         | (IData)(vlSelf->top__DOT___0117_)))));
    vlSelf->top__DOT___1908_ = ((0xffffe1ffffULL & vlSelf->top__DOT___1908_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0620_) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT___0875_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___0311_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0117_)))))) 
                                   << 0x11U));
    vlSelf->top__DOT___0793_ = (1U & (~ (((IData)(vlSelf->top__DOT___0589_) 
                                          & (IData)(vlSelf->top__DOT___0117_)) 
                                         | (IData)(vlSelf->top__DOT___0012_))));
    vlSelf->top__DOT___2004_ = ((0x7c0U & ((IData)(vlSelf->top__DOT___3618_) 
                                           >> 1U)) 
                                | ((0x20U & ((IData)(vlSelf->top__DOT___3618_) 
                                             >> 1U)) 
                                   | (((IData)(vlSelf->top__DOT___0581_) 
                                       << 4U) | (((IData)(vlSelf->top__DOT___0318_) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->top__DOT___0117_))))));
    vlSelf->top__DOT___1179_ = ((IData)(vlSelf->top__DOT___0354_) 
                                ^ (IData)(vlSelf->top__DOT___0117_));
    vlSelf->top__DOT___0900_ = ((IData)(vlSelf->top__DOT___0469_) 
                                ^ (IData)(vlSelf->top__DOT___0117_));
    vlSelf->top__DOT___1047_ = (1U & (~ (((IData)(vlSelf->top__DOT___0117_) 
                                          & (IData)(vlSelf->top__DOT___0144_)) 
                                         | (IData)(vlSelf->top__DOT___0438_))));
    vlSelf->top__DOT___0780_ = ((IData)(vlSelf->top__DOT___0521_) 
                                & ((((vlSelf->top__DOT___3717_[1U] 
                                      << 0xbU) | (vlSelf->top__DOT___3717_[1U] 
                                                  >> 0x15U)) 
                                    + ((IData)(vlSelf->top__DOT___1179_) 
                                       << 1U)) >> 1U));
    vlSelf->top__DOT___1907_ = ((0x7fffULL & vlSelf->top__DOT___1907_) 
                                | (((QData)((IData)(
                                                    (vlSelf->top__DOT___3764_ 
                                                     >> 0x12U))) 
                                    << 0x18U) | ((QData)((IData)(
                                                                 ((0x1feU 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3764_ 
                                                                               >> 0xaU)) 
                                                                      << 1U)) 
                                                                  | (IData)(vlSelf->top__DOT___0900_)))) 
                                                 << 0xfU)));
    vlSelf->top__DOT___1473_ = (1U & (~ (((IData)(vlSelf->top__DOT___0949_) 
                                          & (IData)(vlSelf->top__DOT___1047_)) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT___3627_ 
                                                     >> 0x1dU)) 
                                            & (IData)(vlSelf->top__DOT___1395_)))));
    vlSelf->top__DOT___1421_ = ((IData)(vlSelf->top__DOT___0458_) 
                                ^ (IData)(vlSelf->top__DOT___1047_));
    vlSelf->top__DOT___1166_ = ((IData)(vlSelf->top__DOT___1247_) 
                                | (IData)(vlSelf->top__DOT___0780_));
    vlSelf->top__DOT___1165_ = (1U & (~ ((IData)(vlSelf->top__DOT___0631_) 
                                         & (IData)(vlSelf->top__DOT___1166_))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__129(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__129\n"); );
    // Body
    vlSelf->top__DOT___1023_ = (1U & (~ (((IData)(vlSelf->top__DOT___0057_) 
                                          & (IData)(vlSelf->top__DOT___1024_)) 
                                         | (IData)(vlSelf->top__DOT___0678_))));
    vlSelf->top__DOT___2057_ = ((6U & (vlSelf->top__DOT___3687_ 
                                       >> 6U)) | (IData)(vlSelf->top__DOT___1023_));
    vlSelf->top__DOT___1484_ = (1U & ((((6U & (IData)(vlSelf->top__DOT___2057_)) 
                                        | (IData)(vlSelf->top__DOT___1023_)) 
                                       + ((vlSelf->in_data[0x3fU] 
                                           << 1U) | 
                                          (vlSelf->in_data[0x3eU] 
                                           >> 0x1fU))) 
                                      >> 2U));
    vlSelf->top__DOT___1770_ = (1U & ((((2U & (IData)(vlSelf->top__DOT___2057_)) 
                                        | (IData)(vlSelf->top__DOT___1023_)) 
                                       + ((vlSelf->in_data[0x3fU] 
                                           << 1U) | 
                                          (vlSelf->in_data[0x3eU] 
                                           >> 0x1fU))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__139(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__139\n"); );
    // Body
    vlSelf->top__DOT___0945_ = (1U & ((((0x78U & vlSelf->top__DOT___2205_) 
                                        | ((4U & vlSelf->top__DOT___3751_) 
                                           | (3U & vlSelf->top__DOT___2205_))) 
                                       + ((0x78U & 
                                           ((IData)(vlSelf->top__DOT___1888_) 
                                            >> 2U)) 
                                          | ((4U & (IData)(vlSelf->top__DOT___3707_)) 
                                             | ((2U 
                                                 & (vlSelf->top__DOT___1964_[1U] 
                                                    >> 0x16U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT___3707_)))))) 
                                      >> 6U));
    vlSelf->top__DOT___0604_ = (1U & ((((0x1f8U & vlSelf->top__DOT___2205_) 
                                        | ((4U & vlSelf->top__DOT___3751_) 
                                           | (3U & vlSelf->top__DOT___2205_))) 
                                       + ((0x1f8U & 
                                           ((IData)(vlSelf->top__DOT___1888_) 
                                            >> 2U)) 
                                          | ((4U & (IData)(vlSelf->top__DOT___3707_)) 
                                             | ((2U 
                                                 & (vlSelf->top__DOT___1964_[1U] 
                                                    >> 0x16U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT___3707_)))))) 
                                      >> 8U));
    vlSelf->top__DOT___0602_ = (1U & ((((0x18U & vlSelf->top__DOT___2205_) 
                                        | ((4U & vlSelf->top__DOT___3751_) 
                                           | (3U & vlSelf->top__DOT___2205_))) 
                                       + ((0x18U & 
                                           ((IData)(vlSelf->top__DOT___1888_) 
                                            >> 2U)) 
                                          | ((4U & (IData)(vlSelf->top__DOT___3707_)) 
                                             | ((2U 
                                                 & (vlSelf->top__DOT___1964_[1U] 
                                                    >> 0x16U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT___3707_)))))) 
                                      >> 4U));
    vlSelf->out_data[0xdU] = ((0xfffffffeU & vlSelf->out_data[0xdU]) 
                              | ((IData)(vlSelf->top__DOT___0272_) 
                                 & (IData)(vlSelf->top__DOT___0604_)));
    vlSelf->top__DOT___0419_ = ((IData)(vlSelf->top__DOT___0603_) 
                                & (IData)(vlSelf->top__DOT___0602_));
    vlSelf->top__DOT___2231_[0U] = ((0xfffffffeU & 
                                     vlSelf->top__DOT___2231_[0U]) 
                                    | (IData)(vlSelf->top__DOT___0419_));
    vlSelf->top__DOT___0651_ = (1U & (~ (((vlSelf->top__DOT___3646_ 
                                           >> 9U) & (IData)(vlSelf->top__DOT___0602_)) 
                                         | ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                            & (IData)(vlSelf->top__DOT___0419_)))));
    vlSelf->top__DOT___0278_ = (1U & (~ (((IData)(vlSelf->top__DOT___0989_) 
                                          & (IData)(vlSelf->top__DOT___0318_)) 
                                         | (IData)(vlSelf->top__DOT___0419_))));
    vlSelf->top__DOT___0939_ = ((IData)(vlSelf->top__DOT___0419_) 
                                ^ (IData)(vlSelf->top__DOT___1170_));
    vlSelf->top__DOT___0641_ = ((IData)(vlSelf->top__DOT___0318_) 
                                & (IData)(vlSelf->top__DOT___0419_));
    vlSelf->top__DOT___0646_ = ((IData)((vlSelf->top__DOT___3649_ 
                                         >> 3U)) & (IData)(vlSelf->top__DOT___0419_));
    vlSelf->top__DOT___0276_ = ((IData)(vlSelf->top__DOT___0132_) 
                                & (IData)(vlSelf->top__DOT___0278_));
    vlSelf->top__DOT___1512_ = (1U & (~ (((IData)(vlSelf->top__DOT___0753_) 
                                          & ((IData)(vlSelf->top__DOT___0739_) 
                                             & (IData)(vlSelf->top__DOT___0641_))) 
                                         | ((IData)(vlSelf->top__DOT___0989_) 
                                            & (IData)(vlSelf->top__DOT___1513_)))));
    vlSelf->top__DOT___1942_[0U] = ((0x1fffffU & vlSelf->top__DOT___1942_[0U]) 
                                    | ((IData)((((QData)((IData)(vlSelf->top__DOT___0004_)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->top__DOT___0144_) 
                                                                    << 0x1fU) 
                                                                   | ((0x40000000U 
                                                                       & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                          << 0x1eU)) 
                                                                      | (((IData)(vlSelf->top__DOT___0860_) 
                                                                          << 0x1dU) 
                                                                         | (((IData)(vlSelf->top__DOT___1362_) 
                                                                             << 0x1cU) 
                                                                            | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 0x1bU) 
                                                                               | ((0x7000000U 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | ((0x7c0000U 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | ((0x1fffcU 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1512_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0519_)))))))))))))))) 
                                       << 0x15U));
    vlSelf->top__DOT___1942_[1U] = ((0xffc00000U & 
                                     vlSelf->top__DOT___1942_[1U]) 
                                    | (((IData)((((QData)((IData)(vlSelf->top__DOT___0004_)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT___0144_) 
                                                                     << 0x1fU) 
                                                                    | ((0x40000000U 
                                                                        & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                           << 0x1eU)) 
                                                                       | (((IData)(vlSelf->top__DOT___0860_) 
                                                                           << 0x1dU) 
                                                                          | (((IData)(vlSelf->top__DOT___1362_) 
                                                                              << 0x1cU) 
                                                                             | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7000000U 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | ((0x7c0000U 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | ((0x1fffcU 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1512_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0519_)))))))))))))))) 
                                        >> 0xbU) | 
                                       ((IData)(((((QData)((IData)(vlSelf->top__DOT___0004_)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___0144_) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                            << 0x1eU)) 
                                                                        | (((IData)(vlSelf->top__DOT___0860_) 
                                                                            << 0x1dU) 
                                                                           | (((IData)(vlSelf->top__DOT___1362_) 
                                                                               << 0x1cU) 
                                                                              | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7000000U 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | ((0x7c0000U 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | ((0x1fffcU 
                                                                                & (vlSelf->top__DOT___3770_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1512_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0519_))))))))))))))) 
                                                 >> 0x20U)) 
                                        << 0x15U)));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__140(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__140\n"); );
    // Body
    vlSelf->top__DOT___0172_ = (1U & ((((0x3000U & 
                                         ((IData)(vlSelf->top__DOT___2134_) 
                                          << 9U)) | 
                                        ((0x800U & 
                                          ((IData)(vlSelf->top__DOT___2194_) 
                                           << 7U)) 
                                         | ((0x400U 
                                             & vlSelf->top__DOT___3751_) 
                                            | ((0x3f8U 
                                                & vlSelf->top__DOT___2205_) 
                                               | ((4U 
                                                   & vlSelf->top__DOT___3751_) 
                                                  | (3U 
                                                     & vlSelf->top__DOT___2205_)))))) 
                                       + ((0x2000U 
                                           & (vlSelf->top__DOT___1964_[2U] 
                                              << 0xaU)) 
                                          | ((0x1000U 
                                              & (IData)(vlSelf->top__DOT___3707_)) 
                                             | ((0x800U 
                                                 & ((IData)(vlSelf->top__DOT___1888_) 
                                                    >> 2U)) 
                                                | ((0x400U 
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
                                                                  & (IData)(vlSelf->top__DOT___3707_))))))))))) 
                                      >> 0xdU));
    vlSelf->top__DOT___0120_ = (1U & ((((0x1000U & 
                                         ((IData)(vlSelf->top__DOT___2134_) 
                                          << 9U)) | 
                                        ((0x800U & 
                                          ((IData)(vlSelf->top__DOT___2194_) 
                                           << 7U)) 
                                         | ((0x400U 
                                             & vlSelf->top__DOT___3751_) 
                                            | ((0x3f8U 
                                                & vlSelf->top__DOT___2205_) 
                                               | ((4U 
                                                   & vlSelf->top__DOT___3751_) 
                                                  | (3U 
                                                     & vlSelf->top__DOT___2205_)))))) 
                                       + ((0x1000U 
                                           & (IData)(vlSelf->top__DOT___3707_)) 
                                          | ((0x800U 
                                              & ((IData)(vlSelf->top__DOT___1888_) 
                                                 >> 2U)) 
                                             | ((0x400U 
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
                                      >> 0xcU));
    vlSelf->top__DOT___1568_ = (1U & ((((0x800U & ((IData)(vlSelf->top__DOT___2194_) 
                                                   << 7U)) 
                                        | ((0x400U 
                                            & vlSelf->top__DOT___3751_) 
                                           | ((0x3f8U 
                                               & vlSelf->top__DOT___2205_) 
                                              | ((4U 
                                                  & vlSelf->top__DOT___3751_) 
                                                 | (3U 
                                                    & vlSelf->top__DOT___2205_))))) 
                                       + ((0x800U & 
                                           ((IData)(vlSelf->top__DOT___1888_) 
                                            >> 2U)) 
                                          | ((0x400U 
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
                                                            & (IData)(vlSelf->top__DOT___3707_))))))))) 
                                      >> 0xbU));
    vlSelf->top__DOT___0170_ = ((IData)(vlSelf->top__DOT___0172_) 
                                & (~ (IData)(vlSelf->top__DOT___0171_)));
    vlSelf->top__DOT___0119_ = (1U & ((~ (IData)(vlSelf->top__DOT___0205_)) 
                                      & (~ (IData)(vlSelf->top__DOT___0120_))));
    vlSelf->top__DOT___1379_ = (1U & ((IData)((vlSelf->top__DOT___3747_ 
                                               >> 9U)) 
                                      ^ (IData)(vlSelf->top__DOT___0170_)));
    vlSelf->top__DOT___0358_ = (1U & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                      & (~ (IData)(vlSelf->top__DOT___0119_))));
    vlSelf->top__DOT___1377_ = (1U & (~ (((IData)(vlSelf->top__DOT___0656_) 
                                          & (IData)(vlSelf->top__DOT___0619_)) 
                                         | ((IData)(vlSelf->top__DOT___1379_) 
                                            & (vlSelf->top__DOT___3622_ 
                                               >> 0xfU)))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__141(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__141\n"); );
    // Body
    vlSelf->top__DOT___1876_ = ((IData)(vlSelf->top__DOT___1483_) 
                                ^ (IData)(vlSelf->top__DOT___0900_));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__142(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__142\n"); );
    // Body
    vlSelf->top__DOT___0952_ = (1U & (((((IData)(vlSelf->top__DOT___0279_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0071_)) 
                                       + (((IData)(vlSelf->top__DOT___0261_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___1421_))) 
                                      >> 1U));
    vlSelf->top__DOT___1119_ = (1U & (((((IData)(vlSelf->top__DOT___0215_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___0279_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0071_))) 
                                       + (((IData)(vlSelf->top__DOT___0144_) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT___0261_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___1421_)))) 
                                      >> 2U));
    vlSelf->top__DOT___0950_ = (1U & (~ (((IData)(vlSelf->top__DOT___0953_) 
                                          & (IData)(vlSelf->top__DOT___0952_)) 
                                         | (IData)(vlSelf->top__DOT___0951_))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__149(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__149\n"); );
    // Init
    CData/*0:0*/ top__DOT___1057_;
    top__DOT___1057_ = 0;
    CData/*0:0*/ top__DOT___1058_;
    top__DOT___1058_ = 0;
    // Body
    vlSelf->top__DOT___0599_ = (1U & (~ (((IData)(vlSelf->top__DOT___0325_) 
                                          & (IData)(vlSelf->top__DOT___0748_)) 
                                         | (IData)(vlSelf->top__DOT___0752_))));
    vlSelf->top__DOT___1462_ = (1U & (~ (((IData)(vlSelf->top__DOT___0192_) 
                                          & (~ (IData)(vlSelf->top__DOT___0014_))) 
                                         | ((IData)(vlSelf->top__DOT___0146_) 
                                            & (IData)(vlSelf->top__DOT___0599_)))));
    vlSelf->top__DOT___1927_ = ((0x7fffffU & vlSelf->top__DOT___1927_) 
                                | (((IData)(vlSelf->top__DOT___0069_) 
                                    << 0x18U) | (0x800000U 
                                                 & ((~ (IData)(vlSelf->top__DOT___0599_)) 
                                                    << 0x17U))));
    vlSelf->top__DOT___0442_ = (1U & ((~ (IData)(vlSelf->top__DOT___0599_)) 
                                      & (~ (IData)(vlSelf->top__DOT___0443_))));
    vlSelf->top__DOT___0207_ = ((IData)(vlSelf->top__DOT___0032_) 
                                & (IData)(vlSelf->top__DOT___0599_));
    vlSelf->top__DOT___1935_[2U] = ((0xfffcU & vlSelf->top__DOT___1935_[2U]) 
                                    | (0xffffU & (((IData)(vlSelf->top__DOT___0314_) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT___0599_))));
    vlSelf->top__DOT___0204_ = (1U & ((IData)(vlSelf->top__DOT___1046_) 
                                      | (~ (IData)(vlSelf->top__DOT___0599_))));
    vlSelf->top__DOT___1945_ = ((0xfdU & (IData)(vlSelf->top__DOT___1945_)) 
                                | ((IData)(vlSelf->top__DOT___0442_) 
                                   << 1U));
    vlSelf->top__DOT___1358_ = (1U & (~ (((IData)(vlSelf->top__DOT___0207_) 
                                          & (IData)(vlSelf->top__DOT___0489_)) 
                                         | ((IData)(vlSelf->top__DOT___1360_) 
                                            & (IData)(vlSelf->top__DOT___1359_)))));
    vlSelf->top__DOT___0202_ = ((IData)(vlSelf->top__DOT___0204_) 
                                & (~ (IData)(vlSelf->top__DOT___0203_)));
    vlSelf->top__DOT___1339_ = (1U & (~ (((IData)(vlSelf->top__DOT___0168_) 
                                          & (IData)(vlSelf->top__DOT___0204_)) 
                                         | ((IData)(vlSelf->top__DOT___1027_) 
                                            & (IData)(vlSelf->top__DOT___0023_)))));
    vlSelf->top__DOT___1072_ = ((IData)(vlSelf->top__DOT___0270_) 
                                ^ (IData)(vlSelf->top__DOT___0204_));
    vlSelf->top__DOT___2069_ = (((QData)((IData)((0x3ffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___3641_ 
                                                             >> 0x1fU))))) 
                                 << 0x17U) | (QData)((IData)(
                                                             ((0x400000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___3641_ 
                                                                           >> 0x1eU)) 
                                                                  << 0x16U)) 
                                                              | ((0x3fe000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3641_ 
                                                                              >> 0x15U)) 
                                                                     << 0xdU)) 
                                                                 | (((IData)(vlSelf->top__DOT___0202_) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->top__DOT___0226_) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->top__DOT___0311_) 
                                                                           << 0xaU) 
                                                                          | (((IData)(vlSelf->top__DOT___1680_) 
                                                                              << 9U) 
                                                                             | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3695_) 
                                                                                << 2U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3695_) 
                                                                                << 2U)) 
                                                                                | ((0x60U 
                                                                                & ((IData)(vlSelf->top__DOT___3695_) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3695_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___3695_) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3695_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0325_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0922_)))))))))))))))));
    vlSelf->top__DOT___1148_ = (1U & (~ (((IData)(vlSelf->top__DOT___0404_) 
                                          & (IData)(vlSelf->top__DOT___1072_)) 
                                         | (IData)(vlSelf->top__DOT___0166_))));
    vlSelf->top__DOT___0467_ = (1U & (~ (((IData)(vlSelf->top__DOT___0013_) 
                                          & (IData)(vlSelf->top__DOT___0214_)) 
                                         | (((IData)(vlSelf->top__DOT___3647_) 
                                             >> 6U) 
                                            & (IData)(vlSelf->top__DOT___1072_)))));
    top__DOT___1058_ = (1U & ((((0x7ffc0000U & ((IData)(
                                                        (vlSelf->top__DOT___2070_ 
                                                         >> 0x12U)) 
                                                << 0x12U)) 
                                | ((0x20000U & (vlSelf->top__DOT___3701_[1U] 
                                                >> 1U)) 
                                   | ((0x1f800U & ((IData)(
                                                           (vlSelf->top__DOT___2070_ 
                                                            >> 0xbU)) 
                                                   << 0xbU)) 
                                      | ((0x400U & 
                                          (vlSelf->top__DOT___3701_[1U] 
                                           >> 1U)) 
                                         | ((0x3e0U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT___2070_ 
                                                         >> 5U)) 
                                                << 5U)) 
                                            | (((IData)(vlSelf->top__DOT___0165_) 
                                                << 4U) 
                                               | ((0xeU 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___2070_ 
                                                               >> 1U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->top__DOT___0166_)))))))) 
                               + ((0x7f800000U & ((IData)(
                                                          (vlSelf->top__DOT___2069_ 
                                                           >> 0x17U)) 
                                                  << 0x17U)) 
                                  | ((0x400000U & ((IData)(
                                                           (vlSelf->top__DOT___3641_ 
                                                            >> 0x1eU)) 
                                                   << 0x16U)) 
                                     | ((0x3fe000U 
                                         & ((IData)(
                                                    (vlSelf->top__DOT___2069_ 
                                                     >> 0xdU)) 
                                            << 0xdU)) 
                                        | (((IData)(vlSelf->top__DOT___0202_) 
                                            << 0xcU) 
                                           | (((IData)(vlSelf->top__DOT___0226_) 
                                               << 0xbU) 
                                              | (((IData)(vlSelf->top__DOT___0311_) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->top__DOT___1680_) 
                                                     << 9U) 
                                                    | ((0x100U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___2069_ 
                                                                    >> 8U)) 
                                                           << 8U)) 
                                                       | ((0x80U 
                                                           & ((IData)(vlSelf->top__DOT___3695_) 
                                                              << 2U)) 
                                                          | ((0x60U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___2069_ 
                                                                          >> 5U)) 
                                                                 << 5U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(vlSelf->top__DOT___3695_) 
                                                                    << 2U)) 
                                                                | ((8U 
                                                                    & ((IData)(vlSelf->top__DOT___3695_) 
                                                                       << 2U)) 
                                                                   | ((4U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___2069_ 
                                                                                >> 2U)) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0325_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0922_)))))))))))))))) 
                              >> 0x1eU));
    vlSelf->top__DOT___0465_ = ((IData)(vlSelf->top__DOT___0467_) 
                                & (~ (IData)(vlSelf->top__DOT___0466_)));
    top__DOT___1057_ = (1U & (~ (((IData)(vlSelf->top__DOT___0219_) 
                                  & (IData)(vlSelf->top__DOT___0593_)) 
                                 | (IData)(top__DOT___1058_))));
    vlSelf->top__DOT___0515_ = (1U & (~ (((IData)(vlSelf->top__DOT___1148_) 
                                          & (IData)(top__DOT___1057_)) 
                                         | ((IData)(vlSelf->top__DOT___0071_) 
                                            & (IData)(vlSelf->top__DOT___1561_)))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__155(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__155\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h2b7e8161__0 = ((0x70U 
                                                 & (IData)(vlSelf->top__DOT___2005_)) 
                                                | (((IData)(vlSelf->top__DOT___0320_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0278_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0988_))));
    vlSelf->top__DOT____VdfgTmp_hd437d20d__0 = ((0x80U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___3818_ 
                                                             >> 0x1aU)) 
                                                    << 7U)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h2b7e8161__0));
    vlSelf->top__DOT___1631_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_hd437d20d__0) 
                                       + ((0xc0U & (IData)(vlSelf->top__DOT___2004_)) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_hf587ad98__0))) 
                                      >> 7U));
    vlSelf->top__DOT___2003_ = ((0x600U & (((0x700U 
                                             & (IData)(vlSelf->top__DOT___2005_)) 
                                            | (IData)(vlSelf->top__DOT____VdfgTmp_hd437d20d__0)) 
                                           + ((0x7c0U 
                                               & (IData)(vlSelf->top__DOT___2004_)) 
                                              | (IData)(vlSelf->top__DOT____VdfgTmp_hf587ad98__0)))) 
                                | (((IData)(vlSelf->top__DOT___1126_) 
                                    << 8U) | (((IData)(vlSelf->top__DOT___1631_) 
                                               << 7U) 
                                              | ((0x78U 
                                                  & ((IData)(vlSelf->top__DOT____VdfgTmp_h2b7e8161__0) 
                                                     + 
                                                     ((0x40U 
                                                       & (IData)(vlSelf->top__DOT___2004_)) 
                                                      | (IData)(vlSelf->top__DOT____VdfgTmp_hf587ad98__0)))) 
                                                 | (((IData)(vlSelf->top__DOT___1372_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___1217_) 
                                                        << 1U) 
                                                       | (1U 
                                                          & ((IData)(vlSelf->top__DOT___0988_) 
                                                             + (IData)(vlSelf->top__DOT___0117_)))))))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__157(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__157\n"); );
    // Body
    vlSelf->top__DOT___2044_ = ((0x1c0U & ((((IData)(vlSelf->top__DOT___1368_) 
                                             << 8U) 
                                            | (((IData)(vlSelf->top__DOT___0335_) 
                                                << 7U) 
                                               | (((IData)(vlSelf->top__DOT___0646_) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->top__DOT___0232_) 
                                                      << 5U) 
                                                     | ((0x10U 
                                                         & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                            << 4U)) 
                                                        | (((IData)(vlSelf->top__DOT___0905_) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->top__DOT___0134_) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->top__DOT___0166_) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->top__DOT___1352_))))))))) 
                                           + ((0x1e0U 
                                               & (IData)(vlSelf->top__DOT___2045_)) 
                                              | ((0x1eU 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___2012_ 
                                                              >> 0x28U)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->top__DOT___0524_))))) 
                                | (((IData)(vlSelf->top__DOT___0668_) 
                                    << 5U) | ((0x1eU 
                                               & (((0x10U 
                                                    & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                       << 4U)) 
                                                   | (((IData)(vlSelf->top__DOT___0905_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0134_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___0166_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___1352_))))) 
                                                  + 
                                                  ((0x1eU 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___2012_ 
                                                                >> 0x28U)) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->top__DOT___0524_)))) 
                                              | (IData)(vlSelf->top__DOT___1461_))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__158(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__158\n"); );
    // Body
    vlSelf->top__DOT___0565_ = (1U & (~ (((IData)(vlSelf->top__DOT___0408_) 
                                          & ((IData)(vlSelf->top__DOT___3749_) 
                                             >> 1U)) 
                                         | ((IData)(vlSelf->top__DOT___1568_) 
                                            & (IData)(vlSelf->top__DOT___0150_)))));
    vlSelf->top__DOT___0659_ = ((IData)(vlSelf->top__DOT___0609_) 
                                & (IData)(vlSelf->top__DOT___0565_));
    vlSelf->top__DOT___0971_ = ((IData)(vlSelf->top__DOT___0565_) 
                                ^ (IData)(vlSelf->top__DOT___1031_));
    vlSelf->top__DOT___0805_ = (1U & (~ (((IData)(vlSelf->top__DOT___0057_) 
                                          & (~ (IData)(vlSelf->top__DOT___0565_))) 
                                         | (IData)(vlSelf->top__DOT___0311_))));
    vlSelf->top__DOT___1242_ = (1U & ((((0x30U & ((IData)(
                                                          (vlSelf->top__DOT___1969_ 
                                                           >> 9U)) 
                                                  << 4U)) 
                                        | (((IData)(vlSelf->top__DOT___0135_) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT___0565_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___0043_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0057_))))) 
                                       + (((IData)(vlSelf->top__DOT___1716_) 
                                           << 5U) | 
                                          ((0x10U & vlSelf->top__DOT___1996_) 
                                           | (((IData)(vlSelf->top__DOT___1365_) 
                                               << 3U) 
                                              | ((IData)(vlSelf->top__DOT___0154_) 
                                                 << 2U))))) 
                                      >> 5U));
    vlSelf->top__DOT___0224_ = (1U & ((((0x3ff0U & 
                                         ((IData)((vlSelf->top__DOT___1969_ 
                                                   >> 9U)) 
                                          << 4U)) | 
                                        (((IData)(vlSelf->top__DOT___0135_) 
                                          << 3U) | 
                                         (((IData)(vlSelf->top__DOT___0565_) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT___0043_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0057_))))) 
                                       + ((0x3f80U 
                                           & ((vlSelf->in_data[0x1aU] 
                                               << 0xdU) 
                                              | (0x1f80U 
                                                 & (vlSelf->in_data[0x19U] 
                                                    >> 0x13U)))) 
                                          | (((IData)(vlSelf->top__DOT___1203_) 
                                              << 6U) 
                                             | (((IData)(vlSelf->top__DOT___1716_) 
                                                 << 5U) 
                                                | ((0x10U 
                                                    & vlSelf->top__DOT___1996_) 
                                                   | (((IData)(vlSelf->top__DOT___1365_) 
                                                       << 3U) 
                                                      | ((IData)(vlSelf->top__DOT___0154_) 
                                                         << 2U))))))) 
                                      >> 0xdU));
    vlSelf->top__DOT___0707_ = ((IData)(vlSelf->top__DOT___0709_) 
                                & (~ (IData)(vlSelf->top__DOT___0565_)));
    vlSelf->top__DOT___0657_ = ((IData)(vlSelf->top__DOT___0401_) 
                                & (IData)(vlSelf->top__DOT___0565_));
    vlSelf->top__DOT___1986_ = ((0x800U & ((IData)(vlSelf->top__DOT___3732_) 
                                           << 6U)) 
                                | ((0x400U & ((IData)(vlSelf->top__DOT___3732_) 
                                              << 6U)) 
                                   | (((IData)(vlSelf->top__DOT___0565_) 
                                       << 9U) | ((0x80U 
                                                  & ((IData)(vlSelf->top__DOT___3647_) 
                                                     << 4U)) 
                                                 | (((IData)(vlSelf->top__DOT___1527_) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->top__DOT___0287_) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->top__DOT___1225_) 
                                                           << 4U) 
                                                          | ((8U 
                                                              & ((IData)(vlSelf->top__DOT___3820_) 
                                                                 << 1U)) 
                                                             | ((4U 
                                                                 & ((IData)(vlSelf->top__DOT___3820_) 
                                                                    << 1U)) 
                                                                | ((2U 
                                                                    & ((IData)(vlSelf->top__DOT___3820_) 
                                                                       << 1U)) 
                                                                   | (IData)(vlSelf->top__DOT___0154_)))))))))));
    vlSelf->top__DOT___0804_ = ((IData)((vlSelf->top__DOT___3652_ 
                                         >> 0xcU)) 
                                & (IData)(vlSelf->top__DOT___0805_));
    vlSelf->top__DOT___0222_ = ((IData)(vlSelf->top__DOT___0224_) 
                                & (~ ((IData)(vlSelf->top__DOT___3775_) 
                                      >> 6U)));
    vlSelf->top__DOT___1995_ = ((0x3c000U & (((0x3fff0U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___1969_ 
                                                           >> 9U)) 
                                                  << 4U)) 
                                              | (((IData)(vlSelf->top__DOT___0135_) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT___0565_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___0043_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0057_))))) 
                                             + ((0x3ff80U 
                                                 & ((vlSelf->in_data[0x1aU] 
                                                     << 0xdU) 
                                                    | (0x1f80U 
                                                       & (vlSelf->in_data[0x19U] 
                                                          >> 0x13U)))) 
                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___1716_) 
                                                       << 5U) 
                                                      | ((0x10U 
                                                          & vlSelf->top__DOT___1996_) 
                                                         | (((IData)(vlSelf->top__DOT___1365_) 
                                                             << 3U) 
                                                            | ((IData)(vlSelf->top__DOT___0154_) 
                                                               << 2U)))))))) 
                                | (((IData)(vlSelf->top__DOT___0224_) 
                                    << 0xdU) | ((0x1fc0U 
                                                 & (((0x1ff0U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___1969_ 
                                                                  >> 9U)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___0135_) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->top__DOT___0565_) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->top__DOT___0043_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___0057_))))) 
                                                    + 
                                                    ((0x1f80U 
                                                      & (vlSelf->in_data[0x19U] 
                                                         >> 0x13U)) 
                                                     | (((IData)(vlSelf->top__DOT___1203_) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->top__DOT___1716_) 
                                                            << 5U) 
                                                           | ((0x10U 
                                                               & vlSelf->top__DOT___1996_) 
                                                              | (((IData)(vlSelf->top__DOT___1365_) 
                                                                  << 3U) 
                                                                 | ((IData)(vlSelf->top__DOT___0154_) 
                                                                    << 2U)))))))) 
                                                | (((IData)(vlSelf->top__DOT___1242_) 
                                                    << 5U) 
                                                   | ((0x1eU 
                                                       & (((0x10U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT___1969_ 
                                                                        >> 9U)) 
                                                               << 4U)) 
                                                           | (((IData)(vlSelf->top__DOT___0135_) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->top__DOT___0565_) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelf->top__DOT___0043_) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->top__DOT___0057_))))) 
                                                          + 
                                                          ((0x10U 
                                                            & vlSelf->top__DOT___1996_) 
                                                           | (((IData)(vlSelf->top__DOT___1365_) 
                                                               << 3U) 
                                                              | ((IData)(vlSelf->top__DOT___0154_) 
                                                                 << 2U))))) 
                                                      | (IData)(vlSelf->top__DOT___0057_))))));
    vlSelf->out_data[0x1dU] = ((0xfffffffeU & vlSelf->out_data[0x1dU]) 
                               | (IData)(vlSelf->top__DOT___0707_));
    vlSelf->top__DOT___1692_ = (1U & ((((2U & (IData)(vlSelf->top__DOT___1986_)) 
                                        | (IData)(vlSelf->top__DOT___0154_)) 
                                       + (((IData)(vlSelf->top__DOT___0287_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0265_))) 
                                      >> 1U));
    vlSelf->top__DOT___1431_ = (1U & ((((8U & ((IData)(vlSelf->top__DOT___3775_) 
                                               >> 4U)) 
                                        | (((IData)(vlSelf->top__DOT___0324_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0243_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0152_)))) 
                                       + (((IData)(vlSelf->top__DOT___1225_) 
                                           << 3U) | 
                                          ((4U & (IData)(vlSelf->top__DOT___3820_)) 
                                           | ((2U & (IData)(vlSelf->top__DOT___3820_)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->top__DOT___1986_) 
                                                    >> 1U)))))) 
                                      >> 3U));
    vlSelf->top__DOT___1145_ = (1U & ((IData)(vlSelf->top__DOT___0152_) 
                                      + ((IData)(vlSelf->top__DOT___1986_) 
                                         >> 1U)));
    vlSelf->top__DOT___1727_ = (1U & ((vlSelf->top__DOT___1995_ 
                                       >> 9U) + (IData)(vlSelf->top__DOT___0253_)));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__159(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__159\n"); );
    // Body
    vlSelf->top__DOT___0385_ = (1U & (~ (((IData)(vlSelf->top__DOT___0303_) 
                                          & (IData)(vlSelf->top__DOT___1352_)) 
                                         | ((IData)(vlSelf->top__DOT___0170_) 
                                            & (IData)(vlSelf->top__DOT___0692_)))));
    vlSelf->top__DOT___0530_ = (1U & (~ ((((IData)(vlSelf->top__DOT___3718_) 
                                           >> 6U) & (IData)(
                                                            (vlSelf->top__DOT___3628_ 
                                                             >> 0x2dU))) 
                                         | ((IData)(vlSelf->top__DOT___0065_) 
                                            & (IData)(vlSelf->top__DOT___0385_)))));
    vlSelf->top__DOT___0384_ = ((IData)(vlSelf->top__DOT___0386_) 
                                & (~ (IData)(vlSelf->top__DOT___0385_)));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__161(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__161\n"); );
    // Body
    vlSelf->top__DOT___0371_ = (1U & (~ (((IData)(vlSelf->top__DOT___0099_) 
                                          & (IData)(vlSelf->top__DOT___1119_)) 
                                         | (IData)(vlSelf->top__DOT___0259_))));
    vlSelf->top__DOT___1664_ = ((IData)(vlSelf->top__DOT___0371_) 
                                | ((IData)(vlSelf->top__DOT___0784_) 
                                   & (IData)(vlSelf->top__DOT___0145_)));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__167(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__167\n"); );
    // Body
    vlSelf->top__DOT___1929_ = ((0xfff8000U & vlSelf->top__DOT___1929_) 
                                | (((IData)(vlSelf->top__DOT___0873_) 
                                    << 0xeU) | (((IData)(vlSelf->top__DOT___0026_) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->top__DOT___0315_) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->top__DOT___0599_) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->top__DOT___0480_) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->top__DOT___0454_) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->top__DOT___0315_) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->top__DOT___0482_) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->top__DOT___1761_) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->top__DOT___1590_) 
                                                                         << 5U) 
                                                                        | ((0x18U 
                                                                            & (((((IData)(vlSelf->top__DOT___0039_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0320_)))) 
                                                                                + 
                                                                                ((IData)(vlSelf->top__DOT___0150_) 
                                                                                << 1U)) 
                                                                               << 3U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0046_) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->top__DOT___0715_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1486_)))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__171(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__171\n"); );
    // Init
    CData/*0:0*/ top__DOT___1375_;
    top__DOT___1375_ = 0;
    // Body
    top__DOT___1375_ = (1U & (~ (((IData)(vlSelf->top__DOT___0748_) 
                                  & (IData)(vlSelf->top__DOT___1376_)) 
                                 | ((IData)(vlSelf->top__DOT___1331_) 
                                    & (IData)(vlSelf->top__DOT___1360_)))));
    vlSelf->top__DOT___0901_ = (1U & (~ ((IData)(vlSelf->top__DOT___0221_) 
                                         & (IData)(top__DOT___1375_))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__173(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__173\n"); );
    // Body
    vlSelf->top__DOT___0957_ = (1U & (~ ((((IData)(vlSelf->top__DOT___3785_) 
                                           >> 4U) & (IData)(vlSelf->top__DOT___0860_)) 
                                         | (~ ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                               | (((IData)(vlSelf->top__DOT___0413_) 
                                                   ^ 
                                                   ((IData)(
                                                            (vlSelf->top__DOT___3773_ 
                                                             >> 0x19U)) 
                                                    ^ (IData)(vlSelf->top__DOT___0732_))) 
                                                  & (IData)(vlSelf->top__DOT___1532_)))))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__178(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__178\n"); );
    // Body
    vlSelf->out_data[0x36U] = ((0xfffffffeU & vlSelf->out_data[0x36U]) 
                               | (1U & (~ (((IData)(vlSelf->top__DOT___0080_) 
                                            & ((IData)(vlSelf->top__DOT___3718_) 
                                               >> 6U)) 
                                           | ((IData)(vlSelf->top__DOT___0565_) 
                                              & ((IData)(vlSelf->top__DOT___0489_) 
                                                 ^ (IData)(vlSelf->top__DOT___1454_)))))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__179(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__179\n"); );
    // Body
    vlSelf->top__DOT___0563_ = ((IData)(vlSelf->top__DOT___0565_) 
                                & (IData)(vlSelf->top__DOT___0564_));
    vlSelf->top__DOT___0139_ = (1U & (~ (((IData)(vlSelf->top__DOT___0177_) 
                                          & (IData)(vlSelf->top__DOT___0752_)) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT___3769_ 
                                                     >> 0x13U)) 
                                            & (IData)(vlSelf->top__DOT___0563_)))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__186(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__186\n"); );
    // Body
    vlSelf->top__DOT___2133_ = ((0x7eU & (((0x60U & 
                                            (vlSelf->top__DOT___1995_ 
                                             >> 9U)) 
                                           | (((IData)(vlSelf->top__DOT___0224_) 
                                               << 4U) 
                                              | (0xfU 
                                                 & (vlSelf->top__DOT___1995_ 
                                                    >> 9U)))) 
                                          + ((0x40U 
                                              & (IData)(vlSelf->top__DOT___2134_)) 
                                             | ((0x20U 
                                                 & (vlSelf->top__DOT___3751_ 
                                                    >> 9U)) 
                                                | ((0x18U 
                                                    & (IData)(vlSelf->top__DOT___2134_)) 
                                                   | (((IData)(vlSelf->top__DOT___0530_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0018_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0253_)))))))) 
                                | (IData)(vlSelf->top__DOT___1727_));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__188(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__188\n"); );
    // Body
    vlSelf->top__DOT___1089_ = (1U & (~ (((IData)(vlSelf->top__DOT___0901_) 
                                          & (IData)(vlSelf->top__DOT___1090_)) 
                                         | (IData)(vlSelf->top__DOT___0000_))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__190(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__190\n"); );
    // Body
    vlSelf->out_data[0xeU] = ((0xfffffffeU & vlSelf->out_data[0xeU]) 
                              | (1U & ((IData)(vlSelf->top__DOT___1370_) 
                                       ^ (~ (((IData)(vlSelf->top__DOT___0957_) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___3626_ 
                                                          >> 0x26U)) 
                                                 ^ (IData)(vlSelf->top__DOT___0481_))) 
                                             | (IData)(vlSelf->top__DOT___0675_))))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__194(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__194\n"); );
    // Body
    vlSelf->top__DOT___1935_[1U] = ((0xff007fffU & 
                                     vlSelf->top__DOT___1935_[1U]) 
                                    | (0xffff8000U 
                                       & (((IData)(vlSelf->top__DOT___0873_) 
                                           << 0x17U) 
                                          | (((IData)(vlSelf->top__DOT___0636_) 
                                              << 0x16U) 
                                             | (((IData)(vlSelf->top__DOT___0563_) 
                                                 << 0x15U) 
                                                | (((IData)(vlSelf->top__DOT___0549_) 
                                                    << 0x14U) 
                                                   | (((IData)(vlSelf->top__DOT___0146_) 
                                                       << 0x13U) 
                                                      | (((IData)(vlSelf->top__DOT___0559_) 
                                                          << 0x12U) 
                                                         | (((IData)(vlSelf->top__DOT___1484_) 
                                                             << 0x11U) 
                                                            | (((IData)(vlSelf->top__DOT___1770_) 
                                                                << 0x10U) 
                                                               | (0x8000U 
                                                                  & (((IData)(vlSelf->top__DOT___1023_) 
                                                                      + 
                                                                      (vlSelf->in_data[0x3eU] 
                                                                       >> 0x1fU)) 
                                                                     << 0xfU))))))))))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__198(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__198\n"); );
    // Body
    vlSelf->top__DOT___1446_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    ((0x7e00000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 0x2bU)) 
                                                                         << 0x15U)) 
                                                                     | ((0x100000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 0x23U)) 
                                                                            << 0x14U)) 
                                                                        | (0xfffffU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 0x16U))))))) 
                                                    << 0x16U) 
                                                   | (QData)((IData)(
                                                                     ((0x200000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 0xeU)) 
                                                                          << 0x15U)) 
                                                                      | ((0x1f0000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 0x10U)) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 8U)) 
                                                                                << 0xfU)) 
                                                                            | ((0x7e00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                               | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 1U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0857_) 
                                                                                << 1U))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0x3fffffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___1968_ 
                                                                                >> 0xeU))))) 
                                                    << 0x1bU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0142_) 
                                                                       << 0x1aU) 
                                                                      | ((0x3c00000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___1968_ 
                                                                                >> 9U)) 
                                                                             << 0x16U)) 
                                                                         | ((0x200000U 
                                                                             & (vlSelf->top__DOT___1964_[2U] 
                                                                                << 0x12U)) 
                                                                            | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                               | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___1888_) 
                                                                                << 6U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | ((0x1f800U 
                                                                                & ((IData)(vlSelf->top__DOT___1888_) 
                                                                                << 6U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___1964_[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0174_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0609_)))))))))))))))))))) 
                                                 >> 0x30U))));
    vlSelf->top__DOT___1696_ = (1U & (IData)((0x1fffULL 
                                              & (((((QData)((IData)(
                                                                    ((0x7e00000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 0x2bU)) 
                                                                         << 0x15U)) 
                                                                     | ((0x100000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 0x23U)) 
                                                                            << 0x14U)) 
                                                                        | (0xfffffU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 0x16U))))))) 
                                                    << 0x16U) 
                                                   | (QData)((IData)(
                                                                     ((0x200000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 0xeU)) 
                                                                          << 0x15U)) 
                                                                      | ((0x1f0000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 0x10U)) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 8U)) 
                                                                                << 0xfU)) 
                                                                            | ((0x7e00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                               | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 1U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0857_) 
                                                                                << 1U))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0x3fffffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___1968_ 
                                                                                >> 0xeU))))) 
                                                    << 0x1bU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0142_) 
                                                                       << 0x1aU) 
                                                                      | ((0x3c00000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___1968_ 
                                                                                >> 9U)) 
                                                                             << 0x16U)) 
                                                                         | ((0x200000U 
                                                                             & (vlSelf->top__DOT___1964_[2U] 
                                                                                << 0x12U)) 
                                                                            | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                               | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___1888_) 
                                                                                << 6U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | ((0x1f800U 
                                                                                & ((IData)(vlSelf->top__DOT___1888_) 
                                                                                << 6U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___1964_[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0174_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0609_)))))))))))))))))))) 
                                                 >> 0x24U))));
    vlSelf->top__DOT___1230_ = (1U & (IData)((0x7fffULL 
                                              & (((((QData)((IData)(
                                                                    ((0x7e00000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 0x2bU)) 
                                                                         << 0x15U)) 
                                                                     | ((0x100000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 0x23U)) 
                                                                            << 0x14U)) 
                                                                        | (0xfffffU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 0x16U))))))) 
                                                    << 0x16U) 
                                                   | (QData)((IData)(
                                                                     ((0x200000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 0xeU)) 
                                                                          << 0x15U)) 
                                                                      | ((0x1f0000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 0x10U)) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 8U)) 
                                                                                << 0xfU)) 
                                                                            | ((0x7e00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                               | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 1U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0857_) 
                                                                                << 1U))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0x3fffffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___1968_ 
                                                                                >> 0xeU))))) 
                                                    << 0x1bU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0142_) 
                                                                       << 0x1aU) 
                                                                      | ((0x3c00000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___1968_ 
                                                                                >> 9U)) 
                                                                             << 0x16U)) 
                                                                         | ((0x200000U 
                                                                             & (vlSelf->top__DOT___1964_[2U] 
                                                                                << 0x12U)) 
                                                                            | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                               | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___1888_) 
                                                                                << 6U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | ((0x1f800U 
                                                                                & ((IData)(vlSelf->top__DOT___1888_) 
                                                                                << 6U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___1964_[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0174_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0609_)))))))))))))))))))) 
                                                 >> 0x22U))));
    vlSelf->top__DOT___0107_ = (1U & (IData)((0xffffffffULL 
                                              & (((((QData)((IData)(
                                                                    ((0x7e00000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 0x2bU)) 
                                                                         << 0x15U)) 
                                                                     | ((0x100000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 0x23U)) 
                                                                            << 0x14U)) 
                                                                        | (0xfffffU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 0x16U))))))) 
                                                    << 0x16U) 
                                                   | (QData)((IData)(
                                                                     ((0x200000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 0xeU)) 
                                                                          << 0x15U)) 
                                                                      | ((0x1f0000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 0x10U)) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 8U)) 
                                                                                << 0xfU)) 
                                                                            | ((0x7e00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                               | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3809_ 
                                                                                >> 1U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1979_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0857_) 
                                                                                << 1U))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0x3fffffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___1968_ 
                                                                                >> 0xeU))))) 
                                                    << 0x1bU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0142_) 
                                                                       << 0x1aU) 
                                                                      | ((0x3c00000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___1968_ 
                                                                                >> 9U)) 
                                                                             << 0x16U)) 
                                                                         | ((0x200000U 
                                                                             & (vlSelf->top__DOT___1964_[2U] 
                                                                                << 0x12U)) 
                                                                            | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                               | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___1888_) 
                                                                                << 6U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | ((0x1f800U 
                                                                                & ((IData)(vlSelf->top__DOT___1888_) 
                                                                                << 6U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___1964_[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0174_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0609_)))))))))))))))))))) 
                                                 >> 0x11U))));
    vlSelf->top__DOT___1229_ = (1U & (~ (((IData)(vlSelf->top__DOT___0400_) 
                                          & (IData)(vlSelf->top__DOT___0689_)) 
                                         | (IData)(vlSelf->top__DOT___1230_))));
    vlSelf->top__DOT___0105_ = ((IData)(vlSelf->top__DOT___0107_) 
                                & (~ (IData)(vlSelf->top__DOT___0106_)));
    vlSelf->top__DOT___2243_ = ((0x1e00U & ((vlSelf->top__DOT___3811_[1U] 
                                             << 0xaU) 
                                            | (0x200U 
                                               & (vlSelf->top__DOT___3811_[0U] 
                                                  >> 0x16U)))) 
                                | (((IData)(vlSelf->top__DOT___0276_) 
                                    << 7U) | (((IData)(vlSelf->top__DOT___0116_) 
                                               << 6U) 
                                              | (((IData)(vlSelf->top__DOT___0127_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___1046_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___0626_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___1229_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0868_))))))));
    vlSelf->top__DOT___0794_ = (1U & (~ (((IData)(vlSelf->top__DOT___0105_) 
                                          & (IData)(vlSelf->top__DOT___1336_)) 
                                         | ((IData)(vlSelf->top__DOT___0997_) 
                                            & (IData)(vlSelf->top__DOT___3656_)))));
    vlSelf->top__DOT___0450_ = ((IData)(vlSelf->top__DOT___0105_) 
                                ^ (IData)(vlSelf->top__DOT___0128_));
    vlSelf->top__DOT___0185_ = ((IData)(vlSelf->top__DOT___0105_) 
                                | (IData)(vlSelf->top__DOT___0274_));
    vlSelf->top__DOT___0941_ = (1U & (~ (((IData)(vlSelf->top__DOT___0794_) 
                                          & (IData)(vlSelf->top__DOT___0217_)) 
                                         | ((vlSelf->top__DOT___3720_[2U] 
                                             >> 0xbU) 
                                            & (IData)(vlSelf->top__DOT___0565_)))));
    vlSelf->top__DOT___1434_ = (1U & (~ (((IData)(vlSelf->top__DOT___0287_) 
                                          & (IData)(vlSelf->top__DOT___0071_)) 
                                         | ((IData)(vlSelf->top__DOT___1053_) 
                                            & (IData)(vlSelf->top__DOT___0450_)))));
    vlSelf->top__DOT___0446_ = ((IData)(vlSelf->top__DOT___0450_) 
                                & (IData)(vlSelf->top__DOT___0829_));
    vlSelf->top__DOT___0894_ = (1U & (~ ((((IData)(vlSelf->top__DOT___3749_) 
                                           >> 3U) & (IData)(
                                                            (vlSelf->top__DOT___3628_ 
                                                             >> 0xdU))) 
                                         | ((IData)(vlSelf->top__DOT___0065_) 
                                            & (IData)(vlSelf->top__DOT___0450_)))));
    vlSelf->top__DOT___0449_ = (1U & ((vlSelf->top__DOT___3651_[0U] 
                                       >> 0x13U) & 
                                      (~ (IData)(vlSelf->top__DOT___0450_))));
    vlSelf->top__DOT___1088_ = (1U & (~ (((IData)(vlSelf->top__DOT___0941_) 
                                          & ((IData)(vlSelf->top__DOT___3623_) 
                                             >> 2U)) 
                                         | (IData)(vlSelf->top__DOT___0205_))));
    vlSelf->top__DOT___1933_ = ((0x3ffcffffU & vlSelf->top__DOT___1933_) 
                                | (((IData)(vlSelf->top__DOT___1258_) 
                                    << 0x11U) | ((IData)(vlSelf->top__DOT___0894_) 
                                                 << 0x10U)));
    vlSelf->top__DOT___1931_ = ((0xcU & (IData)(vlSelf->top__DOT___1931_)) 
                                | (((IData)(vlSelf->top__DOT___1720_) 
                                    << 1U) | (IData)(vlSelf->top__DOT___0449_)));
    vlSelf->top__DOT___0546_ = (1U & ((IData)(vlSelf->top__DOT___0449_) 
                                      ^ ((IData)(vlSelf->top__DOT___3785_) 
                                         >> 6U)));
    vlSelf->top__DOT___1935_[0U] = (0x80000000U | (0x7fffffffU 
                                                   & vlSelf->top__DOT___1935_[0U]));
    vlSelf->top__DOT___1935_[1U] = ((0xffffffc0U & 
                                     vlSelf->top__DOT___1935_[1U]) 
                                    | (0x7fffffffU 
                                       & ((0x7fffffe0U 
                                           & ((IData)(vlSelf->top__DOT___0546_) 
                                              << 5U)) 
                                          | ((0x10U 
                                              & ((IData)(vlSelf->top__DOT___1916_) 
                                                 >> 2U)) 
                                             | ((0x7ffffff8U 
                                                 & ((IData)(vlSelf->top__DOT___1656_) 
                                                    << 3U)) 
                                                | ((0x7ffffffeU 
                                                    & ((IData)(vlSelf->top__DOT___0198_) 
                                                       << 1U)) 
                                                   | (0x7fffffffU 
                                                      & (IData)(vlSelf->top__DOT___0302_))))))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__203(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__203\n"); );
    // Body
    vlSelf->top__DOT___0764_ = ((IData)(vlSelf->top__DOT___1696_) 
                                | (IData)(vlSelf->top__DOT___0748_));
    vlSelf->top__DOT___0763_ = (((IData)(vlSelf->top__DOT___3765_) 
                                 >> 9U) & (IData)(vlSelf->top__DOT___0764_));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__204(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__204\n"); );
    // Body
    vlSelf->top__DOT___1915_ = ((0x7fffffffe007ULL 
                                 & vlSelf->top__DOT___1915_) 
                                | ((QData)((IData)(
                                                   (0x200U 
                                                    | (((IData)(vlSelf->top__DOT___1329_) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->top__DOT___3758_) 
                                                           << 3U) 
                                                          | ((4U 
                                                              & ((~ (IData)(vlSelf->top__DOT___0185_)) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelf->top__DOT___0385_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___1165_)))))))) 
                                   << 3U));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__207(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__207\n"); );
    // Body
    vlSelf->top__DOT___1932_ = ((0x1ffcU & (IData)(vlSelf->top__DOT___1932_)) 
                                | (((IData)(vlSelf->top__DOT___0430_) 
                                    << 1U) | (IData)(vlSelf->top__DOT___0449_)));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__210(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__210\n"); );
    // Body
    vlSelf->top__DOT___1492_ = (1U & (((((IData)(vlSelf->top__DOT___0764_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0215_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0279_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0071_)))) 
                                       + (((IData)(vlSelf->top__DOT___0301_) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT___0144_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0261_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___1421_))))) 
                                      >> 3U));
    vlSelf->top__DOT___1491_ = (1U & (~ (((IData)(vlSelf->top__DOT___1493_) 
                                          & (IData)(vlSelf->top__DOT___1492_)) 
                                         | ((IData)(vlSelf->top__DOT___0656_) 
                                            & (IData)(vlSelf->top__DOT___0069_)))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__211(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__211\n"); );
    // Body
    vlSelf->top__DOT___1947_ = (((IData)(vlSelf->top__DOT___0764_) 
                                 << 0xdU) | (((IData)(vlSelf->top__DOT___0206_) 
                                              << 0xcU) 
                                             | ((0xfc0U 
                                                 & ((((0x200U 
                                                       & (vlSelf->top__DOT___2107_ 
                                                          >> 4U)) 
                                                      | ((0x180U 
                                                          & ((IData)(vlSelf->top__DOT___2092_) 
                                                             >> 6U)) 
                                                         | ((((IData)(vlSelf->top__DOT___0134_) 
                                                              | (IData)(vlSelf->top__DOT___1421_)) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->top__DOT___1513_) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->top__DOT___1454_) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->top__DOT___1868_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___0433_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___1733_)))))))) 
                                                     + 
                                                     ((0x200U 
                                                       & ((IData)(vlSelf->top__DOT___2116_) 
                                                          << 1U)) 
                                                      | (((IData)(vlSelf->top__DOT___1499_) 
                                                          << 8U) 
                                                         | ((0xc0U 
                                                             & ((IData)(vlSelf->top__DOT___2116_) 
                                                                << 1U)) 
                                                            | (((IData)(vlSelf->top__DOT___1448_) 
                                                                << 5U) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSelf->top__DOT___2116_) 
                                                                      << 1U)) 
                                                                  | (((IData)(vlSelf->top__DOT___1523_) 
                                                                      << 3U) 
                                                                     | ((6U 
                                                                         & ((IData)(vlSelf->top__DOT___2116_) 
                                                                            << 1U)) 
                                                                        | (IData)(vlSelf->top__DOT___0069_))))))))) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->top__DOT___1267_) 
                                                    << 5U) 
                                                   | ((0x18U 
                                                       & (((((IData)(vlSelf->top__DOT___0433_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___1733_)) 
                                                           + 
                                                           ((6U 
                                                             & ((IData)(vlSelf->top__DOT___2116_) 
                                                                << 1U)) 
                                                            | (IData)(vlSelf->top__DOT___0069_))) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelf->top__DOT___1646_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___0522_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0149_))))))));
    vlSelf->out_data[0x3eU] = ((0xffffc000U & vlSelf->out_data[0x3eU]) 
                               | (0x3fffU & ((((IData)(vlSelf->top__DOT___0764_) 
                                               << 0xdU) 
                                              | (((IData)(vlSelf->top__DOT___0206_) 
                                                  << 0xcU) 
                                                 | ((0xfc0U 
                                                     & (IData)(vlSelf->top__DOT___1947_)) 
                                                    | (((IData)(vlSelf->top__DOT___1267_) 
                                                        << 5U) 
                                                       | ((0x18U 
                                                           & (IData)(vlSelf->top__DOT___1947_)) 
                                                          | (((IData)(vlSelf->top__DOT___1646_) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->top__DOT___0522_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___0149_)))))))) 
                                             + ((0x3ffeU 
                                                 & (IData)(vlSelf->top__DOT___1946_)) 
                                                | (IData)(vlSelf->top__DOT___1462_)))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__213(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__213\n"); );
    // Body
    vlSelf->top__DOT___0244_ = (1U & ((((0x78000U & 
                                         ((IData)((vlSelf->top__DOT___1984_ 
                                                   >> 0xfU)) 
                                          << 0xfU)) 
                                        | (((IData)(vlSelf->top__DOT___0243_) 
                                            << 0xeU) 
                                           | (((IData)(vlSelf->top__DOT___0739_) 
                                               << 0xdU) 
                                              | ((0x1000U 
                                                  & ((IData)(vlSelf->top__DOT___3647_) 
                                                     << 1U)) 
                                                 | ((0xf00U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___1893_ 
                                                                 >> 7U)) 
                                                        << 8U)) 
                                                    | ((0x80U 
                                                        & ((IData)(vlSelf->top__DOT___3647_) 
                                                           << 1U)) 
                                                       | ((0x60U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___1893_ 
                                                                       >> 4U)) 
                                                              << 5U)) 
                                                          | ((0x10U 
                                                              & ((IData)(vlSelf->top__DOT___3647_) 
                                                                 << 1U)) 
                                                             | ((8U 
                                                                 & ((IData)(vlSelf->top__DOT___3647_) 
                                                                    << 1U)) 
                                                                | ((4U 
                                                                    & ((IData)(vlSelf->top__DOT___3647_) 
                                                                       << 1U)) 
                                                                   | ((2U 
                                                                       & ((IData)(vlSelf->top__DOT___3647_) 
                                                                          << 1U)) 
                                                                      | (IData)(vlSelf->top__DOT___0253_)))))))))))) 
                                       + ((0x78000U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT___1969_ 
                                                       >> 0xeU)) 
                                              << 0xfU)) 
                                          | (((IData)(vlSelf->top__DOT___0594_) 
                                              << 0xeU) 
                                             | (((IData)(vlSelf->top__DOT___0095_) 
                                                 << 0xdU) 
                                                | ((0x1000U 
                                                    & ((~ (IData)(vlSelf->top__DOT___0162_)) 
                                                       << 0xcU)) 
                                                   | (((IData)(vlSelf->top__DOT___0587_) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->top__DOT___0174_) 
                                                          << 0xaU) 
                                                         | ((0x200U 
                                                             & ((~ (IData)(vlSelf->top__DOT___1206_)) 
                                                                << 9U)) 
                                                            | ((0x100U 
                                                                & ((IData)(vlSelf->top__DOT___3623_) 
                                                                   << 5U)) 
                                                               | ((0x80U 
                                                                   & ((IData)(vlSelf->top__DOT___3623_) 
                                                                      << 5U)) 
                                                                  | ((0x40U 
                                                                      & (IData)(vlSelf->top__DOT___1932_)) 
                                                                     | (((IData)(vlSelf->top__DOT___0595_) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->top__DOT___0226_) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->top__DOT___0098_) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->top__DOT___0127_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0154_)))))))))))))))) 
                                      >> 0x12U));
    vlSelf->top__DOT____VdfgTmp_hc3c49271__0 = ((0x200U 
                                                 & ((~ (IData)(vlSelf->top__DOT___1206_)) 
                                                    << 9U)) 
                                                | ((0x180U 
                                                    & ((IData)(vlSelf->top__DOT___3623_) 
                                                       << 5U)) 
                                                   | ((0x40U 
                                                       & (IData)(vlSelf->top__DOT___1932_)) 
                                                      | (((IData)(vlSelf->top__DOT___0595_) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->top__DOT___0226_) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT___0098_) 
                                                                << 2U) 
                                                               | (IData)(vlSelf->top__DOT___3659_)))))));
    vlSelf->top__DOT___0441_ = (1U & ((((0x1000U & 
                                         ((IData)(vlSelf->top__DOT___3647_) 
                                          << 1U)) | 
                                        ((0xf00U & 
                                          ((IData)(
                                                   (vlSelf->top__DOT___1893_ 
                                                    >> 7U)) 
                                           << 8U)) 
                                         | ((0x80U 
                                             & ((IData)(vlSelf->top__DOT___3647_) 
                                                << 1U)) 
                                            | ((0x60U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___1893_ 
                                                            >> 4U)) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->top__DOT___3647_) 
                                                      << 1U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->top__DOT___3647_) 
                                                         << 1U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->top__DOT___3647_) 
                                                            << 1U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->top__DOT___3647_) 
                                                               << 1U)) 
                                                           | (IData)(vlSelf->top__DOT___0253_))))))))) 
                                       + ((0x1000U 
                                           & ((~ (IData)(vlSelf->top__DOT___0162_)) 
                                              << 0xcU)) 
                                          | (((IData)(vlSelf->top__DOT___0587_) 
                                              << 0xbU) 
                                             | (((IData)(vlSelf->top__DOT___0174_) 
                                                 << 0xaU) 
                                                | ((0x200U 
                                                    & ((~ (IData)(vlSelf->top__DOT___1206_)) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSelf->top__DOT___3623_) 
                                                          << 5U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSelf->top__DOT___3623_) 
                                                             << 5U)) 
                                                         | ((0x40U 
                                                             & (IData)(vlSelf->top__DOT___1932_)) 
                                                            | (((IData)(vlSelf->top__DOT___0595_) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->top__DOT___0226_) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelf->top__DOT___0098_) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->top__DOT___0127_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___0154_))))))))))))) 
                                      >> 0xcU));
    vlSelf->top__DOT___0047_ = ((IData)(vlSelf->top__DOT___0182_) 
                                & (~ (IData)(vlSelf->top__DOT___0244_)));
    vlSelf->top__DOT____VdfgTmp_h1fddf90f__0 = (((IData)(vlSelf->top__DOT___0587_) 
                                                 << 0xbU) 
                                                | (((IData)(vlSelf->top__DOT___0174_) 
                                                    << 0xaU) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_hc3c49271__0)));
    vlSelf->top__DOT____VdfgTmp_h3b73dd25__0 = (((IData)(vlSelf->top__DOT___0594_) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                    << 0xdU) 
                                                   | ((0x1000U 
                                                       & ((~ (IData)(vlSelf->top__DOT___0162_)) 
                                                          << 0xcU)) 
                                                      | (IData)(vlSelf->top__DOT____VdfgTmp_h1fddf90f__0))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__220(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__220\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_22;
    VlWide<5>/*159:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<6>/*191:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_60;
    VlWide<6>/*191:0*/ __Vtemp_67;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & 
                                               (~ (IData)(vlSelf->top__DOT____VdfgTmp_ha7e79421__0))))) 
                              << 0x39U) | (((QData)((IData)(vlSelf->top__DOT___0868_)) 
                                            << 0x38U) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0977_)) 
                                               << 0x37U) 
                                              | (((QData)((IData)(vlSelf->top__DOT___1429_)) 
                                                  << 0x36U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0413_)) 
                                                     << 0x35U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT___3718_) 
                                                                            >> 6U)))) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1486_)) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___0334_)) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___0032_)) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0320_))))) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___0118_)) 
                                                                       << 0x2fU) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___1085_)) 
                                                                          << 0x2eU) 
                                                                         | (((QData)((IData)(vlSelf->top__DOT___0438_)) 
                                                                             << 0x2dU) 
                                                                            | (((QData)((IData)(vlSelf->top__DOT___0217_)) 
                                                                                << 0x2cU) 
                                                                               | (((QData)((IData)(vlSelf->top__DOT___1880_)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0442_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0325_)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1178_)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0015_)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1561_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0964_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1831_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1555_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1606_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                >> 3U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                >> 2U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x1eU)) 
                                                                                | ((0x3fffffc0U 
                                                                                & ((((0xe000000U 
                                                                                & ((IData)(vlSelf->top__DOT___2066_) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1937_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___1736_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1480_) 
                                                                                << 0x15U) 
                                                                                | ((0x180000U 
                                                                                & ((IData)(vlSelf->top__DOT___2066_) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___1088_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1309_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___3697_)))))))))))))))))))) 
                                                                                + 
                                                                                ((0xfc00000U 
                                                                                & (vlSelf->top__DOT___2058_[2U] 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0702_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3650_ 
                                                                                >> 0xaU)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0640_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0454_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0015_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0162_)) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1095_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_ha7e79421__0)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1089_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0675_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1421_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0707_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3726_) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0259_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1424_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___3669_) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3669_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0018_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0675_)))))))))))))))))))))) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0382_) 
                                                                                << 5U) 
                                                                                | ((0x1cU 
                                                                                & ((((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___3697_)))) 
                                                                                + 
                                                                                ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3669_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0018_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0675_)))) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0800_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1371_))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (((IData)(vlSelf->top__DOT___3795_) 
                      << 0x1aU) | (IData)(((((QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelf->top__DOT____VdfgTmp_ha7e79421__0))))) 
                                             << 0x39U) 
                                            | (((QData)((IData)(vlSelf->top__DOT___0868_)) 
                                                << 0x38U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0977_)) 
                                                   << 0x37U) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___1429_)) 
                                                      << 0x36U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0413_)) 
                                                         << 0x35U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->top__DOT___3718_) 
                                                                                >> 6U)))) 
                                                            << 0x34U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___1486_)) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___0334_)) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___0032_)) 
                                                                     << 0x31U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0320_))))) 
                                                                        << 0x30U) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___0118_)) 
                                                                           << 0x2fU) 
                                                                          | (((QData)((IData)(vlSelf->top__DOT___1085_)) 
                                                                              << 0x2eU) 
                                                                             | (((QData)((IData)(vlSelf->top__DOT___0438_)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0217_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1880_)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0442_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0325_)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1178_)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0015_)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1561_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0964_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1831_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1555_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1606_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                >> 3U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                >> 2U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x1eU)) 
                                                                                | ((0x3fffffc0U 
                                                                                & ((((0xe000000U 
                                                                                & ((IData)(vlSelf->top__DOT___2066_) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1937_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___1736_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1480_) 
                                                                                << 0x15U) 
                                                                                | ((0x180000U 
                                                                                & ((IData)(vlSelf->top__DOT___2066_) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___1088_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1309_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___3697_)))))))))))))))))))) 
                                                                                + 
                                                                                ((0xfc00000U 
                                                                                & (vlSelf->top__DOT___2058_[2U] 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0702_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3650_ 
                                                                                >> 0xaU)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0640_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0454_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0015_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0162_)) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1095_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_ha7e79421__0)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1089_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0675_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1421_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0707_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3726_) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0259_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1424_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___3669_) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3669_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0018_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0675_)))))))))))))))))))))) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0382_) 
                                                                                << 5U) 
                                                                                | ((0x1cU 
                                                                                & ((((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___3697_)))) 
                                                                                + 
                                                                                ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3669_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0018_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0675_)))) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0800_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1371_))))))))))))))))))))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_11[3U] = ((0x10000000U & (vlSelf->out_data[0x11U] 
                                      << 0x1cU)) | 
                      ((0x8000000U & ((IData)(vlSelf->top__DOT___3726_) 
                                      << 0x16U)) | 
                       ((0x4000000U & ((IData)(vlSelf->top__DOT___3726_) 
                                       << 0x16U)) | 
                        ((0x3800000U & ((IData)(vlSelf->top__DOT___3726_) 
                                        << 0x16U)) 
                         | ((0x400000U & ((IData)(vlSelf->top__DOT___3726_) 
                                          << 0x16U)) 
                            | (((IData)(vlSelf->top__DOT___0080_) 
                                << 0x15U) | ((0x1ffe00U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___3795_ 
                                                          >> 0x2fU)) 
                                                 << 9U)) 
                                             | ((0x100U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___3795_ 
                                                             >> 0x2eU)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3795_ 
                                                               >> 0x1eU)) 
                                                      >> 8U))))))))));
    __Vtemp_22[4U] = ((0x7800U & ((IData)((0x7fffffffULL 
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
                                               + (((QData)((IData)(
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
                                              >> 5U))) 
                                  << 0xbU)) | (((IData)(vlSelf->top__DOT___0124_) 
                                                << 0xaU) 
                                               | (((IData)(vlSelf->top__DOT___0929_) 
                                                   << 9U) 
                                                  | ((0x1c0U 
                                                      & (((((IData)(vlSelf->top__DOT___0152_) 
                                                            << 2U) 
                                                           | ((IData)(vlSelf->top__DOT___0320_) 
                                                              << 1U)) 
                                                          + 
                                                          (((IData)(vlSelf->top__DOT___0690_) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top__DOT___0154_))) 
                                                         << 6U)) 
                                                     | (((IData)(vlSelf->top__DOT___0505_) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->top__DOT___0423_) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->top__DOT___0087_) 
                                                               << 3U) 
                                                              | (IData)(vlSelf->top__DOT___3689_))))))));
    __Vtemp_24[4U] = ((0x3f0000U & ((IData)((0x3ffffffULL 
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
                                                >> 0xaU))) 
                                    << 0x10U)) | (((IData)(vlSelf->top__DOT___1042_) 
                                                   << 0xfU) 
                                                  | __Vtemp_22[4U]));
    __Vtemp_26[4U] = ((0x3f800000U & ((IData)((0x7ffffULL 
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
                                                  >> 0x11U))) 
                                      << 0x17U)) | 
                      (((IData)(vlSelf->top__DOT___1276_) 
                        << 0x16U) | __Vtemp_24[4U]));
    __Vtemp_28[4U] = (((IData)((0x7ffULL & (((((QData)((IData)(
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
                                             + (((QData)((IData)(
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
                                            >> 0x19U))) 
                       << 0x1fU) | (((IData)(vlSelf->top__DOT___1255_) 
                                     << 0x1eU) | __Vtemp_26[4U]));
    __Vtemp_28[5U] = (0x3ffU & ((IData)((0x7ffULL & 
                                         (((((QData)((IData)(
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
                                           + (((QData)((IData)(
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
                                          >> 0x19U))) 
                                >> 1U));
    vlSelf->top__DOT___1951_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___1951_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___1951_[2U] = (((IData)((vlSelf->top__DOT___3795_ 
                                              >> 0x1eU)) 
                                     << 0x18U) | ((0xfe0000U 
                                                   & ((IData)(vlSelf->top__DOT___1910_) 
                                                      << 0xeU)) 
                                                  | (0x1ffffU 
                                                     & ((IData)(vlSelf->top__DOT___3795_) 
                                                        >> 6U))));
    vlSelf->top__DOT___1951_[3U] = (((IData)(vlSelf->top__DOT___0235_) 
                                     << 0x1fU) | (((IData)(vlSelf->top__DOT___0917_) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->top__DOT___0917_) 
                                                      << 0x1dU) 
                                                     | __Vtemp_11[3U])));
    vlSelf->top__DOT___1951_[4U] = __Vtemp_28[4U];
    vlSelf->top__DOT___1951_[5U] = (0x800U | (((IData)(
                                                       (vlSelf->top__DOT___1897_ 
                                                        >> 0x15U)) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->top__DOT___0037_) 
                                                  << 0x1cU) 
                                                 | ((0xffff000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___1897_ 
                                                                 >> 4U)) 
                                                        << 0xcU)) 
                                                    | (((IData)(vlSelf->top__DOT___0625_) 
                                                        << 0xaU) 
                                                       | __Vtemp_28[5U])))));
    vlSelf->top__DOT___1951_[6U] = ((0xfffff8U & ((IData)(
                                                          (vlSelf->top__DOT___1897_ 
                                                           >> 0x1bU)) 
                                                  << 3U)) 
                                    | (((IData)(vlSelf->top__DOT___1260_) 
                                        << 2U) | (3U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___1897_ 
                                                              >> 0x15U)) 
                                                     >> 3U))));
    vlSelf->top__DOT____VdfgTmp_he0fce8ea__0 = ((0x400U 
                                                 & (vlSelf->top__DOT___1951_[3U] 
                                                    >> 0x11U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSelf->top__DOT___3726_) 
                                                       << 5U)) 
                                                   | ((0x1c0U 
                                                       & (vlSelf->top__DOT___1951_[3U] 
                                                          >> 0x11U)) 
                                                      | ((0x20U 
                                                          & ((IData)(vlSelf->top__DOT___3726_) 
                                                             << 5U)) 
                                                         | (((IData)(vlSelf->top__DOT___0267_) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->top__DOT___0899_) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->top__DOT___0279_) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->top__DOT___0034_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___0988_)))))))));
    vlSelf->top__DOT___1164_ = (1U & (((((IData)(vlSelf->top__DOT___1360_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0135_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0146_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0144_)))) 
                                       + (((IData)(vlSelf->top__DOT___1276_) 
                                           << 4U) | 
                                          (0xfU & (
                                                   vlSelf->top__DOT___1951_[4U] 
                                                   >> 0x12U)))) 
                                      >> 4U));
    vlSelf->top__DOT___1296_ = (1U & (((((IData)(vlSelf->top__DOT___0146_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0144_)) 
                                       + ((vlSelf->top__DOT___1951_[4U] 
                                           << 0xeU) 
                                          | (vlSelf->top__DOT___1951_[4U] 
                                             >> 0x12U))) 
                                      >> 1U));
    vlSelf->top__DOT___1981_ = (((IData)(vlSelf->top__DOT___0226_) 
                                 << 0x16U) | (((IData)(vlSelf->top__DOT___0617_) 
                                               << 0x15U) 
                                              | (((IData)(vlSelf->top__DOT___0625_) 
                                                  << 0x14U) 
                                                 | (((IData)(vlSelf->top__DOT___0151_) 
                                                     << 0x12U) 
                                                    | (((IData)(vlSelf->top__DOT___0043_) 
                                                        << 0x11U) 
                                                       | (((IData)(vlSelf->top__DOT___0469_) 
                                                           << 0x10U) 
                                                          | ((0x8000U 
                                                              & (vlSelf->top__DOT___1951_[1U] 
                                                                 << 0xeU)) 
                                                             | ((0x4000U 
                                                                 & ((IData)(vlSelf->top__DOT___3642_) 
                                                                    << 0xcU)) 
                                                                | ((0x2000U 
                                                                    & (vlSelf->top__DOT___1951_[0U] 
                                                                       >> 0x12U)) 
                                                                   | ((0x1000U 
                                                                       & ((IData)(vlSelf->top__DOT___3642_) 
                                                                          << 0xcU)) 
                                                                      | ((0xe00U 
                                                                          & ((IData)(vlSelf->top__DOT___3775_) 
                                                                             << 1U)) 
                                                                         | ((0x100U 
                                                                             & ((IData)(vlSelf->top__DOT___3775_) 
                                                                                << 1U)) 
                                                                            | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3775_) 
                                                                                << 1U)) 
                                                                               | ((0x7cU 
                                                                                & ((IData)(vlSelf->top__DOT___3775_) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___3775_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0154_))))))))))))))));
    vlSelf->top__DOT___2050_ = ((0x3e0U & (((0x200U 
                                             & (IData)(vlSelf->top__DOT___2051_)) 
                                            | (((IData)(vlSelf->top__DOT___1056_) 
                                                << 8U) 
                                               | ((0x80U 
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
                                                                 | (IData)(vlSelf->top__DOT___0144_))))))))) 
                                           + ((0x3e0U 
                                               & (vlSelf->top__DOT___1951_[4U] 
                                                  >> 0x12U)) 
                                              | (((IData)(vlSelf->top__DOT___1276_) 
                                                  << 4U) 
                                                 | (0xfU 
                                                    & (vlSelf->top__DOT___1951_[4U] 
                                                       >> 0x12U)))))) 
                                | (((IData)(vlSelf->top__DOT___1164_) 
                                    << 4U) | ((0xcU 
                                               & ((((IData)(vlSelf->top__DOT___1360_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0135_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0146_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0144_)))) 
                                                  + 
                                                  ((vlSelf->top__DOT___1951_[4U] 
                                                    << 0xeU) 
                                                   | (vlSelf->top__DOT___1951_[4U] 
                                                      >> 0x12U)))) 
                                              | (((IData)(vlSelf->top__DOT___1296_) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->top__DOT___0144_) 
                                                       + 
                                                       (vlSelf->top__DOT___1951_[4U] 
                                                        >> 0x12U)))))));
    vlSelf->top__DOT___1715_ = (1U & ((((4U & (vlSelf->top__DOT___1995_ 
                                               << 1U)) 
                                        | (((IData)(vlSelf->top__DOT___0057_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0175_))) 
                                       + ((6U & (vlSelf->top__DOT___1981_ 
                                                 >> 1U)) 
                                          | (1U & (IData)(vlSelf->top__DOT___3775_)))) 
                                      >> 2U));
    vlSelf->top__DOT___0236_ = (1U & ((((0x1f80U & 
                                         (vlSelf->top__DOT___1995_ 
                                          << 1U)) | 
                                        (((IData)(vlSelf->top__DOT___1242_) 
                                          << 6U) | 
                                         ((0x3cU & 
                                           (vlSelf->top__DOT___1995_ 
                                            << 1U)) 
                                          | (((IData)(vlSelf->top__DOT___0057_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___0175_))))) 
                                       + (((IData)(vlSelf->top__DOT___0166_) 
                                           << 0xcU) 
                                          | ((0x700U 
                                              & (vlSelf->top__DOT___1981_ 
                                                 >> 1U)) 
                                             | ((0x80U 
                                                 & (IData)(vlSelf->top__DOT___3775_)) 
                                                | ((0x40U 
                                                    & (IData)(vlSelf->top__DOT___3775_)) 
                                                   | ((0x3eU 
                                                       & (vlSelf->top__DOT___1981_ 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (IData)(vlSelf->top__DOT___3775_)))))))) 
                                      >> 0xcU));
    vlSelf->top__DOT___1367_ = (1U & (((((IData)(vlSelf->top__DOT___1287_) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->top__DOT___0174_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___0343_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0383_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___0265_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0453_)))))) 
                                       + ((0x3cU & vlSelf->top__DOT___1981_) 
                                          | ((2U & 
                                              ((IData)(vlSelf->top__DOT___3775_) 
                                               << 1U)) 
                                             | (IData)(vlSelf->top__DOT___0154_)))) 
                                      >> 5U));
    vlSelf->top__DOT___1681_ = (1U & (((((IData)(vlSelf->top__DOT___0343_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0383_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0265_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0453_)))) 
                                       + ((0xcU & vlSelf->top__DOT___1981_) 
                                          | ((2U & 
                                              ((IData)(vlSelf->top__DOT___3775_) 
                                               << 1U)) 
                                             | (IData)(vlSelf->top__DOT___0154_)))) 
                                      >> 3U));
    vlSelf->top__DOT___0509_ = (1U & ((((0x3f80U & 
                                         (vlSelf->top__DOT___1995_ 
                                          << 1U)) | 
                                        (((IData)(vlSelf->top__DOT___1242_) 
                                          << 6U) | 
                                         ((0x3cU & 
                                           (vlSelf->top__DOT___1995_ 
                                            << 1U)) 
                                          | (((IData)(vlSelf->top__DOT___0057_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___0175_))))) 
                                       + (((IData)(vlSelf->top__DOT___0071_) 
                                           << 0xdU) 
                                          | (((IData)(vlSelf->top__DOT___0166_) 
                                              << 0xcU) 
                                             | ((0x700U 
                                                 & (vlSelf->top__DOT___1981_ 
                                                    >> 1U)) 
                                                | ((0x80U 
                                                    & (IData)(vlSelf->top__DOT___3775_)) 
                                                   | ((0x40U 
                                                       & (IData)(vlSelf->top__DOT___3775_)) 
                                                      | ((0x3eU 
                                                          & (vlSelf->top__DOT___1981_ 
                                                             >> 1U)) 
                                                         | (1U 
                                                            & (IData)(vlSelf->top__DOT___3775_))))))))) 
                                      >> 0xdU));
    vlSelf->top__DOT___1838_ = (1U & (((((IData)(vlSelf->top__DOT___0295_) 
                                         << 6U) | (
                                                   ((IData)(vlSelf->top__DOT___1208_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___0779_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___0764_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___0215_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___0279_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0071_))))))) 
                                       + (((IData)(vlSelf->top__DOT___1164_) 
                                           << 6U) | 
                                          ((0x30U & 
                                            ((IData)(vlSelf->top__DOT___2050_) 
                                             << 2U)) 
                                           | (((IData)(vlSelf->top__DOT___0301_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0144_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0261_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___1421_))))))) 
                                      >> 6U));
    vlSelf->top__DOT___1425_ = ((IData)(vlSelf->top__DOT___0203_) 
                                | (IData)(vlSelf->top__DOT___1681_));
    vlSelf->top__DOT___1980_ = ((0xffffc0U & ((((IData)(vlSelf->top__DOT___1381_) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT___1520_) 
                                                   << 0x16U) 
                                                  | ((0x3f0000U 
                                                      & vlSelf->top__DOT___1982_) 
                                                     | (((IData)(vlSelf->top__DOT___1534_) 
                                                         << 0xfU) 
                                                        | ((0x7fc0U 
                                                            & vlSelf->top__DOT___1982_) 
                                                           | (((IData)(vlSelf->top__DOT___1287_) 
                                                               << 5U) 
                                                              | (((IData)(vlSelf->top__DOT___0174_) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSelf->top__DOT___0343_) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSelf->top__DOT___0383_) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelf->top__DOT___0265_) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->top__DOT___0453_))))))))))) 
                                              + (((IData)(vlSelf->top__DOT___0226_) 
                                                  << 0x16U) 
                                                 | (((IData)(vlSelf->top__DOT___0617_) 
                                                     << 0x15U) 
                                                    | (((IData)(vlSelf->top__DOT___0625_) 
                                                        << 0x14U) 
                                                       | (((IData)(vlSelf->top__DOT___0151_) 
                                                           << 0x12U) 
                                                          | (((IData)(vlSelf->top__DOT___0043_) 
                                                              << 0x11U) 
                                                             | (((IData)(vlSelf->top__DOT___0469_) 
                                                                 << 0x10U) 
                                                                | ((0x8000U 
                                                                    & (vlSelf->top__DOT___1951_[1U] 
                                                                       << 0xeU)) 
                                                                   | ((0x4000U 
                                                                       & ((IData)(vlSelf->top__DOT___3642_) 
                                                                          << 0xcU)) 
                                                                      | ((0x2000U 
                                                                          & (vlSelf->top__DOT___1951_[0U] 
                                                                             >> 0x12U)) 
                                                                         | ((0x1000U 
                                                                             & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0xcU)) 
                                                                            | ((0xe00U 
                                                                                & vlSelf->top__DOT___1981_) 
                                                                               | ((0x100U 
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
                                                                                | (IData)(vlSelf->top__DOT___0154_)))))))))))))))))) 
                                | (((IData)(vlSelf->top__DOT___1367_) 
                                    << 5U) | ((0x10U 
                                               & ((((IData)(vlSelf->top__DOT___0174_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___0343_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0383_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___0265_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0453_))))) 
                                                  + 
                                                  ((0x1cU 
                                                    & vlSelf->top__DOT___1981_) 
                                                   | ((2U 
                                                       & ((IData)(vlSelf->top__DOT___3775_) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->top__DOT___0154_))))) 
                                              | (((IData)(vlSelf->top__DOT___1681_) 
                                                  << 3U) 
                                                 | (7U 
                                                    & ((((IData)(vlSelf->top__DOT___0383_) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->top__DOT___0265_) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top__DOT___0453_))) 
                                                       + 
                                                       ((4U 
                                                         & vlSelf->top__DOT___1981_) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->top__DOT___3775_) 
                                                               << 1U)) 
                                                           | (IData)(vlSelf->top__DOT___0154_)))))))));
    __Vtemp_36[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1634_)) 
                               << 0x36U) | (((QData)((IData)(vlSelf->top__DOT___0166_)) 
                                             << 0x35U) 
                                            | (((QData)((IData)(vlSelf->top__DOT___0752_)) 
                                                << 0x34U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___1655_)) 
                                                   << 0x33U) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0198_)) 
                                                      << 0x32U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0477_)) 
                                                         << 0x31U) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___0438_)) 
                                                            << 0x30U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___0204_)) 
                                                               << 0x2fU) 
                                                              | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 0xeU)))) 
                                                                  << 0x28U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 0xdU)))) 
                                                                     << 0x27U) 
                                                                    | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 8U)))) 
                                                                        << 0x22U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 7U)))) 
                                                                           << 0x21U) 
                                                                          | (((QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 1U)))) 
                                                                              << 0x1bU) 
                                                                             | (QData)((IData)(
                                                                                ((0x4000000U 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                << 0x1aU)) 
                                                                                | ((0x3ffff00U 
                                                                                & (vlSelf->top__DOT___1980_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1367_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1980_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1681_) 
                                                                                << 5U) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___1980_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0914_))))))))))))))))))))))));
    __Vtemp_36[1U] = (((IData)((vlSelf->top__DOT___1895_ 
                                >> 3U)) << 0x17U) | (IData)(
                                                            ((((QData)((IData)(vlSelf->top__DOT___1634_)) 
                                                               << 0x36U) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___0166_)) 
                                                                  << 0x35U) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___0752_)) 
                                                                     << 0x34U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___1655_)) 
                                                                        << 0x33U) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___0198_)) 
                                                                           << 0x32U) 
                                                                          | (((QData)((IData)(vlSelf->top__DOT___0477_)) 
                                                                              << 0x31U) 
                                                                             | (((QData)((IData)(vlSelf->top__DOT___0438_)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0204_)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 0xeU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 0xdU)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 8U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 7U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 1U)))) 
                                                                                << 0x1bU) 
                                                                                | (QData)((IData)(
                                                                                ((0x4000000U 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                << 0x1aU)) 
                                                                                | ((0x3ffff00U 
                                                                                & (vlSelf->top__DOT___1980_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1367_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1980_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1681_) 
                                                                                << 5U) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___1980_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0914_))))))))))))))))))))))) 
                                                             >> 0x20U)));
    __Vtemp_42[2U] = ((0x2000000U & ((IData)((vlSelf->top__DOT___3740_ 
                                              >> 0x22U)) 
                                     << 0x19U)) | (
                                                   (0x1000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3740_ 
                                                                >> 0x21U)) 
                                                       << 0x18U)) 
                                                   | ((0xffc000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___1895_ 
                                                                   >> 0x1aU)) 
                                                          << 0xeU)) 
                                                      | ((0x2000U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___3740_ 
                                                                      >> 0x16U)) 
                                                             << 0xdU)) 
                                                         | ((0x1f00U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___1895_ 
                                                                         >> 0x14U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3740_ 
                                                                            >> 0x10U)) 
                                                                   << 7U)) 
                                                               | (0x7fU 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___1895_ 
                                                                              >> 3U)) 
                                                                     >> 9U))))))));
    __Vtemp_60[3U] = ((0x100000U & ((IData)((vlSelf->top__DOT___3655_ 
                                             >> 0xaU)) 
                                    << 0x14U)) | ((0xf8000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3655_ 
                                                               >> 5U)) 
                                                      << 0xfU)) 
                                                  | (((IData)(vlSelf->top__DOT___1368_) 
                                                      << 0xeU) 
                                                     | ((0x1000U 
                                                         & (vlSelf->top__DOT___1951_[3U] 
                                                            >> 0xfU)) 
                                                        | ((0x800U 
                                                            & ((IData)(vlSelf->top__DOT___3726_) 
                                                               << 7U)) 
                                                           | ((0x700U 
                                                               & (vlSelf->top__DOT___1951_[3U] 
                                                                  >> 0xfU)) 
                                                              | ((0x80U 
                                                                  & ((IData)(vlSelf->top__DOT___3726_) 
                                                                     << 7U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0379_) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->top__DOT___1395_) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->top__DOT___1380_) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->top__DOT___0603_) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0626_)))))))))))));
    __Vtemp_67[4U] = ((0x80000000U & ((IData)(vlSelf->top__DOT___2045_) 
                                      << 0x1aU)) | 
                      ((0x7fff8000U & ((IData)((vlSelf->top__DOT___2012_ 
                                                >> 0x1cU)) 
                                       << 0xfU)) | 
                       ((0x4000U & ((IData)((vlSelf->top__DOT___3655_ 
                                             >> 0x24U)) 
                                    << 0xeU)) | ((0x3e00U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___2012_ 
                                                              >> 0x16U)) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3655_ 
                                                                 >> 0x1eU)) 
                                                        << 8U)) 
                                                    | ((0x80U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___3655_ 
                                                                    >> 0x1dU)) 
                                                           << 7U)) 
                                                       | (0x7fU 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___2012_ 
                                                                      >> 2U)) 
                                                             >> 0xbU))))))));
    vlSelf->top__DOT___2101_[0U] = __Vtemp_36[0U];
    vlSelf->top__DOT___2101_[1U] = __Vtemp_36[1U];
    vlSelf->top__DOT___2101_[2U] = (0x40000000U | (
                                                   ((IData)(vlSelf->top__DOT___0683_) 
                                                    << 0x1fU) 
                                                   | ((0x3c000000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___3740_ 
                                                                   >> 0x23U)) 
                                                          << 0x1aU)) 
                                                      | __Vtemp_42[2U])));
    vlSelf->top__DOT___2101_[3U] = (((IData)((vlSelf->top__DOT___2012_ 
                                              >> 2U)) 
                                     << 0x15U) | __Vtemp_60[3U]);
    vlSelf->top__DOT___2101_[4U] = __Vtemp_67[4U];
    vlSelf->top__DOT___2101_[5U] = ((0x38U & ((IData)(
                                                      (vlSelf->top__DOT___3655_ 
                                                       >> 0x39U)) 
                                              << 3U)) 
                                    | (7U & ((IData)(vlSelf->top__DOT___2045_) 
                                             >> 6U)));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__224(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__224\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & (IData)(
                                                            (vlSelf->top__DOT___3747_ 
                                                             >> 0x12U))))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT___3747_ 
                                                                        >> 0x11U))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0x7fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3747_ 
                                                                           >> 0xaU))))) 
                                               << 0x37U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___3747_ 
                                                                              >> 9U))))) 
                                                  << 0x36U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 8U))))) 
                                                     << 0x35U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0206_)) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 6U))))) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U))))) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 2U))))) 
                                                                 << 0x2fU) 
                                                                | (((QData)((IData)(
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU))))) 
                                                                    << 0x26U) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___1193_)) 
                                                                       << 0x25U) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___1553_)) 
                                                                          << 0x24U) 
                                                                         | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU))))) 
                                                                             << 0x22U) 
                                                                            | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (0xffffULL 
                                                                                & (((((QData)((IData)(vlSelf->top__DOT___0219_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1677_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0409_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1804_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___1386_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & vlSelf->top__DOT___2002_) 
                                                                                | (((IData)(vlSelf->top__DOT___1381_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1520_) 
                                                                                << 0x18U) 
                                                                                | ((0xfc0000U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1534_) 
                                                                                << 0x11U) 
                                                                                | ((0x1ff00U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1287_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & vlSelf->top__DOT___2002_)))))))))))))) 
                                                                                << 0xaU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 1U)))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xff000000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x7e0000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0xffe0U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (IData)(vlSelf->top__DOT___1309_)))))))))))) 
                                                                                << 0xdU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0272_)))))))))))) 
                                                                                >> 0x1dU)))))) 
                                                                                << 0x1fU) 
                                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1788_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3f800000U 
                                                                                & ((IData)(
                                                                                (0xffffffULL 
                                                                                & (((((QData)((IData)(vlSelf->top__DOT___0219_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1677_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0409_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1804_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___1386_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & vlSelf->top__DOT___2002_) 
                                                                                | (((IData)(vlSelf->top__DOT___1381_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1520_) 
                                                                                << 0x18U) 
                                                                                | ((0xfc0000U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1534_) 
                                                                                << 0x11U) 
                                                                                | ((0x1ff00U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1287_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & vlSelf->top__DOT___2002_)))))))))))))) 
                                                                                << 0xaU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 1U)))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xff000000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x7e0000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0xffe0U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (IData)(vlSelf->top__DOT___1309_)))))))))))) 
                                                                                << 0xdU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0272_)))))))))))) 
                                                                                >> 0x15U))) 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0514_) 
                                                                                << 0x16U) 
                                                                                | ((0x380000U 
                                                                                & ((IData)(
                                                                                (0xfffffffULL 
                                                                                & (((((QData)((IData)(vlSelf->top__DOT___0219_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1677_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0409_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1804_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___1386_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & vlSelf->top__DOT___2002_) 
                                                                                | (((IData)(vlSelf->top__DOT___1381_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1520_) 
                                                                                << 0x18U) 
                                                                                | ((0xfc0000U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1534_) 
                                                                                << 0x11U) 
                                                                                | ((0x1ff00U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1287_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & vlSelf->top__DOT___2002_)))))))))))))) 
                                                                                << 0xaU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 1U)))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xff000000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x7e0000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0xffe0U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (IData)(vlSelf->top__DOT___1309_)))))))))))) 
                                                                                << 0xdU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0272_)))))))))))) 
                                                                                >> 0x11U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (0x3fffffffULL 
                                                                                & (((((QData)((IData)(vlSelf->top__DOT___0219_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1677_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0409_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1804_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___1386_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & vlSelf->top__DOT___2002_) 
                                                                                | (((IData)(vlSelf->top__DOT___1381_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1520_) 
                                                                                << 0x18U) 
                                                                                | ((0xfc0000U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1534_) 
                                                                                << 0x11U) 
                                                                                | ((0x1ff00U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1287_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & vlSelf->top__DOT___2002_)))))))))))))) 
                                                                                << 0xaU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 1U)))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xff000000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x7e0000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0xffe0U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (IData)(vlSelf->top__DOT___1309_)))))))))))) 
                                                                                << 0xdU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0272_)))))))))))) 
                                                                                >> 0xfU))) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xfU) 
                                                                                | ((0x7ff8U 
                                                                                & ((((0x1c00U 
                                                                                & (vlSelf->top__DOT___2002_ 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 1U)))))))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0272_))))))))) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0235_)))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT___3747_ 
                                                           >> 0x12U))))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT___3747_ 
                                                                         >> 0x11U))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0x7fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___3747_ 
                                                                            >> 0xaU))))) 
                                                << 0x37U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT___3747_ 
                                                                               >> 9U))))) 
                                                   << 0x36U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 8U))))) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0206_)) 
                                                         << 0x34U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 6U))))) 
                                                            << 0x33U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U))))) 
                                                               << 0x32U) 
                                                              | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 2U))))) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU))))) 
                                                                     << 0x26U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___1193_)) 
                                                                        << 0x25U) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___1553_)) 
                                                                           << 0x24U) 
                                                                          | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU))))) 
                                                                              << 0x22U) 
                                                                             | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (0xffffULL 
                                                                                & (((((QData)((IData)(vlSelf->top__DOT___0219_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1677_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0409_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1804_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___1386_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & vlSelf->top__DOT___2002_) 
                                                                                | (((IData)(vlSelf->top__DOT___1381_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1520_) 
                                                                                << 0x18U) 
                                                                                | ((0xfc0000U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1534_) 
                                                                                << 0x11U) 
                                                                                | ((0x1ff00U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1287_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & vlSelf->top__DOT___2002_)))))))))))))) 
                                                                                << 0xaU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 1U)))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xff000000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x7e0000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0xffe0U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (IData)(vlSelf->top__DOT___1309_)))))))))))) 
                                                                                << 0xdU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0272_)))))))))))) 
                                                                                >> 0x1dU)))))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1788_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3f800000U 
                                                                                & ((IData)(
                                                                                (0xffffffULL 
                                                                                & (((((QData)((IData)(vlSelf->top__DOT___0219_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1677_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0409_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1804_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___1386_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & vlSelf->top__DOT___2002_) 
                                                                                | (((IData)(vlSelf->top__DOT___1381_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1520_) 
                                                                                << 0x18U) 
                                                                                | ((0xfc0000U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1534_) 
                                                                                << 0x11U) 
                                                                                | ((0x1ff00U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1287_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & vlSelf->top__DOT___2002_)))))))))))))) 
                                                                                << 0xaU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 1U)))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xff000000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x7e0000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0xffe0U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (IData)(vlSelf->top__DOT___1309_)))))))))))) 
                                                                                << 0xdU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0272_)))))))))))) 
                                                                                >> 0x15U))) 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0514_) 
                                                                                << 0x16U) 
                                                                                | ((0x380000U 
                                                                                & ((IData)(
                                                                                (0xfffffffULL 
                                                                                & (((((QData)((IData)(vlSelf->top__DOT___0219_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1677_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0409_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1804_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___1386_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & vlSelf->top__DOT___2002_) 
                                                                                | (((IData)(vlSelf->top__DOT___1381_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1520_) 
                                                                                << 0x18U) 
                                                                                | ((0xfc0000U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1534_) 
                                                                                << 0x11U) 
                                                                                | ((0x1ff00U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1287_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & vlSelf->top__DOT___2002_)))))))))))))) 
                                                                                << 0xaU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 1U)))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xff000000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x7e0000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0xffe0U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (IData)(vlSelf->top__DOT___1309_)))))))))))) 
                                                                                << 0xdU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0272_)))))))))))) 
                                                                                >> 0x11U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (0x3fffffffULL 
                                                                                & (((((QData)((IData)(vlSelf->top__DOT___0219_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1677_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0409_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1804_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___1386_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & vlSelf->top__DOT___2002_) 
                                                                                | (((IData)(vlSelf->top__DOT___1381_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1520_) 
                                                                                << 0x18U) 
                                                                                | ((0xfc0000U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1534_) 
                                                                                << 0x11U) 
                                                                                | ((0x1ff00U 
                                                                                & (vlSelf->top__DOT___1982_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1287_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & vlSelf->top__DOT___2002_)))))))))))))) 
                                                                                << 0xaU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 1U)))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xff000000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x7e0000U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3723_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0xffe0U 
                                                                                & vlSelf->top__DOT___1952_[5U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 0xcU)) 
                                                                                | (IData)(vlSelf->top__DOT___1309_)))))))))))) 
                                                                                << 0xdU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0272_)))))))))))) 
                                                                                >> 0xfU))) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xfU) 
                                                                                | ((0x7ff8U 
                                                                                & ((((0x1c00U 
                                                                                & (vlSelf->top__DOT___2002_ 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0306_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 1U)))))))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0272_))))))))) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0235_)))))))))))))))))))))))))))) 
                             >> 0x20U));
    vlSelf->top__DOT___2031_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___2031_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2031_[2U] = ((4U & ((IData)(
                                                   (vlSelf->top__DOT___3747_ 
                                                    >> 0x15U)) 
                                           << 2U)) 
                                    | ((2U & ((IData)(
                                                      (vlSelf->top__DOT___3747_ 
                                                       >> 0x14U)) 
                                              << 1U)) 
                                       | (1U & (IData)(
                                                       (vlSelf->top__DOT___3747_ 
                                                        >> 0x13U)))));
    vlSelf->top__DOT___1406_ = (1U & ((((0x80U & ((IData)(vlSelf->top__DOT___3810_) 
                                                  << 2U)) 
                                        | ((0x60U & 
                                            (vlSelf->top__DOT___1964_[1U] 
                                             >> 8U)) 
                                           | ((0x10U 
                                               & ((IData)(vlSelf->top__DOT___3810_) 
                                                  << 2U)) 
                                              | ((8U 
                                                  & (vlSelf->top__DOT___1964_[1U] 
                                                     >> 8U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSelf->top__DOT___3810_) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelf->top__DOT___0071_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0226_))))))) 
                                       + (2U | ((0xf8U 
                                                 & vlSelf->top__DOT___2031_[0U]) 
                                                | ((IData)(vlSelf->top__DOT___0272_) 
                                                   << 2U)))) 
                                      >> 7U));
    vlSelf->top__DOT___0725_ = (1U & (((0x8000U | (
                                                   ((IData)(vlSelf->top__DOT___0082_) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelf->top__DOT___0082_) 
                                                       << 0xeU) 
                                                      | (((IData)(vlSelf->top__DOT___0438_) 
                                                          << 0xdU) 
                                                         | ((0x1000U 
                                                             & (vlSelf->top__DOT___1964_[1U] 
                                                                >> 8U)) 
                                                            | ((0x800U 
                                                                & ((IData)(vlSelf->top__DOT___3810_) 
                                                                   << 2U)) 
                                                               | ((0x700U 
                                                                   & (vlSelf->top__DOT___1964_[1U] 
                                                                      >> 8U)) 
                                                                  | ((0x80U 
                                                                      & ((IData)(vlSelf->top__DOT___3810_) 
                                                                         << 2U)) 
                                                                     | ((0x60U 
                                                                         & (vlSelf->top__DOT___1964_[1U] 
                                                                            >> 8U)) 
                                                                        | ((0x10U 
                                                                            & ((IData)(vlSelf->top__DOT___3810_) 
                                                                               << 2U)) 
                                                                           | ((8U 
                                                                               & (vlSelf->top__DOT___1964_[1U] 
                                                                                >> 8U)) 
                                                                              | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3810_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0226_)))))))))))))) 
                                       + (2U | (((IData)(vlSelf->top__DOT___1101_) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                    << 0xfU) 
                                                   | ((0x7ff8U 
                                                       & vlSelf->top__DOT___2031_[0U]) 
                                                      | ((IData)(vlSelf->top__DOT___0272_) 
                                                         << 2U)))))) 
                                      >> 0x10U));
    vlSelf->top__DOT___0130_ = (1U & (((0x8000U | (
                                                   (0x40000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___2041_ 
                                                                >> 0x1bU)) 
                                                       << 0x12U)) 
                                                   | (((IData)(vlSelf->top__DOT___0082_) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->top__DOT___0082_) 
                                                          << 0xeU) 
                                                         | (((IData)(vlSelf->top__DOT___0438_) 
                                                             << 0xdU) 
                                                            | ((0x1000U 
                                                                & (vlSelf->top__DOT___1964_[1U] 
                                                                   >> 8U)) 
                                                               | ((0x800U 
                                                                   & ((IData)(vlSelf->top__DOT___3810_) 
                                                                      << 2U)) 
                                                                  | ((0x700U 
                                                                      & (vlSelf->top__DOT___1964_[1U] 
                                                                         >> 8U)) 
                                                                     | ((0x80U 
                                                                         & ((IData)(vlSelf->top__DOT___3810_) 
                                                                            << 2U)) 
                                                                        | ((0x60U 
                                                                            & (vlSelf->top__DOT___1964_[1U] 
                                                                               >> 8U)) 
                                                                           | ((0x10U 
                                                                               & ((IData)(vlSelf->top__DOT___3810_) 
                                                                                << 2U)) 
                                                                              | ((8U 
                                                                                & (vlSelf->top__DOT___1964_[1U] 
                                                                                >> 8U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3810_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0226_))))))))))))))) 
                                       + (2U | ((0x40000U 
                                                 & (vlSelf->top__DOT___1887_ 
                                                    << 2U)) 
                                                | ((0x20000U 
                                                    & vlSelf->top__DOT___2031_[0U]) 
                                                   | (((IData)(vlSelf->top__DOT___1101_) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->top__DOT___1814_) 
                                                          << 0xfU) 
                                                         | ((0x7ff8U 
                                                             & vlSelf->top__DOT___2031_[0U]) 
                                                            | ((IData)(vlSelf->top__DOT___0272_) 
                                                               << 2U)))))))) 
                                      >> 0x12U));
    vlSelf->top__DOT___1175_ = (1U & ((((0x60U & (vlSelf->top__DOT___1964_[1U] 
                                                  >> 8U)) 
                                        | ((0x10U & 
                                            ((IData)(vlSelf->top__DOT___3810_) 
                                             << 2U)) 
                                           | ((8U & 
                                               (vlSelf->top__DOT___1964_[1U] 
                                                >> 8U)) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->top__DOT___3810_) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelf->top__DOT___0071_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0226_)))))) 
                                       + (2U | ((0x78U 
                                                 & vlSelf->top__DOT___2031_[0U]) 
                                                | ((IData)(vlSelf->top__DOT___0272_) 
                                                   << 2U)))) 
                                      >> 6U));
    vlSelf->top__DOT___0921_ = (1U & ((((0x10U & ((IData)(vlSelf->top__DOT___3810_) 
                                                  << 2U)) 
                                        | ((8U & (vlSelf->top__DOT___1964_[1U] 
                                                  >> 8U)) 
                                           | ((4U & 
                                               ((IData)(vlSelf->top__DOT___3810_) 
                                                << 2U)) 
                                              | (((IData)(vlSelf->top__DOT___0071_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0226_))))) 
                                       + (2U | ((0x18U 
                                                 & vlSelf->top__DOT___2031_[0U]) 
                                                | ((IData)(vlSelf->top__DOT___0272_) 
                                                   << 2U)))) 
                                      >> 4U));
    __Vtemp_4[0U] = (IData)((((QData)((IData)((0x1fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT___3747_ 
                                                          >> 0x27U))))) 
                              << 0x27U) | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT___3747_ 
                                                                        >> 0x26U))))) 
                                            << 0x26U) 
                                           | (((QData)((IData)(vlSelf->top__DOT___1346_)) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___3747_ 
                                                                              >> 0x23U))))) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        (0x3fU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1cU))))) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         ((0x8000000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                              << 0x1bU)) 
                                                                          | ((0x7c00000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                             | ((0x200000U 
                                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                                << 0x13U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fc00U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xdU)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->top__DOT___3747_)))))))))))))))))))))))));
    __Vtemp_4[1U] = (((IData)((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->in_data[0x42U])) 
                                   << 0x1cU) | ((QData)((IData)(
                                                                vlSelf->in_data[0x41U])) 
                                                >> 4U)))) 
                      << 0xcU) | (IData)(((((QData)((IData)(
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT___3747_ 
                                                                        >> 0x27U))))) 
                                            << 0x27U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3747_ 
                                                                           >> 0x26U))))) 
                                               << 0x26U) 
                                              | (((QData)((IData)(vlSelf->top__DOT___1346_)) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x23U))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))) 
                                                        << 0x22U) 
                                                       | (((QData)((IData)(
                                                                           (0x3fU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1cU))))) 
                                                           << 0x1cU) 
                                                          | (QData)((IData)(
                                                                            ((0x8000000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                             | ((0x7c00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                                << 0x13U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fc00U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xdU)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->top__DOT___3747_)))))))))))))))))))))))) 
                                          >> 0x20U)));
    vlSelf->top__DOT___2121_[0U] = __Vtemp_4[0U];
    vlSelf->top__DOT___2121_[1U] = __Vtemp_4[1U];
    vlSelf->top__DOT___2121_[2U] = (((IData)((0x3fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->in_data[0x42U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x41U])) 
                                                    >> 4U)))) 
                                     >> 0x14U) | ((IData)(
                                                          ((0x3fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->in_data[0x42U])) 
                                                                << 0x1cU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->in_data[0x41U])) 
                                                                  >> 4U))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
    vlSelf->top__DOT___2121_[3U] = ((IData)(((0x3fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->in_data[0x42U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x41U])) 
                                                    >> 4U))) 
                                             >> 0x20U)) 
                                    >> 0x14U);
    __Vtemp_6[0U] = (IData)((((QData)((IData)(((0xfc000000U 
                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                    << 0x1eU) 
                                                   | (0x3c000000U 
                                                      & (vlSelf->top__DOT___2121_[0U] 
                                                         >> 2U)))) 
                                               | ((0x2000000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3747_ 
                                                               >> 0x1bU)) 
                                                      << 0x19U)) 
                                                  | ((0x1f00000U 
                                                      & (vlSelf->top__DOT___2121_[0U] 
                                                         >> 2U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->top__DOT___2031_[2U] 
                                                            << 0x11U)) 
                                                        | ((0x40000U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT___3747_ 
                                                                        >> 0x14U)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->top__DOT___2031_[2U] 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3747_ 
                                                                              >> 0x12U)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                        << 0xfU)) 
                                                                    | ((0x7f00U 
                                                                        & (vlSelf->top__DOT___2031_[1U] 
                                                                           >> 0xfU)) 
                                                                       | ((0x80U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                              << 7U)) 
                                                                          | ((0x40U 
                                                                              & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                             | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                              << 2U) | (QData)((IData)(
                                                       (3U 
                                                        & vlSelf->top__DOT___2121_[0U])))));
    __Vtemp_6[1U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                 & (vlSelf->in_data[0x41U] 
                                                    >> 4U)))) 
                                << 0xaU) | (QData)((IData)(
                                                           ((0x3e0U 
                                                             & (vlSelf->top__DOT___2121_[1U] 
                                                                >> 2U)) 
                                                            | ((0x10U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3747_ 
                                                                            >> 0x26U)) 
                                                                   << 4U)) 
                                                               | (((IData)(vlSelf->top__DOT___1346_) 
                                                                   << 3U) 
                                                                  | ((6U 
                                                                      & (vlSelf->top__DOT___2121_[1U] 
                                                                         >> 2U)) 
                                                                     | (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                      << 2U) | (IData)(((((QData)((IData)(
                                                          ((0xfc000000U 
                                                            & ((vlSelf->top__DOT___2121_[1U] 
                                                                << 0x1eU) 
                                                               | (0x3c000000U 
                                                                  & (vlSelf->top__DOT___2121_[0U] 
                                                                     >> 2U)))) 
                                                           | ((0x2000000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___3747_ 
                                                                           >> 0x1bU)) 
                                                                  << 0x19U)) 
                                                              | ((0x1f00000U 
                                                                  & (vlSelf->top__DOT___2121_[0U] 
                                                                     >> 2U)) 
                                                                 | ((0x80000U 
                                                                     & (vlSelf->top__DOT___2031_[2U] 
                                                                        << 0x11U)) 
                                                                    | ((0x40000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                           << 0x12U)) 
                                                                       | ((0x20000U 
                                                                           & (vlSelf->top__DOT___2031_[2U] 
                                                                              << 0x11U)) 
                                                                          | ((0x10000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x10U)) 
                                                                             | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                                          << 2U) | (QData)((IData)(
                                                                   (3U 
                                                                    & vlSelf->top__DOT___2121_[0U])))) 
                                        >> 0x20U)));
    __Vtemp_6[2U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                 & (vlSelf->in_data[0x41U] 
                                                    >> 4U)))) 
                                << 0xaU) | (QData)((IData)(
                                                           ((0x3e0U 
                                                             & (vlSelf->top__DOT___2121_[1U] 
                                                                >> 2U)) 
                                                            | ((0x10U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3747_ 
                                                                            >> 0x26U)) 
                                                                   << 4U)) 
                                                               | (((IData)(vlSelf->top__DOT___1346_) 
                                                                   << 3U) 
                                                                  | ((6U 
                                                                      & (vlSelf->top__DOT___2121_[1U] 
                                                                         >> 2U)) 
                                                                     | (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                      >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                              (0x1ffffffU 
                                                               & (vlSelf->in_data[0x41U] 
                                                                  >> 4U)))) 
                                              << 0xaU) 
                                             | (QData)((IData)(
                                                               ((0x3e0U 
                                                                 & (vlSelf->top__DOT___2121_[1U] 
                                                                    >> 2U)) 
                                                                | ((0x10U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                       << 4U)) 
                                                                   | (((IData)(vlSelf->top__DOT___1346_) 
                                                                       << 3U) 
                                                                      | ((6U 
                                                                          & (vlSelf->top__DOT___2121_[1U] 
                                                                             >> 2U)) 
                                                                         | (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)))))))))) 
                                            >> 0x20U)) 
                                   << 2U));
    __Vtemp_7[0U] = (((IData)((0x1ffffffffffffULL & 
                               (((QData)((IData)(vlSelf->in_data[0x35U])) 
                                 << 0x24U) | (((QData)((IData)(
                                                               vlSelf->in_data[0x34U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->in_data[0x33U])) 
                                                 >> 0x1cU))))) 
                      << 0x14U) | (((IData)(vlSelf->top__DOT___0241_) 
                                    << 0xeU) | (((IData)(vlSelf->top__DOT___1716_) 
                                                 << 0xbU) 
                                                | ((0x400U 
                                                    & (vlSelf->top__DOT___1996_ 
                                                       << 6U)) 
                                                   | (((IData)(vlSelf->top__DOT___1365_) 
                                                       << 9U) 
                                                      | (((IData)(vlSelf->top__DOT___0154_) 
                                                          << 8U) 
                                                         | (((IData)(vlSelf->top__DOT___1716_) 
                                                             << 5U) 
                                                            | ((0x10U 
                                                                & vlSelf->top__DOT___1996_) 
                                                               | (((IData)(vlSelf->top__DOT___1365_) 
                                                                   << 3U) 
                                                                  | ((IData)(vlSelf->top__DOT___0154_) 
                                                                     << 2U))))))))));
    __Vtemp_7[1U] = (((IData)((0x1ffffffffffffULL & 
                               (((QData)((IData)(vlSelf->in_data[0x35U])) 
                                 << 0x24U) | (((QData)((IData)(
                                                               vlSelf->in_data[0x34U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->in_data[0x33U])) 
                                                 >> 0x1cU))))) 
                      >> 0xcU) | ((IData)(((0x1ffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->in_data[0x35U])) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->in_data[0x34U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->in_data[0x33U])) 
                                                     >> 0x1cU)))) 
                                           >> 0x20U)) 
                                  << 0x14U));
    __Vtemp_7[2U] = ((IData)(((0x1ffffffffffffULL & 
                               (((QData)((IData)(vlSelf->in_data[0x35U])) 
                                 << 0x24U) | (((QData)((IData)(
                                                               vlSelf->in_data[0x34U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->in_data[0x33U])) 
                                                 >> 0x1cU)))) 
                              >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_8, __Vtemp_6, __Vtemp_7);
    vlSelf->top__DOT___0262_ = (1U & (__Vtemp_8[0U] 
                                      >> 0xeU));
    __Vtemp_11[0U] = (IData)((((QData)((IData)(((0xfc000000U 
                                                 & ((vlSelf->top__DOT___2121_[1U] 
                                                     << 0x1eU) 
                                                    | (0x3c000000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)))) 
                                                | ((0x2000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3747_ 
                                                                >> 0x1bU)) 
                                                       << 0x19U)) 
                                                   | ((0x1f00000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)) 
                                                      | ((0x80000U 
                                                          & (vlSelf->top__DOT___2031_[2U] 
                                                             << 0x11U)) 
                                                         | ((0x40000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3747_ 
                                                                         >> 0x14U)) 
                                                                << 0x12U)) 
                                                            | ((0x20000U 
                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                   << 0x11U)) 
                                                               | ((0x10000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3747_ 
                                                                               >> 0x12U)) 
                                                                      << 0x10U)) 
                                                                  | ((0x8000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                         << 0xfU)) 
                                                                     | ((0x7f00U 
                                                                         & (vlSelf->top__DOT___2031_[1U] 
                                                                            >> 0xfU)) 
                                                                        | ((0x80U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                               << 7U)) 
                                                                           | ((0x40U 
                                                                               & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                               << 2U) | (QData)((IData)(
                                                        (3U 
                                                         & vlSelf->top__DOT___2121_[0U])))));
    __Vtemp_11[1U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       << 2U) | (IData)(((((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & ((vlSelf->top__DOT___2121_[1U] 
                                                                 << 0x1eU) 
                                                                | (0x3c000000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)))) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3747_ 
                                                                            >> 0x1bU)) 
                                                                   << 0x19U)) 
                                                               | ((0x1f00000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->top__DOT___2031_[2U] 
                                                                         << 0x11U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                            << 0x12U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->top__DOT___2031_[2U] 
                                                                               << 0x11U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x10U)) 
                                                                              | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (3U 
                                                                     & vlSelf->top__DOT___2121_[0U])))) 
                                         >> 0x20U)));
    __Vtemp_11[2U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (vlSelf->in_data[0x41U] 
                                                                   >> 4U)))) 
                                               << 0xaU) 
                                              | (QData)((IData)(
                                                                ((0x3e0U 
                                                                  & (vlSelf->top__DOT___2121_[1U] 
                                                                     >> 2U)) 
                                                                 | ((0x10U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                        << 4U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1346_) 
                                                                        << 3U) 
                                                                       | ((6U 
                                                                           & (vlSelf->top__DOT___2121_[1U] 
                                                                              >> 2U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)))))))))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp_12[0U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       << 0x14U) | (((IData)(vlSelf->top__DOT___0241_) 
                                     << 0xeU) | (((IData)(vlSelf->top__DOT___1716_) 
                                                  << 0xbU) 
                                                 | ((0x400U 
                                                     & (vlSelf->top__DOT___1996_ 
                                                        << 6U)) 
                                                    | (((IData)(vlSelf->top__DOT___1365_) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->top__DOT___0154_) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->top__DOT___1716_) 
                                                              << 5U) 
                                                             | ((0x10U 
                                                                 & vlSelf->top__DOT___1996_) 
                                                                | (((IData)(vlSelf->top__DOT___1365_) 
                                                                    << 3U) 
                                                                   | ((IData)(vlSelf->top__DOT___0154_) 
                                                                      << 2U))))))))));
    __Vtemp_12[1U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       >> 0xcU) | ((IData)(((0x1ffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->in_data[0x35U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->in_data[0x34U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->in_data[0x33U])) 
                                                      >> 0x1cU)))) 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp_12[2U] = ((IData)(((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU)))) 
                               >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_13, __Vtemp_11, __Vtemp_12);
    vlSelf->top__DOT___0410_ = (1U & (__Vtemp_13[0U] 
                                      >> 5U));
    __Vtemp_16[0U] = (IData)((((QData)((IData)(((0xfc000000U 
                                                 & ((vlSelf->top__DOT___2121_[1U] 
                                                     << 0x1eU) 
                                                    | (0x3c000000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)))) 
                                                | ((0x2000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3747_ 
                                                                >> 0x1bU)) 
                                                       << 0x19U)) 
                                                   | ((0x1f00000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)) 
                                                      | ((0x80000U 
                                                          & (vlSelf->top__DOT___2031_[2U] 
                                                             << 0x11U)) 
                                                         | ((0x40000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3747_ 
                                                                         >> 0x14U)) 
                                                                << 0x12U)) 
                                                            | ((0x20000U 
                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                   << 0x11U)) 
                                                               | ((0x10000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3747_ 
                                                                               >> 0x12U)) 
                                                                      << 0x10U)) 
                                                                  | ((0x8000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                         << 0xfU)) 
                                                                     | ((0x7f00U 
                                                                         & (vlSelf->top__DOT___2031_[1U] 
                                                                            >> 0xfU)) 
                                                                        | ((0x80U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                               << 7U)) 
                                                                           | ((0x40U 
                                                                               & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                               << 2U) | (QData)((IData)(
                                                        (3U 
                                                         & vlSelf->top__DOT___2121_[0U])))));
    __Vtemp_16[1U] = (((IData)(((0x1ffffffffffffc00ULL 
                                 & (((QData)((IData)(
                                                     vlSelf->in_data[0x42U])) 
                                     << 0x26U) | (0xfffffffffffffc00ULL 
                                                  & ((QData)((IData)(
                                                                     vlSelf->in_data[0x41U])) 
                                                     << 6U)))) 
                                | (QData)((IData)((
                                                   (0x3e0U 
                                                    & (vlSelf->top__DOT___2121_[1U] 
                                                       >> 2U)) 
                                                   | ((0x10U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___3747_ 
                                                                   >> 0x26U)) 
                                                          << 4U)) 
                                                      | (((IData)(vlSelf->top__DOT___1346_) 
                                                          << 3U) 
                                                         | ((6U 
                                                             & (vlSelf->top__DOT___2121_[1U] 
                                                                >> 2U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT___3747_ 
                                                                          >> 0x22U))))))))))) 
                       << 2U) | (IData)(((((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & ((vlSelf->top__DOT___2121_[1U] 
                                                                 << 0x1eU) 
                                                                | (0x3c000000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)))) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3747_ 
                                                                            >> 0x1bU)) 
                                                                   << 0x19U)) 
                                                               | ((0x1f00000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->top__DOT___2031_[2U] 
                                                                         << 0x11U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                            << 0x12U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->top__DOT___2031_[2U] 
                                                                               << 0x11U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x10U)) 
                                                                              | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (3U 
                                                                     & vlSelf->top__DOT___2121_[0U])))) 
                                         >> 0x20U)));
    __Vtemp_16[2U] = (((IData)(((0x1ffffffffffffc00ULL 
                                 & (((QData)((IData)(
                                                     vlSelf->in_data[0x42U])) 
                                     << 0x26U) | (0xfffffffffffffc00ULL 
                                                  & ((QData)((IData)(
                                                                     vlSelf->in_data[0x41U])) 
                                                     << 6U)))) 
                                | (QData)((IData)((
                                                   (0x3e0U 
                                                    & (vlSelf->top__DOT___2121_[1U] 
                                                       >> 2U)) 
                                                   | ((0x10U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___3747_ 
                                                                   >> 0x26U)) 
                                                          << 4U)) 
                                                      | (((IData)(vlSelf->top__DOT___1346_) 
                                                          << 3U) 
                                                         | ((6U 
                                                             & (vlSelf->top__DOT___2121_[1U] 
                                                                >> 2U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT___3747_ 
                                                                          >> 0x22U))))))))))) 
                       >> 0x1eU) | ((IData)((((0x1ffffffffffffc00ULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->in_data[0x42U])) 
                                                   << 0x26U) 
                                                  | (0xfffffffffffffc00ULL 
                                                     & ((QData)((IData)(
                                                                        vlSelf->in_data[0x41U])) 
                                                        << 6U)))) 
                                              | (QData)((IData)(
                                                                ((0x3e0U 
                                                                  & (vlSelf->top__DOT___2121_[1U] 
                                                                     >> 2U)) 
                                                                 | ((0x10U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                        << 4U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1346_) 
                                                                        << 3U) 
                                                                       | ((6U 
                                                                           & (vlSelf->top__DOT___2121_[1U] 
                                                                              >> 2U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)))))))))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp_20[0U] = (((vlSelf->in_data[0x34U] << 0x18U) 
                       | (0xf00000U & (vlSelf->in_data[0x33U] 
                                       >> 8U))) | (
                                                   ((IData)(vlSelf->top__DOT___0241_) 
                                                    << 0xeU) 
                                                   | (((IData)(vlSelf->top__DOT___1716_) 
                                                       << 0xbU) 
                                                      | ((0x400U 
                                                          & (vlSelf->top__DOT___1996_ 
                                                             << 6U)) 
                                                         | (((IData)(vlSelf->top__DOT___1365_) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->top__DOT___0154_) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->top__DOT___1716_) 
                                                                   << 5U) 
                                                                  | ((0x10U 
                                                                      & vlSelf->top__DOT___1996_) 
                                                                     | (((IData)(vlSelf->top__DOT___1365_) 
                                                                         << 3U) 
                                                                        | ((IData)(vlSelf->top__DOT___0154_) 
                                                                           << 2U))))))))));
    __Vtemp_20[1U] = ((0xfffffU & (vlSelf->in_data[0x34U] 
                                   >> 8U)) | ((vlSelf->in_data[0x35U] 
                                               << 0x18U) 
                                              | (0xf00000U 
                                                 & (vlSelf->in_data[0x34U] 
                                                    >> 8U))));
    __Vtemp_20[2U] = ((0xfffffU & (vlSelf->in_data[0x35U] 
                                   >> 8U)) | (0x7ff00000U 
                                              & ((vlSelf->in_data[0x36U] 
                                                  << 0x18U) 
                                                 | (0xf00000U 
                                                    & (vlSelf->in_data[0x35U] 
                                                       >> 8U)))));
    VL_ADD_W(3, __Vtemp_21, __Vtemp_16, __Vtemp_20);
    vlSelf->top__DOT___1803_ = (1U & (__Vtemp_21[2U] 
                                      >> 0x1eU));
    vlSelf->top__DOT___1771_ = (1U & (((((IData)(vlSelf->top__DOT___0240_) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->top__DOT___0197_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0232_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0893_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0154_))))) 
                                       + ((0x1cU & 
                                           (vlSelf->top__DOT___2031_[1U] 
                                            >> 0xdU)) 
                                          | (3U & vlSelf->top__DOT___2121_[0U]))) 
                                      >> 4U));
    vlSelf->top__DOT____VdfgTmp_ha881e501__0 = ((0x40U 
                                                 & (vlSelf->top__DOT___2031_[1U] 
                                                    >> 0xdU)) 
                                                | ((0x20U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3747_ 
                                                                >> 5U)) 
                                                       << 5U)) 
                                                   | ((0x1cU 
                                                       & (vlSelf->top__DOT___2031_[1U] 
                                                          >> 0xdU)) 
                                                      | (3U 
                                                         & vlSelf->top__DOT___2121_[0U]))));
    __Vtemp_24[0U] = (IData)((((QData)((IData)(((0xfc000000U 
                                                 & ((vlSelf->top__DOT___2121_[1U] 
                                                     << 0x1eU) 
                                                    | (0x3c000000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)))) 
                                                | ((0x2000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3747_ 
                                                                >> 0x1bU)) 
                                                       << 0x19U)) 
                                                   | ((0x1f00000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)) 
                                                      | ((0x80000U 
                                                          & (vlSelf->top__DOT___2031_[2U] 
                                                             << 0x11U)) 
                                                         | ((0x40000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3747_ 
                                                                         >> 0x14U)) 
                                                                << 0x12U)) 
                                                            | ((0x20000U 
                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                   << 0x11U)) 
                                                               | ((0x10000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3747_ 
                                                                               >> 0x12U)) 
                                                                      << 0x10U)) 
                                                                  | ((0x8000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                         << 0xfU)) 
                                                                     | ((0x7f00U 
                                                                         & (vlSelf->top__DOT___2031_[1U] 
                                                                            >> 0xfU)) 
                                                                        | ((0x80U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                               << 7U)) 
                                                                           | ((0x40U 
                                                                               & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                               << 2U) | (QData)((IData)(
                                                        (3U 
                                                         & vlSelf->top__DOT___2121_[0U])))));
    __Vtemp_24[1U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       << 2U) | (IData)(((((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & ((vlSelf->top__DOT___2121_[1U] 
                                                                 << 0x1eU) 
                                                                | (0x3c000000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)))) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3747_ 
                                                                            >> 0x1bU)) 
                                                                   << 0x19U)) 
                                                               | ((0x1f00000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->top__DOT___2031_[2U] 
                                                                         << 0x11U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                            << 0x12U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->top__DOT___2031_[2U] 
                                                                               << 0x11U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x10U)) 
                                                                              | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (3U 
                                                                     & vlSelf->top__DOT___2121_[0U])))) 
                                         >> 0x20U)));
    __Vtemp_24[2U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (vlSelf->in_data[0x41U] 
                                                                   >> 4U)))) 
                                               << 0xaU) 
                                              | (QData)((IData)(
                                                                ((0x3e0U 
                                                                  & (vlSelf->top__DOT___2121_[1U] 
                                                                     >> 2U)) 
                                                                 | ((0x10U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                        << 4U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1346_) 
                                                                        << 3U) 
                                                                       | ((6U 
                                                                           & (vlSelf->top__DOT___2121_[1U] 
                                                                              >> 2U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)))))))))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp_25[0U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       << 0x14U) | (((IData)(vlSelf->top__DOT___0241_) 
                                     << 0xeU) | (((IData)(vlSelf->top__DOT___1716_) 
                                                  << 0xbU) 
                                                 | ((0x400U 
                                                     & (vlSelf->top__DOT___1996_ 
                                                        << 6U)) 
                                                    | (((IData)(vlSelf->top__DOT___1365_) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->top__DOT___0154_) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->top__DOT___1716_) 
                                                              << 5U) 
                                                             | ((0x10U 
                                                                 & vlSelf->top__DOT___1996_) 
                                                                | (((IData)(vlSelf->top__DOT___1365_) 
                                                                    << 3U) 
                                                                   | ((IData)(vlSelf->top__DOT___0154_) 
                                                                      << 2U))))))))));
    __Vtemp_25[1U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       >> 0xcU) | ((IData)(((0x1ffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->in_data[0x35U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->in_data[0x34U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->in_data[0x33U])) 
                                                      >> 0x1cU)))) 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp_25[2U] = ((IData)(((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU)))) 
                               >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_26, __Vtemp_24, __Vtemp_25);
    vlSelf->top__DOT___1666_ = (1U & (__Vtemp_26[0U] 
                                      >> 0x1bU));
    __Vtemp_29[0U] = (IData)((((QData)((IData)(((0xfc000000U 
                                                 & ((vlSelf->top__DOT___2121_[1U] 
                                                     << 0x1eU) 
                                                    | (0x3c000000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)))) 
                                                | ((0x2000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3747_ 
                                                                >> 0x1bU)) 
                                                       << 0x19U)) 
                                                   | ((0x1f00000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)) 
                                                      | ((0x80000U 
                                                          & (vlSelf->top__DOT___2031_[2U] 
                                                             << 0x11U)) 
                                                         | ((0x40000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3747_ 
                                                                         >> 0x14U)) 
                                                                << 0x12U)) 
                                                            | ((0x20000U 
                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                   << 0x11U)) 
                                                               | ((0x10000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3747_ 
                                                                               >> 0x12U)) 
                                                                      << 0x10U)) 
                                                                  | ((0x8000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                         << 0xfU)) 
                                                                     | ((0x7f00U 
                                                                         & (vlSelf->top__DOT___2031_[1U] 
                                                                            >> 0xfU)) 
                                                                        | ((0x80U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                               << 7U)) 
                                                                           | ((0x40U 
                                                                               & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                               << 2U) | (QData)((IData)(
                                                        (3U 
                                                         & vlSelf->top__DOT___2121_[0U])))));
    __Vtemp_29[1U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       << 2U) | (IData)(((((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & ((vlSelf->top__DOT___2121_[1U] 
                                                                 << 0x1eU) 
                                                                | (0x3c000000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)))) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3747_ 
                                                                            >> 0x1bU)) 
                                                                   << 0x19U)) 
                                                               | ((0x1f00000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->top__DOT___2031_[2U] 
                                                                         << 0x11U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                            << 0x12U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->top__DOT___2031_[2U] 
                                                                               << 0x11U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x10U)) 
                                                                              | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (3U 
                                                                     & vlSelf->top__DOT___2121_[0U])))) 
                                         >> 0x20U)));
    __Vtemp_29[2U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (vlSelf->in_data[0x41U] 
                                                                   >> 4U)))) 
                                               << 0xaU) 
                                              | (QData)((IData)(
                                                                ((0x3e0U 
                                                                  & (vlSelf->top__DOT___2121_[1U] 
                                                                     >> 2U)) 
                                                                 | ((0x10U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                        << 4U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1346_) 
                                                                        << 3U) 
                                                                       | ((6U 
                                                                           & (vlSelf->top__DOT___2121_[1U] 
                                                                              >> 2U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)))))))))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp_30[0U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       << 0x14U) | (((IData)(vlSelf->top__DOT___0241_) 
                                     << 0xeU) | (((IData)(vlSelf->top__DOT___1716_) 
                                                  << 0xbU) 
                                                 | ((0x400U 
                                                     & (vlSelf->top__DOT___1996_ 
                                                        << 6U)) 
                                                    | (((IData)(vlSelf->top__DOT___1365_) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->top__DOT___0154_) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->top__DOT___1716_) 
                                                              << 5U) 
                                                             | ((0x10U 
                                                                 & vlSelf->top__DOT___1996_) 
                                                                | (((IData)(vlSelf->top__DOT___1365_) 
                                                                    << 3U) 
                                                                   | ((IData)(vlSelf->top__DOT___0154_) 
                                                                      << 2U))))))))));
    __Vtemp_30[1U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       >> 0xcU) | ((IData)(((0x1ffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->in_data[0x35U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->in_data[0x34U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->in_data[0x33U])) 
                                                      >> 0x1cU)))) 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp_30[2U] = ((IData)(((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU)))) 
                               >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_31, __Vtemp_29, __Vtemp_30);
    vlSelf->top__DOT___1604_ = (1U & (__Vtemp_31[0U] 
                                      >> 0xbU));
    __Vtemp_34[0U] = (IData)((((QData)((IData)(((0xfc000000U 
                                                 & ((vlSelf->top__DOT___2121_[1U] 
                                                     << 0x1eU) 
                                                    | (0x3c000000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)))) 
                                                | ((0x2000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3747_ 
                                                                >> 0x1bU)) 
                                                       << 0x19U)) 
                                                   | ((0x1f00000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)) 
                                                      | ((0x80000U 
                                                          & (vlSelf->top__DOT___2031_[2U] 
                                                             << 0x11U)) 
                                                         | ((0x40000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3747_ 
                                                                         >> 0x14U)) 
                                                                << 0x12U)) 
                                                            | ((0x20000U 
                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                   << 0x11U)) 
                                                               | ((0x10000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3747_ 
                                                                               >> 0x12U)) 
                                                                      << 0x10U)) 
                                                                  | ((0x8000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                         << 0xfU)) 
                                                                     | ((0x7f00U 
                                                                         & (vlSelf->top__DOT___2031_[1U] 
                                                                            >> 0xfU)) 
                                                                        | ((0x80U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                               << 7U)) 
                                                                           | ((0x40U 
                                                                               & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                               << 2U) | (QData)((IData)(
                                                        (3U 
                                                         & vlSelf->top__DOT___2121_[0U])))));
    __Vtemp_34[1U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       << 2U) | (IData)(((((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & ((vlSelf->top__DOT___2121_[1U] 
                                                                 << 0x1eU) 
                                                                | (0x3c000000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)))) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3747_ 
                                                                            >> 0x1bU)) 
                                                                   << 0x19U)) 
                                                               | ((0x1f00000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->top__DOT___2031_[2U] 
                                                                         << 0x11U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                            << 0x12U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->top__DOT___2031_[2U] 
                                                                               << 0x11U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x10U)) 
                                                                              | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (3U 
                                                                     & vlSelf->top__DOT___2121_[0U])))) 
                                         >> 0x20U)));
    __Vtemp_34[2U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (vlSelf->in_data[0x41U] 
                                                                   >> 4U)))) 
                                               << 0xaU) 
                                              | (QData)((IData)(
                                                                ((0x3e0U 
                                                                  & (vlSelf->top__DOT___2121_[1U] 
                                                                     >> 2U)) 
                                                                 | ((0x10U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                        << 4U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1346_) 
                                                                        << 3U) 
                                                                       | ((6U 
                                                                           & (vlSelf->top__DOT___2121_[1U] 
                                                                              >> 2U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)))))))))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp_35[0U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       << 0x14U) | (((IData)(vlSelf->top__DOT___0241_) 
                                     << 0xeU) | (((IData)(vlSelf->top__DOT___1716_) 
                                                  << 0xbU) 
                                                 | ((0x400U 
                                                     & (vlSelf->top__DOT___1996_ 
                                                        << 6U)) 
                                                    | (((IData)(vlSelf->top__DOT___1365_) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->top__DOT___0154_) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->top__DOT___1716_) 
                                                              << 5U) 
                                                             | ((0x10U 
                                                                 & vlSelf->top__DOT___1996_) 
                                                                | (((IData)(vlSelf->top__DOT___1365_) 
                                                                    << 3U) 
                                                                   | ((IData)(vlSelf->top__DOT___0154_) 
                                                                      << 2U))))))))));
    __Vtemp_35[1U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       >> 0xcU) | ((IData)(((0x1ffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->in_data[0x35U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->in_data[0x34U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->in_data[0x33U])) 
                                                      >> 0x1cU)))) 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp_35[2U] = ((IData)(((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU)))) 
                               >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_36, __Vtemp_34, __Vtemp_35);
    vlSelf->top__DOT___1441_ = (1U & (__Vtemp_36[2U] 
                                      >> 4U));
    __Vtemp_39[0U] = (IData)((((QData)((IData)(((0xfc000000U 
                                                 & ((vlSelf->top__DOT___2121_[1U] 
                                                     << 0x1eU) 
                                                    | (0x3c000000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)))) 
                                                | ((0x2000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3747_ 
                                                                >> 0x1bU)) 
                                                       << 0x19U)) 
                                                   | ((0x1f00000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)) 
                                                      | ((0x80000U 
                                                          & (vlSelf->top__DOT___2031_[2U] 
                                                             << 0x11U)) 
                                                         | ((0x40000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3747_ 
                                                                         >> 0x14U)) 
                                                                << 0x12U)) 
                                                            | ((0x20000U 
                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                   << 0x11U)) 
                                                               | ((0x10000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3747_ 
                                                                               >> 0x12U)) 
                                                                      << 0x10U)) 
                                                                  | ((0x8000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                         << 0xfU)) 
                                                                     | ((0x7f00U 
                                                                         & (vlSelf->top__DOT___2031_[1U] 
                                                                            >> 0xfU)) 
                                                                        | ((0x80U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                               << 7U)) 
                                                                           | ((0x40U 
                                                                               & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                               << 2U) | (QData)((IData)(
                                                        (3U 
                                                         & vlSelf->top__DOT___2121_[0U])))));
    __Vtemp_39[1U] = (((IData)(((0x7fffffffc00ULL & 
                                 (((QData)((IData)(
                                                   vlSelf->in_data[0x42U])) 
                                   << 0x26U) | (0xfffffffffffffc00ULL 
                                                & ((QData)((IData)(
                                                                   vlSelf->in_data[0x41U])) 
                                                   << 6U)))) 
                                | (QData)((IData)((
                                                   (0x3e0U 
                                                    & (vlSelf->top__DOT___2121_[1U] 
                                                       >> 2U)) 
                                                   | ((0x10U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___3747_ 
                                                                   >> 0x26U)) 
                                                          << 4U)) 
                                                      | (((IData)(vlSelf->top__DOT___1346_) 
                                                          << 3U) 
                                                         | ((6U 
                                                             & (vlSelf->top__DOT___2121_[1U] 
                                                                >> 2U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT___3747_ 
                                                                          >> 0x22U))))))))))) 
                       << 2U) | (IData)(((((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & ((vlSelf->top__DOT___2121_[1U] 
                                                                 << 0x1eU) 
                                                                | (0x3c000000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)))) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3747_ 
                                                                            >> 0x1bU)) 
                                                                   << 0x19U)) 
                                                               | ((0x1f00000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->top__DOT___2031_[2U] 
                                                                         << 0x11U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                            << 0x12U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->top__DOT___2031_[2U] 
                                                                               << 0x11U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x10U)) 
                                                                              | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (3U 
                                                                     & vlSelf->top__DOT___2121_[0U])))) 
                                         >> 0x20U)));
    __Vtemp_39[2U] = (((IData)(((0x7fffffffc00ULL & 
                                 (((QData)((IData)(
                                                   vlSelf->in_data[0x42U])) 
                                   << 0x26U) | (0xfffffffffffffc00ULL 
                                                & ((QData)((IData)(
                                                                   vlSelf->in_data[0x41U])) 
                                                   << 6U)))) 
                                | (QData)((IData)((
                                                   (0x3e0U 
                                                    & (vlSelf->top__DOT___2121_[1U] 
                                                       >> 2U)) 
                                                   | ((0x10U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___3747_ 
                                                                   >> 0x26U)) 
                                                          << 4U)) 
                                                      | (((IData)(vlSelf->top__DOT___1346_) 
                                                          << 3U) 
                                                         | ((6U 
                                                             & (vlSelf->top__DOT___2121_[1U] 
                                                                >> 2U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT___3747_ 
                                                                          >> 0x22U))))))))))) 
                       >> 0x1eU) | ((IData)((((0x7fffffffc00ULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->in_data[0x42U])) 
                                                   << 0x26U) 
                                                  | (0xfffffffffffffc00ULL 
                                                     & ((QData)((IData)(
                                                                        vlSelf->in_data[0x41U])) 
                                                        << 6U)))) 
                                              | (QData)((IData)(
                                                                ((0x3e0U 
                                                                  & (vlSelf->top__DOT___2121_[1U] 
                                                                     >> 2U)) 
                                                                 | ((0x10U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                        << 4U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1346_) 
                                                                        << 3U) 
                                                                       | ((6U 
                                                                           & (vlSelf->top__DOT___2121_[1U] 
                                                                              >> 2U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)))))))))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp_40[0U] = (((IData)((0x1ffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       << 0x14U) | (((IData)(vlSelf->top__DOT___0241_) 
                                     << 0xeU) | (((IData)(vlSelf->top__DOT___1716_) 
                                                  << 0xbU) 
                                                 | ((0x400U 
                                                     & (vlSelf->top__DOT___1996_ 
                                                        << 6U)) 
                                                    | (((IData)(vlSelf->top__DOT___1365_) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->top__DOT___0154_) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->top__DOT___1716_) 
                                                              << 5U) 
                                                             | ((0x10U 
                                                                 & vlSelf->top__DOT___1996_) 
                                                                | (((IData)(vlSelf->top__DOT___1365_) 
                                                                    << 3U) 
                                                                   | ((IData)(vlSelf->top__DOT___0154_) 
                                                                      << 2U))))))))));
    __Vtemp_40[1U] = (((IData)((0x1ffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       >> 0xcU) | ((IData)(((0x1ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->in_data[0x35U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->in_data[0x34U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->in_data[0x33U])) 
                                                      >> 0x1cU)))) 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp_40[2U] = ((IData)(((0x1ffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU)))) 
                               >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_41, __Vtemp_39, __Vtemp_40);
    vlSelf->top__DOT___2007_ = (1U | (0x1feU & (__Vtemp_41[2U] 
                                                >> 4U)));
    __Vtemp_44[0U] = (IData)((((QData)((IData)(((0xfc000000U 
                                                 & ((vlSelf->top__DOT___2121_[1U] 
                                                     << 0x1eU) 
                                                    | (0x3c000000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)))) 
                                                | ((0x2000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3747_ 
                                                                >> 0x1bU)) 
                                                       << 0x19U)) 
                                                   | ((0x1f00000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)) 
                                                      | ((0x80000U 
                                                          & (vlSelf->top__DOT___2031_[2U] 
                                                             << 0x11U)) 
                                                         | ((0x40000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3747_ 
                                                                         >> 0x14U)) 
                                                                << 0x12U)) 
                                                            | ((0x20000U 
                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                   << 0x11U)) 
                                                               | ((0x10000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3747_ 
                                                                               >> 0x12U)) 
                                                                      << 0x10U)) 
                                                                  | ((0x8000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                         << 0xfU)) 
                                                                     | ((0x7f00U 
                                                                         & (vlSelf->top__DOT___2031_[1U] 
                                                                            >> 0xfU)) 
                                                                        | ((0x80U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                               << 7U)) 
                                                                           | ((0x40U 
                                                                               & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                               << 2U) | (QData)((IData)(
                                                        (3U 
                                                         & vlSelf->top__DOT___2121_[0U])))));
    __Vtemp_44[1U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       << 2U) | (IData)(((((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & ((vlSelf->top__DOT___2121_[1U] 
                                                                 << 0x1eU) 
                                                                | (0x3c000000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)))) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3747_ 
                                                                            >> 0x1bU)) 
                                                                   << 0x19U)) 
                                                               | ((0x1f00000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->top__DOT___2031_[2U] 
                                                                         << 0x11U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                            << 0x12U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->top__DOT___2031_[2U] 
                                                                               << 0x11U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x10U)) 
                                                                              | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (3U 
                                                                     & vlSelf->top__DOT___2121_[0U])))) 
                                         >> 0x20U)));
    __Vtemp_44[2U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (vlSelf->in_data[0x41U] 
                                                                   >> 4U)))) 
                                               << 0xaU) 
                                              | (QData)((IData)(
                                                                ((0x3e0U 
                                                                  & (vlSelf->top__DOT___2121_[1U] 
                                                                     >> 2U)) 
                                                                 | ((0x10U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                        << 4U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1346_) 
                                                                        << 3U) 
                                                                       | ((6U 
                                                                           & (vlSelf->top__DOT___2121_[1U] 
                                                                              >> 2U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)))))))))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp_45[0U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       << 0x14U) | (((IData)(vlSelf->top__DOT___0241_) 
                                     << 0xeU) | (((IData)(vlSelf->top__DOT___1716_) 
                                                  << 0xbU) 
                                                 | ((0x400U 
                                                     & (vlSelf->top__DOT___1996_ 
                                                        << 6U)) 
                                                    | (((IData)(vlSelf->top__DOT___1365_) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->top__DOT___0154_) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->top__DOT___1716_) 
                                                              << 5U) 
                                                             | ((0x10U 
                                                                 & vlSelf->top__DOT___1996_) 
                                                                | (((IData)(vlSelf->top__DOT___1365_) 
                                                                    << 3U) 
                                                                   | ((IData)(vlSelf->top__DOT___0154_) 
                                                                      << 2U))))))))));
    __Vtemp_45[1U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       >> 0xcU) | ((IData)(((0x1ffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->in_data[0x35U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->in_data[0x34U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->in_data[0x33U])) 
                                                      >> 0x1cU)))) 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp_45[2U] = ((IData)(((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU)))) 
                               >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_46, __Vtemp_44, __Vtemp_45);
    vlSelf->top__DOT___1687_ = (1U & (__Vtemp_46[1U] 
                                      >> 0x15U));
    vlSelf->top__DOT___0748_ = ((IData)(vlSelf->top__DOT___1771_) 
                                ^ (IData)(vlSelf->top__DOT___0134_));
    vlSelf->top__DOT___0404_ = (1U & (((0x20U | (((IData)(vlSelf->top__DOT___0132_) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->top__DOT___0277_) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->top__DOT___0320_)))))) 
                                       + (1U | (0x3eU 
                                                & (IData)(vlSelf->top__DOT___2007_)))) 
                                      >> 5U));
    vlSelf->top__DOT___1931_ = ((7U & (IData)(vlSelf->top__DOT___1931_)) 
                                | (8U & (((((IData)(vlSelf->top__DOT___0277_) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(vlSelf->top__DOT___0320_)))) 
                                          + (1U | (6U 
                                                   & (IData)(vlSelf->top__DOT___2007_)))) 
                                         << 1U)));
    vlSelf->top__DOT___1254_ = (1U & (((0x20U | (((IData)(vlSelf->top__DOT___0438_) 
                                                  << 8U) 
                                                 | ((0x80U 
                                                     & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                        << 7U)) 
                                                    | (((IData)(vlSelf->top__DOT___0134_) 
                                                        << 6U) 
                                                       | (((IData)(vlSelf->top__DOT___0132_) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT___0277_) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (~ (IData)(vlSelf->top__DOT___0320_))))))))) 
                                       + (1U | (0x1feU 
                                                & (IData)(vlSelf->top__DOT___2007_)))) 
                                      >> 8U));
    vlSelf->top__DOT___0468_ = (1U & (((0x20U | ((0x80U 
                                                  & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                     << 7U)) 
                                                 | (((IData)(vlSelf->top__DOT___0134_) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->top__DOT___0132_) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT___0277_) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (~ (IData)(vlSelf->top__DOT___0320_)))))))) 
                                       + (1U | (0xfeU 
                                                & (IData)(vlSelf->top__DOT___2007_)))) 
                                      >> 7U));
    vlSelf->top__DOT___1308_ = (1U & (((((IData)(vlSelf->top__DOT___0277_) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelf->top__DOT___0320_)))) 
                                       + (1U | (2U 
                                                & (IData)(vlSelf->top__DOT___2007_)))) 
                                      >> 1U));
    __Vtemp_49[0U] = (IData)((((QData)((IData)(((0xfc000000U 
                                                 & ((vlSelf->top__DOT___2121_[1U] 
                                                     << 0x1eU) 
                                                    | (0x3c000000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)))) 
                                                | ((0x2000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3747_ 
                                                                >> 0x1bU)) 
                                                       << 0x19U)) 
                                                   | ((0x1f00000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)) 
                                                      | ((0x80000U 
                                                          & (vlSelf->top__DOT___2031_[2U] 
                                                             << 0x11U)) 
                                                         | ((0x40000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3747_ 
                                                                         >> 0x14U)) 
                                                                << 0x12U)) 
                                                            | ((0x20000U 
                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                   << 0x11U)) 
                                                               | ((0x10000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3747_ 
                                                                               >> 0x12U)) 
                                                                      << 0x10U)) 
                                                                  | ((0x8000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                         << 0xfU)) 
                                                                     | ((0x7f00U 
                                                                         & (vlSelf->top__DOT___2031_[1U] 
                                                                            >> 0xfU)) 
                                                                        | ((0x80U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                               << 7U)) 
                                                                           | ((0x40U 
                                                                               & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                               << 2U) | (QData)((IData)(
                                                        (3U 
                                                         & vlSelf->top__DOT___2121_[0U])))));
    __Vtemp_49[1U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       << 2U) | (IData)(((((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & ((vlSelf->top__DOT___2121_[1U] 
                                                                 << 0x1eU) 
                                                                | (0x3c000000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)))) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3747_ 
                                                                            >> 0x1bU)) 
                                                                   << 0x19U)) 
                                                               | ((0x1f00000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->top__DOT___2031_[2U] 
                                                                         << 0x11U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                            << 0x12U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->top__DOT___2031_[2U] 
                                                                               << 0x11U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x10U)) 
                                                                              | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (3U 
                                                                     & vlSelf->top__DOT___2121_[0U])))) 
                                         >> 0x20U)));
    __Vtemp_49[2U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (vlSelf->in_data[0x41U] 
                                                                   >> 4U)))) 
                                               << 0xaU) 
                                              | (QData)((IData)(
                                                                ((0x3e0U 
                                                                  & (vlSelf->top__DOT___2121_[1U] 
                                                                     >> 2U)) 
                                                                 | ((0x10U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                        << 4U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1346_) 
                                                                        << 3U) 
                                                                       | ((6U 
                                                                           & (vlSelf->top__DOT___2121_[1U] 
                                                                              >> 2U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)))))))))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp_50[0U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       << 0x14U) | (((IData)(vlSelf->top__DOT___0241_) 
                                     << 0xeU) | (((IData)(vlSelf->top__DOT___1716_) 
                                                  << 0xbU) 
                                                 | ((0x400U 
                                                     & (vlSelf->top__DOT___1996_ 
                                                        << 6U)) 
                                                    | (((IData)(vlSelf->top__DOT___1365_) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->top__DOT___0154_) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->top__DOT___1716_) 
                                                              << 5U) 
                                                             | ((0x10U 
                                                                 & vlSelf->top__DOT___1996_) 
                                                                | (((IData)(vlSelf->top__DOT___1365_) 
                                                                    << 3U) 
                                                                   | ((IData)(vlSelf->top__DOT___0154_) 
                                                                      << 2U))))))))));
    __Vtemp_50[1U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       >> 0xcU) | ((IData)(((0x1ffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->in_data[0x35U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->in_data[0x34U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->in_data[0x33U])) 
                                                      >> 0x1cU)))) 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp_50[2U] = ((IData)(((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU)))) 
                               >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_51, __Vtemp_49, __Vtemp_50);
    __Vtemp_54[0U] = (IData)((((QData)((IData)(((0xfc000000U 
                                                 & ((vlSelf->top__DOT___2121_[1U] 
                                                     << 0x1eU) 
                                                    | (0x3c000000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)))) 
                                                | ((0x2000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3747_ 
                                                                >> 0x1bU)) 
                                                       << 0x19U)) 
                                                   | ((0x1f00000U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 2U)) 
                                                      | ((0x80000U 
                                                          & (vlSelf->top__DOT___2031_[2U] 
                                                             << 0x11U)) 
                                                         | ((0x40000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3747_ 
                                                                         >> 0x14U)) 
                                                                << 0x12U)) 
                                                            | ((0x20000U 
                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                   << 0x11U)) 
                                                               | ((0x10000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3747_ 
                                                                               >> 0x12U)) 
                                                                      << 0x10U)) 
                                                                  | ((0x8000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                         << 0xfU)) 
                                                                     | ((0x7f00U 
                                                                         & (vlSelf->top__DOT___2031_[1U] 
                                                                            >> 0xfU)) 
                                                                        | ((0x80U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                               << 7U)) 
                                                                           | ((0x40U 
                                                                               & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                               << 2U) | (QData)((IData)(
                                                        (3U 
                                                         & vlSelf->top__DOT___2121_[0U])))));
    __Vtemp_54[1U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       << 2U) | (IData)(((((QData)((IData)(
                                                           ((0xfc000000U 
                                                             & ((vlSelf->top__DOT___2121_[1U] 
                                                                 << 0x1eU) 
                                                                | (0x3c000000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)))) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3747_ 
                                                                            >> 0x1bU)) 
                                                                   << 0x19U)) 
                                                               | ((0x1f00000U 
                                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->top__DOT___2031_[2U] 
                                                                         << 0x11U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                            << 0x12U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->top__DOT___2031_[2U] 
                                                                               << 0x11U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x10U)) 
                                                                              | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xfU)))))))))))))))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (3U 
                                                                     & vlSelf->top__DOT___2121_[0U])))) 
                                         >> 0x20U)));
    __Vtemp_54[2U] = (((IData)((((QData)((IData)((0x1ffffffU 
                                                  & (vlSelf->in_data[0x41U] 
                                                     >> 4U)))) 
                                 << 0xaU) | (QData)((IData)(
                                                            ((0x3e0U 
                                                              & (vlSelf->top__DOT___2121_[1U] 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3747_ 
                                                                             >> 0x26U)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                    << 3U) 
                                                                   | ((6U 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 2U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))))))))) 
                       >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (vlSelf->in_data[0x41U] 
                                                                   >> 4U)))) 
                                               << 0xaU) 
                                              | (QData)((IData)(
                                                                ((0x3e0U 
                                                                  & (vlSelf->top__DOT___2121_[1U] 
                                                                     >> 2U)) 
                                                                 | ((0x10U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                        << 4U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1346_) 
                                                                        << 3U) 
                                                                       | ((6U 
                                                                           & (vlSelf->top__DOT___2121_[1U] 
                                                                              >> 2U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)))))))))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp_55[0U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       << 0x14U) | (((IData)(vlSelf->top__DOT___0241_) 
                                     << 0xeU) | (((IData)(vlSelf->top__DOT___1716_) 
                                                  << 0xbU) 
                                                 | ((0x400U 
                                                     & (vlSelf->top__DOT___1996_ 
                                                        << 6U)) 
                                                    | (((IData)(vlSelf->top__DOT___1365_) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->top__DOT___0154_) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->top__DOT___1716_) 
                                                              << 5U) 
                                                             | ((0x10U 
                                                                 & vlSelf->top__DOT___1996_) 
                                                                | (((IData)(vlSelf->top__DOT___1365_) 
                                                                    << 3U) 
                                                                   | ((IData)(vlSelf->top__DOT___0154_) 
                                                                      << 2U))))))))));
    __Vtemp_55[1U] = (((IData)((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU))))) 
                       >> 0xcU) | ((IData)(((0x1ffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->in_data[0x35U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->in_data[0x34U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->in_data[0x33U])) 
                                                      >> 0x1cU)))) 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp_55[2U] = ((IData)(((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU)))) 
                               >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_56, __Vtemp_54, __Vtemp_55);
    vlSelf->top__DOT___1972_ = (0x40U | ((0x3c00000U 
                                          & __Vtemp_51[1U]) 
                                         | (((IData)(vlSelf->top__DOT___1687_) 
                                             << 0x15U) 
                                            | ((0x1ff800U 
                                                & __Vtemp_56[1U]) 
                                               | (((IData)(vlSelf->top__DOT___0343_) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->top__DOT___0636_) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->top__DOT___0678_) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->top__DOT___0438_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___0589_) 
                                                               << 5U) 
                                                              | (((IData)(vlSelf->top__DOT___0739_) 
                                                                  << 4U) 
                                                                 | ((8U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                        << 3U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0639_) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->top__DOT___0287_)))))))))))));
    vlSelf->top__DOT___0560_ = (1U & (~ (((IData)(vlSelf->top__DOT___0065_) 
                                          & (IData)(vlSelf->top__DOT___0091_)) 
                                         | ((IData)(vlSelf->top__DOT___0505_) 
                                            & (IData)(vlSelf->top__DOT___0404_)))));
    vlSelf->top__DOT___1912_ = ((0x1fffffffffULL & vlSelf->top__DOT___1912_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0289_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___0404_) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSelf->top__DOT___0272_))))))) 
                                   << 0x25U));
    vlSelf->top__DOT___0469_ = (1U & (~ (((IData)((vlSelf->top__DOT___3769_ 
                                                   >> 4U)) 
                                          & (IData)(vlSelf->top__DOT___0320_)) 
                                         | ((IData)(vlSelf->top__DOT___0468_) 
                                            & (IData)(vlSelf->top__DOT___1046_)))));
    vlSelf->top__DOT___2006_ = (((IData)(vlSelf->top__DOT___1254_) 
                                 << 8U) | (((IData)(vlSelf->top__DOT___0468_) 
                                            << 7U) 
                                           | ((0x40U 
                                               & ((0x20U 
                                                   | (((IData)(vlSelf->top__DOT___0134_) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->top__DOT___0132_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___0277_) 
                                                             << 1U) 
                                                            | (1U 
                                                               & (~ (IData)(vlSelf->top__DOT___0320_))))))) 
                                                  + 
                                                  (1U 
                                                   | (0x7eU 
                                                      & (IData)(vlSelf->top__DOT___2007_))))) 
                                              | (((IData)(vlSelf->top__DOT___0404_) 
                                                  << 5U) 
                                                 | ((0x18U 
                                                     & ((((IData)(vlSelf->top__DOT___0132_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___0277_) 
                                                             << 1U) 
                                                            | (1U 
                                                               & (~ (IData)(vlSelf->top__DOT___0320_))))) 
                                                        + 
                                                        (1U 
                                                         | (0x1eU 
                                                            & (IData)(vlSelf->top__DOT___2007_))))) 
                                                    | ((4U 
                                                        & ((IData)(vlSelf->top__DOT___1931_) 
                                                           >> 1U)) 
                                                       | (((IData)(vlSelf->top__DOT___1308_) 
                                                           << 1U) 
                                                          | (1U 
                                                             & ((IData)(1U) 
                                                                + 
                                                                (~ (IData)(vlSelf->top__DOT___0320_)))))))))));
    vlSelf->top__DOT___1113_ = (1U & (~ (((IData)(vlSelf->top__DOT___0343_) 
                                          & (IData)(vlSelf->top__DOT___1309_)) 
                                         | ((IData)(vlSelf->top__DOT___1308_) 
                                            & (IData)(vlSelf->top__DOT___0197_)))));
    vlSelf->top__DOT___0564_ = (1U & ((((0x40000U & 
                                         ((IData)((vlSelf->top__DOT___2041_ 
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
                                              | ((0xc000U 
                                                  & (vlSelf->top__DOT___2114_ 
                                                     >> 0xaU)) 
                                                 | (((IData)(vlSelf->top__DOT___0043_) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->top__DOT___0219_) 
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
                                                                                & (~ (IData)(vlSelf->top__DOT___0106_)))))))))))))))))))) 
                                       + ((0x60000U 
                                           & (vlSelf->top__DOT___1972_ 
                                              << 1U)) 
                                          | (((IData)(vlSelf->top__DOT___0095_) 
                                              << 0x10U) 
                                             | ((0x8000U 
                                                 & ((~ (IData)(vlSelf->top__DOT___0205_)) 
                                                    << 0xfU)) 
                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                    << 0xeU) 
                                                   | (((IData)(vlSelf->top__DOT___1203_) 
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
                                                                                | (IData)(vlSelf->top__DOT___0775_))))))))))))))))) 
                                      >> 0x12U));
    vlSelf->top__DOT___1112_ = (1U & (~ (((IData)(vlSelf->top__DOT___0335_) 
                                          & (IData)(vlSelf->top__DOT___1113_)) 
                                         | (IData)(vlSelf->top__DOT___0166_))));
    vlSelf->top__DOT___1315_ = (1U & (~ (((IData)(vlSelf->top__DOT___0094_) 
                                          & (IData)(vlSelf->top__DOT___1113_)) 
                                         | ((~ (IData)(vlSelf->top__DOT___0205_)) 
                                            & (IData)(vlSelf->top__DOT___0219_)))));
    vlSelf->top__DOT___1650_ = ((IData)(vlSelf->top__DOT___1112_) 
                                | (IData)(vlSelf->top__DOT___1651_));
    vlSelf->top__DOT___1130_ = ((IData)(vlSelf->top__DOT___0193_) 
                                | (IData)(vlSelf->top__DOT___1315_));
}
