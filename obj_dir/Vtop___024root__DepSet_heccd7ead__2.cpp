// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__201(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__201\n"); );
    // Body
    vlSelf->top__DOT___1036_ = (1U & (~ (((IData)(vlSelf->top__DOT___0264_) 
                                          & (IData)(vlSelf->top__DOT___0458_)) 
                                         | (IData)(vlSelf->top__DOT___1037_))));
    vlSelf->top__DOT___1196_ = (1U & (~ ((((IData)(vlSelf->top__DOT___1336_) 
                                           ^ (IData)(vlSelf->top__DOT___0219_)) 
                                          & (IData)(vlSelf->top__DOT___1025_)) 
                                         | (IData)(vlSelf->top__DOT___1036_))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__202(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__202\n"); );
    // Body
    vlSelf->top__DOT___2137_ = (7U & ((IData)((vlSelf->top__DOT___2052_ 
                                               >> 4U)) 
                                      + (((IData)(vlSelf->top__DOT___1037_) 
                                          << 2U) | 
                                         (((IData)(vlSelf->top__DOT___1567_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0242_)))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__203(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__203\n"); );
    // Body
    vlSelf->top__DOT___2096_ = (0xffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___1984_ 
                                                                                >> 0x27U))))) 
                                                     << 0x25U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3791_ 
                                                                                >> 0x18U))))) 
                                                        << 0x24U) 
                                                       | (((QData)((IData)(
                                                                           (3U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___1984_ 
                                                                                >> 0x24U))))) 
                                                           << 0x22U) 
                                                          | (((QData)((IData)(
                                                                              (((IData)(
                                                                                (vlSelf->top__DOT___3791_ 
                                                                                >> 0x15U)) 
                                                                                << 0x1fU) 
                                                                               | ((0x7fc00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1984_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1005_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0057_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___1044_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0808_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3688_ 
                                                                                << 1U)) 
                                                                                | ((0x1fffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2098_ 
                                                                                >> 3U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0289_))))))))))) 
                                                              << 2U) 
                                                             | (QData)((IData)(
                                                                               (1U 
                                                                                | ((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 1U)))))))) 
                                                   + 
                                                   ((0xffffffffe0ULL 
                                                     & vlSelf->top__DOT___2097_) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->top__DOT___1037_) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->top__DOT___1567_) 
                                                                           << 3U) 
                                                                          | ((4U 
                                                                              & ((IData)(vlSelf->top__DOT___3775_) 
                                                                                >> 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0032_))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__204(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__204\n"); );
    // Body
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__205(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__205\n"); );
    // Body
    vlSelf->top__DOT___1933_ = ((0x7ffffU & vlSelf->top__DOT___1933_) 
                                | ((0x20000000U & (
                                                   vlSelf->out_data[0x11U] 
                                                   << 0x1dU)) 
                                   | (0x1ff80000U & 
                                      (((((IData)(vlSelf->top__DOT___0604_) 
                                          << 9U) | 
                                         ((0x100U & 
                                           (vlSelf->top__DOT___1976_[0U] 
                                            << 1U)) 
                                          | (((IData)(vlSelf->top__DOT___0945_) 
                                              << 7U) 
                                             | ((0x40U 
                                                 & (vlSelf->top__DOT___1976_[0U] 
                                                    << 1U)) 
                                                | (((IData)(vlSelf->top__DOT___0602_) 
                                                    << 5U) 
                                                   | ((0x1eU 
                                                       & (vlSelf->top__DOT___1976_[0U] 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->top__DOT___0857_))))))) 
                                        + ((0x300U 
                                            & (vlSelf->top__DOT___2058_[0U] 
                                               >> 0xeU)) 
                                           | ((0x80U 
                                               & ((~ (IData)(vlSelf->top__DOT___0044_)) 
                                                  << 7U)) 
                                              | (((IData)(vlSelf->top__DOT___0752_) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->top__DOT___0057_) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->top__DOT___0652_) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT___0290_) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->top__DOT___0253_) 
                                                              << 2U) 
                                                             | ((2U 
                                                                 & ((IData)(vlSelf->top__DOT___3732_) 
                                                                    >> 3U)) 
                                                                | (IData)(vlSelf->top__DOT___0234_)))))))))) 
                                       << 0x13U))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__206(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__206\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_22;
    VlWide<5>/*159:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<6>/*191:0*/ __Vtemp_28;
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
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__207(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__207\n"); );
    // Body
    vlSelf->top__DOT___1574_ = (1U & (~ (((IData)(vlSelf->top__DOT___1196_) 
                                          & (IData)(vlSelf->top__DOT___0900_)) 
                                         | ((IData)(vlSelf->top__DOT___1501_) 
                                            & (IData)(vlSelf->top__DOT___1575_)))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__208(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__208\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<6>/*191:0*/ __Vtemp_32;
    // Body
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
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1634_)) 
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
    __Vtemp_1[1U] = (((IData)((vlSelf->top__DOT___1895_ 
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
    __Vtemp_7[2U] = ((0x2000000U & ((IData)((vlSelf->top__DOT___3740_ 
                                             >> 0x22U)) 
                                    << 0x19U)) | ((0x1000000U 
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
    __Vtemp_25[3U] = ((0x100000U & ((IData)((vlSelf->top__DOT___3655_ 
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
    __Vtemp_32[4U] = ((0x80000000U & ((IData)(vlSelf->top__DOT___2045_) 
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
    vlSelf->top__DOT___2101_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___2101_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2101_[2U] = (0x40000000U | (
                                                   ((IData)(vlSelf->top__DOT___0683_) 
                                                    << 0x1fU) 
                                                   | ((0x3c000000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___3740_ 
                                                                   >> 0x23U)) 
                                                          << 0x1aU)) 
                                                      | __Vtemp_7[2U])));
    vlSelf->top__DOT___2101_[3U] = (((IData)((vlSelf->top__DOT___2012_ 
                                              >> 2U)) 
                                     << 0x15U) | __Vtemp_25[3U]);
    vlSelf->top__DOT___2101_[4U] = __Vtemp_32[4U];
    vlSelf->top__DOT___2101_[5U] = ((0x38U & ((IData)(
                                                      (vlSelf->top__DOT___3655_ 
                                                       >> 0x39U)) 
                                              << 3U)) 
                                    | (7U & ((IData)(vlSelf->top__DOT___2045_) 
                                             >> 6U)));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__209(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__209\n"); );
    // Body
    vlSelf->top__DOT___1991_ = (((QData)((IData)((0x1ffU 
                                                  & (IData)(
                                                            (0x1ffULL 
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
                                                                >> 0x24U)))))) 
                                 << 0x2fU) | (((QData)((IData)(vlSelf->top__DOT___1193_)) 
                                               << 0x2eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___1553_)) 
                                                  << 0x2dU) 
                                                 | (((QData)((IData)(
                                                                     (3U 
                                                                      & (IData)(
                                                                                (0x1fffULL 
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
                                                                                >> 0x20U)))))) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0219_)) 
                                                        << 0x2aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___0887_)) 
                                                           << 0x29U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (~ (IData)(vlSelf->top__DOT___0320_))))) 
                                                              << 0x28U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___0477_)) 
                                                                 << 0x27U) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___0019_)) 
                                                                    << 0x26U) 
                                                                   | (((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & ((vlSelf->top__DOT___1951_[5U] 
                                                                                << 1U) 
                                                                                | (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 0x1fU))))) 
                                                                       << 0x1bU) 
                                                                      | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1255_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3f80000U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1276_) 
                                                                                << 0x12U) 
                                                                                | ((0x3f000U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1042_) 
                                                                                << 0xbU) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0124_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0929_) 
                                                                                << 5U) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0678_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1007_)))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__210(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__210\n"); );
    // Body
    vlSelf->top__DOT___2036_ = ((0x1c000U & (((0x18000U 
                                               & (vlSelf->top__DOT___1995_ 
                                                  << 1U)) 
                                              | (((IData)(vlSelf->top__DOT___0224_) 
                                                  << 0xeU) 
                                                 | ((0x3f80U 
                                                     & (vlSelf->top__DOT___1995_ 
                                                        << 1U)) 
                                                    | (((IData)(vlSelf->top__DOT___1242_) 
                                                        << 6U) 
                                                       | ((0x3cU 
                                                           & (vlSelf->top__DOT___1995_ 
                                                              << 1U)) 
                                                          | (((IData)(vlSelf->top__DOT___0057_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0175_))))))) 
                                             + ((0x10000U 
                                                 & (vlSelf->top__DOT___2022_ 
                                                    << 0xaU)) 
                                                | ((0x8000U 
                                                    & ((IData)(vlSelf->top__DOT___3658_) 
                                                       << 0xaU)) 
                                                   | (((IData)(vlSelf->top__DOT___0841_) 
                                                       << 0xeU) 
                                                      | (((IData)(vlSelf->top__DOT___0071_) 
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
                                                                           & (IData)(vlSelf->top__DOT___3775_))))))))))))) 
                                | (((IData)(vlSelf->top__DOT___0509_) 
                                    << 0xdU) | (((IData)(vlSelf->top__DOT___0236_) 
                                                 << 0xcU) 
                                                | ((0xff8U 
                                                    & (((0xf80U 
                                                         & (vlSelf->top__DOT___1995_ 
                                                            << 1U)) 
                                                        | (((IData)(vlSelf->top__DOT___1242_) 
                                                            << 6U) 
                                                           | ((0x3cU 
                                                               & (vlSelf->top__DOT___1995_ 
                                                                  << 1U)) 
                                                              | (((IData)(vlSelf->top__DOT___0057_) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->top__DOT___0175_))))) 
                                                       + 
                                                       ((0x700U 
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
                                                   | (((IData)(vlSelf->top__DOT___1715_) 
                                                       << 2U) 
                                                      | (3U 
                                                         & ((((IData)(vlSelf->top__DOT___0057_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0175_)) 
                                                            + 
                                                            ((2U 
                                                              & (vlSelf->top__DOT___1981_ 
                                                                 >> 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelf->top__DOT___3775_))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__211(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__211\n"); );
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
    vlSelf->top__DOT___2163_ = (((QData)((IData)((0x3ffffU 
                                                  & (vlSelf->top__DOT___3706_[1U] 
                                                     >> 1U)))) 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1000000U 
                                                              | (((IData)(vlSelf->top__DOT___1228_) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->top__DOT___0748_) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->top__DOT___1655_) 
                                                                        << 0x15U) 
                                                                       | ((0x100000U 
                                                                           & ((~ (IData)(vlSelf->top__DOT___0044_)) 
                                                                              << 0x14U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0703_) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->top__DOT___1088_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___1064_)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0358_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0936_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1090_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0323_) 
                                                                                << 0xbU) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_he0fce8ea__0)))))))))))))))));
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__212(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__212\n"); );
    // Body
    vlSelf->top__DOT___2042_ = ((0x1ffeU & (((0x1ffcU 
                                              & (IData)(vlSelf->top__DOT___2043_)) 
                                             | (((IData)(vlSelf->top__DOT___0605_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0226_))) 
                                            + ((0x1000U 
                                                & (vlSelf->top__DOT___2036_ 
                                                   >> 2U)) 
                                               | (((IData)(vlSelf->top__DOT___0509_) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->top__DOT___0236_) 
                                                      << 0xaU) 
                                                     | ((0x3feU 
                                                         & (vlSelf->top__DOT___2036_ 
                                                            >> 2U)) 
                                                        | (IData)(vlSelf->top__DOT___1715_))))))) 
                                | (IData)(vlSelf->top__DOT___1532_));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__213(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__213\n"); );
    // Body
    vlSelf->top__DOT___1988_ = (((QData)((IData)((0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___3670_ 
                                                             >> 8U))))) 
                                 << 0x33U) | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3670_ 
                                                                           >> 7U))))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___3670_ 
                                                                              >> 6U))))) 
                                                  << 0x31U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3670_ 
                                                                                >> 5U))))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3670_ 
                                                                                >> 3U))))) 
                                                        << 0x2eU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3670_ 
                                                                                >> 2U))))) 
                                                           << 0x2dU) 
                                                          | (((QData)((IData)(
                                                                              (3U 
                                                                               & (IData)(vlSelf->top__DOT___3670_)))) 
                                                              << 0x2bU) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___0277_)) 
                                                                 << 0x2aU) 
                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (((0x8000U 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 0x15U) 
                                                                                | ((0x1c0000U 
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
                                                                                | (IData)(vlSelf->top__DOT___0226_))))))))))))))))) 
                                                                                + 
                                                                                (2U 
                                                                                | (((IData)(vlSelf->top__DOT___0514_) 
                                                                                << 0x16U) 
                                                                                | ((0x380000U 
                                                                                & vlSelf->top__DOT___2031_[0U]) 
                                                                                | ((0x40000U 
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
                                                                                << 2U)))))))))) 
                                                                                >> 0x13U)))) 
                                                                    << 0x26U) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___0130_)) 
                                                                       << 0x25U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((0x8000U 
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
                                                                                | (IData)(vlSelf->top__DOT___0226_)))))))))))))) 
                                                                                + 
                                                                                (2U 
                                                                                | ((0x20000U 
                                                                                & vlSelf->top__DOT___2031_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xfU) 
                                                                                | ((0x7ff8U 
                                                                                & vlSelf->top__DOT___2031_[0U]) 
                                                                                | ((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 2U))))))) 
                                                                                >> 0x11U)))) 
                                                                          << 0x24U) 
                                                                         | (((QData)((IData)(vlSelf->top__DOT___0725_)) 
                                                                             << 0x23U) 
                                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (((0x8000U 
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
                                                                                | (IData)(vlSelf->top__DOT___0226_))))))))))))) 
                                                                                + 
                                                                                (2U 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xfU) 
                                                                                | ((0x7ff8U 
                                                                                & vlSelf->top__DOT___2031_[0U]) 
                                                                                | ((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 2U))))) 
                                                                                >> 8U)))) 
                                                                                << 0x1bU) 
                                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1406_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___1175_) 
                                                                                << 0x19U) 
                                                                                | ((0x1000000U 
                                                                                & ((((0x20U 
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
                                                                                | (IData)(vlSelf->top__DOT___0226_)))))) 
                                                                                + 
                                                                                (2U 
                                                                                | ((0x38U 
                                                                                & vlSelf->top__DOT___2031_[0U]) 
                                                                                | ((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 2U)))) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0921_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((((8U 
                                                                                & (vlSelf->top__DOT___1964_[1U] 
                                                                                >> 8U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3810_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0226_)))) 
                                                                                + 
                                                                                (2U 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT___2031_[0U]) 
                                                                                | ((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 2U)))) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1819_) 
                                                                                << 0x15U) 
                                                                                | ((0x180000U 
                                                                                & (((IData)(2U) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0226_))) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0697_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0690_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___1964_[2U] 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 2U)) 
                                                                                | ((0x2000U 
                                                                                & (IData)(vlSelf->top__DOT___1888_)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 2U)) 
                                                                                | ((0x7e0U 
                                                                                & (IData)(vlSelf->top__DOT___1888_)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___1964_[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                << 2U)) 
                                                                                | ((IData)(vlSelf->top__DOT___0589_) 
                                                                                << 1U))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__214(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__214\n"); );
    // Body
    vlSelf->top__DOT___1007_ = (1U & ((((0xe0U & ((IData)(vlSelf->top__DOT___2010_) 
                                                  << 4U)) 
                                        | (((IData)(vlSelf->top__DOT___0240_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT___0197_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0232_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0893_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0154_)))))) 
                                       + (((IData)(vlSelf->top__DOT___0206_) 
                                           << 7U) | 
                                          ((0x40U & 
                                            (vlSelf->top__DOT___2031_[1U] 
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
                                                    & vlSelf->top__DOT___2121_[0U])))))) 
                                      >> 7U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__215(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__215\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_42;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & 
                                               ((IData)(vlSelf->top__DOT___1986_) 
                                                >> 1U)))) 
                              << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0095_)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelf->top__DOT___0106_))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0241_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0x3ffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x18U))))) 
                                                     << 0x32U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U))))) 
                                                        << 0x31U) 
                                                       | (((QData)((IData)(
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x14U))))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x13U))))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U))))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___0391_)) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 9U))))) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 8U))))) 
                                                                          << 0x22U) 
                                                                         | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 5U))))) 
                                                                             << 0x1fU) 
                                                                            | (QData)((IData)(
                                                                                ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 4U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x38000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 1U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3769_) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x15U) 
                                                                                | ((0x180000U 
                                                                                & (((0x1c0000U 
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
                                                                                + 
                                                                                ((0x1e0000U 
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
                                                                                | (IData)(vlSelf->top__DOT___0775_)))))))))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0x12U) 
                                                                                | ((0x3c000U 
                                                                                & (((0x20000U 
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
                                                                                & (~ (IData)(vlSelf->top__DOT___0106_))))))))))))))))))) 
                                                                                + 
                                                                                ((0x20000U 
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
                                                                                | (IData)(vlSelf->top__DOT___0775_)))))))))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xdU) 
                                                                                | ((0x1f00U 
                                                                                & (IData)(vlSelf->top__DOT___1939_)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___1939_)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & ((((IData)(vlSelf->top__DOT___1206_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0058_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1211_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0106_))))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0674_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0610_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & (IData)(vlSelf->top__DOT___2067_)) 
                                                                                | (IData)(vlSelf->top__DOT___0775_)))))) 
                                                                                | (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1373_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                                                + (IData)(vlSelf->top__DOT___0775_)))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((1U 
                                                & ((IData)(vlSelf->top__DOT___1986_) 
                                                   >> 1U)))) 
                               << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0095_)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->top__DOT___0106_))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0241_)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0x3ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x18U))))) 
                                                      << 0x32U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U))))) 
                                                         << 0x31U) 
                                                        | (((QData)((IData)(
                                                                            (7U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x14U))))) 
                                                            << 0x2eU) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x13U))))) 
                                                               << 0x2dU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U))))) 
                                                                  << 0x2cU) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___0391_)) 
                                                                     << 0x2bU) 
                                                                    | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 9U))))) 
                                                                        << 0x23U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 8U))))) 
                                                                           << 0x22U) 
                                                                          | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 5U))))) 
                                                                              << 0x1fU) 
                                                                             | (QData)((IData)(
                                                                                ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 4U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x38000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 1U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3769_) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x15U) 
                                                                                | ((0x180000U 
                                                                                & (((0x1c0000U 
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
                                                                                + 
                                                                                ((0x1e0000U 
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
                                                                                | (IData)(vlSelf->top__DOT___0775_)))))))))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0x12U) 
                                                                                | ((0x3c000U 
                                                                                & (((0x20000U 
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
                                                                                & (~ (IData)(vlSelf->top__DOT___0106_))))))))))))))))))) 
                                                                                + 
                                                                                ((0x20000U 
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
                                                                                | (IData)(vlSelf->top__DOT___0775_)))))))))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xdU) 
                                                                                | ((0x1f00U 
                                                                                & (IData)(vlSelf->top__DOT___1939_)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___1939_)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & ((((IData)(vlSelf->top__DOT___1206_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0058_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1211_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0106_))))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0674_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0610_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & (IData)(vlSelf->top__DOT___2067_)) 
                                                                                | (IData)(vlSelf->top__DOT___0775_)))))) 
                                                                                | (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1373_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                                                + (IData)(vlSelf->top__DOT___0775_)))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_13[2U] = (((IData)(vlSelf->top__DOT___0082_) 
                       << 0xdU) | (((IData)(vlSelf->top__DOT___0152_) 
                                    << 0xcU) | (((IData)(vlSelf->top__DOT___0477_) 
                                                 << 0xbU) 
                                                | ((0x100U 
                                                    & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                       << 8U)) 
                                                   | (((IData)(vlSelf->top__DOT___0057_) 
                                                       << 7U) 
                                                      | ((0x40U 
                                                          & (vlSelf->top__DOT___1951_[1U] 
                                                             << 5U)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->top__DOT___3642_) 
                                                                << 3U)) 
                                                            | ((0x10U 
                                                                & (vlSelf->top__DOT___1951_[0U] 
                                                                   >> 0x1bU)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT___3642_) 
                                                                      << 3U)) 
                                                                  | (((IData)(vlSelf->top__DOT___1225_) 
                                                                      << 2U) 
                                                                     | ((2U 
                                                                         & ((IData)(vlSelf->top__DOT___3820_) 
                                                                            >> 1U)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelf->top__DOT___3820_) 
                                                                              >> 1U)))))))))))));
    __Vtemp_18[2U] = ((0x7c00000U & ((((0x600U & (vlSelf->top__DOT___2082_ 
                                                  >> 0xfU)) 
                                       | ((0x100U & 
                                           (vlSelf->top__DOT___3651_[0U] 
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
                                                      | (IData)(vlSelf->top__DOT___0226_))))))) 
                                      + (((IData)(vlSelf->top__DOT___0152_) 
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
                                                                 | (IData)(vlSelf->top__DOT___0277_))))))))))) 
                                     << 0x10U)) | (
                                                   ((IData)(vlSelf->top__DOT___0737_) 
                                                    << 0x15U) 
                                                   | ((0x1f0000U 
                                                       & ((((0x10U 
                                                             & (vlSelf->top__DOT___2082_ 
                                                                >> 0xfU)) 
                                                            | ((8U 
                                                                & (vlSelf->top__DOT___3651_[0U] 
                                                                   >> 0x16U)) 
                                                               | (((IData)(vlSelf->top__DOT___0265_) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->top__DOT___0320_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___0226_))))) 
                                                           + 
                                                           ((0x10U 
                                                             & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                << 4U)) 
                                                            | (((IData)(vlSelf->top__DOT___0733_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___0043_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___0277_))))) 
                                                          << 0x10U)) 
                                                      | (((IData)(vlSelf->top__DOT___0401_) 
                                                          << 0xfU) 
                                                         | (((IData)(vlSelf->top__DOT___0105_) 
                                                             << 0xeU) 
                                                            | __Vtemp_13[2U])))));
    __Vtemp_20[2U] = (((IData)((0xffffffffULL & (((
                                                   ((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___2105_ 
                                                                               >> 0x26U)) 
                                                                      << 0x1aU) 
                                                                     | ((0x3e00000U 
                                                                         & (vlSelf->top__DOT___2035_ 
                                                                            << 2U)) 
                                                                        | ((0x100000U 
                                                                            & (vlSelf->top__DOT___3651_[1U] 
                                                                               >> 2U)) 
                                                                           | ((0x80000U 
                                                                               & (vlSelf->top__DOT___3651_[1U] 
                                                                                >> 2U)) 
                                                                              | ((0x40000U 
                                                                                & (vlSelf->top__DOT___2035_ 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3651_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x1fff0U 
                                                                                & (vlSelf->top__DOT___2035_ 
                                                                                << 2U)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___2082_ 
                                                                                >> 0x1bU))))))))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
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
                                                                                | (IData)(vlSelf->top__DOT___0226_))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0x12U 
                                                                     | (((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x28U)) 
                                                                         << 0x1cU) 
                                                                        | (((IData)(vlSelf->top__DOT___0320_) 
                                                                            << 0x1bU) 
                                                                           | ((0x7c00000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x22U)) 
                                                                                << 0x16U)) 
                                                                              | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x19U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x1f8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x12U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x19U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x10U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xfU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xeU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x300U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x1fU)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0127_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1046_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___1283_))))))))))))))))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0152_) 
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
                                                                                | (IData)(vlSelf->top__DOT___0277_))))))))))))))) 
                                                 >> 0xcU))) 
                       << 0x1cU) | (((IData)(vlSelf->top__DOT___0313_) 
                                     << 0x1bU) | __Vtemp_18[2U]));
    __Vtemp_20[3U] = (1U & ((IData)((0xffffffffULL 
                                     & (((((QData)((IData)(
                                                           (((IData)(
                                                                     (vlSelf->top__DOT___2105_ 
                                                                      >> 0x26U)) 
                                                             << 0x1aU) 
                                                            | ((0x3e00000U 
                                                                & (vlSelf->top__DOT___2035_ 
                                                                   << 2U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->top__DOT___3651_[1U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->top__DOT___3651_[1U] 
                                                                         >> 2U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->top__DOT___2035_ 
                                                                            << 2U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->top__DOT___3651_[1U] 
                                                                               >> 2U)) 
                                                                           | ((0x1fff0U 
                                                                               & (vlSelf->top__DOT___2035_ 
                                                                                << 2U)) 
                                                                              | (0xfU 
                                                                                & (vlSelf->top__DOT___2082_ 
                                                                                >> 0x1bU))))))))))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            ((0x800U 
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
                                                                               | (IData)(vlSelf->top__DOT___0226_))))))))))) 
                                         + (((QData)((IData)(
                                                             (0x12U 
                                                              | (((IData)(
                                                                          (vlSelf->top__DOT___2025_ 
                                                                           >> 0x28U)) 
                                                                  << 0x1cU) 
                                                                 | (((IData)(vlSelf->top__DOT___0320_) 
                                                                     << 0x1bU) 
                                                                    | ((0x7c00000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x22U)) 
                                                                           << 0x16U)) 
                                                                       | ((0x200000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x19U)) 
                                                                              << 0x15U)) 
                                                                          | ((0x1f8000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xfU)) 
                                                                             | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x12U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x19U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x10U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xfU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xeU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x300U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x1fU)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0127_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1046_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___1283_))))))))))))))))))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___0152_) 
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
                                                                                | (IData)(vlSelf->top__DOT___0277_))))))))))))))) 
                                        >> 0xcU))) 
                            >> 4U));
    __Vtemp_22[3U] = ((4U & ((IData)((0x3ffffffULL 
                                      & (((((QData)((IData)(
                                                            (((IData)(
                                                                      (vlSelf->top__DOT___2105_ 
                                                                       >> 0x26U)) 
                                                              << 0x1aU) 
                                                             | ((0x3e00000U 
                                                                 & (vlSelf->top__DOT___2035_ 
                                                                    << 2U)) 
                                                                | ((0x100000U 
                                                                    & (vlSelf->top__DOT___3651_[1U] 
                                                                       >> 2U)) 
                                                                   | ((0x80000U 
                                                                       & (vlSelf->top__DOT___3651_[1U] 
                                                                          >> 2U)) 
                                                                      | ((0x40000U 
                                                                          & (vlSelf->top__DOT___2035_ 
                                                                             << 2U)) 
                                                                         | ((0x20000U 
                                                                             & (vlSelf->top__DOT___3651_[1U] 
                                                                                >> 2U)) 
                                                                            | ((0x1fff0U 
                                                                                & (vlSelf->top__DOT___2035_ 
                                                                                << 2U)) 
                                                                               | (0xfU 
                                                                                & (vlSelf->top__DOT___2082_ 
                                                                                >> 0x1bU))))))))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             ((0x800U 
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
                                                                                | (IData)(vlSelf->top__DOT___0226_))))))))))) 
                                          + (((QData)((IData)(
                                                              (0x12U 
                                                               | (((IData)(
                                                                           (vlSelf->top__DOT___2025_ 
                                                                            >> 0x28U)) 
                                                                   << 0x1cU) 
                                                                  | (((IData)(vlSelf->top__DOT___0320_) 
                                                                      << 0x1bU) 
                                                                     | ((0x7c00000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x22U)) 
                                                                            << 0x16U)) 
                                                                        | ((0x200000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x19U)) 
                                                                               << 0x15U)) 
                                                                           | ((0x1f8000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xfU)) 
                                                                              | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x12U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x19U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x10U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xfU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xeU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x300U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x1fU)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0127_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1046_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___1283_))))))))))))))))))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0152_) 
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
                                                                                | (IData)(vlSelf->top__DOT___0277_))))))))))))))) 
                                         >> 0x12U))) 
                             << 2U)) | (((IData)(vlSelf->top__DOT___0113_) 
                                         << 1U) | __Vtemp_20[3U]));
    __Vtemp_24[3U] = ((0x7f0U & ((IData)((0xffffffULL 
                                          & (((((QData)((IData)(
                                                                (((IData)(
                                                                          (vlSelf->top__DOT___2105_ 
                                                                           >> 0x26U)) 
                                                                  << 0x1aU) 
                                                                 | ((0x3e00000U 
                                                                     & (vlSelf->top__DOT___2035_ 
                                                                        << 2U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->top__DOT___3651_[1U] 
                                                                           >> 2U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->top__DOT___3651_[1U] 
                                                                              >> 2U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->top__DOT___2035_ 
                                                                                << 2U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3651_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x1fff0U 
                                                                                & (vlSelf->top__DOT___2035_ 
                                                                                << 2U)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___2082_ 
                                                                                >> 0x1bU))))))))))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 ((0x800U 
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
                                                                                | (IData)(vlSelf->top__DOT___0226_))))))))))) 
                                              + (((QData)((IData)(
                                                                  (0x12U 
                                                                   | (((IData)(
                                                                               (vlSelf->top__DOT___2025_ 
                                                                                >> 0x28U)) 
                                                                       << 0x1cU) 
                                                                      | (((IData)(vlSelf->top__DOT___0320_) 
                                                                          << 0x1bU) 
                                                                         | ((0x7c00000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x22U)) 
                                                                                << 0x16U)) 
                                                                            | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x19U)) 
                                                                                << 0x15U)) 
                                                                               | ((0x1f8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x12U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x19U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x10U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xfU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xeU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x300U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x1fU)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0127_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1046_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___1283_))))))))))))))))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT___0152_) 
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
                                                                                | (IData)(vlSelf->top__DOT___0277_))))))))))))))) 
                                             >> 0x14U))) 
                                 << 4U)) | (((IData)(vlSelf->top__DOT___1506_) 
                                             << 3U) 
                                            | __Vtemp_22[3U]));
    __Vtemp_26[3U] = ((0xffff000U & ((IData)((0xffffULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___2105_ 
                                                                               >> 0x26U)) 
                                                                      << 0x1aU) 
                                                                     | ((0x3e00000U 
                                                                         & (vlSelf->top__DOT___2035_ 
                                                                            << 2U)) 
                                                                        | ((0x100000U 
                                                                            & (vlSelf->top__DOT___3651_[1U] 
                                                                               >> 2U)) 
                                                                           | ((0x80000U 
                                                                               & (vlSelf->top__DOT___3651_[1U] 
                                                                                >> 2U)) 
                                                                              | ((0x40000U 
                                                                                & (vlSelf->top__DOT___2035_ 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3651_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x1fff0U 
                                                                                & (vlSelf->top__DOT___2035_ 
                                                                                << 2U)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___2082_ 
                                                                                >> 0x1bU))))))))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
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
                                                                                | (IData)(vlSelf->top__DOT___0226_))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0x12U 
                                                                     | (((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x28U)) 
                                                                         << 0x1cU) 
                                                                        | (((IData)(vlSelf->top__DOT___0320_) 
                                                                            << 0x1bU) 
                                                                           | ((0x7c00000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x22U)) 
                                                                                << 0x16U)) 
                                                                              | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x19U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x1f8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x12U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x19U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x10U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xfU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xeU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x300U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x1fU)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0127_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1046_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___1283_))))))))))))))))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0152_) 
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
                                                                                | (IData)(vlSelf->top__DOT___0277_))))))))))))))) 
                                                 >> 0x1cU))) 
                                     << 0xcU)) | (((IData)(vlSelf->top__DOT___1361_) 
                                                   << 0xbU) 
                                                  | __Vtemp_24[3U]));
    vlSelf->top__DOT___2000_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___2000_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2000_[2U] = __Vtemp_20[2U];
    vlSelf->top__DOT___2000_[3U] = ((0x80000000U & 
                                     (vlSelf->top__DOT___1951_[1U] 
                                      << 0x1eU)) | 
                                    ((0x40000000U & 
                                      ((IData)(vlSelf->top__DOT___3642_) 
                                       << 0x1cU)) | 
                                     ((0x20000000U 
                                       & (vlSelf->top__DOT___1951_[0U] 
                                          >> 2U)) | 
                                      ((0x10000000U 
                                        & ((IData)(vlSelf->top__DOT___3642_) 
                                           << 0x1cU)) 
                                       | __Vtemp_26[3U]))));
    vlSelf->top__DOT___2000_[4U] = ((0x800U & ((IData)(
                                                       (vlSelf->top__DOT___1908_ 
                                                        >> 0xaU)) 
                                               << 0xbU)) 
                                    | ((0x400U & ((IData)(vlSelf->top__DOT___3620_) 
                                                  << 8U)) 
                                       | ((0x300U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT___1908_ 
                                                     >> 7U)) 
                                            << 8U)) 
                                          | (((IData)(vlSelf->top__DOT___0363_) 
                                              << 7U) 
                                             | (((IData)(vlSelf->top__DOT___0325_) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->top__DOT___0210_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___0155_) 
                                                       << 4U) 
                                                      | ((8U 
                                                          & ((IData)(vlSelf->top__DOT___1974_) 
                                                             << 3U)) 
                                                         | ((IData)(vlSelf->top__DOT___1007_) 
                                                            << 1U)))))))));
    vlSelf->top__DOT___1997_ = (7U & ((((0xfc000U & 
                                         (vlSelf->top__DOT___2000_[3U] 
                                          << 2U)) | 
                                        (((IData)(vlSelf->top__DOT___1361_) 
                                          << 0xdU) 
                                         | ((0x1fc0U 
                                             & (vlSelf->top__DOT___2000_[3U] 
                                                << 2U)) 
                                            | (((IData)(vlSelf->top__DOT___0152_) 
                                                << 5U) 
                                               | (((IData)(vlSelf->top__DOT___0287_) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top__DOT___0237_) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->top__DOT___0524_) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->top__DOT___0095_) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top__DOT___0354_))))))))) 
                                       + (1U | (((IData)(vlSelf->top__DOT___0058_) 
                                                 << 0x13U) 
                                                | ((0x7fe00U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___2040_ 
                                                                >> 0xbU)) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (vlSelf->top__DOT___3660_ 
                                                          << 1U)) 
                                                      | ((0x80U 
                                                          & (vlSelf->top__DOT___3660_ 
                                                             << 1U)) 
                                                         | ((0x40U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___2040_ 
                                                                         >> 8U)) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & (vlSelf->top__DOT___3660_ 
                                                                   << 1U)) 
                                                               | (0x1eU 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___2040_ 
                                                                              >> 3U)) 
                                                                     << 1U)))))))))) 
                                      >> 0x11U));
    vlSelf->top__DOT___0601_ = (1U & ((((0xffc000U 
                                         & (vlSelf->top__DOT___2000_[3U] 
                                            << 2U)) 
                                        | (((IData)(vlSelf->top__DOT___1361_) 
                                            << 0xdU) 
                                           | ((0x1fc0U 
                                               & (vlSelf->top__DOT___2000_[3U] 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->top__DOT___0152_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___0287_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___0237_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___0524_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___0095_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0354_))))))))) 
                                       + (0x400001U 
                                          | (((IData)(vlSelf->top__DOT___0438_) 
                                              << 0x17U) 
                                             | (((IData)(vlSelf->top__DOT___0586_) 
                                                 << 0x15U) 
                                                | (((IData)(vlSelf->top__DOT___0219_) 
                                                    << 0x14U) 
                                                   | (((IData)(vlSelf->top__DOT___0058_) 
                                                       << 0x13U) 
                                                      | ((0x7fe00U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___2040_ 
                                                                      >> 0xbU)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (vlSelf->top__DOT___3660_ 
                                                                << 1U)) 
                                                            | ((0x80U 
                                                                & (vlSelf->top__DOT___3660_ 
                                                                   << 1U)) 
                                                               | ((0x40U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___2040_ 
                                                                               >> 8U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (vlSelf->top__DOT___3660_ 
                                                                         << 1U)) 
                                                                     | (0x1eU 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 3U)) 
                                                                           << 1U))))))))))))) 
                                      >> 0x17U));
    __Vtemp_42[0U] = (IData)((((QData)((IData)((0x1fU 
                                                & (vlSelf->top__DOT___2000_[2U] 
                                                   >> 0x10U)))) 
                               << 0x32U) | (((QData)((IData)(vlSelf->top__DOT___0354_)) 
                                             << 0x31U) 
                                            | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                << 0x30U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0071_)) 
                                                   << 0x2fU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0463_)) 
                                                      << 0x2eU) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0134_)) 
                                                         << 0x2dU) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___0043_)) 
                                                            << 0x2cU) 
                                                           | (((QData)((IData)(
                                                                               (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                >> 7U)))) 
                                                               << 0x27U) 
                                                              | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x25U))))) 
                                                                  << 0x25U) 
                                                                 | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                >> 3U)))) 
                                                                     << 0x23U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))) 
                                                                        << 0x22U) 
                                                                       | (((QData)((IData)(
                                                                                (0x3fU 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 4U) 
                                                                                | (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x1cU))))) 
                                                                           << 0x1cU) 
                                                                          | (QData)((IData)(
                                                                                ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x7c00000U 
                                                                                & vlSelf->top__DOT___2121_[0U]) 
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
                                                                                | ((0x60000U 
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
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_ha881e501__0))))))))))))))))))))))))));
    __Vtemp_42[1U] = ((0xff800000U & ((0xc0000000U 
                                       & (vlSelf->top__DOT___2000_[2U] 
                                          << 2U)) | 
                                      (((IData)(vlSelf->top__DOT___0313_) 
                                        << 0x1dU) | 
                                       ((0x1f000000U 
                                         & (vlSelf->top__DOT___2000_[2U] 
                                            << 2U)) 
                                        | ((IData)(vlSelf->top__DOT___0737_) 
                                           << 0x17U))))) 
                      | (IData)(((((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                       >> 0x10U)))) 
                                   << 0x32U) | (((QData)((IData)(vlSelf->top__DOT___0354_)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0071_)) 
                                                       << 0x2fU) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0463_)) 
                                                          << 0x2eU) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___0134_)) 
                                                             << 0x2dU) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___0043_)) 
                                                                << 0x2cU) 
                                                               | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                >> 7U)))) 
                                                                   << 0x27U) 
                                                                  | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x25U))))) 
                                                                      << 0x25U) 
                                                                     | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                >> 3U)))) 
                                                                         << 0x23U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U))))) 
                                                                            << 0x22U) 
                                                                           | (((QData)((IData)(
                                                                                (0x3fU 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 4U) 
                                                                                | (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x1cU))))) 
                                                                               << 0x1cU) 
                                                                              | (QData)((IData)(
                                                                                ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x7c00000U 
                                                                                & vlSelf->top__DOT___2121_[0U]) 
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
                                                                                | ((0x60000U 
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
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_ha881e501__0))))))))))))))))))))))))) 
                                 >> 0x20U)));
    vlSelf->top__DOT____VdfgTmp_h799cc49b__0[0U] = 
        __Vtemp_42[0U];
    vlSelf->top__DOT____VdfgTmp_h799cc49b__0[1U] = 
        __Vtemp_42[1U];
    vlSelf->top__DOT____VdfgTmp_h799cc49b__0[2U] = 
        (0x7fffffU & ((0x7fffe0U & ((IData)(vlSelf->top__DOT___1506_) 
                                    << 5U)) | ((0x10U 
                                                & (vlSelf->top__DOT___2000_[3U] 
                                                   << 2U)) 
                                               | ((0x7ffff8U 
                                                   & ((IData)(vlSelf->top__DOT___0113_) 
                                                      << 3U)) 
                                                  | ((7U 
                                                      & ((0x7ffffcU 
                                                          & (vlSelf->top__DOT___2000_[3U] 
                                                             << 2U)) 
                                                         | (vlSelf->top__DOT___2000_[2U] 
                                                            >> 0x1eU))) 
                                                     | ((0x7fffffU 
                                                         & ((IData)(vlSelf->top__DOT___0313_) 
                                                            >> 3U)) 
                                                        | ((IData)(vlSelf->top__DOT___0737_) 
                                                           >> 9U)))))));
    vlSelf->top__DOT___1080_ = (1U & ((((0x40U & (vlSelf->top__DOT___2000_[3U] 
                                                  << 2U)) 
                                        | (((IData)(vlSelf->top__DOT___0152_) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT___0287_) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT___0237_) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT___0524_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___0095_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0354_))))))) 
                                       + (1U | ((0x40U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___2040_ 
                                                             >> 8U)) 
                                                    << 6U)) 
                                                | ((0x20U 
                                                    & (vlSelf->top__DOT___3660_ 
                                                       << 1U)) 
                                                   | (0x1eU 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___2040_ 
                                                                  >> 3U)) 
                                                         << 1U)))))) 
                                      >> 6U));
    vlSelf->top__DOT___2028_ = ((0x600U & (vlSelf->top__DOT___2000_[3U] 
                                           >> 0x11U)) 
                                | (((IData)(vlSelf->top__DOT___0690_) 
                                    << 8U) | (((IData)(vlSelf->top__DOT___1283_) 
                                               << 7U) 
                                              | ((0x40U 
                                                  & ((IData)(vlSelf->top__DOT___3823_) 
                                                     << 1U)) 
                                                 | ((0x20U 
                                                     & ((IData)(vlSelf->top__DOT___3823_) 
                                                        << 1U)) 
                                                    | ((0x10U 
                                                        & ((IData)(vlSelf->top__DOT___3823_) 
                                                           << 1U)) 
                                                       | ((8U 
                                                           & ((IData)(vlSelf->top__DOT___3823_) 
                                                              << 1U)) 
                                                          | ((4U 
                                                              & ((IData)(vlSelf->top__DOT___3823_) 
                                                                 << 1U)) 
                                                             | ((2U 
                                                                 & ((IData)(vlSelf->top__DOT___3823_) 
                                                                    << 1U)) 
                                                                | (IData)(vlSelf->top__DOT___0489_))))))))));
    vlSelf->top__DOT____VdfgTmp_hf33be808__0[0U] = 
        vlSelf->top__DOT____VdfgTmp_h799cc49b__0[0U];
    vlSelf->top__DOT____VdfgTmp_hf33be808__0[1U] = 
        vlSelf->top__DOT____VdfgTmp_h799cc49b__0[1U];
    vlSelf->top__DOT____VdfgTmp_hf33be808__0[2U] = 
        (((IData)(vlSelf->top__DOT___1361_) << 0xdU) 
         | ((0x1fc0U & (vlSelf->top__DOT___2000_[3U] 
                        << 2U)) | vlSelf->top__DOT____VdfgTmp_h799cc49b__0[2U]));
    vlSelf->top__DOT___0889_ = (1U & (((((IData)(vlSelf->top__DOT___0690_) 
                                         << 8U) | (
                                                   ((IData)(vlSelf->top__DOT___1283_) 
                                                    << 7U) 
                                                   | ((0x40U 
                                                       & ((IData)(vlSelf->top__DOT___3823_) 
                                                          << 1U)) 
                                                      | ((0x20U 
                                                          & ((IData)(vlSelf->top__DOT___3823_) 
                                                             << 1U)) 
                                                         | ((0x10U 
                                                             & ((IData)(vlSelf->top__DOT___3823_) 
                                                                << 1U)) 
                                                            | ((8U 
                                                                & (IData)(vlSelf->top__DOT___2028_)) 
                                                               | ((4U 
                                                                   & ((IData)(vlSelf->top__DOT___3823_) 
                                                                      << 1U)) 
                                                                  | ((2U 
                                                                      & (IData)(vlSelf->top__DOT___2028_)) 
                                                                     | (IData)(vlSelf->top__DOT___0489_))))))))) 
                                       + (IData)(vlSelf->top__DOT___1998_)) 
                                      >> 8U));
    vlSelf->top__DOT___0260_ = (1U & ((((0x10U & ((IData)(vlSelf->top__DOT___3823_) 
                                                  << 1U)) 
                                        | ((8U & (IData)(vlSelf->top__DOT___2028_)) 
                                           | ((4U & 
                                               ((IData)(vlSelf->top__DOT___3823_) 
                                                << 1U)) 
                                              | ((2U 
                                                  & (IData)(vlSelf->top__DOT___2028_)) 
                                                 | (IData)(vlSelf->top__DOT___0489_))))) 
                                       + (IData)(vlSelf->top__DOT___1998_)) 
                                      >> 4U));
    vlSelf->top__DOT___2027_ = ((0x600U & (((0x600U 
                                             & (vlSelf->top__DOT___2000_[3U] 
                                                >> 0x11U)) 
                                            | (((IData)(vlSelf->top__DOT___0690_) 
                                                << 8U) 
                                               | (((IData)(vlSelf->top__DOT___1283_) 
                                                   << 7U) 
                                                  | ((0x40U 
                                                      & ((IData)(vlSelf->top__DOT___3823_) 
                                                         << 1U)) 
                                                     | ((0x20U 
                                                         & ((IData)(vlSelf->top__DOT___3823_) 
                                                            << 1U)) 
                                                        | ((0x10U 
                                                            & ((IData)(vlSelf->top__DOT___3823_) 
                                                               << 1U)) 
                                                           | ((8U 
                                                               & (IData)(vlSelf->top__DOT___2028_)) 
                                                              | ((4U 
                                                                  & ((IData)(vlSelf->top__DOT___3823_) 
                                                                     << 1U)) 
                                                                 | ((2U 
                                                                     & (IData)(vlSelf->top__DOT___2028_)) 
                                                                    | (IData)(vlSelf->top__DOT___0489_)))))))))) 
                                           + (IData)(vlSelf->top__DOT___1998_))) 
                                | (((IData)(vlSelf->top__DOT___0889_) 
                                    << 8U) | ((0xe0U 
                                               & ((((IData)(vlSelf->top__DOT___1283_) 
                                                    << 7U) 
                                                   | ((0x40U 
                                                       & ((IData)(vlSelf->top__DOT___3823_) 
                                                          << 1U)) 
                                                      | ((0x20U 
                                                          & ((IData)(vlSelf->top__DOT___3823_) 
                                                             << 1U)) 
                                                         | ((0x10U 
                                                             & ((IData)(vlSelf->top__DOT___3823_) 
                                                                << 1U)) 
                                                            | ((8U 
                                                                & (IData)(vlSelf->top__DOT___2028_)) 
                                                               | ((4U 
                                                                   & ((IData)(vlSelf->top__DOT___3823_) 
                                                                      << 1U)) 
                                                                  | ((2U 
                                                                      & (IData)(vlSelf->top__DOT___2028_)) 
                                                                     | (IData)(vlSelf->top__DOT___0489_)))))))) 
                                                  + (IData)(vlSelf->top__DOT___1998_))) 
                                              | (((IData)(vlSelf->top__DOT___0260_) 
                                                  << 4U) 
                                                 | ((0xeU 
                                                     & (((8U 
                                                          & (IData)(vlSelf->top__DOT___2028_)) 
                                                         | ((4U 
                                                             & ((IData)(vlSelf->top__DOT___3823_) 
                                                                << 1U)) 
                                                            | ((2U 
                                                                & (IData)(vlSelf->top__DOT___2028_)) 
                                                               | (IData)(vlSelf->top__DOT___0489_)))) 
                                                        + (IData)(vlSelf->top__DOT___1998_))) 
                                                    | (IData)(vlSelf->top__DOT___1107_))))));
    vlSelf->top__DOT___2066_ = ((0x3c0U & ((IData)(
                                                   (vlSelf->top__DOT___1968_ 
                                                    >> 0x23U)) 
                                           + ((0x200U 
                                               & (IData)(vlSelf->top__DOT___2027_)) 
                                              | (((IData)(vlSelf->top__DOT___0042_) 
                                                  << 8U) 
                                                 | (((IData)(vlSelf->top__DOT___0924_) 
                                                     << 7U) 
                                                    | ((0x40U 
                                                        & ((0xffffffc0U 
                                                            & ((IData)(vlSelf->top__DOT___3794_) 
                                                               << 3U)) 
                                                           ^ 
                                                           ((IData)(vlSelf->top__DOT___1750_) 
                                                            << 6U))) 
                                                       | ((0x20U 
                                                           & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                              << 5U)) 
                                                          | (((IData)(vlSelf->top__DOT___0648_) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT___1028_) 
                                                                 << 3U) 
                                                                | ((4U 
                                                                    & (vlSelf->top__DOT___3751_ 
                                                                       >> 0xfU)) 
                                                                   | (((IData)(vlSelf->top__DOT___1020_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0914_)))))))))))) 
                                | (((IData)(vlSelf->top__DOT___1937_) 
                                    << 4U) | (((IData)(vlSelf->top__DOT___1736_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___1480_) 
                                                  << 2U) 
                                                 | (3U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___1968_ 
                                                                >> 0x23U)) 
                                                       + 
                                                       (((IData)(vlSelf->top__DOT___1020_) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top__DOT___0914_))))))));
    vlSelf->top__DOT___0832_ = (1U & ((((0xc0U & ((IData)(vlSelf->top__DOT___2027_) 
                                                  << 1U)) 
                                        | (((IData)(vlSelf->top__DOT___0260_) 
                                            << 5U) 
                                           | ((0x1cU 
                                               & ((IData)(vlSelf->top__DOT___2027_) 
                                                  << 1U)) 
                                              | (((IData)(vlSelf->top__DOT___1107_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___1038_))))) 
                                       + ((0xc0U & 
                                           (vlSelf->top__DOT___2001_[2U] 
                                            >> 0x11U)) 
                                          | (((IData)(vlSelf->top__DOT___0641_) 
                                              << 5U) 
                                             | (((IData)(vlSelf->top__DOT___0289_) 
                                                 << 3U) 
                                                | ((4U 
                                                    & ((IData)(vlSelf->top__DOT___3647_) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->top__DOT___0005_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0016_))))))) 
                                      >> 7U));
    vlSelf->top__DOT____VdfgTmp_h53246cde__0 = ((0x1cU 
                                                 & ((IData)(vlSelf->top__DOT___2027_) 
                                                    << 1U)) 
                                                | (((IData)(vlSelf->top__DOT___1107_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___1038_)));
    vlSelf->top__DOT___0831_ = (((IData)(vlSelf->top__DOT___3822_) 
                                 >> 2U) & (IData)(vlSelf->top__DOT___0832_));
    vlSelf->top__DOT____VdfgTmp_h8d6d6eb8__0 = (((IData)(vlSelf->top__DOT___0260_) 
                                                 << 5U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h53246cde__0));
}
