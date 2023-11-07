// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__633(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__633\n"); );
    // Body
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

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__635(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__635\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<5>/*159:0*/ __Vtemp_37;
    VlWide<5>/*159:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_54;
    // Body
    __Vtemp_2[1U] = (((IData)((0x7ffffffffULL & (vlSelf->top__DOT___1968_ 
                                                 >> 0xeU))) 
                      << 1U) | (IData)(((((QData)((IData)(
                                                          (((IData)(vlSelf->top__DOT___0142_) 
                                                            << 0x1fU) 
                                                           | ((0x7ffc0000U 
                                                               & ((IData)(vlSelf->top__DOT___1968_) 
                                                                  << 0x12U)) 
                                                              | (((IData)(vlSelf->top__DOT___0287_) 
                                                                  << 0x11U) 
                                                                 | (((IData)(vlSelf->top__DOT___0290_) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->top__DOT___0015_) 
                                                                        << 0xfU) 
                                                                       | (((IData)(vlSelf->top__DOT___0368_) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->top__DOT___0278_) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->top__DOT___0434_) 
                                                                                << 0xcU) 
                                                                                | ((0xffcU 
                                                                                & (IData)(vlSelf->top__DOT___1985_)) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___1985_)))))))))))))) 
                                          << 1U) | (QData)((IData)(vlSelf->top__DOT___0521_))) 
                                        >> 0x20U)));
    __Vtemp_6[2U] = ((0xffffff80U & ((0xffc00000U & 
                                      vlSelf->top__DOT___2001_[2U]) 
                                     | ((0x200000U 
                                         & (vlSelf->top__DOT___3637_ 
                                            << 7U)) 
                                        | ((0x1ffe00U 
                                            & vlSelf->top__DOT___2001_[2U]) 
                                           | ((0x100U 
                                               & (vlSelf->top__DOT___3637_ 
                                                  << 7U)) 
                                              | (0x80U 
                                                 & vlSelf->top__DOT___2001_[2U])))))) 
                     | (((IData)(vlSelf->top__DOT___0719_) 
                         << 6U) | ((0x20U & ((IData)(
                                                     (vlSelf->top__DOT___1968_ 
                                                      >> 0x32U)) 
                                             << 5U)) 
                                   | (((IData)(vlSelf->top__DOT___1022_) 
                                       << 4U) | (((IData)(
                                                          (0x7ffffffffULL 
                                                           & (vlSelf->top__DOT___1968_ 
                                                              >> 0xeU))) 
                                                  >> 0x1fU) 
                                                 | ((IData)(
                                                            ((0x7ffffffffULL 
                                                              & (vlSelf->top__DOT___1968_ 
                                                                 >> 0xeU)) 
                                                             >> 0x20U)) 
                                                    << 1U))))));
    __Vtemp_9[0U] = (IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___0142_) 
                                                << 0x1fU) 
                                               | ((0x7ffc0000U 
                                                   & ((IData)(vlSelf->top__DOT___1968_) 
                                                      << 0x12U)) 
                                                  | (((IData)(vlSelf->top__DOT___0287_) 
                                                      << 0x11U) 
                                                     | (((IData)(vlSelf->top__DOT___0290_) 
                                                         << 0x10U) 
                                                        | (((IData)(vlSelf->top__DOT___0015_) 
                                                            << 0xfU) 
                                                           | (((IData)(vlSelf->top__DOT___0368_) 
                                                               << 0xeU) 
                                                              | (((IData)(vlSelf->top__DOT___0278_) 
                                                                  << 0xdU) 
                                                                 | (((IData)(vlSelf->top__DOT___0434_) 
                                                                     << 0xcU) 
                                                                    | ((0xffcU 
                                                                        & (IData)(vlSelf->top__DOT___1985_)) 
                                                                       | (((IData)(vlSelf->top__DOT___1692_) 
                                                                           << 1U) 
                                                                          | (1U 
                                                                             & (IData)(vlSelf->top__DOT___1985_)))))))))))))) 
                              << 1U) | (QData)((IData)(vlSelf->top__DOT___0521_))));
    __Vtemp_9[1U] = __Vtemp_2[1U];
    __Vtemp_9[2U] = __Vtemp_6[2U];
    __Vtemp_9[3U] = ((0xfffff000U & ((0xfffe0000U & 
                                      vlSelf->top__DOT___2001_[3U]) 
                                     | (((IData)(vlSelf->top__DOT___0752_) 
                                         << 0x10U) 
                                        | ((0x8000U 
                                            & vlSelf->top__DOT___2001_[3U]) 
                                           | (((IData)(vlSelf->top__DOT___1323_) 
                                               << 0xeU) 
                                              | ((0x2000U 
                                                  & vlSelf->top__DOT___2001_[3U]) 
                                                 | ((IData)(vlSelf->top__DOT___1309_) 
                                                    << 0xcU))))))) 
                     | (((IData)(vlSelf->top__DOT___1081_) 
                         << 0xbU) | ((0x780U & vlSelf->top__DOT___2001_[3U]) 
                                     | (0x7fU & ((0x40U 
                                                  & ((IData)(vlSelf->top__DOT___1351_) 
                                                     << 6U)) 
                                                 | ((0x38U 
                                                     & vlSelf->top__DOT___2001_[3U]) 
                                                    | ((0x7cU 
                                                        & ((IData)(vlSelf->top__DOT___1353_) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           & vlSelf->top__DOT___2001_[3U]) 
                                                          | (0x7fU 
                                                             & (IData)(vlSelf->top__DOT___1359_))))))))));
    __Vtemp_9[4U] = (0xfffU & ((0xc00U & vlSelf->top__DOT___2001_[4U]) 
                               | ((0x200U & ((IData)(
                                                     (vlSelf->top__DOT___3635_ 
                                                      >> 0x39U)) 
                                             << 9U)) 
                                  | ((0x1ffU & vlSelf->top__DOT___2001_[4U]) 
                                     | ((0xfffU & ((IData)(vlSelf->top__DOT___0752_) 
                                                   >> 0x10U)) 
                                        | ((0xfffU 
                                            & ((IData)(vlSelf->top__DOT___1323_) 
                                               >> 0x12U)) 
                                           | ((IData)(vlSelf->top__DOT___1309_) 
                                              >> 0x14U)))))));
    __Vtemp_10[0U] = (((IData)(vlSelf->top__DOT___0477_) 
                       << 0x1fU) | ((0x10000000U & 
                                     ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                      << 0x1cU)) | 
                                    (((IData)(vlSelf->top__DOT___0057_) 
                                      << 0x1bU) | (
                                                   (0x4000000U 
                                                    & (vlSelf->top__DOT___1951_[1U] 
                                                       << 0x19U)) 
                                                   | ((0x2000000U 
                                                       & ((IData)(vlSelf->top__DOT___3642_) 
                                                          << 0x17U)) 
                                                      | ((0x1000000U 
                                                          & (vlSelf->top__DOT___1951_[0U] 
                                                             >> 7U)) 
                                                         | ((0x800000U 
                                                             & ((IData)(vlSelf->top__DOT___3642_) 
                                                                << 0x17U)) 
                                                            | (((IData)(vlSelf->top__DOT___1225_) 
                                                                << 0x16U) 
                                                               | ((0x200000U 
                                                                   & ((IData)(vlSelf->top__DOT___3820_) 
                                                                      << 0x13U)) 
                                                                  | ((0x100000U 
                                                                      & ((IData)(vlSelf->top__DOT___3820_) 
                                                                         << 0x13U)) 
                                                                     | ((0x80000U 
                                                                         & ((IData)(vlSelf->top__DOT___1986_) 
                                                                            << 0x12U)) 
                                                                        | (((IData)(vlSelf->top__DOT___0095_) 
                                                                            << 0x12U) 
                                                                           | ((0x20000U 
                                                                               & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                                                << 0x11U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0241_) 
                                                                                << 0x10U) 
                                                                                | ((0xffc0U 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U)) 
                                                                                << 5U)) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 0xcU)) 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U))))))))))))))))))));
    __Vtemp_10[1U] = (IData)((((QData)((IData)((((IData)(
                                                         (vlSelf->top__DOT___1908_ 
                                                          >> 0xaU)) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & ((IData)(vlSelf->top__DOT___3620_) 
                                                       << 0x1cU)) 
                                                   | ((0x30000000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___1908_ 
                                                                   >> 7U)) 
                                                          << 0x1cU)) 
                                                      | (((IData)(vlSelf->top__DOT___0363_) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelf->top__DOT___0325_) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelf->top__DOT___0210_) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelf->top__DOT___0155_) 
                                                                   << 0x18U) 
                                                                  | ((0x800000U 
                                                                      & ((IData)(vlSelf->top__DOT___1974_) 
                                                                         << 0x17U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1007_) 
                                                                         << 0x15U) 
                                                                        | ((0x80000U 
                                                                            & (vlSelf->top__DOT___1951_[1U] 
                                                                               << 0x12U)) 
                                                                           | ((0x40000U 
                                                                               & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x10U)) 
                                                                              | ((0x20000U 
                                                                                & (vlSelf->top__DOT___1951_[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & (vlSelf->top__DOT___2000_[3U] 
                                                                                >> 0xcU))))))))))))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelf->top__DOT___1361_) 
                                                             << 0x1fU) 
                                                            | ((0x7f000000U 
                                                                & (vlSelf->top__DOT___2000_[3U] 
                                                                   << 0x14U)) 
                                                               | (((IData)(vlSelf->top__DOT___1506_) 
                                                                   << 0x17U) 
                                                                  | ((0x400000U 
                                                                      & (vlSelf->top__DOT___2000_[3U] 
                                                                         << 0x14U)) 
                                                                     | (((IData)(vlSelf->top__DOT___0113_) 
                                                                         << 0x15U) 
                                                                        | ((0x1f0000U 
                                                                            & ((vlSelf->top__DOT___2000_[3U] 
                                                                                << 0x14U) 
                                                                               | (0xf0000U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)))) 
                                                                           | (((IData)(vlSelf->top__DOT___0313_) 
                                                                               << 0xfU) 
                                                                              | ((0x7c00U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0737_) 
                                                                                << 9U) 
                                                                                | ((0x1f0U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0105_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0152_))))))))))))))))));
    __Vtemp_10[2U] = (IData)(((((QData)((IData)((((IData)(
                                                          (vlSelf->top__DOT___1908_ 
                                                           >> 0xaU)) 
                                                  << 0x1fU) 
                                                 | ((0x40000000U 
                                                     & ((IData)(vlSelf->top__DOT___3620_) 
                                                        << 0x1cU)) 
                                                    | ((0x30000000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___1908_ 
                                                                    >> 7U)) 
                                                           << 0x1cU)) 
                                                       | (((IData)(vlSelf->top__DOT___0363_) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->top__DOT___0325_) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->top__DOT___0210_) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->top__DOT___0155_) 
                                                                    << 0x18U) 
                                                                   | ((0x800000U 
                                                                       & ((IData)(vlSelf->top__DOT___1974_) 
                                                                          << 0x17U)) 
                                                                      | (((IData)(vlSelf->top__DOT___1007_) 
                                                                          << 0x15U) 
                                                                         | ((0x80000U 
                                                                             & (vlSelf->top__DOT___1951_[1U] 
                                                                                << 0x12U)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x10U)) 
                                                                               | ((0x20000U 
                                                                                & (vlSelf->top__DOT___1951_[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & (vlSelf->top__DOT___2000_[3U] 
                                                                                >> 0xcU))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___1361_) 
                                                              << 0x1fU) 
                                                             | ((0x7f000000U 
                                                                 & (vlSelf->top__DOT___2000_[3U] 
                                                                    << 0x14U)) 
                                                                | (((IData)(vlSelf->top__DOT___1506_) 
                                                                    << 0x17U) 
                                                                   | ((0x400000U 
                                                                       & (vlSelf->top__DOT___2000_[3U] 
                                                                          << 0x14U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0113_) 
                                                                          << 0x15U) 
                                                                         | ((0x1f0000U 
                                                                             & ((vlSelf->top__DOT___2000_[3U] 
                                                                                << 0x14U) 
                                                                                | (0xf0000U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)))) 
                                                                            | (((IData)(vlSelf->top__DOT___0313_) 
                                                                                << 0xfU) 
                                                                               | ((0x7c00U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0737_) 
                                                                                << 9U) 
                                                                                | ((0x1f0U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0105_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0152_))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_11[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0391_)) 
                               << 0x2bU) | (((QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->top__DOT___2000_[1U] 
                                                                 >> 3U)))) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                (((IData)(
                                                                          (vlSelf->top__DOT___3769_ 
                                                                           >> 8U)) 
                                                                  << 0x1fU) 
                                                                 | ((0x70000000U 
                                                                     & ((vlSelf->top__DOT___2000_[1U] 
                                                                         << 0x1dU) 
                                                                        | (0x10000000U 
                                                                           & (vlSelf->top__DOT___2000_[0U] 
                                                                              >> 3U)))) 
                                                                    | ((0x8000000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 4U)) 
                                                                           << 0x1bU)) 
                                                                       | ((0x7000000U 
                                                                           & (vlSelf->top__DOT___2000_[0U] 
                                                                              >> 3U)) 
                                                                          | ((0x800000U 
                                                                              & ((IData)(vlSelf->top__DOT___3769_) 
                                                                                << 0x17U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x12U) 
                                                                                | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0xfU) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xaU) 
                                                                                | ((0x3e0U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U))))))))))))))))))))) 
                                                << 3U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___1632_) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->top__DOT___1373_) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        & vlSelf->top__DOT___2000_[0U])))))))));
    __Vtemp_11[1U] = ((__Vtemp_10[0U] << 0xcU) | (IData)(
                                                         ((((QData)((IData)(vlSelf->top__DOT___0391_)) 
                                                            << 0x2bU) 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 3U)))) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 8U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x70000000U 
                                                                                & ((vlSelf->top__DOT___2000_[1U] 
                                                                                << 0x1dU) 
                                                                                | (0x10000000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)))) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 4U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x7000000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___3769_) 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x12U) 
                                                                                | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0xfU) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xaU) 
                                                                                | ((0x3e0U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U))))))))))))))))))))) 
                                                                  << 3U) 
                                                                 | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1373_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlSelf->top__DOT___2000_[0U])))))))) 
                                                          >> 0x20U)));
    __Vtemp_11[2U] = ((__Vtemp_10[0U] >> 0x14U) | (
                                                   __Vtemp_10[1U] 
                                                   << 0xcU));
    __Vtemp_11[3U] = ((__Vtemp_10[1U] >> 0x14U) | (
                                                   __Vtemp_10[2U] 
                                                   << 0xcU));
    __Vtemp_11[4U] = (__Vtemp_10[2U] >> 0x14U);
    VL_ADD_W(5, __Vtemp_12, __Vtemp_9, __Vtemp_11);
    __Vtemp_15[1U] = (((IData)((0x7ffffffffULL & (vlSelf->top__DOT___1968_ 
                                                  >> 0xeU))) 
                       << 1U) | (IData)(((((QData)((IData)(
                                                           (((IData)(vlSelf->top__DOT___0142_) 
                                                             << 0x1fU) 
                                                            | ((0x7ffc0000U 
                                                                & ((IData)(vlSelf->top__DOT___1968_) 
                                                                   << 0x12U)) 
                                                               | (((IData)(vlSelf->top__DOT___0287_) 
                                                                   << 0x11U) 
                                                                  | (((IData)(vlSelf->top__DOT___0290_) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSelf->top__DOT___0015_) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->top__DOT___0368_) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->top__DOT___0278_) 
                                                                               << 0xdU) 
                                                                              | (((IData)(vlSelf->top__DOT___0434_) 
                                                                                << 0xcU) 
                                                                                | ((0xffcU 
                                                                                & (IData)(vlSelf->top__DOT___1985_)) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___1985_)))))))))))))) 
                                           << 1U) | (QData)((IData)(vlSelf->top__DOT___0521_))) 
                                         >> 0x20U)));
    __Vtemp_19[2U] = ((0xffffff80U & ((0xffc00000U 
                                       & vlSelf->top__DOT___2001_[2U]) 
                                      | ((0x200000U 
                                          & (vlSelf->top__DOT___3637_ 
                                             << 7U)) 
                                         | ((0x1ffe00U 
                                             & vlSelf->top__DOT___2001_[2U]) 
                                            | ((0x100U 
                                                & (vlSelf->top__DOT___3637_ 
                                                   << 7U)) 
                                               | (0x80U 
                                                  & vlSelf->top__DOT___2001_[2U])))))) 
                      | (((IData)(vlSelf->top__DOT___0719_) 
                          << 6U) | ((0x20U & ((IData)(
                                                      (vlSelf->top__DOT___1968_ 
                                                       >> 0x32U)) 
                                              << 5U)) 
                                    | (((IData)(vlSelf->top__DOT___1022_) 
                                        << 4U) | (((IData)(
                                                           (0x7ffffffffULL 
                                                            & (vlSelf->top__DOT___1968_ 
                                                               >> 0xeU))) 
                                                   >> 0x1fU) 
                                                  | ((IData)(
                                                             ((0x7ffffffffULL 
                                                               & (vlSelf->top__DOT___1968_ 
                                                                  >> 0xeU)) 
                                                              >> 0x20U)) 
                                                     << 1U))))));
    __Vtemp_22[0U] = (IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___0142_) 
                                                 << 0x1fU) 
                                                | ((0x7ffc0000U 
                                                    & ((IData)(vlSelf->top__DOT___1968_) 
                                                       << 0x12U)) 
                                                   | (((IData)(vlSelf->top__DOT___0287_) 
                                                       << 0x11U) 
                                                      | (((IData)(vlSelf->top__DOT___0290_) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->top__DOT___0015_) 
                                                             << 0xfU) 
                                                            | (((IData)(vlSelf->top__DOT___0368_) 
                                                                << 0xeU) 
                                                               | (((IData)(vlSelf->top__DOT___0278_) 
                                                                   << 0xdU) 
                                                                  | (((IData)(vlSelf->top__DOT___0434_) 
                                                                      << 0xcU) 
                                                                     | ((0xffcU 
                                                                         & (IData)(vlSelf->top__DOT___1985_)) 
                                                                        | (((IData)(vlSelf->top__DOT___1692_) 
                                                                            << 1U) 
                                                                           | (1U 
                                                                              & (IData)(vlSelf->top__DOT___1985_)))))))))))))) 
                               << 1U) | (QData)((IData)(vlSelf->top__DOT___0521_))));
    __Vtemp_22[1U] = __Vtemp_15[1U];
    __Vtemp_22[2U] = __Vtemp_19[2U];
    __Vtemp_22[3U] = ((0xfffff000U & ((0xfffe0000U 
                                       & vlSelf->top__DOT___2001_[3U]) 
                                      | (((IData)(vlSelf->top__DOT___0752_) 
                                          << 0x10U) 
                                         | ((0x8000U 
                                             & vlSelf->top__DOT___2001_[3U]) 
                                            | (((IData)(vlSelf->top__DOT___1323_) 
                                                << 0xeU) 
                                               | ((0x2000U 
                                                   & vlSelf->top__DOT___2001_[3U]) 
                                                  | ((IData)(vlSelf->top__DOT___1309_) 
                                                     << 0xcU))))))) 
                      | (((IData)(vlSelf->top__DOT___1081_) 
                          << 0xbU) | ((0x780U & vlSelf->top__DOT___2001_[3U]) 
                                      | (0x7fU & ((0x40U 
                                                   & ((IData)(vlSelf->top__DOT___1351_) 
                                                      << 6U)) 
                                                  | ((0x38U 
                                                      & vlSelf->top__DOT___2001_[3U]) 
                                                     | ((0x7cU 
                                                         & ((IData)(vlSelf->top__DOT___1353_) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlSelf->top__DOT___2001_[3U]) 
                                                           | (0x7fU 
                                                              & (IData)(vlSelf->top__DOT___1359_))))))))));
    __Vtemp_22[4U] = (0xfffU & ((0xc00U & vlSelf->top__DOT___2001_[4U]) 
                                | ((0x200U & ((IData)(
                                                      (vlSelf->top__DOT___3635_ 
                                                       >> 0x39U)) 
                                              << 9U)) 
                                   | ((0x1ffU & vlSelf->top__DOT___2001_[4U]) 
                                      | ((0xfffU & 
                                          ((IData)(vlSelf->top__DOT___0752_) 
                                           >> 0x10U)) 
                                         | ((0xfffU 
                                             & ((IData)(vlSelf->top__DOT___1323_) 
                                                >> 0x12U)) 
                                            | ((IData)(vlSelf->top__DOT___1309_) 
                                               >> 0x14U)))))));
    __Vtemp_23[0U] = (((IData)(vlSelf->top__DOT___0477_) 
                       << 0x1fU) | ((0x10000000U & 
                                     ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                      << 0x1cU)) | 
                                    (((IData)(vlSelf->top__DOT___0057_) 
                                      << 0x1bU) | (
                                                   (0x4000000U 
                                                    & (vlSelf->top__DOT___1951_[1U] 
                                                       << 0x19U)) 
                                                   | ((0x2000000U 
                                                       & ((IData)(vlSelf->top__DOT___3642_) 
                                                          << 0x17U)) 
                                                      | ((0x1000000U 
                                                          & (vlSelf->top__DOT___1951_[0U] 
                                                             >> 7U)) 
                                                         | ((0x800000U 
                                                             & ((IData)(vlSelf->top__DOT___3642_) 
                                                                << 0x17U)) 
                                                            | (((IData)(vlSelf->top__DOT___1225_) 
                                                                << 0x16U) 
                                                               | ((0x200000U 
                                                                   & ((IData)(vlSelf->top__DOT___3820_) 
                                                                      << 0x13U)) 
                                                                  | ((0x100000U 
                                                                      & ((IData)(vlSelf->top__DOT___3820_) 
                                                                         << 0x13U)) 
                                                                     | ((0x80000U 
                                                                         & ((IData)(vlSelf->top__DOT___1986_) 
                                                                            << 0x12U)) 
                                                                        | (((IData)(vlSelf->top__DOT___0095_) 
                                                                            << 0x12U) 
                                                                           | ((0x20000U 
                                                                               & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                                                << 0x11U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0241_) 
                                                                                << 0x10U) 
                                                                                | ((0xffc0U 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U)) 
                                                                                << 5U)) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 0xcU)) 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U))))))))))))))))))));
    __Vtemp_23[1U] = (IData)((((QData)((IData)((((IData)(
                                                         (vlSelf->top__DOT___1908_ 
                                                          >> 0xaU)) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & ((IData)(vlSelf->top__DOT___3620_) 
                                                       << 0x1cU)) 
                                                   | ((0x30000000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___1908_ 
                                                                   >> 7U)) 
                                                          << 0x1cU)) 
                                                      | (((IData)(vlSelf->top__DOT___0363_) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelf->top__DOT___0325_) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelf->top__DOT___0210_) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelf->top__DOT___0155_) 
                                                                   << 0x18U) 
                                                                  | ((0x800000U 
                                                                      & ((IData)(vlSelf->top__DOT___1974_) 
                                                                         << 0x17U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1007_) 
                                                                         << 0x15U) 
                                                                        | ((0x80000U 
                                                                            & (vlSelf->top__DOT___1951_[1U] 
                                                                               << 0x12U)) 
                                                                           | ((0x40000U 
                                                                               & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x10U)) 
                                                                              | ((0x20000U 
                                                                                & (vlSelf->top__DOT___1951_[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & (vlSelf->top__DOT___2000_[3U] 
                                                                                >> 0xcU))))))))))))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelf->top__DOT___1361_) 
                                                             << 0x1fU) 
                                                            | ((0x7f000000U 
                                                                & (vlSelf->top__DOT___2000_[3U] 
                                                                   << 0x14U)) 
                                                               | (((IData)(vlSelf->top__DOT___1506_) 
                                                                   << 0x17U) 
                                                                  | ((0x400000U 
                                                                      & (vlSelf->top__DOT___2000_[3U] 
                                                                         << 0x14U)) 
                                                                     | (((IData)(vlSelf->top__DOT___0113_) 
                                                                         << 0x15U) 
                                                                        | ((0x1f0000U 
                                                                            & ((vlSelf->top__DOT___2000_[3U] 
                                                                                << 0x14U) 
                                                                               | (0xf0000U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)))) 
                                                                           | (((IData)(vlSelf->top__DOT___0313_) 
                                                                               << 0xfU) 
                                                                              | ((0x7c00U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0737_) 
                                                                                << 9U) 
                                                                                | ((0x1f0U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0105_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0152_))))))))))))))))));
    __Vtemp_23[2U] = (IData)(((((QData)((IData)((((IData)(
                                                          (vlSelf->top__DOT___1908_ 
                                                           >> 0xaU)) 
                                                  << 0x1fU) 
                                                 | ((0x40000000U 
                                                     & ((IData)(vlSelf->top__DOT___3620_) 
                                                        << 0x1cU)) 
                                                    | ((0x30000000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___1908_ 
                                                                    >> 7U)) 
                                                           << 0x1cU)) 
                                                       | (((IData)(vlSelf->top__DOT___0363_) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->top__DOT___0325_) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->top__DOT___0210_) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->top__DOT___0155_) 
                                                                    << 0x18U) 
                                                                   | ((0x800000U 
                                                                       & ((IData)(vlSelf->top__DOT___1974_) 
                                                                          << 0x17U)) 
                                                                      | (((IData)(vlSelf->top__DOT___1007_) 
                                                                          << 0x15U) 
                                                                         | ((0x80000U 
                                                                             & (vlSelf->top__DOT___1951_[1U] 
                                                                                << 0x12U)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x10U)) 
                                                                               | ((0x20000U 
                                                                                & (vlSelf->top__DOT___1951_[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & (vlSelf->top__DOT___2000_[3U] 
                                                                                >> 0xcU))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___1361_) 
                                                              << 0x1fU) 
                                                             | ((0x7f000000U 
                                                                 & (vlSelf->top__DOT___2000_[3U] 
                                                                    << 0x14U)) 
                                                                | (((IData)(vlSelf->top__DOT___1506_) 
                                                                    << 0x17U) 
                                                                   | ((0x400000U 
                                                                       & (vlSelf->top__DOT___2000_[3U] 
                                                                          << 0x14U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0113_) 
                                                                          << 0x15U) 
                                                                         | ((0x1f0000U 
                                                                             & ((vlSelf->top__DOT___2000_[3U] 
                                                                                << 0x14U) 
                                                                                | (0xf0000U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)))) 
                                                                            | (((IData)(vlSelf->top__DOT___0313_) 
                                                                                << 0xfU) 
                                                                               | ((0x7c00U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0737_) 
                                                                                << 9U) 
                                                                                | ((0x1f0U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0105_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0152_))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_24[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0391_)) 
                               << 0x2bU) | (((QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->top__DOT___2000_[1U] 
                                                                 >> 3U)))) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                (((IData)(
                                                                          (vlSelf->top__DOT___3769_ 
                                                                           >> 8U)) 
                                                                  << 0x1fU) 
                                                                 | ((0x70000000U 
                                                                     & ((vlSelf->top__DOT___2000_[1U] 
                                                                         << 0x1dU) 
                                                                        | (0x10000000U 
                                                                           & (vlSelf->top__DOT___2000_[0U] 
                                                                              >> 3U)))) 
                                                                    | ((0x8000000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 4U)) 
                                                                           << 0x1bU)) 
                                                                       | ((0x7000000U 
                                                                           & (vlSelf->top__DOT___2000_[0U] 
                                                                              >> 3U)) 
                                                                          | ((0x800000U 
                                                                              & ((IData)(vlSelf->top__DOT___3769_) 
                                                                                << 0x17U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x12U) 
                                                                                | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0xfU) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xaU) 
                                                                                | ((0x3e0U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U))))))))))))))))))))) 
                                                << 3U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___1632_) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->top__DOT___1373_) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        & vlSelf->top__DOT___2000_[0U])))))))));
    __Vtemp_24[1U] = ((__Vtemp_23[0U] << 0xcU) | (IData)(
                                                         ((((QData)((IData)(vlSelf->top__DOT___0391_)) 
                                                            << 0x2bU) 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 3U)))) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 8U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x70000000U 
                                                                                & ((vlSelf->top__DOT___2000_[1U] 
                                                                                << 0x1dU) 
                                                                                | (0x10000000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)))) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 4U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x7000000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___3769_) 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x12U) 
                                                                                | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0xfU) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xaU) 
                                                                                | ((0x3e0U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U))))))))))))))))))))) 
                                                                  << 3U) 
                                                                 | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1373_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlSelf->top__DOT___2000_[0U])))))))) 
                                                          >> 0x20U)));
    __Vtemp_24[2U] = ((__Vtemp_23[0U] >> 0x14U) | (
                                                   __Vtemp_23[1U] 
                                                   << 0xcU));
    __Vtemp_24[3U] = ((__Vtemp_23[1U] >> 0x14U) | (
                                                   __Vtemp_23[2U] 
                                                   << 0xcU));
    __Vtemp_24[4U] = (__Vtemp_23[2U] >> 0x14U);
    VL_ADD_W(5, __Vtemp_25, __Vtemp_22, __Vtemp_24);
    __Vtemp_28[1U] = (((IData)((0x7ffffffffULL & (vlSelf->top__DOT___1968_ 
                                                  >> 0xeU))) 
                       << 1U) | (IData)(((((QData)((IData)(
                                                           (((IData)(vlSelf->top__DOT___0142_) 
                                                             << 0x1fU) 
                                                            | ((0x7ffc0000U 
                                                                & ((IData)(vlSelf->top__DOT___1968_) 
                                                                   << 0x12U)) 
                                                               | (((IData)(vlSelf->top__DOT___0287_) 
                                                                   << 0x11U) 
                                                                  | (((IData)(vlSelf->top__DOT___0290_) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSelf->top__DOT___0015_) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->top__DOT___0368_) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->top__DOT___0278_) 
                                                                               << 0xdU) 
                                                                              | (((IData)(vlSelf->top__DOT___0434_) 
                                                                                << 0xcU) 
                                                                                | ((0xffcU 
                                                                                & (IData)(vlSelf->top__DOT___1985_)) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___1985_)))))))))))))) 
                                           << 1U) | (QData)((IData)(vlSelf->top__DOT___0521_))) 
                                         >> 0x20U)));
    __Vtemp_32[2U] = ((0xffffff80U & ((0xffc00000U 
                                       & vlSelf->top__DOT___2001_[2U]) 
                                      | ((0x200000U 
                                          & (vlSelf->top__DOT___3637_ 
                                             << 7U)) 
                                         | ((0x1ffe00U 
                                             & vlSelf->top__DOT___2001_[2U]) 
                                            | ((0x100U 
                                                & (vlSelf->top__DOT___3637_ 
                                                   << 7U)) 
                                               | (0x80U 
                                                  & vlSelf->top__DOT___2001_[2U])))))) 
                      | (((IData)(vlSelf->top__DOT___0719_) 
                          << 6U) | ((0x20U & ((IData)(
                                                      (vlSelf->top__DOT___1968_ 
                                                       >> 0x32U)) 
                                              << 5U)) 
                                    | (((IData)(vlSelf->top__DOT___1022_) 
                                        << 4U) | (((IData)(
                                                           (0x7ffffffffULL 
                                                            & (vlSelf->top__DOT___1968_ 
                                                               >> 0xeU))) 
                                                   >> 0x1fU) 
                                                  | ((IData)(
                                                             ((0x7ffffffffULL 
                                                               & (vlSelf->top__DOT___1968_ 
                                                                  >> 0xeU)) 
                                                              >> 0x20U)) 
                                                     << 1U))))));
    __Vtemp_35[0U] = (IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___0142_) 
                                                 << 0x1fU) 
                                                | ((0x7ffc0000U 
                                                    & ((IData)(vlSelf->top__DOT___1968_) 
                                                       << 0x12U)) 
                                                   | (((IData)(vlSelf->top__DOT___0287_) 
                                                       << 0x11U) 
                                                      | (((IData)(vlSelf->top__DOT___0290_) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->top__DOT___0015_) 
                                                             << 0xfU) 
                                                            | (((IData)(vlSelf->top__DOT___0368_) 
                                                                << 0xeU) 
                                                               | (((IData)(vlSelf->top__DOT___0278_) 
                                                                   << 0xdU) 
                                                                  | (((IData)(vlSelf->top__DOT___0434_) 
                                                                      << 0xcU) 
                                                                     | ((0xffcU 
                                                                         & (IData)(vlSelf->top__DOT___1985_)) 
                                                                        | (((IData)(vlSelf->top__DOT___1692_) 
                                                                            << 1U) 
                                                                           | (1U 
                                                                              & (IData)(vlSelf->top__DOT___1985_)))))))))))))) 
                               << 1U) | (QData)((IData)(vlSelf->top__DOT___0521_))));
    __Vtemp_35[1U] = __Vtemp_28[1U];
    __Vtemp_35[2U] = __Vtemp_32[2U];
    __Vtemp_35[3U] = ((0xfffff000U & ((0xfffe0000U 
                                       & vlSelf->top__DOT___2001_[3U]) 
                                      | (((IData)(vlSelf->top__DOT___0752_) 
                                          << 0x10U) 
                                         | ((0x8000U 
                                             & vlSelf->top__DOT___2001_[3U]) 
                                            | (((IData)(vlSelf->top__DOT___1323_) 
                                                << 0xeU) 
                                               | ((0x2000U 
                                                   & vlSelf->top__DOT___2001_[3U]) 
                                                  | ((IData)(vlSelf->top__DOT___1309_) 
                                                     << 0xcU))))))) 
                      | (((IData)(vlSelf->top__DOT___1081_) 
                          << 0xbU) | ((0x780U & vlSelf->top__DOT___2001_[3U]) 
                                      | (0x7fU & ((0x40U 
                                                   & ((IData)(vlSelf->top__DOT___1351_) 
                                                      << 6U)) 
                                                  | ((0x38U 
                                                      & vlSelf->top__DOT___2001_[3U]) 
                                                     | ((0x7cU 
                                                         & ((IData)(vlSelf->top__DOT___1353_) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & vlSelf->top__DOT___2001_[3U]) 
                                                           | (0x7fU 
                                                              & (IData)(vlSelf->top__DOT___1359_))))))))));
    __Vtemp_35[4U] = (0xfffU & ((0xc00U & vlSelf->top__DOT___2001_[4U]) 
                                | ((0x200U & ((IData)(
                                                      (vlSelf->top__DOT___3635_ 
                                                       >> 0x39U)) 
                                              << 9U)) 
                                   | ((0x1ffU & vlSelf->top__DOT___2001_[4U]) 
                                      | ((0xfffU & 
                                          ((IData)(vlSelf->top__DOT___0752_) 
                                           >> 0x10U)) 
                                         | ((0xfffU 
                                             & ((IData)(vlSelf->top__DOT___1323_) 
                                                >> 0x12U)) 
                                            | ((IData)(vlSelf->top__DOT___1309_) 
                                               >> 0x14U)))))));
    __Vtemp_36[0U] = (((IData)(vlSelf->top__DOT___0477_) 
                       << 0x1fU) | ((0x10000000U & 
                                     ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                      << 0x1cU)) | 
                                    (((IData)(vlSelf->top__DOT___0057_) 
                                      << 0x1bU) | (
                                                   (0x4000000U 
                                                    & (vlSelf->top__DOT___1951_[1U] 
                                                       << 0x19U)) 
                                                   | ((0x2000000U 
                                                       & ((IData)(vlSelf->top__DOT___3642_) 
                                                          << 0x17U)) 
                                                      | ((0x1000000U 
                                                          & (vlSelf->top__DOT___1951_[0U] 
                                                             >> 7U)) 
                                                         | ((0x800000U 
                                                             & ((IData)(vlSelf->top__DOT___3642_) 
                                                                << 0x17U)) 
                                                            | (((IData)(vlSelf->top__DOT___1225_) 
                                                                << 0x16U) 
                                                               | ((0x200000U 
                                                                   & ((IData)(vlSelf->top__DOT___3820_) 
                                                                      << 0x13U)) 
                                                                  | ((0x100000U 
                                                                      & ((IData)(vlSelf->top__DOT___3820_) 
                                                                         << 0x13U)) 
                                                                     | ((0x80000U 
                                                                         & ((IData)(vlSelf->top__DOT___1986_) 
                                                                            << 0x12U)) 
                                                                        | (((IData)(vlSelf->top__DOT___0095_) 
                                                                            << 0x12U) 
                                                                           | ((0x20000U 
                                                                               & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                                                << 0x11U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0241_) 
                                                                                << 0x10U) 
                                                                                | ((0xffc0U 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U)) 
                                                                                << 5U)) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 0xcU)) 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U))))))))))))))))))));
    __Vtemp_36[1U] = (IData)((((QData)((IData)((((IData)(
                                                         (vlSelf->top__DOT___1908_ 
                                                          >> 0xaU)) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & ((IData)(vlSelf->top__DOT___3620_) 
                                                       << 0x1cU)) 
                                                   | ((0x30000000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___1908_ 
                                                                   >> 7U)) 
                                                          << 0x1cU)) 
                                                      | (((IData)(vlSelf->top__DOT___0363_) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelf->top__DOT___0325_) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelf->top__DOT___0210_) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelf->top__DOT___0155_) 
                                                                   << 0x18U) 
                                                                  | ((0x800000U 
                                                                      & ((IData)(vlSelf->top__DOT___1974_) 
                                                                         << 0x17U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1007_) 
                                                                         << 0x15U) 
                                                                        | ((0x80000U 
                                                                            & (vlSelf->top__DOT___1951_[1U] 
                                                                               << 0x12U)) 
                                                                           | ((0x40000U 
                                                                               & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x10U)) 
                                                                              | ((0x20000U 
                                                                                & (vlSelf->top__DOT___1951_[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & (vlSelf->top__DOT___2000_[3U] 
                                                                                >> 0xcU))))))))))))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelf->top__DOT___1361_) 
                                                             << 0x1fU) 
                                                            | ((0x7f000000U 
                                                                & (vlSelf->top__DOT___2000_[3U] 
                                                                   << 0x14U)) 
                                                               | (((IData)(vlSelf->top__DOT___1506_) 
                                                                   << 0x17U) 
                                                                  | ((0x400000U 
                                                                      & (vlSelf->top__DOT___2000_[3U] 
                                                                         << 0x14U)) 
                                                                     | (((IData)(vlSelf->top__DOT___0113_) 
                                                                         << 0x15U) 
                                                                        | ((0x1f0000U 
                                                                            & ((vlSelf->top__DOT___2000_[3U] 
                                                                                << 0x14U) 
                                                                               | (0xf0000U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)))) 
                                                                           | (((IData)(vlSelf->top__DOT___0313_) 
                                                                               << 0xfU) 
                                                                              | ((0x7c00U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0737_) 
                                                                                << 9U) 
                                                                                | ((0x1f0U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0105_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0152_))))))))))))))))));
    __Vtemp_36[2U] = (IData)(((((QData)((IData)((((IData)(
                                                          (vlSelf->top__DOT___1908_ 
                                                           >> 0xaU)) 
                                                  << 0x1fU) 
                                                 | ((0x40000000U 
                                                     & ((IData)(vlSelf->top__DOT___3620_) 
                                                        << 0x1cU)) 
                                                    | ((0x30000000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___1908_ 
                                                                    >> 7U)) 
                                                           << 0x1cU)) 
                                                       | (((IData)(vlSelf->top__DOT___0363_) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->top__DOT___0325_) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->top__DOT___0210_) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->top__DOT___0155_) 
                                                                    << 0x18U) 
                                                                   | ((0x800000U 
                                                                       & ((IData)(vlSelf->top__DOT___1974_) 
                                                                          << 0x17U)) 
                                                                      | (((IData)(vlSelf->top__DOT___1007_) 
                                                                          << 0x15U) 
                                                                         | ((0x80000U 
                                                                             & (vlSelf->top__DOT___1951_[1U] 
                                                                                << 0x12U)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x10U)) 
                                                                               | ((0x20000U 
                                                                                & (vlSelf->top__DOT___1951_[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & (vlSelf->top__DOT___2000_[3U] 
                                                                                >> 0xcU))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___1361_) 
                                                              << 0x1fU) 
                                                             | ((0x7f000000U 
                                                                 & (vlSelf->top__DOT___2000_[3U] 
                                                                    << 0x14U)) 
                                                                | (((IData)(vlSelf->top__DOT___1506_) 
                                                                    << 0x17U) 
                                                                   | ((0x400000U 
                                                                       & (vlSelf->top__DOT___2000_[3U] 
                                                                          << 0x14U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0113_) 
                                                                          << 0x15U) 
                                                                         | ((0x1f0000U 
                                                                             & ((vlSelf->top__DOT___2000_[3U] 
                                                                                << 0x14U) 
                                                                                | (0xf0000U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)))) 
                                                                            | (((IData)(vlSelf->top__DOT___0313_) 
                                                                                << 0xfU) 
                                                                               | ((0x7c00U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0737_) 
                                                                                << 9U) 
                                                                                | ((0x1f0U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0105_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0152_))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_37[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0391_)) 
                               << 0x2bU) | (((QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->top__DOT___2000_[1U] 
                                                                 >> 3U)))) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                (((IData)(
                                                                          (vlSelf->top__DOT___3769_ 
                                                                           >> 8U)) 
                                                                  << 0x1fU) 
                                                                 | ((0x70000000U 
                                                                     & ((vlSelf->top__DOT___2000_[1U] 
                                                                         << 0x1dU) 
                                                                        | (0x10000000U 
                                                                           & (vlSelf->top__DOT___2000_[0U] 
                                                                              >> 3U)))) 
                                                                    | ((0x8000000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 4U)) 
                                                                           << 0x1bU)) 
                                                                       | ((0x7000000U 
                                                                           & (vlSelf->top__DOT___2000_[0U] 
                                                                              >> 3U)) 
                                                                          | ((0x800000U 
                                                                              & ((IData)(vlSelf->top__DOT___3769_) 
                                                                                << 0x17U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x12U) 
                                                                                | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0xfU) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xaU) 
                                                                                | ((0x3e0U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U))))))))))))))))))))) 
                                                << 3U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___1632_) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->top__DOT___1373_) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        & vlSelf->top__DOT___2000_[0U])))))))));
    __Vtemp_37[1U] = ((__Vtemp_36[0U] << 0xcU) | (IData)(
                                                         ((((QData)((IData)(vlSelf->top__DOT___0391_)) 
                                                            << 0x2bU) 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 3U)))) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 8U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x70000000U 
                                                                                & ((vlSelf->top__DOT___2000_[1U] 
                                                                                << 0x1dU) 
                                                                                | (0x10000000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)))) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 4U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x7000000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___3769_) 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x12U) 
                                                                                | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0xfU) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xaU) 
                                                                                | ((0x3e0U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U))))))))))))))))))))) 
                                                                  << 3U) 
                                                                 | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1373_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlSelf->top__DOT___2000_[0U])))))))) 
                                                          >> 0x20U)));
    __Vtemp_37[2U] = ((__Vtemp_36[0U] >> 0x14U) | (
                                                   __Vtemp_36[1U] 
                                                   << 0xcU));
    __Vtemp_37[3U] = ((__Vtemp_36[1U] >> 0x14U) | (
                                                   __Vtemp_36[2U] 
                                                   << 0xcU));
    __Vtemp_37[4U] = (__Vtemp_36[2U] >> 0x14U);
    VL_ADD_W(5, __Vtemp_38, __Vtemp_35, __Vtemp_37);
    __Vtemp_41[1U] = (((IData)((0x7ffffffffULL & (vlSelf->top__DOT___1968_ 
                                                  >> 0xeU))) 
                       << 1U) | (IData)(((((QData)((IData)(
                                                           (((IData)(vlSelf->top__DOT___0142_) 
                                                             << 0x1fU) 
                                                            | ((0x7ffc0000U 
                                                                & ((IData)(vlSelf->top__DOT___1968_) 
                                                                   << 0x12U)) 
                                                               | (((IData)(vlSelf->top__DOT___0287_) 
                                                                   << 0x11U) 
                                                                  | (((IData)(vlSelf->top__DOT___0290_) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSelf->top__DOT___0015_) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->top__DOT___0368_) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->top__DOT___0278_) 
                                                                               << 0xdU) 
                                                                              | (((IData)(vlSelf->top__DOT___0434_) 
                                                                                << 0xcU) 
                                                                                | ((0xffcU 
                                                                                & (IData)(vlSelf->top__DOT___1985_)) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___1985_)))))))))))))) 
                                           << 1U) | (QData)((IData)(vlSelf->top__DOT___0521_))) 
                                         >> 0x20U)));
    __Vtemp_45[0U] = (IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___0142_) 
                                                 << 0x1fU) 
                                                | ((0x7ffc0000U 
                                                    & ((IData)(vlSelf->top__DOT___1968_) 
                                                       << 0x12U)) 
                                                   | (((IData)(vlSelf->top__DOT___0287_) 
                                                       << 0x11U) 
                                                      | (((IData)(vlSelf->top__DOT___0290_) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->top__DOT___0015_) 
                                                             << 0xfU) 
                                                            | (((IData)(vlSelf->top__DOT___0368_) 
                                                                << 0xeU) 
                                                               | (((IData)(vlSelf->top__DOT___0278_) 
                                                                   << 0xdU) 
                                                                  | (((IData)(vlSelf->top__DOT___0434_) 
                                                                      << 0xcU) 
                                                                     | ((0xffcU 
                                                                         & (IData)(vlSelf->top__DOT___1985_)) 
                                                                        | (((IData)(vlSelf->top__DOT___1692_) 
                                                                            << 1U) 
                                                                           | (1U 
                                                                              & (IData)(vlSelf->top__DOT___1985_)))))))))))))) 
                               << 1U) | (QData)((IData)(vlSelf->top__DOT___0521_))));
    __Vtemp_45[1U] = __Vtemp_41[1U];
    __Vtemp_45[2U] = ((0xffffff80U & ((0x600U & vlSelf->top__DOT___2001_[2U]) 
                                      | ((0x100U & 
                                          (vlSelf->top__DOT___3637_ 
                                           << 7U)) 
                                         | (0x80U & 
                                            vlSelf->top__DOT___2001_[2U])))) 
                      | (((IData)(vlSelf->top__DOT___0719_) 
                          << 6U) | ((0x20U & ((IData)(
                                                      (vlSelf->top__DOT___1968_ 
                                                       >> 0x32U)) 
                                              << 5U)) 
                                    | (((IData)(vlSelf->top__DOT___1022_) 
                                        << 4U) | (((IData)(
                                                           (0x7ffffffffULL 
                                                            & (vlSelf->top__DOT___1968_ 
                                                               >> 0xeU))) 
                                                   >> 0x1fU) 
                                                  | ((IData)(
                                                             ((0x7ffffffffULL 
                                                               & (vlSelf->top__DOT___1968_ 
                                                                  >> 0xeU)) 
                                                              >> 0x20U)) 
                                                     << 1U))))));
    __Vtemp_46[0U] = (IData)((((QData)((IData)((0xffU 
                                                & (vlSelf->top__DOT___2000_[1U] 
                                                   >> 3U)))) 
                               << 0x23U) | (((QData)((IData)(
                                                             (((IData)(
                                                                       (vlSelf->top__DOT___3769_ 
                                                                        >> 8U)) 
                                                               << 0x1fU) 
                                                              | ((0x70000000U 
                                                                  & ((vlSelf->top__DOT___2000_[1U] 
                                                                      << 0x1dU) 
                                                                     | (0x10000000U 
                                                                        & (vlSelf->top__DOT___2000_[0U] 
                                                                           >> 3U)))) 
                                                                 | ((0x8000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 4U)) 
                                                                        << 0x1bU)) 
                                                                    | ((0x7000000U 
                                                                        & (vlSelf->top__DOT___2000_[0U] 
                                                                           >> 3U)) 
                                                                       | ((0x800000U 
                                                                           & ((IData)(vlSelf->top__DOT___3769_) 
                                                                              << 0x17U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0095_) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x12U) 
                                                                                | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0xfU) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xaU) 
                                                                                | ((0x3e0U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U))))))))))))))))))))) 
                                             << 3U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___1632_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___1373_) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & vlSelf->top__DOT___2000_[0U]))))))));
    __Vtemp_46[1U] = ((0xfffff800U & ((0x80000000U 
                                       & ((IData)(vlSelf->top__DOT___1986_) 
                                          << 0x1eU)) 
                                      | (((IData)(vlSelf->top__DOT___0095_) 
                                          << 0x1eU) 
                                         | ((0x20000000U 
                                             & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                << 0x1dU)) 
                                            | (((IData)(vlSelf->top__DOT___0241_) 
                                                << 0x1cU) 
                                               | ((0xffc0000U 
                                                   & vlSelf->top__DOT___2000_[1U]) 
                                                  | ((0x20000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___3769_ 
                                                                  >> 0x17U)) 
                                                         << 0x11U)) 
                                                     | ((0x1c000U 
                                                         & vlSelf->top__DOT___2000_[1U]) 
                                                        | ((0x2000U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT___3769_ 
                                                                        >> 0x13U)) 
                                                               << 0xdU)) 
                                                           | ((0x1000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___3769_ 
                                                                           >> 0x12U)) 
                                                                  << 0xcU)) 
                                                              | ((IData)(vlSelf->top__DOT___0391_) 
                                                                 << 0xbU))))))))))) 
                      | (IData)(((((QData)((IData)(
                                                   (0xffU 
                                                    & (vlSelf->top__DOT___2000_[1U] 
                                                       >> 3U)))) 
                                   << 0x23U) | (((QData)((IData)(
                                                                 (((IData)(
                                                                           (vlSelf->top__DOT___3769_ 
                                                                            >> 8U)) 
                                                                   << 0x1fU) 
                                                                  | ((0x70000000U 
                                                                      & ((vlSelf->top__DOT___2000_[1U] 
                                                                          << 0x1dU) 
                                                                         | (0x10000000U 
                                                                            & (vlSelf->top__DOT___2000_[0U] 
                                                                               >> 3U)))) 
                                                                     | ((0x8000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 4U)) 
                                                                            << 0x1bU)) 
                                                                        | ((0x7000000U 
                                                                            & (vlSelf->top__DOT___2000_[0U] 
                                                                               >> 3U)) 
                                                                           | ((0x800000U 
                                                                               & ((IData)(vlSelf->top__DOT___3769_) 
                                                                                << 0x17U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x12U) 
                                                                                | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0xfU) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xaU) 
                                                                                | ((0x3e0U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 3U))))))))))))))))))))) 
                                                 << 3U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->top__DOT___1632_) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->top__DOT___1373_) 
                                                                       << 1U) 
                                                                      | (1U 
                                                                         & vlSelf->top__DOT___2000_[0U]))))))) 
                                 >> 0x20U)));
    __Vtemp_46[2U] = (0x7ffU & ((0x100U & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                           << 8U)) 
                                | ((0x780U & ((IData)(vlSelf->top__DOT___0057_) 
                                              << 7U)) 
                                   | ((0x40U & (vlSelf->top__DOT___1951_[1U] 
                                                << 5U)) 
                                      | ((0x20U & ((IData)(vlSelf->top__DOT___3642_) 
                                                   << 3U)) 
                                         | ((0x10U 
                                             & (vlSelf->top__DOT___1951_[0U] 
                                                >> 0x1bU)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->top__DOT___3642_) 
                                                   << 3U)) 
                                               | ((0x7fcU 
                                                   & ((IData)(vlSelf->top__DOT___1225_) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->top__DOT___3820_) 
                                                         >> 1U)) 
                                                     | ((1U 
                                                         & ((IData)(vlSelf->top__DOT___3820_) 
                                                            >> 1U)) 
                                                        | ((0x7ffU 
                                                            & ((IData)(vlSelf->top__DOT___0095_) 
                                                               >> 2U)) 
                                                           | ((0x7ffU 
                                                               & ((IData)(vlSelf->top__DOT___0241_) 
                                                                  >> 4U)) 
                                                              | ((IData)(vlSelf->top__DOT___0391_) 
                                                                 >> 0x15U)))))))))))));
    VL_ADD_W(3, __Vtemp_47, __Vtemp_45, __Vtemp_46);
    __Vtemp_50[0U] = (IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___0142_) 
                                                 << 0x1fU) 
                                                | ((0x7ffc0000U 
                                                    & ((IData)(vlSelf->top__DOT___1968_) 
                                                       << 0x12U)) 
                                                   | (((IData)(vlSelf->top__DOT___0287_) 
                                                       << 0x11U) 
                                                      | (((IData)(vlSelf->top__DOT___0290_) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->top__DOT___0015_) 
                                                             << 0xfU) 
                                                            | (((IData)(vlSelf->top__DOT___0368_) 
                                                                << 0xeU) 
                                                               | (((IData)(vlSelf->top__DOT___0278_) 
                                                                   << 0xdU) 
                                                                  | (((IData)(vlSelf->top__DOT___0434_) 
                                                                      << 0xcU) 
                                                                     | ((0xffcU 
                                                                         & (IData)(vlSelf->top__DOT___1985_)) 
                                                                        | (((IData)(vlSelf->top__DOT___1692_) 
                                                                            << 1U) 
                                                                           | (1U 
                                                                              & (IData)(vlSelf->top__DOT___1985_)))))))))))))) 
                               << 1U) | (QData)((IData)(vlSelf->top__DOT___0521_))));
    __Vtemp_50[1U] = (((IData)((0x1ffffffffULL & (vlSelf->top__DOT___1968_ 
                                                  >> 0xeU))) 
                       << 1U) | (IData)(((((QData)((IData)(
                                                           (((IData)(vlSelf->top__DOT___0142_) 
                                                             << 0x1fU) 
                                                            | ((0x7ffc0000U 
                                                                & ((IData)(vlSelf->top__DOT___1968_) 
                                                                   << 0x12U)) 
                                                               | (((IData)(vlSelf->top__DOT___0287_) 
                                                                   << 0x11U) 
                                                                  | (((IData)(vlSelf->top__DOT___0290_) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSelf->top__DOT___0015_) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->top__DOT___0368_) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->top__DOT___0278_) 
                                                                               << 0xdU) 
                                                                              | (((IData)(vlSelf->top__DOT___0434_) 
                                                                                << 0xcU) 
                                                                                | ((0xffcU 
                                                                                & (IData)(vlSelf->top__DOT___1985_)) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___1985_)))))))))))))) 
                                           << 1U) | (QData)((IData)(vlSelf->top__DOT___0521_))) 
                                         >> 0x20U)));
    __Vtemp_50[2U] = (((IData)((0x1ffffffffULL & (vlSelf->top__DOT___1968_ 
                                                  >> 0xeU))) 
                       >> 0x1fU) | ((IData)(((0x1ffffffffULL 
                                              & (vlSelf->top__DOT___1968_ 
                                                 >> 0xeU)) 
                                             >> 0x20U)) 
                                    << 1U));
    __Vtemp_51[0U] = (((IData)((((QData)((IData)(((0x80000000U 
                                                   & ((IData)(vlSelf->top__DOT___3820_) 
                                                      << 0x1dU)) 
                                                  | ((0x40000000U 
                                                      & ((IData)(vlSelf->top__DOT___3820_) 
                                                         << 0x1dU)) 
                                                     | ((0x20000000U 
                                                         & ((IData)(vlSelf->top__DOT___1986_) 
                                                            << 0x1cU)) 
                                                        | (((IData)(vlSelf->top__DOT___0095_) 
                                                            << 0x1cU) 
                                                           | ((0x8000000U 
                                                               & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                                  << 0x1bU)) 
                                                              | (((IData)(vlSelf->top__DOT___0241_) 
                                                                  << 0x1aU) 
                                                                 | ((0x3ff0000U 
                                                                     & (vlSelf->top__DOT___2000_[1U] 
                                                                        >> 2U)) 
                                                                    | ((0x8000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U)) 
                                                                           << 0xfU)) 
                                                                       | ((0x7000U 
                                                                           & (vlSelf->top__DOT___2000_[1U] 
                                                                              >> 2U)) 
                                                                          | ((0x800U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x13U)) 
                                                                                << 0xbU)) 
                                                                             | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0391_) 
                                                                                << 9U) 
                                                                                | ((0x1feU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 8U)))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0xe0000000U 
                                                               & ((vlSelf->top__DOT___2000_[1U] 
                                                                   << 0x1eU) 
                                                                  | (0x20000000U 
                                                                     & (vlSelf->top__DOT___2000_[0U] 
                                                                        >> 2U)))) 
                                                              | ((0x10000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3769_ 
                                                                              >> 4U)) 
                                                                     << 0x1cU)) 
                                                                 | ((0xe000000U 
                                                                     & (vlSelf->top__DOT___2000_[0U] 
                                                                        >> 2U)) 
                                                                    | ((0x1000000U 
                                                                        & ((IData)(vlSelf->top__DOT___3769_) 
                                                                           << 0x18U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0095_) 
                                                                           << 0x17U) 
                                                                          | (((IData)(vlSelf->top__DOT___0226_) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x13U) 
                                                                                | ((0x60000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0x10U) 
                                                                                | ((0xf000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xbU) 
                                                                                | ((0x7c0U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT___1632_)))))))))))))))))))))) 
                       << 2U) | (((IData)(vlSelf->top__DOT___1373_) 
                                  << 1U) | (1U & vlSelf->top__DOT___2000_[0U])));
    __Vtemp_51[1U] = (((IData)((((QData)((IData)(((0x80000000U 
                                                   & ((IData)(vlSelf->top__DOT___3820_) 
                                                      << 0x1dU)) 
                                                  | ((0x40000000U 
                                                      & ((IData)(vlSelf->top__DOT___3820_) 
                                                         << 0x1dU)) 
                                                     | ((0x20000000U 
                                                         & ((IData)(vlSelf->top__DOT___1986_) 
                                                            << 0x1cU)) 
                                                        | (((IData)(vlSelf->top__DOT___0095_) 
                                                            << 0x1cU) 
                                                           | ((0x8000000U 
                                                               & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                                  << 0x1bU)) 
                                                              | (((IData)(vlSelf->top__DOT___0241_) 
                                                                  << 0x1aU) 
                                                                 | ((0x3ff0000U 
                                                                     & (vlSelf->top__DOT___2000_[1U] 
                                                                        >> 2U)) 
                                                                    | ((0x8000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U)) 
                                                                           << 0xfU)) 
                                                                       | ((0x7000U 
                                                                           & (vlSelf->top__DOT___2000_[1U] 
                                                                              >> 2U)) 
                                                                          | ((0x800U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x13U)) 
                                                                                << 0xbU)) 
                                                                             | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0391_) 
                                                                                << 9U) 
                                                                                | ((0x1feU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 8U)))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0xe0000000U 
                                                               & ((vlSelf->top__DOT___2000_[1U] 
                                                                   << 0x1eU) 
                                                                  | (0x20000000U 
                                                                     & (vlSelf->top__DOT___2000_[0U] 
                                                                        >> 2U)))) 
                                                              | ((0x10000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3769_ 
                                                                              >> 4U)) 
                                                                     << 0x1cU)) 
                                                                 | ((0xe000000U 
                                                                     & (vlSelf->top__DOT___2000_[0U] 
                                                                        >> 2U)) 
                                                                    | ((0x1000000U 
                                                                        & ((IData)(vlSelf->top__DOT___3769_) 
                                                                           << 0x18U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0095_) 
                                                                           << 0x17U) 
                                                                          | (((IData)(vlSelf->top__DOT___0226_) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x13U) 
                                                                                | ((0x60000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0x10U) 
                                                                                | ((0xf000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xbU) 
                                                                                | ((0x7c0U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT___1632_)))))))))))))))))))))) 
                       >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                               ((0x80000000U 
                                                                 & ((IData)(vlSelf->top__DOT___3820_) 
                                                                    << 0x1dU)) 
                                                                | ((0x40000000U 
                                                                    & ((IData)(vlSelf->top__DOT___3820_) 
                                                                       << 0x1dU)) 
                                                                   | ((0x20000000U 
                                                                       & ((IData)(vlSelf->top__DOT___1986_) 
                                                                          << 0x1cU)) 
                                                                      | (((IData)(vlSelf->top__DOT___0095_) 
                                                                          << 0x1cU) 
                                                                         | ((0x8000000U 
                                                                             & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                                                << 0x1bU)) 
                                                                            | (((IData)(vlSelf->top__DOT___0241_) 
                                                                                << 0x1aU) 
                                                                               | ((0x3ff0000U 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x13U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0391_) 
                                                                                << 9U) 
                                                                                | ((0x1feU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 8U)))))))))))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0xe0000000U 
                                                                  & ((vlSelf->top__DOT___2000_[1U] 
                                                                      << 0x1eU) 
                                                                     | (0x20000000U 
                                                                        & (vlSelf->top__DOT___2000_[0U] 
                                                                           >> 2U)))) 
                                                                 | ((0x10000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 4U)) 
                                                                        << 0x1cU)) 
                                                                    | ((0xe000000U 
                                                                        & (vlSelf->top__DOT___2000_[0U] 
                                                                           >> 2U)) 
                                                                       | ((0x1000000U 
                                                                           & ((IData)(vlSelf->top__DOT___3769_) 
                                                                              << 0x18U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0095_) 
                                                                              << 0x17U) 
                                                                             | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x13U) 
                                                                                | ((0x60000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0x10U) 
                                                                                | ((0xf000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xbU) 
                                                                                | ((0x7c0U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT___1632_))))))))))))))))))))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp_51[2U] = ((IData)(((((QData)((IData)(((0x80000000U 
                                                   & ((IData)(vlSelf->top__DOT___3820_) 
                                                      << 0x1dU)) 
                                                  | ((0x40000000U 
                                                      & ((IData)(vlSelf->top__DOT___3820_) 
                                                         << 0x1dU)) 
                                                     | ((0x20000000U 
                                                         & ((IData)(vlSelf->top__DOT___1986_) 
                                                            << 0x1cU)) 
                                                        | (((IData)(vlSelf->top__DOT___0095_) 
                                                            << 0x1cU) 
                                                           | ((0x8000000U 
                                                               & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                                  << 0x1bU)) 
                                                              | (((IData)(vlSelf->top__DOT___0241_) 
                                                                  << 0x1aU) 
                                                                 | ((0x3ff0000U 
                                                                     & (vlSelf->top__DOT___2000_[1U] 
                                                                        >> 2U)) 
                                                                    | ((0x8000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U)) 
                                                                           << 0xfU)) 
                                                                       | ((0x7000U 
                                                                           & (vlSelf->top__DOT___2000_[1U] 
                                                                              >> 2U)) 
                                                                          | ((0x800U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x13U)) 
                                                                                << 0xbU)) 
                                                                             | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0391_) 
                                                                                << 9U) 
                                                                                | ((0x1feU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 8U)))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0xe0000000U 
                                                               & ((vlSelf->top__DOT___2000_[1U] 
                                                                   << 0x1eU) 
                                                                  | (0x20000000U 
                                                                     & (vlSelf->top__DOT___2000_[0U] 
                                                                        >> 2U)))) 
                                                              | ((0x10000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3769_ 
                                                                              >> 4U)) 
                                                                     << 0x1cU)) 
                                                                 | ((0xe000000U 
                                                                     & (vlSelf->top__DOT___2000_[0U] 
                                                                        >> 2U)) 
                                                                    | ((0x1000000U 
                                                                        & ((IData)(vlSelf->top__DOT___3769_) 
                                                                           << 0x18U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0095_) 
                                                                           << 0x17U) 
                                                                          | (((IData)(vlSelf->top__DOT___0226_) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 0x13U) 
                                                                                | ((0x60000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0x10U) 
                                                                                | ((0xf000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 0xbU) 
                                                                                | ((0x7c0U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT___1632_))))))))))))))))))))) 
                               >> 0x20U)) >> 0x1eU);
    VL_ADD_W(3, __Vtemp_52, __Vtemp_50, __Vtemp_51);
    __Vtemp_54[0U] = (((IData)(vlSelf->top__DOT___1303_) 
                       << 0x1fU) | (0x7fffffffU & (
                                                   ((0x7ff80000U 
                                                     & ((IData)(vlSelf->top__DOT___1968_) 
                                                        << 0x13U)) 
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
                                                                               | (IData)(vlSelf->top__DOT___0521_))))))))))) 
                                                   + 
                                                   (((0x40000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___3769_ 
                                                                  >> 4U)) 
                                                         << 0x1eU)) 
                                                     | ((0x38000000U 
                                                         & vlSelf->top__DOT___2000_[0U]) 
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
                                                                           & vlSelf->top__DOT___2000_[0U]) 
                                                                          | (((IData)(vlSelf->top__DOT___0564_) 
                                                                              << 0x12U) 
                                                                             | ((0x3c000U 
                                                                                & vlSelf->top__DOT___2000_[0U]) 
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
                                                                                & vlSelf->top__DOT___2000_[0U]) 
                                                                                | ((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 2U))))))))))))))))) 
                                                    | (((IData)(vlSelf->top__DOT___1373_) 
                                                        << 1U) 
                                                       | (1U 
                                                          & vlSelf->top__DOT___2000_[0U]))))));
    vlSelf->top__DOT___1999_[0U] = __Vtemp_54[0U];
    vlSelf->top__DOT___1999_[1U] = (IData)((0x3ffffffffULL 
                                            & (((QData)((IData)(
                                                                (3U 
                                                                 & __Vtemp_52[2U]))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 __Vtemp_52[1U])))));
    vlSelf->top__DOT___1999_[2U] = ((0xfffff000U & 
                                     __Vtemp_38[2U]) 
                                    | (((IData)(vlSelf->top__DOT___1817_) 
                                        << 0xbU) | 
                                       ((0x7f8U & __Vtemp_47[2U]) 
                                        | (((IData)(vlSelf->top__DOT___0574_) 
                                            << 2U) 
                                           | (IData)(
                                                     ((0x3ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           (3U 
                                                                            & __Vtemp_52[2U]))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            __Vtemp_52[1U])))) 
                                                      >> 0x20U))))));
    vlSelf->top__DOT___1999_[3U] = ((0xff000000U & 
                                     __Vtemp_12[3U]) 
                                    | (((IData)(vlSelf->top__DOT___1109_) 
                                        << 0x17U) | 
                                       ((0x7ffff0U 
                                         & __Vtemp_25[3U]) 
                                        | (((IData)(vlSelf->top__DOT___1030_) 
                                            << 3U) 
                                           | (7U & 
                                              __Vtemp_38[3U])))));
    vlSelf->top__DOT___1999_[4U] = (0xfffU & __Vtemp_12[4U]);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__637(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__637\n"); );
    // Body
    vlSelf->top__DOT___1970_ = (((QData)((IData)((0xffffffffULL 
                                                  & (((((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT___2007_) 
                                                                            >> 1U)))) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1441_)) 
                                                           << 0x2cU) 
                                                          | (((QData)((IData)(
                                                                              (0x3ffU 
                                                                               & (vlSelf->top__DOT___2095_[3U] 
                                                                                >> 0xcU)))) 
                                                              << 0x22U) 
                                                             | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT___1972_ 
                                                                                >> 0x16U)))) 
                                                                 << 0x1eU) 
                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1687_) 
                                                                                << 0x1dU) 
                                                                                | ((0x1ff80000U 
                                                                                & (vlSelf->top__DOT___1972_ 
                                                                                << 8U)) 
                                                                                | ((0x7fff0U 
                                                                                & ((vlSelf->top__DOT___2112_[1U] 
                                                                                << 8U) 
                                                                                | (0xf0U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x18U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1666_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x18U)) 
                                                                                | (IData)(vlSelf->top__DOT___0058_)))))))))))) 
                                                      + 
                                                      (((QData)((IData)(
                                                                        ((0x3ff0U 
                                                                          & (vlSelf->top__DOT___2095_[3U] 
                                                                             >> 8U)) 
                                                                         | (0xfU 
                                                                            & (vlSelf->top__DOT___1972_ 
                                                                               >> 0x16U))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->top__DOT___1687_) 
                                                                           << 0x1fU) 
                                                                          | ((0x7fe00000U 
                                                                              & (vlSelf->top__DOT___1972_ 
                                                                                << 0xaU)) 
                                                                             | ((0x1fffc0U 
                                                                                & ((vlSelf->top__DOT___2112_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1666_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x16U)))))))))) 
                                                     >> 0xeU)))) 
                                 << 0x14U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1253_) 
                                                               << 0x13U) 
                                                              | ((0x70000U 
                                                                  & ((((0x1ff0U 
                                                                        & ((vlSelf->top__DOT___2112_[1U] 
                                                                            << 8U) 
                                                                           | (0xf0U 
                                                                              & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x18U)))) 
                                                                       | (((IData)(vlSelf->top__DOT___1666_) 
                                                                           << 3U) 
                                                                          | ((6U 
                                                                              & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x18U)) 
                                                                             | (IData)(vlSelf->top__DOT___0058_)))) 
                                                                      + 
                                                                      ((0x1fc0U 
                                                                        & ((vlSelf->top__DOT___2112_[1U] 
                                                                            << 0xaU) 
                                                                           | (0x3c0U 
                                                                              & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x16U)))) 
                                                                       | (((IData)(vlSelf->top__DOT___1666_) 
                                                                           << 5U) 
                                                                          | (0x1fU 
                                                                             & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x16U))))) 
                                                                     << 6U)) 
                                                                 | (((IData)(vlSelf->top__DOT___1210_) 
                                                                     << 0xfU) 
                                                                    | (((IData)(vlSelf->top__DOT___1682_) 
                                                                        << 0xeU) 
                                                                       | ((0x3800U 
                                                                           & ((((0xf0U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1666_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x18U)) 
                                                                                | (IData)(vlSelf->top__DOT___0058_)))) 
                                                                               + 
                                                                               ((0xc0U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1666_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x16U))))) 
                                                                              << 6U)) 
                                                                          | ((0x200U 
                                                                              & ((IData)(vlSelf->top__DOT___3749_) 
                                                                                << 5U)) 
                                                                             | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3749_) 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3749_) 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3749_) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___3749_) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___3732_)) 
                                                                                | (((IData)(vlSelf->top__DOT___0907_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0241_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0071_))))))))))))))))));
    vlSelf->top__DOT___0131_ = (1U & ((((8U & (IData)(vlSelf->top__DOT___3749_)) 
                                        | ((4U & (IData)(vlSelf->top__DOT___3749_)) 
                                           | ((2U & (IData)(vlSelf->top__DOT___3749_)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT___1970_ 
                                                            >> 5U)))))) 
                                       + ((8U & ((IData)(vlSelf->top__DOT___3749_) 
                                                 << 1U)) 
                                          | ((4U & 
                                              ((IData)(vlSelf->top__DOT___3749_) 
                                               << 1U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___1970_ 
                                                             >> 5U)) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT___0311_))))) 
                                      >> 3U));
    vlSelf->top__DOT___0142_ = (1U & ((((0x3800U & 
                                         ((IData)((vlSelf->top__DOT___1970_ 
                                                   >> 0xbU)) 
                                          << 0xbU)) 
                                        | ((0x200U 
                                            & ((IData)(vlSelf->top__DOT___3749_) 
                                               << 5U)) 
                                           | ((0x100U 
                                               & ((IData)(vlSelf->top__DOT___3749_) 
                                                  << 5U)) 
                                              | ((0x80U 
                                                  & ((IData)(vlSelf->top__DOT___3749_) 
                                                     << 5U)) 
                                                 | ((0x40U 
                                                     & ((IData)(vlSelf->top__DOT___3749_) 
                                                        << 5U)) 
                                                    | ((0x20U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___1970_ 
                                                                    >> 5U)) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & (IData)(vlSelf->top__DOT___3732_)) 
                                                          | (((IData)(vlSelf->top__DOT___0907_) 
                                                              << 3U) 
                                                             | (((IData)(vlSelf->top__DOT___0206_) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->top__DOT___0241_) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->top__DOT___0071_))))))))))) 
                                       + (((0x3f00U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___1969_ 
                                                        >> 8U)) 
                                               << 8U)) 
                                           | (((IData)(vlSelf->top__DOT___0453_) 
                                               << 7U) 
                                              | (((IData)(vlSelf->top__DOT___1266_) 
                                                  << 6U) 
                                                 | ((IData)(vlSelf->top__DOT___0438_) 
                                                    << 4U)))) 
                                          | (((IData)(vlSelf->top__DOT___0752_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___1283_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0625_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0065_)))))) 
                                      >> 0xdU));
    vlSelf->top__DOT____VdfgTmp_hcda57c3b__0 = (((IData)(vlSelf->top__DOT___0586_) 
                                                 << 5U) 
                                                | ((0x1eU 
                                                    & (IData)(vlSelf->top__DOT___3749_)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT___1970_ 
                                                                 >> 5U)))));
    vlSelf->top__DOT____VdfgTmp_h8da83138__0 = ((2U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___1970_ 
                                                             >> 5U)) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT___0311_));
    vlSelf->top__DOT___0922_ = (1U & (((2U | ((0x7ffc0U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___1970_ 
                                                           >> 0x27U)) 
                                                  << 6U)) 
                                              | (((IData)(vlSelf->top__DOT___0464_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___1235_) 
                                                     << 4U) 
                                                    | ((8U 
                                                        & (IData)(vlSelf->top__DOT___3647_)) 
                                                       | (IData)(vlSelf->top__DOT___0154_)))))) 
                                       + (0x40U | (
                                                   (0x7f800U 
                                                    & vlSelf->top__DOT___1972_) 
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
                                                                           | (IData)(vlSelf->top__DOT___0287_)))))))))))) 
                                      >> 0x12U));
    vlSelf->top__DOT___1973_ = (2U | ((0x3000000U & 
                                       ((IData)((3ULL 
                                                 & (((((QData)((IData)(
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->top__DOT___2007_) 
                                                                           >> 1U)))) 
                                                       << 0x2dU) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___1441_)) 
                                                          << 0x2cU) 
                                                         | (((QData)((IData)(
                                                                             (0x3ffU 
                                                                              & (vlSelf->top__DOT___2095_[3U] 
                                                                                >> 0xcU)))) 
                                                             << 0x22U) 
                                                            | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT___1972_ 
                                                                                >> 0x16U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1687_) 
                                                                                << 0x1dU) 
                                                                                | ((0x1ff80000U 
                                                                                & (vlSelf->top__DOT___1972_ 
                                                                                << 8U)) 
                                                                                | ((0x7fff0U 
                                                                                & ((vlSelf->top__DOT___2112_[1U] 
                                                                                << 8U) 
                                                                                | (0xf0U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x18U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1666_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x18U)) 
                                                                                | (IData)(vlSelf->top__DOT___0058_)))))))))))) 
                                                     + 
                                                     (((QData)((IData)(
                                                                       ((0x1f8000U 
                                                                         & ((IData)(vlSelf->top__DOT___2007_) 
                                                                            << 0xeU)) 
                                                                        | (((IData)(vlSelf->top__DOT___1441_) 
                                                                            << 0xeU) 
                                                                           | ((0x3ff0U 
                                                                               & (vlSelf->top__DOT___2095_[3U] 
                                                                                >> 8U)) 
                                                                              | (0xfU 
                                                                                & (vlSelf->top__DOT___1972_ 
                                                                                >> 0x16U))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->top__DOT___1687_) 
                                                                          << 0x1fU) 
                                                                         | ((0x7fe00000U 
                                                                             & (vlSelf->top__DOT___1972_ 
                                                                                << 0xaU)) 
                                                                            | ((0x1fffc0U 
                                                                                & ((vlSelf->top__DOT___2112_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x16U)))) 
                                                                               | (((IData)(vlSelf->top__DOT___1666_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x16U)))))))))) 
                                                    >> 0x33U))) 
                                        << 0x18U)) 
                                      | (((IData)(vlSelf->top__DOT___0504_) 
                                          << 0x17U) 
                                         | (((IData)(vlSelf->top__DOT___1597_) 
                                             << 0x16U) 
                                            | (((IData)(vlSelf->top__DOT___0684_) 
                                                << 0x15U) 
                                               | ((0x180000U 
                                                   & ((IData)(
                                                              (3ULL 
                                                               & (((((QData)((IData)(
                                                                                (7U 
                                                                                & ((IData)(vlSelf->top__DOT___2007_) 
                                                                                >> 1U)))) 
                                                                     << 0x2dU) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___1441_)) 
                                                                        << 0x2cU) 
                                                                       | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->top__DOT___2095_[3U] 
                                                                                >> 0xcU)))) 
                                                                           << 0x22U) 
                                                                          | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT___1972_ 
                                                                                >> 0x16U)))) 
                                                                              << 0x1eU) 
                                                                             | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1687_) 
                                                                                << 0x1dU) 
                                                                                | ((0x1ff80000U 
                                                                                & (vlSelf->top__DOT___1972_ 
                                                                                << 8U)) 
                                                                                | ((0x7fff0U 
                                                                                & ((vlSelf->top__DOT___2112_[1U] 
                                                                                << 8U) 
                                                                                | (0xf0U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x18U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1666_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x18U)) 
                                                                                | (IData)(vlSelf->top__DOT___0058_)))))))))))) 
                                                                   + 
                                                                   (((QData)((IData)(
                                                                                ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___2007_) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1441_) 
                                                                                << 0xeU) 
                                                                                | ((0x3ff0U 
                                                                                & (vlSelf->top__DOT___2095_[3U] 
                                                                                >> 8U)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___1972_ 
                                                                                >> 0x16U))))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1687_) 
                                                                                << 0x1fU) 
                                                                                | ((0x7fe00000U 
                                                                                & (vlSelf->top__DOT___1972_ 
                                                                                << 0xaU)) 
                                                                                | ((0x1fffc0U 
                                                                                & ((vlSelf->top__DOT___2112_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1666_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x16U)))))))))) 
                                                                  >> 0x2eU))) 
                                                      << 0x13U)) 
                                                  | ((0x7ffc0U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___1970_ 
                                                                  >> 0x27U)) 
                                                         << 6U)) 
                                                     | (((IData)(vlSelf->top__DOT___0464_) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->top__DOT___1235_) 
                                                            << 4U) 
                                                           | ((8U 
                                                               & (IData)(vlSelf->top__DOT___3647_)) 
                                                              | (IData)(vlSelf->top__DOT___0154_)))))))))));
    vlSelf->top__DOT___1525_ = (1U & (((2U | ((0x1fc0U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___1970_ 
                                                           >> 0x27U)) 
                                                  << 6U)) 
                                              | (((IData)(vlSelf->top__DOT___0464_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___1235_) 
                                                     << 4U) 
                                                    | ((8U 
                                                        & (IData)(vlSelf->top__DOT___3647_)) 
                                                       | (IData)(vlSelf->top__DOT___0154_)))))) 
                                       + (0x40U | (
                                                   (0x1800U 
                                                    & vlSelf->top__DOT___1972_) 
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
                                                                           | (IData)(vlSelf->top__DOT___0287_)))))))))))) 
                                      >> 0xcU));
    vlSelf->top__DOT___0129_ = ((IData)(vlSelf->top__DOT___0131_) 
                                & (~ (IData)(vlSelf->top__DOT___0130_)));
    vlSelf->top__DOT____VdfgTmp_ha9176dab__0 = (((IData)(vlSelf->top__DOT___1527_) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->top__DOT___0084_) 
                                                    << 6U) 
                                                   | ((0x3cU 
                                                       & ((IData)(vlSelf->top__DOT___3749_) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->top__DOT____VdfgTmp_h8da83138__0))));
    vlSelf->top__DOT___1971_ = ((0x3f80000U & ((2U 
                                                | ((0x3000000U 
                                                    & vlSelf->top__DOT___1973_) 
                                                   | (((IData)(vlSelf->top__DOT___0504_) 
                                                       << 0x17U) 
                                                      | (((IData)(vlSelf->top__DOT___1597_) 
                                                          << 0x16U) 
                                                         | (((IData)(vlSelf->top__DOT___0684_) 
                                                             << 0x15U) 
                                                            | ((0x180000U 
                                                                & vlSelf->top__DOT___1973_) 
                                                               | ((0x7ffc0U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___1970_ 
                                                                               >> 0x27U)) 
                                                                      << 6U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0464_) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->top__DOT___1235_) 
                                                                         << 4U) 
                                                                        | ((8U 
                                                                            & (IData)(vlSelf->top__DOT___3647_)) 
                                                                           | (IData)(vlSelf->top__DOT___0154_))))))))))) 
                                               + (0x40U 
                                                  | ((0x3c00000U 
                                                      & vlSelf->top__DOT___1972_) 
                                                     | (((IData)(vlSelf->top__DOT___1687_) 
                                                         << 0x15U) 
                                                        | ((0x1ff800U 
                                                            & vlSelf->top__DOT___1972_) 
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
                                                                                | (IData)(vlSelf->top__DOT___0287_))))))))))))))) 
                                | (((IData)(vlSelf->top__DOT___0922_) 
                                    << 0x12U) | ((0x3e000U 
                                                  & ((2U 
                                                      | ((0x3ffc0U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___1970_ 
                                                                      >> 0x27U)) 
                                                             << 6U)) 
                                                         | (((IData)(vlSelf->top__DOT___0464_) 
                                                             << 5U) 
                                                            | (((IData)(vlSelf->top__DOT___1235_) 
                                                                << 4U) 
                                                               | ((8U 
                                                                   & (IData)(vlSelf->top__DOT___3647_)) 
                                                                  | (IData)(vlSelf->top__DOT___0154_)))))) 
                                                     + 
                                                     (0x40U 
                                                      | ((0x3f800U 
                                                          & vlSelf->top__DOT___1972_) 
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
                                                                                | (IData)(vlSelf->top__DOT___0287_))))))))))))) 
                                                 | (((IData)(vlSelf->top__DOT___1525_) 
                                                     << 0xcU) 
                                                    | (0xfffU 
                                                       & ((2U 
                                                           | ((0xfc0U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___1970_ 
                                                                           >> 0x27U)) 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0464_) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->top__DOT___1235_) 
                                                                     << 4U) 
                                                                    | ((8U 
                                                                        & (IData)(vlSelf->top__DOT___3647_)) 
                                                                       | (IData)(vlSelf->top__DOT___0154_)))))) 
                                                          + 
                                                          (0x40U 
                                                           | ((0x800U 
                                                               & vlSelf->top__DOT___1972_) 
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
                                                                                | (IData)(vlSelf->top__DOT___0287_)))))))))))))))));
    vlSelf->top__DOT____VdfgTmp_h14495456__0 = (((IData)(vlSelf->top__DOT___0895_) 
                                                 << 0x1fU) 
                                                | (((IData)(vlSelf->top__DOT___1127_) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->top__DOT___0058_) 
                                                       << 0x1dU) 
                                                      | (((IData)(vlSelf->top__DOT___0210_) 
                                                          << 0x1cU) 
                                                         | (((IData)(vlSelf->top__DOT___1004_) 
                                                             << 0x1bU) 
                                                            | (((IData)(vlSelf->top__DOT___0408_) 
                                                                << 0x1aU) 
                                                               | ((0x3f80000U 
                                                                   & vlSelf->top__DOT___1971_) 
                                                                  | (((IData)(vlSelf->top__DOT___0922_) 
                                                                      << 0x12U) 
                                                                     | ((0x3e000U 
                                                                         & vlSelf->top__DOT___1971_) 
                                                                        | (((IData)(vlSelf->top__DOT___1525_) 
                                                                            << 0xcU) 
                                                                           | (0xfffU 
                                                                              & vlSelf->top__DOT___1971_)))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__639(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__639\n"); );
    // Body
    vlSelf->top__DOT___1891_ = ((0x1fe0U & ((IData)(
                                                    (((((QData)((IData)(
                                                                        (0x7fU 
                                                                         & (vlSelf->top__DOT___2112_[2U] 
                                                                            >> 0x11U)))) 
                                                        << 0x39U) 
                                                       | (((QData)((IData)(
                                                                           (0xfU 
                                                                            & ((vlSelf->top__DOT___2095_[4U] 
                                                                                << 1U) 
                                                                               | (vlSelf->top__DOT___2095_[3U] 
                                                                                >> 0x1fU))))) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & ((IData)(vlSelf->top__DOT___2007_) 
                                                                                >> 1U)))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___1441_)) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->top__DOT___2095_[3U] 
                                                                                >> 0xcU)))) 
                                                                    << 0x22U) 
                                                                   | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT___1972_ 
                                                                                >> 0x16U)))) 
                                                                       << 0x1eU) 
                                                                      | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1687_) 
                                                                                << 0x1dU) 
                                                                                | ((0x1ff80000U 
                                                                                & (vlSelf->top__DOT___1972_ 
                                                                                << 8U)) 
                                                                                | ((0x7fff0U 
                                                                                & ((vlSelf->top__DOT___2112_[1U] 
                                                                                << 8U) 
                                                                                | (0xf0U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x18U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1666_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x18U)) 
                                                                                | (IData)(vlSelf->top__DOT___0058_)))))))))))))) 
                                                      + 
                                                      (((QData)((IData)(
                                                                        ((0xf8000000U 
                                                                          & (vlSelf->top__DOT___2112_[2U] 
                                                                             << 0xaU)) 
                                                                         | ((0x7800000U 
                                                                             & ((vlSelf->top__DOT___2095_[4U] 
                                                                                << 0x18U) 
                                                                                | (0x800000U 
                                                                                & (vlSelf->top__DOT___2095_[3U] 
                                                                                >> 8U)))) 
                                                                            | ((0x7f8000U 
                                                                                & ((IData)(vlSelf->top__DOT___2007_) 
                                                                                << 0xeU)) 
                                                                               | (((IData)(vlSelf->top__DOT___1441_) 
                                                                                << 0xeU) 
                                                                                | ((0x3ff0U 
                                                                                & (vlSelf->top__DOT___2095_[3U] 
                                                                                >> 8U)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___1972_ 
                                                                                >> 0x16U))))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->top__DOT___1687_) 
                                                                           << 0x1fU) 
                                                                          | ((0x7fe00000U 
                                                                              & (vlSelf->top__DOT___1972_ 
                                                                                << 0xaU)) 
                                                                             | ((0x1fffc0U 
                                                                                & ((vlSelf->top__DOT___2112_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1666_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x16U)))))))))) 
                                                     >> 0x38U)) 
                                            << 5U)) 
                                | (((IData)(vlSelf->top__DOT___0639_) 
                                    << 4U) | (((IData)(vlSelf->top__DOT___0226_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0404_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___1283_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0219_))))));
    vlSelf->top__DOT___0596_ = (1U & ((((0x1fe0U & (IData)(vlSelf->top__DOT___1891_)) 
                                        | (((IData)(vlSelf->top__DOT___0639_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT___0226_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0404_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___1283_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0219_)))))) 
                                       + (0x20U | (
                                                   (0x1000U 
                                                    & ((IData)(vlSelf->top__DOT___3732_) 
                                                       << 5U)) 
                                                   | ((0x800U 
                                                       & (IData)(vlSelf->top__DOT___1890_)) 
                                                      | ((0x400U 
                                                          & ((IData)(vlSelf->top__DOT___3732_) 
                                                             << 5U)) 
                                                         | ((0x200U 
                                                             & ((IData)(vlSelf->top__DOT___3732_) 
                                                                << 5U)) 
                                                            | ((0x1c0U 
                                                                & (IData)(vlSelf->top__DOT___1890_)) 
                                                               | (((IData)(vlSelf->top__DOT___0226_) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->top__DOT___0404_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___0306_) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSelf->top__DOT___0116_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___0226_)))))))))))) 
                                      >> 0xcU));
    vlSelf->top__DOT___1753_ = (1U & ((((0xfe0U & (IData)(vlSelf->top__DOT___1891_)) 
                                        | (((IData)(vlSelf->top__DOT___0639_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT___0226_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0404_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___1283_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0219_)))))) 
                                       + (0x20U | (
                                                   (0x800U 
                                                    & (IData)(vlSelf->top__DOT___1890_)) 
                                                   | ((0x400U 
                                                       & ((IData)(vlSelf->top__DOT___3732_) 
                                                          << 5U)) 
                                                      | ((0x200U 
                                                          & ((IData)(vlSelf->top__DOT___3732_) 
                                                             << 5U)) 
                                                         | ((0x1c0U 
                                                             & (IData)(vlSelf->top__DOT___1890_)) 
                                                            | (((IData)(vlSelf->top__DOT___0226_) 
                                                                << 4U) 
                                                               | (((IData)(vlSelf->top__DOT___0404_) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelf->top__DOT___0306_) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->top__DOT___0116_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___0226_))))))))))) 
                                      >> 0xbU));
    vlSelf->top__DOT___1624_ = (1U & ((((0xe0U & (IData)(vlSelf->top__DOT___1891_)) 
                                        | (((IData)(vlSelf->top__DOT___0639_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT___0226_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0404_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___1283_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0219_)))))) 
                                       + (0x20U | (
                                                   (0xc0U 
                                                    & (IData)(vlSelf->top__DOT___1890_)) 
                                                   | (((IData)(vlSelf->top__DOT___0226_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___0404_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___0306_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___0116_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0226_)))))))) 
                                      >> 7U));
    vlSelf->top__DOT___1312_ = (1U & ((((0x60U & (IData)(vlSelf->top__DOT___1891_)) 
                                        | (((IData)(vlSelf->top__DOT___0639_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT___0226_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0404_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___1283_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0219_)))))) 
                                       + (0x20U | (
                                                   (0x40U 
                                                    & (IData)(vlSelf->top__DOT___1890_)) 
                                                   | (((IData)(vlSelf->top__DOT___0226_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___0404_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___0306_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___0116_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0226_)))))))) 
                                      >> 6U));
    vlSelf->top__DOT___0021_ = ((IData)(vlSelf->top__DOT___1753_) 
                                | (IData)(vlSelf->top__DOT___0042_));
    vlSelf->top__DOT___1659_ = ((IData)(vlSelf->top__DOT___1624_) 
                                | (IData)(vlSelf->top__DOT___0218_));
    vlSelf->top__DOT___1311_ = (1U & (~ (((IData)(vlSelf->top__DOT___0438_) 
                                          & (IData)(vlSelf->top__DOT___0905_)) 
                                         | ((IData)(vlSelf->top__DOT___1312_) 
                                            & (~ (IData)(vlSelf->top__DOT___0205_))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__641(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__641\n"); );
    // Body
    vlSelf->top__DOT___0249_ = (1U & (~ ((((IData)(vlSelf->top__DOT___3638_) 
                                           >> 5U) & (IData)(vlSelf->top__DOT___0000_)) 
                                         | (IData)(vlSelf->top__DOT___0996_))));
    vlSelf->top__DOT___1177_ = (1U & (~ (((IData)(vlSelf->top__DOT___0249_) 
                                          & (IData)(vlSelf->top__DOT___0343_)) 
                                         | (IData)(vlSelf->top__DOT___0443_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__643(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__643\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    vlSelf->top__DOT___1515_ = (1U & ((((vlSelf->top__DOT___1999_[1U] 
                                         << 0x18U) 
                                        | (vlSelf->top__DOT___1999_[1U] 
                                           >> 8U)) 
                                       + ((0x1ff800U 
                                           & vlSelf->top__DOT___2038_[0U]) 
                                          | ((0x7fcU 
                                              & (vlSelf->top__DOT___2034_ 
                                                 >> 0xdU)) 
                                             | (3U 
                                                & vlSelf->top__DOT___2038_[0U])))) 
                                      >> 0x14U));
    __Vtemp_4[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1030_)) 
                              << 0x3bU) | (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & ((vlSelf->top__DOT___1999_[3U] 
                                                                 << 0x14U) 
                                                                | (vlSelf->top__DOT___1999_[2U] 
                                                                   >> 0xcU))))) 
                                            << 0x24U) 
                                           | (((QData)((IData)(vlSelf->top__DOT___1817_)) 
                                               << 0x23U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT___1999_[2U] 
                                                                      >> 3U)))) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT___0574_) 
                                                                     << 0x1aU) 
                                                                    | (0x3ffffffU 
                                                                       & ((vlSelf->top__DOT___1999_[2U] 
                                                                           << 0x18U) 
                                                                          | (vlSelf->top__DOT___1999_[1U] 
                                                                             >> 8U)))))))))));
    __Vtemp_4[1U] = ((0xf0000000U & (vlSelf->top__DOT___1999_[3U] 
                                     << 0x18U)) | (IData)(
                                                          ((((QData)((IData)(vlSelf->top__DOT___1030_)) 
                                                             << 0x3bU) 
                                                            | (((QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & ((vlSelf->top__DOT___1999_[3U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->top__DOT___1999_[2U] 
                                                                                >> 0xcU))))) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___1817_)) 
                                                                   << 0x23U) 
                                                                  | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (vlSelf->top__DOT___1999_[2U] 
                                                                                >> 3U)))) 
                                                                      << 0x1bU) 
                                                                     | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0574_) 
                                                                                << 0x1aU) 
                                                                                | (0x3ffffffU 
                                                                                & ((vlSelf->top__DOT___1999_[2U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->top__DOT___1999_[1U] 
                                                                                >> 8U)))))))))) 
                                                           >> 0x20U)));
    __Vtemp_4[2U] = ((0x10000U & (vlSelf->top__DOT___1999_[3U] 
                                  >> 8U)) | (((IData)(vlSelf->top__DOT___1109_) 
                                              << 0xfU) 
                                             | (0x7fffU 
                                                & (vlSelf->top__DOT___1999_[3U] 
                                                   >> 8U))));
    __Vtemp_5[0U] = (IData)((((QData)((IData)((1U & 
                                               (vlSelf->top__DOT___3668_[0U] 
                                                >> 4U)))) 
                              << 0x2fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT___2038_[1U] 
                                                                >> 0xeU)))) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0092_)) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (3U 
                                                                   & (vlSelf->top__DOT___2038_[1U] 
                                                                      >> 0xbU)))) 
                                                  << 0x2bU) 
                                                 | (((QData)((IData)(
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3665_ 
                                                                                >> 0x29U))))) 
                                                     << 0x29U) 
                                                    | (((QData)((IData)(
                                                                        (0xffffU 
                                                                         & ((vlSelf->top__DOT___2038_[1U] 
                                                                             << 7U) 
                                                                            | (vlSelf->top__DOT___2038_[0U] 
                                                                               >> 0x19U))))) 
                                                        << 0x19U) 
                                                       | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_he6287f76__0)))))))));
    __Vtemp_5[1U] = (((IData)((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->top__DOT___2038_[2U])) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT___2038_[1U])) 
                                                    >> 0x10U)))) 
                      << 0x10U) | (IData)(((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT___3668_[0U] 
                                                                 >> 4U)))) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___2038_[1U] 
                                                                    >> 0xeU)))) 
                                                << 0x2eU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0092_)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (3U 
                                                                       & (vlSelf->top__DOT___2038_[1U] 
                                                                          >> 0xbU)))) 
                                                      << 0x2bU) 
                                                     | (((QData)((IData)(
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT___3665_ 
                                                                                >> 0x29U))))) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            (0xffffU 
                                                                             & ((vlSelf->top__DOT___2038_[1U] 
                                                                                << 7U) 
                                                                                | (vlSelf->top__DOT___2038_[0U] 
                                                                                >> 0x19U))))) 
                                                            << 0x19U) 
                                                           | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_he6287f76__0)))))))) 
                                           >> 0x20U)));
    __Vtemp_5[2U] = (((IData)((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->top__DOT___2038_[2U])) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT___2038_[1U])) 
                                                    >> 0x10U)))) 
                      >> 0x10U) | ((IData)(((0x1ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->top__DOT___2038_[2U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top__DOT___2038_[1U])) 
                                                   >> 0x10U))) 
                                            >> 0x20U)) 
                                   << 0x10U));
    VL_ADD_W(3, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    __Vtemp_8[0U] = (((IData)((0x7fffffffffffffULL 
                               & (((QData)((IData)(
                                                   (0x1ffffU 
                                                    & __Vtemp_6[2U]))) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 __Vtemp_6[1U])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   __Vtemp_6[0U])) 
                                                   >> 0x1aU))))) 
                      << 0x1aU) | ((0x2000000U & ((
                                                   (vlSelf->top__DOT___1999_[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->top__DOT___1999_[1U] 
                                                      >> 8U)) 
                                                  + 
                                                  ((0x2000000U 
                                                    & vlSelf->top__DOT___2038_[0U]) 
                                                   | vlSelf->top__DOT____VdfgTmp_he6287f76__0))) 
                                   | ((0x1e00000U & 
                                       (((vlSelf->top__DOT___1999_[2U] 
                                          << 0x18U) 
                                         | (vlSelf->top__DOT___1999_[1U] 
                                            >> 8U)) 
                                        + vlSelf->top__DOT____VdfgTmp_he6287f76__0)) 
                                      | (((IData)(vlSelf->top__DOT___1515_) 
                                          << 0x14U) 
                                         | (0xfffffU 
                                            & (((vlSelf->top__DOT___1999_[1U] 
                                                 << 0x18U) 
                                                | (vlSelf->top__DOT___1999_[1U] 
                                                   >> 8U)) 
                                               + ((0xff800U 
                                                   & vlSelf->top__DOT___2038_[0U]) 
                                                  | (IData)(vlSelf->top__DOT____VdfgTmp_h8491c9fc__0))))))));
    vlSelf->top__DOT___2037_[0U] = __Vtemp_8[0U];
    vlSelf->top__DOT___2037_[1U] = (((IData)((0x7fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & __Vtemp_6[2U]))) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(
                                                                     __Vtemp_6[1U])) 
                                                     << 6U) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_6[0U])) 
                                                       >> 0x1aU))))) 
                                     >> 6U) | ((IData)(
                                                       ((0x7fffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             (0x1ffffU 
                                                                              & __Vtemp_6[2U]))) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(
                                                                                __Vtemp_6[1U])) 
                                                                << 6U) 
                                                               | ((QData)((IData)(
                                                                                __Vtemp_6[0U])) 
                                                                  >> 0x1aU)))) 
                                                        >> 0x20U)) 
                                               << 0x1aU));
    vlSelf->top__DOT___2037_[2U] = ((IData)(((0x7fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & __Vtemp_6[2U]))) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(
                                                                     __Vtemp_6[1U])) 
                                                     << 6U) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_6[0U])) 
                                                       >> 0x1aU)))) 
                                             >> 0x20U)) 
                                    >> 6U);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__649(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__649\n"); );
    // Body
    vlSelf->top__DOT___1571_ = (1U & ((((0x3c0U & (
                                                   vlSelf->top__DOT___2000_[2U] 
                                                   >> 0x10U)) 
                                        | (((IData)(vlSelf->top__DOT___0586_) 
                                            << 5U) 
                                           | ((0x10U 
                                               & (IData)(vlSelf->top__DOT___3749_)) 
                                              | ((8U 
                                                  & (IData)(vlSelf->top__DOT___3749_)) 
                                                 | ((4U 
                                                     & (IData)(vlSelf->top__DOT___3749_)) 
                                                    | ((2U 
                                                        & (IData)(vlSelf->top__DOT___3749_)) 
                                                       | (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT___1970_ 
                                                                     >> 5U))))))))) 
                                       + ((0x300U & 
                                           (vlSelf->top__DOT___2002_ 
                                            << 8U)) 
                                          | (((IData)(vlSelf->top__DOT___1527_) 
                                              << 7U) 
                                             | (((IData)(vlSelf->top__DOT___0084_) 
                                                 << 6U) 
                                                | ((0x20U 
                                                    & ((IData)(vlSelf->top__DOT___3749_) 
                                                       << 1U)) 
                                                   | ((0x10U 
                                                       & ((IData)(vlSelf->top__DOT___3749_) 
                                                          << 1U)) 
                                                      | ((8U 
                                                          & ((IData)(vlSelf->top__DOT___3749_) 
                                                             << 1U)) 
                                                         | ((4U 
                                                             & ((IData)(vlSelf->top__DOT___3749_) 
                                                                << 1U)) 
                                                            | ((2U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___1970_ 
                                                                            >> 5U)) 
                                                                   << 1U)) 
                                                               | (IData)(vlSelf->top__DOT___0311_)))))))))) 
                                      >> 9U));
    vlSelf->top__DOT___1671_ = (1U & (((((IData)(vlSelf->top__DOT___0113_) 
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
                                                 | (((IData)(vlSelf->top__DOT___0586_) 
                                                     << 5U) 
                                                    | ((0x10U 
                                                        & (IData)(vlSelf->top__DOT___3749_)) 
                                                       | ((8U 
                                                           & (IData)(vlSelf->top__DOT___3749_)) 
                                                          | ((4U 
                                                              & (IData)(vlSelf->top__DOT___3749_)) 
                                                             | ((2U 
                                                                 & (IData)(vlSelf->top__DOT___3749_)) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___1970_ 
                                                                              >> 5U)))))))))))) 
                                       + ((0x30000U 
                                           & (vlSelf->top__DOT___1982_ 
                                              << 0xaU)) 
                                          | (((IData)(vlSelf->top__DOT___1287_) 
                                              << 0xfU) 
                                             | ((0x7f00U 
                                                 & (vlSelf->top__DOT___2002_ 
                                                    << 8U)) 
                                                | (((IData)(vlSelf->top__DOT___1527_) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->top__DOT___0084_) 
                                                       << 6U) 
                                                      | ((0x20U 
                                                          & ((IData)(vlSelf->top__DOT___3749_) 
                                                             << 1U)) 
                                                         | ((0x10U 
                                                             & ((IData)(vlSelf->top__DOT___3749_) 
                                                                << 1U)) 
                                                            | ((8U 
                                                                & ((IData)(vlSelf->top__DOT___3749_) 
                                                                   << 1U)) 
                                                               | ((4U 
                                                                   & ((IData)(vlSelf->top__DOT___3749_) 
                                                                      << 1U)) 
                                                                  | ((2U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 5U)) 
                                                                         << 1U)) 
                                                                     | (IData)(vlSelf->top__DOT___0311_)))))))))))) 
                                      >> 0x11U));
    vlSelf->top__DOT___1938_ = ((1U & (IData)(vlSelf->top__DOT___1938_)) 
                                | ((0x1e0U & ((((0xc0U 
                                                 & (vlSelf->top__DOT___2000_[2U] 
                                                    >> 0x10U)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_hcda57c3b__0)) 
                                               + (IData)(vlSelf->top__DOT____VdfgTmp_ha9176dab__0)) 
                                              << 1U)) 
                                   | (((IData)(vlSelf->top__DOT___0609_) 
                                       << 4U) | (((IData)(vlSelf->top__DOT___0076_) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT___0241_) 
                                                     << 2U) 
                                                    | ((IData)(vlSelf->top__DOT___0134_) 
                                                       << 1U))))));
    vlSelf->top__DOT___0488_ = ((IData)(vlSelf->top__DOT___1671_) 
                                | (IData)(vlSelf->top__DOT___0043_));
    vlSelf->top__DOT___2203_ = (((IData)(vlSelf->top__DOT___1671_) 
                                 << 0x11U) | ((0x1fc00U 
                                               & (((0x1f000U 
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
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_hcda57c3b__0)))) 
                                                  + 
                                                  ((0x10000U 
                                                    & (vlSelf->top__DOT___1982_ 
                                                       << 0xaU)) 
                                                   | (((IData)(vlSelf->top__DOT___1287_) 
                                                       << 0xfU) 
                                                      | ((0x7f00U 
                                                          & (vlSelf->top__DOT___2002_ 
                                                             << 8U)) 
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_ha9176dab__0)))))) 
                                              | (((IData)(vlSelf->top__DOT___1571_) 
                                                  << 9U) 
                                                 | ((0x100U 
                                                     & (((0x1c0U 
                                                          & (vlSelf->top__DOT___2000_[2U] 
                                                             >> 0x10U)) 
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_hcda57c3b__0)) 
                                                        + 
                                                        ((0x100U 
                                                          & (vlSelf->top__DOT___2002_ 
                                                             << 8U)) 
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_ha9176dab__0)))) 
                                                    | ((0xf0U 
                                                        & ((IData)(vlSelf->top__DOT___1938_) 
                                                           >> 1U)) 
                                                       | (((IData)(vlSelf->top__DOT___0131_) 
                                                           << 3U) 
                                                          | (7U 
                                                             & (((6U 
                                                                  & (IData)(vlSelf->top__DOT___3749_)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT___1970_ 
                                                                               >> 5U)))) 
                                                                + 
                                                                ((4U 
                                                                  & ((IData)(vlSelf->top__DOT___3749_) 
                                                                     << 1U)) 
                                                                 | (IData)(vlSelf->top__DOT____VdfgTmp_h8da83138__0))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__653(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__653\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0117_)) 
                              << 0x3cU) | (((QData)((IData)(vlSelf->top__DOT___0272_)) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (3U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3643_ 
                                                                           >> 0x34U))))) 
                                               << 0x39U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___3643_ 
                                                                              >> 0x33U))))) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     (0x7ffffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x20U))))) 
                                                     << 0x25U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x1fU))))) 
                                                        << 0x24U) 
                                                       | (((QData)((IData)(
                                                                           (vlSelf->top__DOT___1920_ 
                                                                            >> 0x16U))) 
                                                           << 0x1aU) 
                                                          | (QData)((IData)(
                                                                            ((0x2000000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x14U)) 
                                                                                << 0x19U)) 
                                                                             | ((0x1800000U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 4U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x11U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 4U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0xeU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x7ffc0U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___3643_) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0185_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0318_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0873_))))))))))))))))))))));
    __Vtemp_1[1U] = (((IData)((vlSelf->top__DOT___1970_ 
                               >> 0x26U)) << 0x1dU) 
                     | (IData)(((((QData)((IData)(vlSelf->top__DOT___0117_)) 
                                  << 0x3cU) | (((QData)((IData)(vlSelf->top__DOT___0272_)) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT___3643_ 
                                                                               >> 0x34U))))) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x33U))))) 
                                                      << 0x38U) 
                                                     | (((QData)((IData)(
                                                                         (0x7ffffU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x20U))))) 
                                                         << 0x25U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x1fU))))) 
                                                            << 0x24U) 
                                                           | (((QData)((IData)(
                                                                               (vlSelf->top__DOT___1920_ 
                                                                                >> 0x16U))) 
                                                               << 0x1aU) 
                                                              | (QData)((IData)(
                                                                                ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x14U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1800000U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 4U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x11U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 4U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0xeU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x7ffc0U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___3643_) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0185_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0318_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0873_))))))))))))))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___2019_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___2019_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2019_[2U] = (3U & ((IData)((vlSelf->top__DOT___1970_ 
                                                   >> 0x26U)) 
                                          >> 3U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__654(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__654\n"); );
    // Body
    vlSelf->top__DOT___1227_ = (1U & ((((0x78U & ((IData)(vlSelf->top__DOT___2042_) 
                                                  << 2U)) 
                                        | (((IData)(vlSelf->top__DOT___1532_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0637_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0099_)))) 
                                       + ((0x40U & 
                                           ((IData)(vlSelf->top__DOT___3749_) 
                                            << 2U)) 
                                          | ((0x20U 
                                              & ((IData)(vlSelf->top__DOT___3749_) 
                                                 << 2U)) 
                                             | ((0x10U 
                                                 & ((IData)(vlSelf->top__DOT___3749_) 
                                                    << 2U)) 
                                                | ((8U 
                                                    & ((IData)(vlSelf->top__DOT___3749_) 
                                                       << 2U)) 
                                                   | ((4U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___1970_ 
                                                                   >> 5U)) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelf->top__DOT___0681_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0139_)))))))) 
                                      >> 6U));
    vlSelf->top__DOT___1643_ = (1U & ((((0x38U & ((IData)(vlSelf->top__DOT___2042_) 
                                                  << 2U)) 
                                        | (((IData)(vlSelf->top__DOT___1532_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0637_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0099_)))) 
                                       + ((0x20U & 
                                           ((IData)(vlSelf->top__DOT___3749_) 
                                            << 2U)) 
                                          | ((0x10U 
                                              & ((IData)(vlSelf->top__DOT___3749_) 
                                                 << 2U)) 
                                             | ((8U 
                                                 & ((IData)(vlSelf->top__DOT___3749_) 
                                                    << 2U)) 
                                                | ((4U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___1970_ 
                                                                >> 5U)) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->top__DOT___0681_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0139_))))))) 
                                      >> 5U));
    vlSelf->top__DOT___1542_ = (1U & ((((0x18U & ((IData)(vlSelf->top__DOT___2042_) 
                                                  << 2U)) 
                                        | (((IData)(vlSelf->top__DOT___1532_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0637_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0099_)))) 
                                       + ((0x10U & 
                                           ((IData)(vlSelf->top__DOT___3749_) 
                                            << 2U)) 
                                          | ((8U & 
                                              ((IData)(vlSelf->top__DOT___3749_) 
                                               << 2U)) 
                                             | ((4U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___1970_ 
                                                             >> 5U)) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->top__DOT___0681_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0139_)))))) 
                                      >> 4U));
    vlSelf->top__DOT___1554_ = (1U & ((((0xeU & (vlSelf->top__DOT___1971_ 
                                                 >> 0xcU)) 
                                        | (IData)(vlSelf->top__DOT___1525_)) 
                                       + ((8U & ((IData)(vlSelf->top__DOT___2042_) 
                                                 << 2U)) 
                                          | (((IData)(vlSelf->top__DOT___0924_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___0042_)))) 
                                      >> 3U));
    vlSelf->top__DOT___2061_ = ((0x7f0U & (((0x780U 
                                             & (vlSelf->top__DOT___1971_ 
                                                >> 0xcU)) 
                                            | (((IData)(vlSelf->top__DOT___0922_) 
                                                << 6U) 
                                               | ((0x3eU 
                                                   & (vlSelf->top__DOT___1971_ 
                                                      >> 0xcU)) 
                                                  | (IData)(vlSelf->top__DOT___1525_)))) 
                                           + ((0x7f8U 
                                               & ((IData)(vlSelf->top__DOT___2042_) 
                                                  << 2U)) 
                                              | (IData)(vlSelf->top__DOT____VdfgTmp_h97ea9c8b__0)))) 
                                | (((IData)(vlSelf->top__DOT___1554_) 
                                    << 3U) | (7U & 
                                              (((6U 
                                                 & (vlSelf->top__DOT___1971_ 
                                                    >> 0xcU)) 
                                                | (IData)(vlSelf->top__DOT___1525_)) 
                                               + (IData)(vlSelf->top__DOT____VdfgTmp_h97ea9c8b__0)))));
    vlSelf->top__DOT____VdfgTmp_h9c958e45__0 = (((IData)(vlSelf->top__DOT___1027_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___0010_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___1554_) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT___3799_ 
                                                                    >> 0x25U))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__655(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__655\n"); );
    // Body
    vlSelf->top__DOT___0542_ = ((~ (((IData)(vlSelf->top__DOT___0043_) 
                                     & (IData)(vlSelf->top__DOT___0922_)) 
                                    | (IData)(vlSelf->top__DOT___0921_))) 
                                & ((IData)(vlSelf->top__DOT___1869_) 
                                   ^ ((IData)(vlSelf->top__DOT___1089_) 
                                      ^ (IData)(vlSelf->top__DOT___1799_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__656(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__656\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h1b9402e5__0 = (0x3fffffffU 
                                                & (((0x3ffffffeU 
                                                     & (vlSelf->top__DOT___3701_[1U] 
                                                        >> 1U)) 
                                                    | (IData)(vlSelf->top__DOT___0166_)) 
                                                   + 
                                                   ((0x3f800000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___2069_ 
                                                                 >> 0x17U)) 
                                                        << 0x17U)) 
                                                    | ((0x400000U 
                                                        & ((IData)(
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
                                                                               | ((0x18U 
                                                                                & ((IData)(vlSelf->top__DOT___3695_) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2069_ 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0325_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0922_))))))))))))))));
    vlSelf->top__DOT___1871_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_h250083de__0) 
                                       + (vlSelf->top__DOT____VdfgTmp_h1b9402e5__0 
                                          >> 0x12U)) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__659(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__659\n"); );
    // Body
    vlSelf->top__DOT___2219_ = (((QData)((IData)((0x1fffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___3641_ 
                                                             >> 0x29U))))) 
                                 << 0x1fU) | (QData)((IData)(
                                                             ((0x7fe00000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___2069_ 
                                                                           >> 0x17U)) 
                                                                  << 0x15U)) 
                                                              | ((0x100000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3641_ 
                                                                              >> 0x1eU)) 
                                                                     << 0x14U)) 
                                                                 | ((0xf0000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___2069_ 
                                                                                >> 0x12U)) 
                                                                        << 0x10U)) 
                                                                    | ((0x8000U 
                                                                        & vlSelf->top__DOT___3708_) 
                                                                       | (((IData)(vlSelf->top__DOT___0796_) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->top__DOT___0043_) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->top__DOT___0232_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3691_) 
                                                                                << 8U)) 
                                                                                | ((0x300U 
                                                                                & ((IData)(vlSelf->top__DOT___3691_) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0284_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0449_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1233_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0021_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0324_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0165_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1371_)))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__661(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__661\n"); );
    // Body
    vlSelf->top__DOT___2046_ = ((0x380000U & (vlSelf->top__DOT___2038_[0U] 
                                              >> 6U)) 
                                | ((0x40000U & ((IData)(
                                                        (vlSelf->top__DOT___3665_ 
                                                         >> 0x18U)) 
                                                << 0x12U)) 
                                   | ((0x38000U & (
                                                   vlSelf->top__DOT___2038_[0U] 
                                                   >> 6U)) 
                                      | (((IData)(vlSelf->top__DOT___0116_) 
                                          << 0xeU) 
                                         | (((IData)(vlSelf->top__DOT___0354_) 
                                             << 0xdU) 
                                            | (((IData)(vlSelf->top__DOT___0522_) 
                                                << 0xcU) 
                                               | (((IData)(vlSelf->top__DOT___0187_) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->top__DOT___0249_) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->top__DOT___0217_) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->top__DOT___0242_) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->top__DOT___0193_) 
                                                               << 7U) 
                                                              | (IData)(vlSelf->top__DOT___3675_))))))))))));
    vlSelf->top__DOT___0767_ = (1U & ((((0x600U & (
                                                   vlSelf->top__DOT___1951_[4U] 
                                                   >> 7U)) 
                                        | (((IData)(vlSelf->top__DOT___1042_) 
                                            << 8U) 
                                           | ((0xf0U 
                                               & (vlSelf->top__DOT___1951_[4U] 
                                                  >> 7U)) 
                                              | (((IData)(vlSelf->top__DOT___0124_) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT___0929_) 
                                                     << 2U) 
                                                    | (3U 
                                                       & (vlSelf->top__DOT___1951_[4U] 
                                                          >> 7U))))))) 
                                       + (((IData)(vlSelf->top__DOT___0249_) 
                                           << 0xaU) 
                                          | (((IData)(vlSelf->top__DOT___0217_) 
                                              << 9U) 
                                             | (((IData)(vlSelf->top__DOT___0242_) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                    << 7U) 
                                                   | ((0x40U 
                                                       & vlSelf->top__DOT___2046_) 
                                                      | ((0x20U 
                                                          & (IData)(vlSelf->top__DOT___3675_)) 
                                                         | ((0x10U 
                                                             & vlSelf->top__DOT___2046_) 
                                                            | ((8U 
                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                               | (7U 
                                                                  & vlSelf->top__DOT___2046_)))))))))) 
                                      >> 0xaU));
    vlSelf->top__DOT___1639_ = (1U & ((((0x3f0000U 
                                         & (vlSelf->top__DOT___1951_[4U] 
                                            >> 7U)) 
                                        | (((IData)(vlSelf->top__DOT___1276_) 
                                            << 0xfU) 
                                           | ((0x7e00U 
                                               & (vlSelf->top__DOT___1951_[4U] 
                                                  >> 7U)) 
                                              | (((IData)(vlSelf->top__DOT___1042_) 
                                                  << 8U) 
                                                 | ((0xf0U 
                                                     & (vlSelf->top__DOT___1951_[4U] 
                                                        >> 7U)) 
                                                    | (((IData)(vlSelf->top__DOT___0124_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___0929_) 
                                                           << 2U) 
                                                          | (3U 
                                                             & (vlSelf->top__DOT___1951_[4U] 
                                                                >> 7U))))))))) 
                                       + ((0x380000U 
                                           & (vlSelf->top__DOT___2038_[0U] 
                                              >> 6U)) 
                                          | ((0x40000U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___3665_ 
                                                          >> 0x18U)) 
                                                 << 0x12U)) 
                                             | ((0x38000U 
                                                 & (vlSelf->top__DOT___2038_[0U] 
                                                    >> 6U)) 
                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                    << 0xeU) 
                                                   | (((IData)(vlSelf->top__DOT___0354_) 
                                                       << 0xdU) 
                                                      | (((IData)(vlSelf->top__DOT___0522_) 
                                                          << 0xcU) 
                                                         | (((IData)(vlSelf->top__DOT___0187_) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSelf->top__DOT___0249_) 
                                                                << 0xaU) 
                                                               | (((IData)(vlSelf->top__DOT___0217_) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSelf->top__DOT___0242_) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSelf->top__DOT___0193_) 
                                                                         << 7U) 
                                                                        | ((0x40U 
                                                                            & vlSelf->top__DOT___2046_) 
                                                                           | ((0x20U 
                                                                               & (IData)(vlSelf->top__DOT___3675_)) 
                                                                              | ((0x10U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | (7U 
                                                                                & vlSelf->top__DOT___2046_))))))))))))))))) 
                                      >> 0x15U));
    vlSelf->top__DOT___1833_ = (1U & ((((vlSelf->top__DOT___1951_[4U] 
                                         << 0x19U) 
                                        | (vlSelf->top__DOT___1951_[4U] 
                                           >> 7U)) 
                                       + vlSelf->top__DOT___2046_) 
                                      >> 1U));
    vlSelf->top__DOT___0230_ = (1U & (((((IData)(vlSelf->top__DOT___0929_) 
                                         << 2U) | (3U 
                                                   & (vlSelf->top__DOT___1951_[4U] 
                                                      >> 7U))) 
                                       + vlSelf->top__DOT___2046_) 
                                      >> 2U));
    vlSelf->top__DOT___0576_ = ((IData)(vlSelf->top__DOT___0656_) 
                                ^ (IData)(vlSelf->top__DOT___1833_));
    vlSelf->top__DOT___0229_ = ((IData)(vlSelf->top__DOT___0231_) 
                                & (~ (IData)(vlSelf->top__DOT___0230_)));
    vlSelf->top__DOT____VdfgTmp_h761d7dbe__0 = ((((IData)(vlSelf->top__DOT___0058_) 
                                                  ^ (IData)(vlSelf->top__DOT___1266_)) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___1235_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___0576_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___0187_) 
                                                             << 2U) 
                                                            | ((((IData)(vlSelf->top__DOT___0205_) 
                                                                 & (IData)(vlSelf->top__DOT___0340_)) 
                                                                << 1U) 
                                                               | (1U 
                                                                  & (~ (IData)(vlSelf->top__DOT___0106_)))))))));
    vlSelf->top__DOT___1096_ = (1U & (~ (((IData)(vlSelf->top__DOT___0454_) 
                                          & (IData)(vlSelf->top__DOT___1365_)) 
                                         | ((IData)(vlSelf->top__DOT___1225_) 
                                            & (IData)(vlSelf->top__DOT___0229_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__662(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__662\n"); );
    // Body
    vlSelf->top__DOT___0247_ = ((IData)(vlSelf->top__DOT___0249_) 
                                & (~ ((IData)(vlSelf->top__DOT___3823_) 
                                      >> 4U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__663(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__663\n"); );
    // Body
    vlSelf->top__DOT___1610_ = (1U & (((((IData)(vlSelf->top__DOT___1030_) 
                                         << 0x16U) 
                                        | (0x3fffffU 
                                           & ((vlSelf->top__DOT___1999_[3U] 
                                               << 0x13U) 
                                              | (vlSelf->top__DOT___1999_[2U] 
                                                 >> 0xdU)))) 
                                       + (((IData)(vlSelf->top__DOT___0425_) 
                                           << 0x16U) 
                                          | (((IData)(vlSelf->top__DOT___0110_) 
                                              << 0x15U) 
                                             | (((IData)(vlSelf->top__DOT___0994_) 
                                                 << 0x14U) 
                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                    << 0x13U) 
                                                   | (((IData)(vlSelf->top__DOT___0578_) 
                                                       << 0x12U) 
                                                      | (((IData)(vlSelf->top__DOT___0722_) 
                                                          << 0x11U) 
                                                         | (((IData)(vlSelf->top__DOT___0154_) 
                                                             << 0xfU) 
                                                            | (((IData)(vlSelf->top__DOT___0232_) 
                                                                << 0xeU) 
                                                               | (((IData)(vlSelf->top__DOT___0503_) 
                                                                   << 0xdU) 
                                                                  | (((IData)(vlSelf->top__DOT___1144_) 
                                                                      << 0xcU) 
                                                                     | (((IData)(vlSelf->top__DOT___0058_) 
                                                                         << 0xbU) 
                                                                        | ((0x400U 
                                                                            & (vlSelf->top__DOT___3751_ 
                                                                               >> 7U)) 
                                                                           | (((IData)(vlSelf->top__DOT___1027_) 
                                                                               << 9U) 
                                                                              | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0613_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0652_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0438_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0848_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0368_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0018_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0690_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___3697_)))))))))))))))))))))))) 
                                      >> 0x16U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__665(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__665\n"); );
    // Body
    vlSelf->top__DOT___0582_ = (1U & (~ (((IData)(vlSelf->top__DOT___0772_) 
                                          & (IData)(vlSelf->top__DOT___1571_)) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT___3769_ 
                                                     >> 0x17U)) 
                                            & (IData)(vlSelf->top__DOT___0431_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__667(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__667\n"); );
    // Body
    vlSelf->top__DOT___0414_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (((0xfe000000U 
                                                                       & (vlSelf->top__DOT___1920_ 
                                                                          << 3U)) 
                                                                      | (0x1000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x14U)) 
                                                                            << 0x18U))) 
                                                                     | ((0xc00000U 
                                                                         & (vlSelf->top__DOT___1920_ 
                                                                            << 3U)) 
                                                                        | ((0x200000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x11U)) 
                                                                               << 0x15U)) 
                                                                           | ((0x180000U 
                                                                               & (vlSelf->top__DOT___1920_ 
                                                                                << 3U)) 
                                                                              | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0xeU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2019_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0185_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0318_))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelf->top__DOT___0873_))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((0xc0000000U 
                                                                       & ((IData)(vlSelf->top__DOT___1939_) 
                                                                          << 0x16U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0501_) 
                                                                          << 0x1dU) 
                                                                         | ((0x10000000U 
                                                                             & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                << 0x16U)) 
                                                                            | ((IData)(vlSelf->top__DOT___1306_) 
                                                                               << 0x1bU)))) 
                                                                     | ((0x6000000U 
                                                                         & (vlSelf->top__DOT___2000_[0U] 
                                                                            << 0x16U)) 
                                                                        | (((IData)(vlSelf->top__DOT___1632_) 
                                                                            << 0x18U) 
                                                                           | (((IData)(vlSelf->top__DOT___1373_) 
                                                                               << 0x17U) 
                                                                              | ((0x400000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0795_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0854_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___3620_) 
                                                                                << 9U)) 
                                                                                | ((0x18000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 0xdU)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1564_) 
                                                                                << 0xeU) 
                                                                                | ((0x3000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 0xaU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3620_) 
                                                                                << 9U)) 
                                                                                | ((0x600U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 7U)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0984_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1329_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___3732_) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0600_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0856_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0134_)))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelf->top__DOT___0692_)))) 
                                                 >> 0x20U))));
    vlSelf->top__DOT___1410_ = (1U & (IData)((1ULL 
                                              & ((((((QData)((IData)(
                                                                     ((0x800U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x1fU)) 
                                                                          << 0xbU)) 
                                                                      | ((0x7feU 
                                                                          & (vlSelf->top__DOT___1920_ 
                                                                             >> 0x15U)) 
                                                                         | (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x14U))))))) 
                                                     << 0x19U) 
                                                    | ((QData)((IData)(
                                                                       ((0x600000U 
                                                                         & (vlSelf->top__DOT___1920_ 
                                                                            << 2U)) 
                                                                        | ((0x100000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x11U)) 
                                                                               << 0x14U)) 
                                                                           | ((0xc0000U 
                                                                               & (vlSelf->top__DOT___1920_ 
                                                                                << 2U)) 
                                                                              | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fff0U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___2019_[0U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0185_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0095_))))))))))) 
                                                       << 2U)) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0318_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0873_))))) 
                                                  + 
                                                  ((((QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0925_) 
                                                                       << 8U) 
                                                                      | ((0xf8U 
                                                                          & ((IData)(vlSelf->top__DOT___1939_) 
                                                                             >> 5U)) 
                                                                         | (((IData)(vlSelf->top__DOT___0501_) 
                                                                             << 2U) 
                                                                            | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 5U)) 
                                                                               | (IData)(vlSelf->top__DOT___1306_))))))) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       ((0x3000000U 
                                                                         & (vlSelf->top__DOT___2000_[0U] 
                                                                            << 0x15U)) 
                                                                        | (((IData)(vlSelf->top__DOT___1632_) 
                                                                            << 0x17U) 
                                                                           | (((IData)(vlSelf->top__DOT___1373_) 
                                                                               << 0x16U) 
                                                                              | ((0x200000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0795_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0854_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___3620_) 
                                                                                << 8U)) 
                                                                                | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 0xdU)) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1564_) 
                                                                                << 0xdU) 
                                                                                | ((0x1800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3620_) 
                                                                                << 8U)) 
                                                                                | ((0x300U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0984_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1329_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___3732_)) 
                                                                                | (((IData)(vlSelf->top__DOT___0600_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0856_)))))))))))))))))))))) 
                                                       << 2U)) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0134_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0692_)))))) 
                                                 >> 0x24U))));
    vlSelf->top__DOT___1409_ = (1U & (~ (((~ (IData)(vlSelf->top__DOT___0438_)) 
                                          & (IData)(vlSelf->top__DOT___1410_)) 
                                         | ((IData)(vlSelf->top__DOT___0071_) 
                                            & (IData)(vlSelf->top__DOT___0455_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__668(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__668\n"); );
    // Body
    vlSelf->top__DOT___1364_ = (1U & (IData)((1ULL 
                                              & ((((((QData)((IData)(vlSelf->top__DOT___0117_)) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0272_)) 
                                                        << 0x3bU) 
                                                       | (((QData)((IData)(
                                                                           (3U 
                                                                            & (vlSelf->top__DOT___2019_[1U] 
                                                                               >> 0x19U)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x33U)) 
                                                                                << 0x1fU) 
                                                                               | ((0x7ffff000U 
                                                                                & (vlSelf->top__DOT___2019_[1U] 
                                                                                << 7U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x1fU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7feU 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                >> 0x15U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x14U))))))))) 
                                                              << 0x19U) 
                                                             | ((QData)((IData)(
                                                                                ((0x600000U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 2U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x11U)) 
                                                                                << 0x14U)) 
                                                                                | ((0xc0000U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fff0U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___2019_[0U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0185_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0095_))))))))))) 
                                                                << 2U))))) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0318_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0873_))))) 
                                                  + 
                                                  ((((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT___2004_) 
                                                                         >> 6U)))) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        ((0x80000000U 
                                                                          & ((IData)(vlSelf->top__DOT___3618_) 
                                                                             << 0x19U)) 
                                                                         | ((0x70000000U 
                                                                             & (vlSelf->top__DOT___2018_[1U] 
                                                                                << 4U)) 
                                                                            | ((0x8000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3618_) 
                                                                                << 0x19U)) 
                                                                               | ((0x4000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3618_) 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___2018_[1U] 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___1449_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0191_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1265_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0589_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0907_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0620_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 0x10U) 
                                                                                | ((0xc000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0564_) 
                                                                                << 0xdU) 
                                                                                | ((0x1e00U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0925_) 
                                                                                << 8U) 
                                                                                | ((0xf8U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 5U)) 
                                                                                | (IData)(vlSelf->top__DOT___1306_)))))))))))))))))))))))) 
                                                        << 0x1cU) 
                                                       | ((QData)((IData)(
                                                                          ((0x3000000U 
                                                                            & (vlSelf->top__DOT___2000_[0U] 
                                                                               << 0x15U)) 
                                                                           | (((IData)(vlSelf->top__DOT___1632_) 
                                                                               << 0x17U) 
                                                                              | (((IData)(vlSelf->top__DOT___1373_) 
                                                                                << 0x16U) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0795_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0854_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___3620_) 
                                                                                << 8U)) 
                                                                                | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 0xdU)) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1564_) 
                                                                                << 0xdU) 
                                                                                | ((0x1800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3620_) 
                                                                                << 8U)) 
                                                                                | ((0x300U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0984_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1329_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___3732_)) 
                                                                                | (((IData)(vlSelf->top__DOT___0600_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0856_)))))))))))))))))))))) 
                                                          << 2U))) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0134_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0692_)))))) 
                                                 >> 0x3cU))));
    vlSelf->top__DOT___1363_ = (1U & (~ (((IData)(vlSelf->top__DOT___0082_) 
                                          & (IData)(vlSelf->top__DOT___1086_)) 
                                         | ((IData)(vlSelf->top__DOT___1364_) 
                                            & (IData)(vlSelf->top__DOT___0984_)))));
    vlSelf->top__DOT____VdfgTmp_ha958d6c5__0 = (((IData)(vlSelf->top__DOT___0043_) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->top__DOT___0297_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___1360_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0132_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___0685_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___1363_))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__669(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__669\n"); );
    // Body
    vlSelf->top__DOT___2126_ = (((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___3747_ 
                                                             >> 0x11U))))) 
                                 << 0x30U) | (((QData)((IData)(
                                                               (7U 
                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                   >> 0x1bU)))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___3725_)) 
                                                  << 0x2bU) 
                                                 | (((QData)((IData)(
                                                                     (0xfU 
                                                                      & (vlSelf->top__DOT___2101_[2U] 
                                                                         >> 0x1aU)))) 
                                                     << 0x27U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x22U))))) 
                                                        << 0x26U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->top__DOT___2101_[2U] 
                                                                               >> 0x18U)))) 
                                                           << 0x25U) 
                                                          | (((QData)((IData)(
                                                                              (0x3ffU 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 0x1aU))))) 
                                                              << 0x1bU) 
                                                             | (QData)((IData)(
                                                                               ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x16U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3e00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 0x14U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x10U)) 
                                                                                << 0x14U)) 
                                                                                | ((0xffff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1027_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0010_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1554_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x25U)))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__670(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__670\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h03d96387__0 = (((QData)((IData)(
                                                                 (0xfU 
                                                                  & (vlSelf->top__DOT___2101_[2U] 
                                                                     >> 0x1aU)))) 
                                                 << 0x27U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___3740_ 
                                                                                >> 0x22U))))) 
                                                    << 0x26U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT___2101_[2U] 
                                                                           >> 0x18U)))) 
                                                       << 0x25U) 
                                                      | (((QData)((IData)(
                                                                          (0x3ffU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 0x1aU))))) 
                                                          << 0x1bU) 
                                                         | (QData)((IData)(
                                                                           ((0x4000000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x16U)) 
                                                                                << 0x1aU)) 
                                                                            | ((0x3e00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 0x14U)) 
                                                                                << 0x15U)) 
                                                                               | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x10U)) 
                                                                                << 0x14U)) 
                                                                                | ((0xffff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h9c958e45__0)))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__676(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__676\n"); );
    // Body
    vlSelf->top__DOT___1095_ = (1U & (~ (((IData)(vlSelf->top__DOT___0692_) 
                                          & (vlSelf->top__DOT___3653_[1U] 
                                             >> 2U)) 
                                         | (IData)(vlSelf->top__DOT___1096_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__678(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__678\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->top__DOT___0342_ = (1U & (~ (((IData)(vlSelf->top__DOT___0052_) 
                                          & (IData)(vlSelf->top__DOT___1339_)) 
                                         | ((IData)(vlSelf->top__DOT___0247_) 
                                            & ((IData)(vlSelf->top__DOT___0650_) 
                                               + (IData)(vlSelf->top__DOT___0354_))))));
    vlSelf->top__DOT___0341_ = ((IData)(vlSelf->top__DOT___0342_) 
                                & (~ (IData)(vlSelf->top__DOT___0214_)));
    vlSelf->top__DOT___0969_ = (1U & (((((IData)(vlSelf->top__DOT___0995_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0342_)) 
                                       + (((IData)(vlSelf->top__DOT___0348_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0149_))) 
                                      >> 1U));
    vlSelf->top__DOT___1929_ = ((0xe00ffffU & vlSelf->top__DOT___1929_) 
                                | (0x200000U | (((IData)(vlSelf->top__DOT___0342_) 
                                                 << 0x18U) 
                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                    << 0x17U) 
                                                   | (((IData)(vlSelf->top__DOT___0321_) 
                                                       << 0x16U) 
                                                      | (((IData)(vlSelf->top__DOT___0082_) 
                                                          << 0x14U) 
                                                         | (((IData)(vlSelf->top__DOT___1360_) 
                                                             << 0x13U) 
                                                            | (((IData)(vlSelf->top__DOT___1188_) 
                                                                << 0x12U) 
                                                               | (((IData)(vlSelf->top__DOT___1589_) 
                                                                   << 0x11U) 
                                                                  | ((IData)(vlSelf->top__DOT___0752_) 
                                                                     << 0x10U))))))))));
    vlSelf->top__DOT___0606_ = (1U & (((((IData)(vlSelf->top__DOT___0482_) 
                                         << 0xbU) | 
                                        (((IData)(vlSelf->top__DOT___1761_) 
                                          << 0xaU) 
                                         | (((IData)(vlSelf->top__DOT___1590_) 
                                             << 9U) 
                                            | ((0x180U 
                                                & (vlSelf->top__DOT___1929_ 
                                                   << 4U)) 
                                               | (((IData)(vlSelf->top__DOT___0633_) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->top__DOT___0162_) 
                                                      << 5U) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->top__DOT___1959_) 
                                                            >> 3U)) 
                                                        | (((IData)(vlSelf->top__DOT___1202_) 
                                                            << 3U) 
                                                           | ((4U 
                                                               & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                  << 2U)) 
                                                              | (((IData)(vlSelf->top__DOT___0221_) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->top__DOT___0315_))))))))))) 
                                       + (((IData)(vlSelf->top__DOT___0265_) 
                                           << 0xbU) 
                                          | ((0x400U 
                                              & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSelf->top__DOT___0219_) 
                                                 << 9U) 
                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->top__DOT___0272_) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->top__DOT___1170_) 
                                                          << 6U) 
                                                         | (((IData)(vlSelf->top__DOT___1206_) 
                                                             << 5U) 
                                                            | (((IData)(vlSelf->top__DOT___0084_) 
                                                                << 4U) 
                                                               | (((IData)(vlSelf->top__DOT___0290_) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelf->top__DOT___1362_) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->top__DOT___1203_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___0603_))))))))))))) 
                                      >> 0xbU));
    vlSelf->top__DOT___1754_ = (1U & ((((0x180U & (vlSelf->top__DOT___1929_ 
                                                   << 4U)) 
                                        | (((IData)(vlSelf->top__DOT___0633_) 
                                            << 6U) 
                                           | (((IData)(vlSelf->top__DOT___0162_) 
                                               << 5U) 
                                              | ((0x10U 
                                                  & ((IData)(vlSelf->top__DOT___1959_) 
                                                     >> 3U)) 
                                                 | (((IData)(vlSelf->top__DOT___1202_) 
                                                     << 3U) 
                                                    | ((4U 
                                                        & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelf->top__DOT___0221_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0315_)))))))) 
                                       + (((IData)(vlSelf->top__DOT___0125_) 
                                           << 8U) | 
                                          (((IData)(vlSelf->top__DOT___0272_) 
                                            << 7U) 
                                           | (((IData)(vlSelf->top__DOT___1170_) 
                                               << 6U) 
                                              | (((IData)(vlSelf->top__DOT___1206_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___0084_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___0290_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___1362_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___1203_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0603_)))))))))) 
                                      >> 8U));
    vlSelf->top__DOT___1826_ = (1U & ((((0x1000000U 
                                         & (vlSelf->top__DOT___2031_[2U] 
                                            << 0x18U)) 
                                        | ((0x800000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___3747_ 
                                                        >> 0x12U)) 
                                               << 0x17U)) 
                                           | ((0x400000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3747_ 
                                                           >> 0x11U)) 
                                                  << 0x16U)) 
                                              | ((0x3f8000U 
                                                  & (vlSelf->top__DOT___2031_[1U] 
                                                     >> 8U)) 
                                                 | ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3747_ 
                                                                 >> 9U)) 
                                                        << 0xeU)) 
                                                    | ((0x2000U 
                                                        & (vlSelf->top__DOT___2031_[1U] 
                                                           >> 8U)) 
                                                       | (((IData)(vlSelf->top__DOT___0482_) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->top__DOT___1761_) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->top__DOT___1590_) 
                                                                 << 9U) 
                                                                | ((0x180U 
                                                                    & (vlSelf->top__DOT___1929_ 
                                                                       << 4U)) 
                                                                   | (((IData)(vlSelf->top__DOT___0633_) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT___0162_) 
                                                                          << 5U) 
                                                                         | ((0x10U 
                                                                             & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 3U)) 
                                                                            | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 3U) 
                                                                               | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0315_))))))))))))))))) 
                                       + (0x100000U 
                                          | (((IData)(vlSelf->top__DOT___0633_) 
                                              << 0x18U) 
                                             | (((IData)(vlSelf->top__DOT___0162_) 
                                                 << 0x17U) 
                                                | ((0x400000U 
                                                    & ((IData)(vlSelf->top__DOT___1959_) 
                                                       << 0xfU)) 
                                                   | (((IData)(vlSelf->top__DOT___1202_) 
                                                       << 0x15U) 
                                                      | (((IData)(vlSelf->top__DOT___0152_) 
                                                          << 0x13U) 
                                                         | (((IData)(vlSelf->top__DOT___0857_) 
                                                             << 0x12U) 
                                                            | (((IData)(vlSelf->top__DOT___0752_) 
                                                                << 0x11U) 
                                                               | (((IData)(vlSelf->top__DOT___0154_) 
                                                                   << 0x10U) 
                                                                  | (((IData)(vlSelf->top__DOT___1283_) 
                                                                      << 0xfU) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0xeU) 
                                                                        | (((IData)(vlSelf->top__DOT___0197_) 
                                                                            << 0xdU) 
                                                                           | (((IData)(vlSelf->top__DOT___0287_) 
                                                                               << 0xcU) 
                                                                              | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0219_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1206_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0084_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1362_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0603_)))))))))))))))))))))))))) 
                                      >> 0x18U));
    __Vtemp_1[0U] = (IData)((0x10000000000000ULL | 
                             (((QData)((IData)(vlSelf->top__DOT___1527_)) 
                               << 0x35U) | (((QData)((IData)(vlSelf->top__DOT___0149_)) 
                                             << 0x33U) 
                                            | (((QData)((IData)(vlSelf->top__DOT___1265_)) 
                                                << 0x32U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0272_)) 
                                                   << 0x31U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelf->top__DOT___0014_))))) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(
                                                                         (0xfffU 
                                                                          & ((IData)(vlSelf->top__DOT___2008_) 
                                                                             >> 3U)))) 
                                                         << 0x24U) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___1531_)) 
                                                            << 0x23U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___1068_)) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___2008_)))) 
                                                                  << 0x21U) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___1028_)) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                ((0xfc000000U 
                                                                                & ((((0x78000000U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                                << 0x18U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x3f8000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 8U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0482_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1761_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1590_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___1929_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0315_)))))))))))))))))))) 
                                                                                + 
                                                                                (0x100000U 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3775_) 
                                                                                << 0x18U)) 
                                                                                | ((0x38000000U 
                                                                                & (vlSelf->top__DOT___1981_ 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0857_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0197_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0219_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1206_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0084_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1362_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0603_)))))))))))))))))))))))))))))) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1826_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x3f8000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 8U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0482_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1761_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1590_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___1929_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0315_)))))))))))))))) 
                                                                                + 
                                                                                (0x100000U 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0857_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0197_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0219_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1206_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0084_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1362_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0603_))))))))))))))))))))))))) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0606_) 
                                                                                << 0xcU) 
                                                                                | ((0xc00U 
                                                                                & (((((IData)(vlSelf->top__DOT___1761_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1590_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___1929_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0315_)))))))))) 
                                                                                + 
                                                                                ((0x400U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0219_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1206_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0084_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1362_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0603_)))))))))))) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1754_) 
                                                                                << 9U) 
                                                                                | ((0x1feU 
                                                                                & ((((0x80U 
                                                                                & (vlSelf->top__DOT___1929_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0315_)))))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1206_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0084_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1362_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0603_))))))))) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0617_))))))))))))))))))))));
    __Vtemp_1[1U] = (((IData)((vlSelf->top__DOT___3626_ 
                               >> 1U)) << 0x16U) | (IData)(
                                                           ((0x10000000000000ULL 
                                                             | (((QData)((IData)(vlSelf->top__DOT___1527_)) 
                                                                 << 0x35U) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___0149_)) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___1265_)) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___0272_)) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0014_))))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((IData)(vlSelf->top__DOT___2008_) 
                                                                                >> 3U)))) 
                                                                                << 0x24U) 
                                                                               | (((QData)((IData)(vlSelf->top__DOT___1531_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1068_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___2008_)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1028_)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0xfc000000U 
                                                                                & ((((0x78000000U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                                << 0x18U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x3f8000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 8U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0482_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1761_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1590_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___1929_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0315_)))))))))))))))))))) 
                                                                                + 
                                                                                (0x100000U 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3775_) 
                                                                                << 0x18U)) 
                                                                                | ((0x38000000U 
                                                                                & (vlSelf->top__DOT___1981_ 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0857_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0197_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0219_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1206_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0084_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1362_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0603_)))))))))))))))))))))))))))))) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1826_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x3f8000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 8U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0482_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1761_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1590_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___1929_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0315_)))))))))))))))) 
                                                                                + 
                                                                                (0x100000U 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0857_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0197_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0219_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1206_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0084_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1362_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0603_))))))))))))))))))))))))) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0606_) 
                                                                                << 0xcU) 
                                                                                | ((0xc00U 
                                                                                & (((((IData)(vlSelf->top__DOT___1761_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1590_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___1929_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0315_)))))))))) 
                                                                                + 
                                                                                ((0x400U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0219_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1206_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0084_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1362_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0603_)))))))))))) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1754_) 
                                                                                << 9U) 
                                                                                | ((0x1feU 
                                                                                & ((((0x80U 
                                                                                & (vlSelf->top__DOT___1929_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0315_)))))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1206_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0084_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1362_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0603_))))))))) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0617_))))))))))))))))))))) 
                                                            >> 0x20U)));
    vlSelf->top__DOT___2032_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___2032_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2032_[2U] = (7U & ((IData)((vlSelf->top__DOT___3626_ 
                                                   >> 1U)) 
                                          >> 0xaU));
    vlSelf->top__DOT___1685_ = (1U & ((((0xe000U & 
                                         vlSelf->top__DOT___2032_[0U]) 
                                        | (((IData)(vlSelf->top__DOT___0606_) 
                                            << 0xcU) 
                                           | ((0xc00U 
                                               & vlSelf->top__DOT___2032_[0U]) 
                                              | (((IData)(vlSelf->top__DOT___1754_) 
                                                  << 9U) 
                                                 | ((0x1feU 
                                                     & vlSelf->top__DOT___2032_[0U]) 
                                                    | (IData)(vlSelf->top__DOT___0617_)))))) 
                                       + ((((IData)(vlSelf->top__DOT___1814_) 
                                            << 0xfU) 
                                           | (0x7ff8U 
                                              & vlSelf->top__DOT___2031_[0U])) 
                                          | (((IData)(vlSelf->top__DOT___0272_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0401_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0235_))))) 
                                      >> 0xfU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__679(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__679\n"); );
    // Body
    vlSelf->top__DOT___2195_ = ((0x7c0U & ((IData)(
                                                   (vlSelf->top__DOT___3788_ 
                                                    >> 0x2dU)) 
                                           << 6U)) 
                                | ((0x20U & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                             << 5U)) 
                                   | (((IData)(vlSelf->top__DOT___1827_) 
                                       << 4U) | ((8U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3655_ 
                                                              >> 0x24U)) 
                                                     << 3U)) 
                                                 | (((IData)(vlSelf->top__DOT___1610_) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & ((~ (IData)(vlSelf->top__DOT___0309_)) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->top__DOT___0047_)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__681(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__681\n"); );
    // Body
    vlSelf->top__DOT___0413_ = ((IData)(vlSelf->top__DOT___0414_) 
                                & (~ (IData)(vlSelf->top__DOT___0229_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__682(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__682\n"); );
    // Body
    vlSelf->top__DOT___1443_ = (1U & (~ (((IData)(vlSelf->top__DOT___1053_) 
                                          & (IData)(vlSelf->top__DOT___1434_)) 
                                         | ((vlSelf->top__DOT___3711_[0U] 
                                             >> 0xaU) 
                                            & (IData)(vlSelf->top__DOT___1409_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__683(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__683\n"); );
    // Body
    vlSelf->top__DOT___1900_[0U] = ((0x3fffffU & vlSelf->top__DOT___1900_[0U]) 
                                    | ((IData)((((QData)((IData)(vlSelf->top__DOT___1491_)) 
                                                 << 0x33U) 
                                                | (((QData)((IData)(
                                                                    (7U 
                                                                     & ((IData)(vlSelf->top__DOT___3822_) 
                                                                        >> 7U)))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT___3822_) 
                                                                           >> 6U)))) 
                                                       << 0x2fU) 
                                                      | (((QData)((IData)(
                                                                          (7U 
                                                                           & ((IData)(vlSelf->top__DOT___3822_) 
                                                                              >> 3U)))) 
                                                          << 0x2cU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                >> 2U)))) 
                                                             << 0x2bU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                >> 1U)))) 
                                                                << 0x2aU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___3822_)))) 
                                                                   << 0x29U) 
                                                                  | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                >> 9U)))) 
                                                                      << 0x25U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                >> 8U)))) 
                                                                         << 0x24U) 
                                                                        | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                >> 4U)))) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                << 0x1cU)) 
                                                                                | ((0x70000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0689_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___1409_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___1639_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ff8000U 
                                                                                & ((((0x1f0000U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1276_) 
                                                                                << 0xfU) 
                                                                                | ((0x7e00U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1042_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0124_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0929_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U))))))))) 
                                                                                + 
                                                                                ((0x180000U 
                                                                                & (vlSelf->top__DOT___2038_[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3665_ 
                                                                                >> 0x18U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x38000U 
                                                                                & (vlSelf->top__DOT___2038_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0354_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0522_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0249_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0217_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0242_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | (7U 
                                                                                & vlSelf->top__DOT___2046_))))))))))))))))) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0767_) 
                                                                                << 0xeU) 
                                                                                | ((0x3f80U 
                                                                                & ((((0x200U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1042_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0124_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0929_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U))))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0217_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0242_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | (7U 
                                                                                & vlSelf->top__DOT___2046_))))))))) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0230_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1833_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (((vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U) 
                                                                                + vlSelf->top__DOT___2046_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1394_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0384_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0358_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0334_)))))))))))))))))))))))))))) 
                                       << 0x16U));
    vlSelf->top__DOT___1900_[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___1491_)) 
                                               << 0x33U) 
                                              | (((QData)((IData)(
                                                                  (7U 
                                                                   & ((IData)(vlSelf->top__DOT___3822_) 
                                                                      >> 7U)))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT___3822_) 
                                                                         >> 6U)))) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(
                                                                        (7U 
                                                                         & ((IData)(vlSelf->top__DOT___3822_) 
                                                                            >> 3U)))) 
                                                        << 0x2cU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->top__DOT___3822_) 
                                                                               >> 2U)))) 
                                                           << 0x2bU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                >> 1U)))) 
                                                              << 0x2aU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___3822_)))) 
                                                                 << 0x29U) 
                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                >> 9U)))) 
                                                                    << 0x25U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                >> 8U)))) 
                                                                       << 0x24U) 
                                                                      | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                >> 4U)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                << 0x1cU)) 
                                                                                | ((0x70000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0689_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___1409_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___1639_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ff8000U 
                                                                                & ((((0x1f0000U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1276_) 
                                                                                << 0xfU) 
                                                                                | ((0x7e00U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1042_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0124_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0929_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U))))))))) 
                                                                                + 
                                                                                ((0x180000U 
                                                                                & (vlSelf->top__DOT___2038_[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3665_ 
                                                                                >> 0x18U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x38000U 
                                                                                & (vlSelf->top__DOT___2038_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0354_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0522_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0249_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0217_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0242_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | (7U 
                                                                                & vlSelf->top__DOT___2046_))))))))))))))))) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0767_) 
                                                                                << 0xeU) 
                                                                                | ((0x3f80U 
                                                                                & ((((0x200U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1042_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0124_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0929_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U))))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0217_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0242_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | (7U 
                                                                                & vlSelf->top__DOT___2046_))))))))) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0230_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1833_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (((vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U) 
                                                                                + vlSelf->top__DOT___2046_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1394_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0384_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0358_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0334_)))))))))))))))))))))))))))) 
                                     >> 0xaU) | ((IData)(
                                                         ((((QData)((IData)(vlSelf->top__DOT___1491_)) 
                                                            << 0x33U) 
                                                           | (((QData)((IData)(
                                                                               (7U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                >> 7U)))) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                >> 6U)))) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(
                                                                                (7U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                >> 3U)))) 
                                                                     << 0x2cU) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                >> 2U)))) 
                                                                        << 0x2bU) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                >> 1U)))) 
                                                                           << 0x2aU) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___3822_)))) 
                                                                              << 0x29U) 
                                                                             | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                >> 9U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                >> 8U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                >> 4U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                << 0x1cU)) 
                                                                                | ((0x70000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0689_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___1409_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___1639_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ff8000U 
                                                                                & ((((0x1f0000U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1276_) 
                                                                                << 0xfU) 
                                                                                | ((0x7e00U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1042_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0124_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0929_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U))))))))) 
                                                                                + 
                                                                                ((0x180000U 
                                                                                & (vlSelf->top__DOT___2038_[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3665_ 
                                                                                >> 0x18U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x38000U 
                                                                                & (vlSelf->top__DOT___2038_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0354_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0522_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0249_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0217_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0242_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | (7U 
                                                                                & vlSelf->top__DOT___2046_))))))))))))))))) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0767_) 
                                                                                << 0xeU) 
                                                                                | ((0x3f80U 
                                                                                & ((((0x200U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1042_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0124_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0929_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U))))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0217_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0242_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | (7U 
                                                                                & vlSelf->top__DOT___2046_))))))))) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0230_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1833_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (((vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U) 
                                                                                + vlSelf->top__DOT___2046_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1394_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0384_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0358_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0334_))))))))))))))))))))))))))) 
                                                          >> 0x20U)) 
                                                 << 0x16U));
    vlSelf->top__DOT___1900_[2U] = ((0x7ffc00U & vlSelf->top__DOT___1900_[2U]) 
                                    | (0x7fffffU & 
                                       ((IData)(((((QData)((IData)(vlSelf->top__DOT___1491_)) 
                                                   << 0x33U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & ((IData)(vlSelf->top__DOT___3822_) 
                                                                          >> 7U)))) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top__DOT___3822_) 
                                                                             >> 6U)))) 
                                                         << 0x2fU) 
                                                        | (((QData)((IData)(
                                                                            (7U 
                                                                             & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                >> 3U)))) 
                                                            << 0x2cU) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                >> 2U)))) 
                                                               << 0x2bU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                >> 1U)))) 
                                                                  << 0x2aU) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___3822_)))) 
                                                                     << 0x29U) 
                                                                    | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                >> 9U)))) 
                                                                        << 0x25U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                >> 8U)))) 
                                                                           << 0x24U) 
                                                                          | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                >> 4U)))) 
                                                                              << 0x20U) 
                                                                             | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                << 0x1cU)) 
                                                                                | ((0x70000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3807_) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0689_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___1409_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___1639_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ff8000U 
                                                                                & ((((0x1f0000U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1276_) 
                                                                                << 0xfU) 
                                                                                | ((0x7e00U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1042_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0124_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0929_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U))))))))) 
                                                                                + 
                                                                                ((0x180000U 
                                                                                & (vlSelf->top__DOT___2038_[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3665_ 
                                                                                >> 0x18U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x38000U 
                                                                                & (vlSelf->top__DOT___2038_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0354_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0522_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0249_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0217_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0242_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | (7U 
                                                                                & vlSelf->top__DOT___2046_))))))))))))))))) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0767_) 
                                                                                << 0xeU) 
                                                                                | ((0x3f80U 
                                                                                & ((((0x200U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1042_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0124_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0929_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U))))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0217_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0242_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->top__DOT___2046_) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___3675_)) 
                                                                                | (7U 
                                                                                & vlSelf->top__DOT___2046_))))))))) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0230_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1833_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (((vlSelf->top__DOT___1951_[4U] 
                                                                                >> 7U) 
                                                                                + vlSelf->top__DOT___2046_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1394_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0384_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0358_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0334_))))))))))))))))))))))))))) 
                                                 >> 0x20U)) 
                                        >> 0xaU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__685(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__685\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hbd7d4dc4__0 = (0x44000U 
                                                | ((0x80000U 
                                                    & ((~ (IData)(vlSelf->top__DOT___0593_)) 
                                                       << 0x13U)) 
                                                   | (((IData)(vlSelf->top__DOT___0680_) 
                                                       << 0x11U) 
                                                      | (((IData)(vlSelf->top__DOT___0305_) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->top__DOT___1064_) 
                                                             << 0xfU) 
                                                            | (((IData)(vlSelf->top__DOT___3750_) 
                                                                << 6U) 
                                                               | (IData)(vlSelf->top__DOT____VdfgTmp_ha958d6c5__0)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__688(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__688\n"); );
    // Body
    vlSelf->top__DOT___2221_[1U] = ((0x1fffffU & vlSelf->top__DOT___2221_[1U]) 
                                    | (0xffe00000U 
                                       & ((vlSelf->top__DOT___3713_ 
                                           << 0x18U) 
                                          | ((0x400000U 
                                              & ((~ (IData)(vlSelf->top__DOT___0272_)) 
                                                 << 0x16U)) 
                                             | ((IData)(vlSelf->top__DOT___0342_) 
                                                << 0x15U)))));
    vlSelf->top__DOT___2221_[2U] = (0x7ffffU & ((0x60000U 
                                                 & ((((0x7f80U 
                                                       & (IData)(vlSelf->top__DOT___2092_)) 
                                                      | (IData)(vlSelf->top__DOT____VdfgTmp_h13077688__0)) 
                                                     + (IData)(vlSelf->top__DOT___2091_)) 
                                                    << 6U)) 
                                                | ((0x18000U 
                                                    & ((IData)(vlSelf->top__DOT___1945_) 
                                                       << 9U)) 
                                                   | ((0x1fc000U 
                                                       & ((IData)(vlSelf->top__DOT___0475_) 
                                                          << 0xeU)) 
                                                      | ((0x1fe000U 
                                                          & ((IData)(vlSelf->top__DOT___0166_) 
                                                             << 0xdU)) 
                                                         | ((0x1fffffU 
                                                             & (vlSelf->top__DOT___3713_ 
                                                                >> 8U)) 
                                                            | ((IData)(vlSelf->top__DOT___0342_) 
                                                               >> 0xbU)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__693(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__693\n"); );
    // Body
    vlSelf->top__DOT___1851_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (vlSelf->top__DOT___2143_[0U] 
                                                                        >> 3U)))) 
                                                    << 0x1bU) 
                                                   | (QData)((IData)(
                                                                     (0x7ffffffU 
                                                                      & (IData)(vlSelf->top__DOT___2150_))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0x3fffffffU 
                                                                     & ((vlSelf->top__DOT___3711_[1U] 
                                                                         << 0xdU) 
                                                                        | (vlSelf->top__DOT___3711_[0U] 
                                                                           >> 0x13U))))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hbd7d4dc4__0)))) 
                                                 >> 0x31U))));
    vlSelf->top__DOT____VdfgTmp_h000eab8c__0 = (0x3ffU 
                                                & (IData)(
                                                          (0x3ffULL 
                                                           & (((((QData)((IData)(
                                                                                (0x3fffffU 
                                                                                & (vlSelf->top__DOT___2143_[0U] 
                                                                                >> 3U)))) 
                                                                 << 0x1bU) 
                                                                | (QData)((IData)(
                                                                                (0x7ffffffU 
                                                                                & (IData)(vlSelf->top__DOT___2150_))))) 
                                                               + 
                                                               (((QData)((IData)(
                                                                                (0x1fffffffU 
                                                                                & ((vlSelf->top__DOT___3711_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___3711_[0U] 
                                                                                >> 0x13U))))) 
                                                                 << 0x14U) 
                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hbd7d4dc4__0)))) 
                                                              >> 0x27U))));
    vlSelf->top__DOT____VdfgTmp_h8a201b75__0 = (0x7fffffffffULL 
                                                & ((((QData)((IData)(
                                                                     (0xfffU 
                                                                      & (vlSelf->top__DOT___2143_[0U] 
                                                                         >> 3U)))) 
                                                     << 0x1bU) 
                                                    | (QData)((IData)(
                                                                      (0x7ffffffU 
                                                                       & (IData)(vlSelf->top__DOT___2150_))))) 
                                                   + 
                                                   (((QData)((IData)(
                                                                     (0x7ffffU 
                                                                      & ((vlSelf->top__DOT___3711_[1U] 
                                                                          << 0xdU) 
                                                                         | (vlSelf->top__DOT___3711_[0U] 
                                                                            >> 0x13U))))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hbd7d4dc4__0)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__694(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__694\n"); );
    // Body
    vlSelf->top__DOT___2149_ = ((0x1ffffffffff00000ULL 
                                 & (((QData)((IData)(
                                                     vlSelf->top__DOT___3711_[1U])) 
                                     << 0x21U) | (0xfffffffffff00000ULL 
                                                  & ((QData)((IData)(
                                                                     vlSelf->top__DOT___3711_[0U])) 
                                                     << 1U)))) 
                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hbd7d4dc4__0)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__695(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__695\n"); );
    // Body
    vlSelf->top__DOT___0089_ = (1U & ((((0x3f8U & ((IData)(vlSelf->top__DOT___2042_) 
                                                   << 2U)) 
                                        | (((IData)(vlSelf->top__DOT___1532_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0637_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0099_)))) 
                                       + ((0x380U & 
                                           (vlSelf->top__DOT___1975_[1U] 
                                            >> 0x16U)) 
                                          | ((0x40U 
                                              & ((IData)(vlSelf->top__DOT___3749_) 
                                                 << 2U)) 
                                             | ((0x20U 
                                                 & ((IData)(vlSelf->top__DOT___3749_) 
                                                    << 2U)) 
                                                | ((0x10U 
                                                    & ((IData)(vlSelf->top__DOT___3749_) 
                                                       << 2U)) 
                                                   | ((8U 
                                                       & ((IData)(vlSelf->top__DOT___3749_) 
                                                          << 2U)) 
                                                      | ((4U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___1970_ 
                                                                      >> 5U)) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelf->top__DOT___0681_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0139_))))))))) 
                                      >> 9U));
    vlSelf->top__DOT___1403_ = (1U & (((((IData)(vlSelf->top__DOT___0148_) 
                                         << 0x13U) 
                                        | (((IData)(vlSelf->top__DOT___0489_) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->top__DOT___0221_) 
                                               << 0x11U) 
                                              | (((IData)(vlSelf->top__DOT___0619_) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->top__DOT___0752_) 
                                                     << 0xfU) 
                                                    | ((0x7ff8U 
                                                        & ((IData)(vlSelf->top__DOT___2042_) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelf->top__DOT___1532_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___0637_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0099_))))))))) 
                                       + ((0xfff80U 
                                           & ((vlSelf->top__DOT___1975_[2U] 
                                               << 0xaU) 
                                              | (0x380U 
                                                 & (vlSelf->top__DOT___1975_[1U] 
                                                    >> 0x16U)))) 
                                          | ((0x40U 
                                              & ((IData)(vlSelf->top__DOT___3749_) 
                                                 << 2U)) 
                                             | ((0x20U 
                                                 & ((IData)(vlSelf->top__DOT___3749_) 
                                                    << 2U)) 
                                                | ((0x10U 
                                                    & ((IData)(vlSelf->top__DOT___3749_) 
                                                       << 2U)) 
                                                   | ((8U 
                                                       & ((IData)(vlSelf->top__DOT___3749_) 
                                                          << 2U)) 
                                                      | ((4U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___1970_ 
                                                                      >> 5U)) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelf->top__DOT___0681_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0139_))))))))) 
                                      >> 0x13U));
    vlSelf->top__DOT___0742_ = (1U & ((((0x7ff8U & 
                                         ((IData)(vlSelf->top__DOT___2042_) 
                                          << 2U)) | 
                                        (((IData)(vlSelf->top__DOT___1532_) 
                                          << 2U) | 
                                         (((IData)(vlSelf->top__DOT___0637_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0099_)))) 
                                       + ((0x7f80U 
                                           & ((vlSelf->top__DOT___1975_[2U] 
                                               << 0xaU) 
                                              | (0x380U 
                                                 & (vlSelf->top__DOT___1975_[1U] 
                                                    >> 0x16U)))) 
                                          | ((0x40U 
                                              & ((IData)(vlSelf->top__DOT___3749_) 
                                                 << 2U)) 
                                             | ((0x20U 
                                                 & ((IData)(vlSelf->top__DOT___3749_) 
                                                    << 2U)) 
                                                | ((0x10U 
                                                    & ((IData)(vlSelf->top__DOT___3749_) 
                                                       << 2U)) 
                                                   | ((8U 
                                                       & ((IData)(vlSelf->top__DOT___3749_) 
                                                          << 2U)) 
                                                      | ((4U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___1970_ 
                                                                      >> 5U)) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelf->top__DOT___0681_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0139_))))))))) 
                                      >> 0xeU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__697(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__697\n"); );
    // Body
    vlSelf->top__DOT___1653_ = (1U & (((((IData)(vlSelf->top__DOT___0549_) 
                                         << 6U) | (
                                                   ((IData)(vlSelf->top__DOT___2137_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0071_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0995_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0342_))))) 
                                       + (((IData)(vlSelf->top__DOT___0752_) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT___0058_) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT___0353_) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT___1356_) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT___1472_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___0348_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0149_)))))))) 
                                      >> 6U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__698(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__698\n"); );
    // Body
    vlSelf->top__DOT___1572_ = (1U & (((((IData)(vlSelf->top__DOT___0736_) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->top__DOT___0549_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___2137_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0071_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___0995_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0342_)))))) 
                                       + (((IData)(vlSelf->top__DOT___0243_) 
                                           << 7U) | 
                                          (((IData)(vlSelf->top__DOT___0752_) 
                                            << 6U) 
                                           | (((IData)(vlSelf->top__DOT___0058_) 
                                               << 5U) 
                                              | (((IData)(vlSelf->top__DOT___0353_) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->top__DOT___1356_) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT___1472_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___0348_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0149_))))))))) 
                                      >> 7U));
    vlSelf->top__DOT___0444_ = (1U & (((((IData)(vlSelf->top__DOT___0324_) 
                                         << 8U) | (
                                                   ((IData)(vlSelf->top__DOT___0736_) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->top__DOT___0549_) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->top__DOT___2137_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___0071_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___0995_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0342_))))))) 
                                       + ((0x100U & 
                                           (vlSelf->top__DOT___3751_ 
                                            >> 9U)) 
                                          | (((IData)(vlSelf->top__DOT___0243_) 
                                              << 7U) 
                                             | (((IData)(vlSelf->top__DOT___0752_) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->top__DOT___0058_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___0353_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___1356_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___1472_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___0348_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0149_)))))))))) 
                                      >> 8U));
    vlSelf->top__DOT___2174_ = ((0x200U & (((((IData)(vlSelf->top__DOT___1064_) 
                                              | (IData)(vlSelf->top__DOT___0271_)) 
                                             << 9U) 
                                            | (((IData)(vlSelf->top__DOT___0324_) 
                                                << 8U) 
                                               | (((IData)(vlSelf->top__DOT___0736_) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->top__DOT___0549_) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->top__DOT___2137_) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->top__DOT___0071_) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->top__DOT___0995_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___0342_)))))))) 
                                           + (((IData)(vlSelf->top__DOT___1079_) 
                                               << 9U) 
                                              | ((0x100U 
                                                  & (vlSelf->top__DOT___3751_ 
                                                     >> 9U)) 
                                                 | (((IData)(vlSelf->top__DOT___0243_) 
                                                     << 7U) 
                                                    | (((IData)(vlSelf->top__DOT___0752_) 
                                                        << 6U) 
                                                       | (((IData)(vlSelf->top__DOT___0058_) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->top__DOT___0353_) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT___1356_) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->top__DOT___1472_) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->top__DOT___0348_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0149_)))))))))))) 
                                | (((IData)(vlSelf->top__DOT___0444_) 
                                    << 8U) | (((IData)(vlSelf->top__DOT___1572_) 
                                               << 7U) 
                                              | (((IData)(vlSelf->top__DOT___1653_) 
                                                  << 6U) 
                                                 | ((0x3cU 
                                                     & ((((IData)(vlSelf->top__DOT___2137_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___0071_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___0995_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0342_)))) 
                                                        + 
                                                        (((IData)(vlSelf->top__DOT___0058_) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->top__DOT___0353_) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->top__DOT___1356_) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->top__DOT___1472_) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->top__DOT___0348_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___0149_)))))))) 
                                                    | (((IData)(vlSelf->top__DOT___0969_) 
                                                        << 1U) 
                                                       | (1U 
                                                          & ((IData)(vlSelf->top__DOT___0342_) 
                                                             + (IData)(vlSelf->top__DOT___0149_)))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__700(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__700\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h8bb74434__0 = (0x1fffffffffffffffULL 
                                                & (((0x1ffffffff8000000ULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top__DOT___2143_[1U])) 
                                                         << 0x38U) 
                                                        | (0xfffffffff8000000ULL 
                                                           & ((QData)((IData)(
                                                                              vlSelf->top__DOT___2143_[0U])) 
                                                              << 0x18U)))) 
                                                    | (QData)((IData)(
                                                                      (0x7ffffffU 
                                                                       & (IData)(vlSelf->top__DOT___2150_))))) 
                                                   + vlSelf->top__DOT___2149_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__701(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__701\n"); );
    // Body
    vlSelf->top__DOT___2103_ = (0x7fU & ((8U | (((IData)(vlSelf->top__DOT___0117_) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->top__DOT___0710_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___0519_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___0450_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___0239_) 
                                                             << 1U) 
                                                            | (1U 
                                                               & (~ 
                                                                  (((IData)(vlSelf->top__DOT___0149_) 
                                                                    & (IData)(vlSelf->top__DOT___1403_)) 
                                                                   | ((IData)(vlSelf->top__DOT___0306_) 
                                                                      & (IData)(vlSelf->top__DOT___1402_))))))))))) 
                                         + ((0x78U 
                                             & (vlSelf->top__DOT___3681_ 
                                                >> 6U)) 
                                            | (((IData)(vlSelf->top__DOT___0648_) 
                                                << 2U) 
                                               | (((IData)(vlSelf->top__DOT___0354_) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT___1283_))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__705(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__705\n"); );
    // Body
    vlSelf->top__DOT___1155_ = (1U & ((((0x100U & (
                                                   vlSelf->top__DOT___2030_[0U] 
                                                   >> 8U)) 
                                        | (((IData)(vlSelf->top__DOT___1685_) 
                                            << 7U) 
                                           | (0x7fU 
                                              & (vlSelf->top__DOT___2030_[0U] 
                                                 >> 8U)))) 
                                       + ((0x1c0U & 
                                           (vlSelf->top__DOT___1951_[3U] 
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
                                                         | (IData)(vlSelf->top__DOT___0988_)))))))) 
                                      >> 8U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__706(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__706\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((0xffff0000U & (vlSelf->top__DOT___2030_[1U] 
                                     << 2U)) | (IData)(
                                                       ((((QData)((IData)(vlSelf->top__DOT___0705_)) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             (7U 
                                                                              & (vlSelf->top__DOT___2030_[1U] 
                                                                                >> 0xaU)))) 
                                                             << 0x2cU) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___1598_)) 
                                                                << 0x2bU) 
                                                               | (((QData)((IData)(
                                                                                (0x1ffffffU 
                                                                                & ((vlSelf->top__DOT___2030_[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->top__DOT___2030_[0U] 
                                                                                >> 0x10U))))) 
                                                                   << 0x12U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1685_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fffcU 
                                                                                & (vlSelf->top__DOT___2030_[0U] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0995_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0082_)))))))))) 
                                                        >> 0x20U)));
    vlSelf->top__DOT___2049_[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0705_)) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(
                                                                (7U 
                                                                 & (vlSelf->top__DOT___2030_[1U] 
                                                                    >> 0xaU)))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___1598_)) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(
                                                                      (0x1ffffffU 
                                                                       & ((vlSelf->top__DOT___2030_[1U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->top__DOT___2030_[0U] 
                                                                             >> 0x10U))))) 
                                                      << 0x12U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->top__DOT___1685_) 
                                                                         << 0x11U) 
                                                                        | ((0x1fffcU 
                                                                            & (vlSelf->top__DOT___2030_[0U] 
                                                                               << 2U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0995_) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->top__DOT___0082_)))))))))));
    vlSelf->top__DOT___2049_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2049_[2U] = ((0xfff00U & ((IData)(
                                                         (vlSelf->top__DOT___3641_ 
                                                          >> 5U)) 
                                                 << 8U)) 
                                    | ((0x80U & ((IData)(
                                                         (vlSelf->top__DOT___3641_ 
                                                          >> 4U)) 
                                                 << 7U)) 
                                       | ((0x60U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT___3641_ 
                                                     >> 2U)) 
                                            << 5U)) 
                                          | (0x1fU 
                                             & ((0xfffcU 
                                                 & (vlSelf->top__DOT___2030_[2U] 
                                                    << 2U)) 
                                                | (vlSelf->top__DOT___2030_[1U] 
                                                   >> 0x1eU))))));
    vlSelf->top__DOT___0744_ = (1U & ((((4U & (vlSelf->top__DOT___2049_[2U] 
                                               >> 0xcU)) 
                                        | (((IData)(vlSelf->top__DOT___0394_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0650_))) 
                                       + (((IData)(vlSelf->top__DOT___0453_) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT___0191_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0354_)))) 
                                      >> 2U));
    vlSelf->top__DOT___0814_ = ((IData)(vlSelf->top__DOT___0590_) 
                                & ((IData)(vlSelf->top__DOT___0408_) 
                                   & (IData)(vlSelf->top__DOT___0744_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__724(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__724\n"); );
    // Body
    vlSelf->top__DOT___0836_ = (1U & (((((IData)(vlSelf->top__DOT___0600_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___0553_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0987_))) 
                                       + (4U | (((IData)(vlSelf->top__DOT___0866_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1274_)))) 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__725(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__725\n"); );
    // Body
    vlSelf->top__DOT___0839_ = (1U & ((((8U & (vlSelf->top__DOT___2143_[1U] 
                                               >> 0x12U)) 
                                        | (((IData)(vlSelf->top__DOT___0600_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0553_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0987_)))) 
                                       + (4U | (((IData)(vlSelf->top__DOT___0116_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___0866_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___1274_))))) 
                                      >> 3U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__733(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__733\n"); );
    // Body
    vlSelf->top__DOT___1707_ = (1U & ((((0xc0U & (vlSelf->top__DOT___1936_[1U] 
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
                                                       | (IData)(vlSelf->top__DOT___0009_))))))) 
                                       + (0x40U | (
                                                   (0x80U 
                                                    & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_ha7e79421__0)) 
                                                       << 7U)) 
                                                   | ((0x3cU 
                                                       & ((vlSelf->top__DOT___1901_[2U] 
                                                           << 3U) 
                                                          | (4U 
                                                             & (vlSelf->top__DOT___1901_[1U] 
                                                                >> 0x1dU)))) 
                                                      | (((IData)(vlSelf->top__DOT___1575_) 
                                                          << 1U) 
                                                         | (1U 
                                                            & (vlSelf->top__DOT___1901_[1U] 
                                                               >> 0x1dU))))))) 
                                      >> 7U));
    vlSelf->top__DOT___1940_ = ((7ULL & vlSelf->top__DOT___1940_) 
                                | (((QData)((IData)(vlSelf->top__DOT___1446_)) 
                                    << 0x25U) | (((QData)((IData)(
                                                                  (0x7ffU 
                                                                   & (IData)(
                                                                             (0xfffULL 
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
                                                                                >> 0x25U)))))) 
                                                  << 0x1aU) 
                                                 | ((QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___1696_) 
                                                                      << 0x16U) 
                                                                     | ((0x200000U 
                                                                         & ((IData)(
                                                                                (0x3fffULL 
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
                                                                                >> 0x23U))) 
                                                                            << 0x15U)) 
                                                                        | (((IData)(vlSelf->top__DOT___1230_) 
                                                                            << 0x14U) 
                                                                           | ((0xe0000U 
                                                                               & ((IData)(
                                                                                (0x3ffffULL 
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
                                                                                >> 0x1fU))) 
                                                                                << 0x11U)) 
                                                                              | ((0x1fff0U 
                                                                                & (vlSelf->top__DOT___1901_[2U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0107_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___1901_[2U] 
                                                                                >> 6U)))))))))) 
                                                    << 3U))));
    vlSelf->top__DOT___2141_ = ((0x780000U & ((IData)(
                                                      (vlSelf->top__DOT___3791_ 
                                                       >> 0x24U)) 
                                              << 0x13U)) 
                                | ((0x60000U & (vlSelf->top__DOT___1901_[0U] 
                                                << 3U)) 
                                   | ((0x10000U & ((IData)(vlSelf->top__DOT___3718_) 
                                                   << 6U)) 
                                      | ((0xe000U & 
                                          (vlSelf->top__DOT___1901_[0U] 
                                           << 3U)) 
                                         | ((0x1000U 
                                             & ((IData)(vlSelf->top__DOT___3718_) 
                                                << 6U)) 
                                            | ((0xf00U 
                                                & (vlSelf->top__DOT___1901_[0U] 
                                                   << 3U)) 
                                               | ((0x80U 
                                                   & ((IData)(vlSelf->top__DOT___3718_) 
                                                      << 6U)) 
                                                  | ((0x40U 
                                                      & (vlSelf->top__DOT___1901_[0U] 
                                                         << 3U)) 
                                                     | (((IData)(vlSelf->top__DOT___0259_) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->top__DOT___0311_) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->top__DOT___1651_) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->top__DOT___0057_) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelf->top__DOT___0530_) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->top__DOT___1017_))))))))))))));
    vlSelf->top__DOT___0974_ = (1U & (((((IData)(vlSelf->top__DOT___0418_) 
                                         << 3U) | (
                                                   (4U 
                                                    & (vlSelf->top__DOT___1936_[1U] 
                                                       >> 6U)) 
                                                   | (((IData)(vlSelf->top__DOT___0619_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0009_)))) 
                                       + ((0xcU & (
                                                   (vlSelf->top__DOT___1901_[2U] 
                                                    << 3U) 
                                                   | (4U 
                                                      & (vlSelf->top__DOT___1901_[1U] 
                                                         >> 0x1dU)))) 
                                          | (((IData)(vlSelf->top__DOT___1575_) 
                                              << 1U) 
                                             | (1U 
                                                & (vlSelf->top__DOT___1901_[1U] 
                                                   >> 0x1dU))))) 
                                      >> 3U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__738(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__738\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & 
                                               ((IData)(vlSelf->top__DOT___3644_) 
                                                >> 8U)))) 
                              << 0x3bU) | (((QData)((IData)(
                                                            (0xfU 
                                                             & ((IData)(vlSelf->top__DOT___3644_) 
                                                                >> 4U)))) 
                                            << 0x37U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT___3644_) 
                                                                   >> 3U)))) 
                                               << 0x36U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT___3644_) 
                                                                      >> 2U)))) 
                                                  << 0x35U) 
                                                 | (((QData)((IData)(
                                                                     (3U 
                                                                      & (IData)(vlSelf->top__DOT___3644_)))) 
                                                     << 0x33U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0345_)) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->top__DOT___3654_) 
                                                                               >> 9U)))) 
                                                           << 0x31U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 8U)))) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(
                                                                                (7U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 5U)))) 
                                                                 << 0x2dU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 4U)))) 
                                                                    << 0x2cU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 3U)))) 
                                                                       << 0x2bU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 2U)))) 
                                                                          << 0x2aU) 
                                                                         | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(vlSelf->top__DOT___3654_)))) 
                                                                             << 0x28U) 
                                                                            | (((QData)((IData)(vlSelf->top__DOT___0337_)) 
                                                                                << 0x27U) 
                                                                               | (((QData)((IData)(vlSelf->top__DOT___1251_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0590_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0348_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___3674_) 
                                                                                >> 5U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3674_) 
                                                                                << 0x1bU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3674_) 
                                                                                << 0x1bU)) 
                                                                                | ((0x38000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3674_) 
                                                                                << 0x1bU)) 
                                                                                | ((vlSelf->top__DOT___3759_ 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0277_))))))))))))))))))))))))));
    __Vtemp_1[1U] = ((0xf0000000U & ((IData)(vlSelf->top__DOT___3644_) 
                                     << 0x13U)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->top__DOT___3644_) 
                                                                                >> 8U)))) 
                                                             << 0x3bU) 
                                                            | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___3644_) 
                                                                                >> 4U)))) 
                                                                << 0x37U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3644_) 
                                                                                >> 3U)))) 
                                                                   << 0x36U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3644_) 
                                                                                >> 2U)))) 
                                                                      << 0x35U) 
                                                                     | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(vlSelf->top__DOT___3644_)))) 
                                                                         << 0x33U) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___0345_)) 
                                                                            << 0x32U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 9U)))) 
                                                                               << 0x31U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 8U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 5U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 4U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 3U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 2U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(vlSelf->top__DOT___3654_)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0337_)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1251_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0590_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0348_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___3674_) 
                                                                                >> 5U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3674_) 
                                                                                << 0x1bU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3674_) 
                                                                                << 0x1bU)) 
                                                                                | ((0x38000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3674_) 
                                                                                << 0x1bU)) 
                                                                                | ((vlSelf->top__DOT___3759_ 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0277_))))))))))))))))))))))))) 
                                                           >> 0x20U)));
    vlSelf->top__DOT___2139_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___2139_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2139_[2U] = ((0x1e0U & ((vlSelf->top__DOT___1901_[2U] 
                                                << 6U) 
                                               | (0x20U 
                                                  & (vlSelf->top__DOT___1901_[1U] 
                                                     >> 0x1aU)))) 
                                    | (((IData)(vlSelf->top__DOT___1575_) 
                                        << 4U) | ((8U 
                                                   & (vlSelf->top__DOT___1901_[1U] 
                                                      >> 0x1aU)) 
                                                  | (7U 
                                                     & ((IData)(vlSelf->top__DOT___3644_) 
                                                        >> 0xdU)))));
    vlSelf->top__DOT____VdfgTmp_hba0ff81c__0 = ((0xc0000000U 
                                                 & ((IData)(vlSelf->top__DOT___3674_) 
                                                    << 0x1bU)) 
                                                | ((0x3ffffffeU 
                                                    & vlSelf->top__DOT___2139_[0U]) 
                                                   | (IData)(vlSelf->top__DOT___0277_)));
    vlSelf->top__DOT____VdfgTmp_h6a7f45e4__0 = (((QData)((IData)(vlSelf->top__DOT___1367_)) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT___1980_ 
                                                                        >> 4U)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1681_) 
                                                                       << 0x1fU) 
                                                                      | ((0x70000000U 
                                                                          & (vlSelf->top__DOT___1980_ 
                                                                             << 0x1cU)) 
                                                                         | ((0xffffffcU 
                                                                             & (vlSelf->top__DOT___2139_[0U] 
                                                                                << 1U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0454_) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT___0751_)))))))));
    vlSelf->top__DOT___1844_ = (1U & (IData)((1ULL 
                                              & ((((((QData)((IData)(
                                                                     (3U 
                                                                      & (vlSelf->top__DOT___1980_ 
                                                                         >> 6U)))) 
                                                     << 0x22U) 
                                                    | ((QData)((IData)(
                                                                       (((IData)(vlSelf->top__DOT___1367_) 
                                                                         << 0x1fU) 
                                                                        | ((0x40000000U 
                                                                            & (vlSelf->top__DOT___1980_ 
                                                                               << 0x1aU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1681_) 
                                                                               << 0x1dU) 
                                                                              | ((0x1c000000U 
                                                                                & (vlSelf->top__DOT___1980_ 
                                                                                << 0x1aU)) 
                                                                                | (0x3ffffffU 
                                                                                & (vlSelf->top__DOT___2139_[0U] 
                                                                                >> 1U)))))))) 
                                                       << 2U)) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0454_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0751_))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0xfU 
                                                                     & vlSelf->top__DOT___2139_[1U]))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x80000000U 
                                                                       & ((IData)(vlSelf->top__DOT___3674_) 
                                                                          << 0x1bU)) 
                                                                      | ((0x40000000U 
                                                                          & ((IData)(vlSelf->top__DOT___3674_) 
                                                                             << 0x1bU)) 
                                                                         | ((0x3ffffffeU 
                                                                             & vlSelf->top__DOT___2139_[0U]) 
                                                                            | (IData)(vlSelf->top__DOT___0277_)))))))) 
                                                 >> 0x23U))));
    vlSelf->top__DOT___2185_[1U] = ((0x7ffffffU & vlSelf->top__DOT___2185_[1U]) 
                                    | (0xf8000000U 
                                       & ((0x80000000U 
                                           & (vlSelf->top__DOT___2139_[1U] 
                                              << 3U)) 
                                          | ((0x40000000U 
                                              & ((IData)(vlSelf->top__DOT___3644_) 
                                                 << 0x16U)) 
                                             | (0x38000000U 
                                                & (vlSelf->top__DOT___2139_[1U] 
                                                   << 3U))))));
    vlSelf->top__DOT___2185_[2U] = (1U & (vlSelf->top__DOT___2139_[1U] 
                                          >> 0x1dU));
    vlSelf->top__DOT___0440_ = (1U ^ ((IData)(vlSelf->top__DOT___0565_) 
                                      ^ (IData)(vlSelf->top__DOT___1844_)));
    vlSelf->top__DOT___1777_ = (((IData)(vlSelf->top__DOT___0441_) 
                                 & (~ (IData)(vlSelf->top__DOT___0440_))) 
                                ^ (IData)(vlSelf->top__DOT___0590_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__740(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__740\n"); );
    // Body
    vlSelf->top__DOT___2179_ = (0x7fU & (((0x70U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT___1940_ 
                                                     >> 0x14U)) 
                                            << 4U)) 
                                          | ((0xcU 
                                              & (vlSelf->top__DOT___1901_[2U] 
                                                 >> 0x13U)) 
                                             | (((IData)(vlSelf->top__DOT___0949_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1439_)))) 
                                         + (vlSelf->top__DOT___3724_ 
                                            >> 9U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__744(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__744\n"); );
    // Body
    vlSelf->top__DOT___1745_ = (1U & ((((0xeU & (vlSelf->top__DOT___2185_[0U] 
                                                 >> 0xdU)) 
                                        | (IData)(vlSelf->top__DOT___1299_)) 
                                       + (((IData)(vlSelf->top__DOT___1691_) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT___1422_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0796_)))) 
                                      >> 3U));
    vlSelf->top__DOT___1192_ = ((IData)(vlSelf->top__DOT___1745_) 
                                | (IData)(vlSelf->top__DOT___0192_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__745(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__745\n"); );
    // Body
    vlSelf->top__DOT___1941_ = (((QData)((IData)((0x3fffU 
                                                  & ((((0x780000U 
                                                        & (vlSelf->top__DOT___2185_[1U] 
                                                           << 0x13U)) 
                                                       | ((0x7f800U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3699_ 
                                                                       >> 0x18U)) 
                                                              << 0xbU)) 
                                                          | ((0x400U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___3699_ 
                                                                          >> 0x17U)) 
                                                                 << 0xaU)) 
                                                             | ((0x3feU 
                                                                 & (vlSelf->top__DOT___2185_[0U] 
                                                                    >> 0xdU)) 
                                                                | (IData)(vlSelf->top__DOT___1299_))))) 
                                                      + 
                                                      ((0x780000U 
                                                        & vlSelf->top__DOT___2188_) 
                                                       | ((0x40000U 
                                                           & (vlSelf->top__DOT___3787_ 
                                                              << 5U)) 
                                                          | ((0x3ffe0U 
                                                              & vlSelf->top__DOT___2188_) 
                                                             | (((IData)(vlSelf->top__DOT___0352_) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->top__DOT___1691_) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->top__DOT___1422_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0796_)))))))) 
                                                     >> 9U)))) 
                                 << 0x18U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1421_) 
                                                               << 0x17U) 
                                                              | (((IData)(vlSelf->top__DOT___0489_) 
                                                                  << 0x16U) 
                                                                 | (((IData)(vlSelf->top__DOT___0115_) 
                                                                     << 0x14U) 
                                                                    | (((IData)(vlSelf->top__DOT___0810_) 
                                                                        << 0x13U) 
                                                                       | (((IData)(vlSelf->top__DOT___0338_) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->top__DOT___1820_) 
                                                                              << 0x11U) 
                                                                             | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1037_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___1567_) 
                                                                                << 0xeU) 
                                                                                | ((0x3ffeU 
                                                                                & (((0x3800U 
                                                                                & (IData)(vlSelf->top__DOT___2039_)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x2dU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0151_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0581_) 
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
                                                                                | (IData)(vlSelf->top__DOT___1550_))))))))))) 
                                                                                + 
                                                                                ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___3810_) 
                                                                                << 4U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___1952_[4U] 
                                                                                >> 2U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___1952_[4U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0242_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0404_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1127_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0730_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0318_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0587_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3791_ 
                                                                                >> 0x15U)))))))))))))))))) 
                                                                                | (IData)(vlSelf->top__DOT___0895_))))))))))))));
    vlSelf->top__DOT___2187_ = ((0x1800000U & (((0x1f80000U 
                                                 & (vlSelf->top__DOT___2185_[1U] 
                                                    << 0x13U)) 
                                                | ((0x7f800U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3699_ 
                                                                >> 0x18U)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___3699_ 
                                                                   >> 0x17U)) 
                                                          << 0xaU)) 
                                                      | ((0x3feU 
                                                          & (vlSelf->top__DOT___2185_[0U] 
                                                             >> 0xdU)) 
                                                         | (IData)(vlSelf->top__DOT___1299_))))) 
                                               + ((0x1f80000U 
                                                   & vlSelf->top__DOT___2188_) 
                                                  | ((0x40000U 
                                                      & (vlSelf->top__DOT___3787_ 
                                                         << 5U)) 
                                                     | ((0x3ffe0U 
                                                         & vlSelf->top__DOT___2188_) 
                                                        | (((IData)(vlSelf->top__DOT___0352_) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->top__DOT___1691_) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->top__DOT___1422_) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->top__DOT___0796_))))))))) 
                                | ((0x7ffe00U & ((IData)(
                                                         (vlSelf->top__DOT___1941_ 
                                                          >> 0x18U)) 
                                                 << 9U)) 
                                   | ((0x1f0U & (((0x1feU 
                                                   & (vlSelf->top__DOT___2185_[0U] 
                                                      >> 0xdU)) 
                                                  | (IData)(vlSelf->top__DOT___1299_)) 
                                                 + 
                                                 ((0x1e0U 
                                                   & vlSelf->top__DOT___2188_) 
                                                  | (((IData)(vlSelf->top__DOT___0352_) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->top__DOT___1691_) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->top__DOT___1422_) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top__DOT___0796_))))))) 
                                      | (((IData)(vlSelf->top__DOT___1745_) 
                                          << 3U) | 
                                         (7U & (((6U 
                                                  & (vlSelf->top__DOT___2185_[0U] 
                                                     >> 0xdU)) 
                                                 | (IData)(vlSelf->top__DOT___1299_)) 
                                                + (
                                                   ((IData)(vlSelf->top__DOT___1422_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0796_))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__749(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__749\n"); );
    // Body
    vlSelf->top__DOT___1279_ = (1U & ((((0x7f8U & (
                                                   vlSelf->top__DOT___2047_[1U] 
                                                   >> 0xcU)) 
                                        | (((IData)(vlSelf->top__DOT___0463_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0670_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0897_)))) 
                                       + ((0x7f8U & 
                                           (vlSelf->top__DOT___2080_ 
                                            >> 7U)) 
                                          | (((IData)(vlSelf->top__DOT___0005_) 
                                              << 2U) 
                                             | ((IData)(vlSelf->top__DOT___0153_) 
                                                << 1U)))) 
                                      >> 0xaU));
    vlSelf->top__DOT___1619_ = (1U & ((((0x38U & (vlSelf->top__DOT___2047_[1U] 
                                                  >> 0xcU)) 
                                        | (((IData)(vlSelf->top__DOT___0463_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0670_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0897_)))) 
                                       + ((0x38U & 
                                           (vlSelf->top__DOT___2080_ 
                                            >> 7U)) 
                                          | (((IData)(vlSelf->top__DOT___0005_) 
                                              << 2U) 
                                             | ((IData)(vlSelf->top__DOT___0153_) 
                                                << 1U)))) 
                                      >> 5U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__751(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__751\n"); );
    // Body
    vlSelf->top__DOT___0507_ = (1U & (~ ((((IData)(vlSelf->top__DOT___3671_) 
                                           & (IData)(vlSelf->top__DOT___0152_)) 
                                          & (IData)(vlSelf->top__DOT___1192_)) 
                                         | (vlSelf->top__DOT___3777_ 
                                            >> 4U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__752(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__752\n"); );
    // Body
    vlSelf->top__DOT___0427_ = (1U & (IData)((0xffffffffULL 
                                              & (((((QData)((IData)(
                                                                    ((0xf80000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___1941_ 
                                                                                >> 1U)) 
                                                                         << 0x13U)) 
                                                                     | (((IData)(vlSelf->top__DOT___0895_) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT___1127_) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT___0058_) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT___0210_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___1004_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0408_) 
                                                                                << 0xdU) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___1971_ 
                                                                                >> 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0922_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___1971_ 
                                                                                >> 0xdU))))))))))))) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1525_) 
                                                                       << 0xcU) 
                                                                      | (0xfffU 
                                                                         & vlSelf->top__DOT___1971_))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xffc000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 0x2aU)) 
                                                                         << 0xeU)) 
                                                                     | (((IData)(vlSelf->top__DOT___1013_) 
                                                                         << 0xdU) 
                                                                        | (((IData)(vlSelf->top__DOT___0662_) 
                                                                            << 0xcU) 
                                                                           | (((IData)(vlSelf->top__DOT___0505_) 
                                                                               << 0xbU) 
                                                                              | (((IData)(vlSelf->top__DOT___0277_) 
                                                                                << 0xaU) 
                                                                                | (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 0xbU)))))))))) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(
                                                                     (8U 
                                                                      | ((0x1000U 
                                                                          & (vlSelf->top__DOT___3660_ 
                                                                             << 5U)) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->top__DOT___3660_ 
                                                                                << 5U)) 
                                                                            | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 8U)) 
                                                                                << 0xaU)) 
                                                                               | ((0x200U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 5U)) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 3U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 4U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1035_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0175_)))))))))))))) 
                                                 >> 5U))));
    vlSelf->top__DOT___1824_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    ((0xf80000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___1941_ 
                                                                                >> 1U)) 
                                                                         << 0x13U)) 
                                                                     | (((IData)(vlSelf->top__DOT___0895_) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT___1127_) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT___0058_) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT___0210_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___1004_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0408_) 
                                                                                << 0xdU) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___1971_ 
                                                                                >> 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0922_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___1971_ 
                                                                                >> 0xdU))))))))))))) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1525_) 
                                                                       << 0xcU) 
                                                                      | (0xfffU 
                                                                         & vlSelf->top__DOT___1971_))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xffc000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 0x2aU)) 
                                                                         << 0xeU)) 
                                                                     | (((IData)(vlSelf->top__DOT___1013_) 
                                                                         << 0xdU) 
                                                                        | (((IData)(vlSelf->top__DOT___0662_) 
                                                                            << 0xcU) 
                                                                           | (((IData)(vlSelf->top__DOT___0505_) 
                                                                               << 0xbU) 
                                                                              | (((IData)(vlSelf->top__DOT___0277_) 
                                                                                << 0xaU) 
                                                                                | (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 0xbU)))))))))) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(
                                                                     (8U 
                                                                      | ((0x1000U 
                                                                          & (vlSelf->top__DOT___3660_ 
                                                                             << 5U)) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->top__DOT___3660_ 
                                                                                << 5U)) 
                                                                            | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 8U)) 
                                                                                << 0xaU)) 
                                                                               | ((0x200U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 5U)) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 3U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 4U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1035_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0175_)))))))))))))) 
                                                 >> 0x24U))));
    vlSelf->top__DOT___1900_[2U] = ((0x1fffU & vlSelf->top__DOT___1900_[2U]) 
                                    | (0x7fe000U & 
                                       ((0x7f8000U 
                                         & ((IData)(
                                                    (0x7fffffULL 
                                                     & (((((QData)((IData)(
                                                                           ((0xf80000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___1941_ 
                                                                                >> 1U)) 
                                                                                << 0x13U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0895_) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->top__DOT___1127_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0058_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0210_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___1004_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0408_) 
                                                                                << 0xdU) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___1971_ 
                                                                                >> 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0922_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___1971_ 
                                                                                >> 0xdU))))))))))))) 
                                                           << 0xdU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->top__DOT___1525_) 
                                                                              << 0xcU) 
                                                                             | (0xfffU 
                                                                                & vlSelf->top__DOT___1971_))))) 
                                                         + 
                                                         (((QData)((IData)(
                                                                           ((0xffc000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xeU)) 
                                                                            | (((IData)(vlSelf->top__DOT___1013_) 
                                                                                << 0xdU) 
                                                                               | (((IData)(vlSelf->top__DOT___0662_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0505_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0277_) 
                                                                                << 0xaU) 
                                                                                | (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 0xbU)))))))))) 
                                                           << 0xdU) 
                                                          | (QData)((IData)(
                                                                            (8U 
                                                                             | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 5U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 8U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 5U)) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 3U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 4U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1035_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0175_)))))))))))))) 
                                                        >> 0xeU))) 
                                            << 0xfU)) 
                                        | (((IData)(vlSelf->top__DOT___1760_) 
                                            << 0xeU) 
                                           | (0x2000U 
                                              & (vlSelf->top__DOT___3651_[0U] 
                                                 >> 6U))))));
    vlSelf->top__DOT___1453_ = (((IData)(vlSelf->top__DOT___1820_) 
                                 ^ (IData)(vlSelf->top__DOT___1824_)) 
                                | (IData)(vlSelf->top__DOT___0134_));
}
