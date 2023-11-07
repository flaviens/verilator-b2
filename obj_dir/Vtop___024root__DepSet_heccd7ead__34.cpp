// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1185(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1185\n"); );
    // Body
    vlSelf->top__DOT___1114_ = (1U & (~ (((IData)(vlSelf->top__DOT___0699_) 
                                          & (IData)(vlSelf->top__DOT___3110_)) 
                                         | ((IData)(vlSelf->top__DOT___3109_) 
                                            & (IData)(vlSelf->top__DOT___0035_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1188(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1188\n"); );
    // Body
    vlSelf->top__DOT___1119_ = (1U & (((((IData)(vlSelf->top__DOT___2576_) 
                                         << 2U) | (3U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT___3935_ 
                                                              >> 7U)))) 
                                       + ((4U & (vlSelf->top__DOT___4280_[0U] 
                                                 << 2U)) 
                                          | (((IData)(vlSelf->top__DOT___0183_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___2091_)))) 
                                      >> 2U));
    vlSelf->top__DOT____VdfgTmp_hd0bd0aa6__0 = (((IData)(vlSelf->top__DOT___1082_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1080_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___1119_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1192(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1192\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h48bec5bd__0 = (0xfU 
                                                & ((((0x800U 
                                                      & ((IData)(vlSelf->top__DOT___4221_) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_hc9c7ab1b__0)) 
                                                    + 
                                                    ((0xff8U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___3996_ 
                                                                  >> 0xfU)) 
                                                         << 3U)) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_h762b5fd2__0))) 
                                                   >> 8U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1193(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1193\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hc135a6c0__0 = (((IData)(vlSelf->top__DOT___2930_) 
                                                 << 0xfU) 
                                                | ((0x7800U 
                                                    & ((IData)(vlSelf->top__DOT___4221_) 
                                                       << 0xbU)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_hc9c7ab1b__0)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1194(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1194\n"); );
    // Body
    vlSelf->top__DOT___4537_[0U] = ((vlSelf->top__DOT___7125_[1U] 
                                     << 0x1fU) | (vlSelf->top__DOT___7125_[0U] 
                                                  >> 1U));
    vlSelf->top__DOT___4537_[1U] = ((vlSelf->top__DOT___7125_[2U] 
                                     << 0x1fU) | (vlSelf->top__DOT___7125_[1U] 
                                                  >> 1U));
    vlSelf->top__DOT___4537_[2U] = ((0x3800000U & ((IData)(vlSelf->top__DOT___4274_) 
                                                   << 0xbU)) 
                                    | (0x7fffffU & 
                                       (vlSelf->top__DOT___7125_[2U] 
                                        >> 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1195(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1195\n"); );
    // Body
    vlSelf->top__DOT___4303_ = ((0xff8000U & (vlSelf->top__DOT___7137_[1U] 
                                              << 4U)) 
                                | ((0x7fc0U & ((vlSelf->top__DOT___4233_[2U] 
                                                << 0xeU) 
                                               | (0x3fc0U 
                                                  & (vlSelf->top__DOT___4233_[1U] 
                                                     >> 0x12U)))) 
                                   | (0x3fU & ((vlSelf->top__DOT___7137_[1U] 
                                                << 4U) 
                                               | (vlSelf->top__DOT___7137_[0U] 
                                                  >> 0x1cU)))));
    vlSelf->top__DOT___4639_ = (((QData)((IData)((0x1ffU 
                                                  & (vlSelf->top__DOT___7137_[2U] 
                                                     >> 9U)))) 
                                 << 0x18U) | (QData)((IData)(
                                                             (0x20U 
                                                              | ((0xfc0000U 
                                                                  & (vlSelf->top__DOT___4233_[2U] 
                                                                     >> 7U)) 
                                                                 | ((0x20000U 
                                                                     & (vlSelf->top__DOT___7137_[2U] 
                                                                        << 0xfU)) 
                                                                    | ((0x1ff00U 
                                                                        & (vlSelf->top__DOT___4233_[2U] 
                                                                           >> 7U)) 
                                                                       | ((0xc0U 
                                                                           & (vlSelf->top__DOT___7137_[1U] 
                                                                              >> 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0056_) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->top__DOT___1558_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___1229_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0527_)))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1196(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1196\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x1ffU 
                                               & ((vlSelf->top__DOT___4233_[2U] 
                                                   << 8U) 
                                                  | (vlSelf->top__DOT___4233_[1U] 
                                                     >> 0x18U))))) 
                              << 0x33U) | (((QData)((IData)(
                                                            (7U 
                                                             & ((vlSelf->top__DOT___7137_[1U] 
                                                                 << 1U) 
                                                                | (vlSelf->top__DOT___7137_[0U] 
                                                                   >> 0x1fU))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0808_)) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0816_)) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___7175_ 
                                                                                >> 0x2bU))))) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        (0x1ffU 
                                                                         & ((IData)(vlSelf->top__DOT___4548_) 
                                                                            >> 3U)))) 
                                                        << 0x22U) 
                                                       | (0x3ffffffffULL 
                                                          & vlSelf->top__DOT___7175_))))))));
    __Vtemp_1[1U] = ((0xf0000000U & (vlSelf->top__DOT___7137_[1U] 
                                     << 0x11U)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (0x1ffU 
                                                                              & ((vlSelf->top__DOT___4233_[2U] 
                                                                                << 8U) 
                                                                                | (vlSelf->top__DOT___4233_[1U] 
                                                                                >> 0x18U))))) 
                                                             << 0x33U) 
                                                            | (((QData)((IData)(
                                                                                (7U 
                                                                                & ((vlSelf->top__DOT___7137_[1U] 
                                                                                << 1U) 
                                                                                | (vlSelf->top__DOT___7137_[0U] 
                                                                                >> 0x1fU))))) 
                                                                << 0x30U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___0808_)) 
                                                                   << 0x2fU) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___0816_)) 
                                                                      << 0x2eU) 
                                                                     | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7175_ 
                                                                                >> 0x2bU))))) 
                                                                         << 0x2bU) 
                                                                        | (((QData)((IData)(
                                                                                (0x1ffU 
                                                                                & ((IData)(vlSelf->top__DOT___4548_) 
                                                                                >> 3U)))) 
                                                                            << 0x22U) 
                                                                           | (0x3ffffffffULL 
                                                                              & vlSelf->top__DOT___7175_))))))) 
                                                           >> 0x20U)));
    vlSelf->top__DOT___4699_[0U] = ((0xfU & vlSelf->top__DOT___4699_[0U]) 
                                    | (__Vtemp_1[0U] 
                                       << 4U));
    vlSelf->top__DOT___4699_[1U] = ((__Vtemp_1[0U] 
                                     >> 0x1cU) | (__Vtemp_1[1U] 
                                                  << 4U));
    vlSelf->top__DOT___4699_[2U] = ((__Vtemp_1[1U] 
                                     >> 0x1cU) | ((0xc0000000U 
                                                   & (vlSelf->top__DOT___7137_[2U] 
                                                      << 0x15U)) 
                                                  | ((0x3f000000U 
                                                      & (vlSelf->top__DOT___4233_[2U] 
                                                         >> 1U)) 
                                                     | ((0x800000U 
                                                         & (vlSelf->top__DOT___7137_[2U] 
                                                            << 0x15U)) 
                                                        | ((0x7fc000U 
                                                            & (vlSelf->top__DOT___4233_[2U] 
                                                               >> 1U)) 
                                                           | (0x3ff0U 
                                                              & (vlSelf->top__DOT___7137_[1U] 
                                                                 >> 0xbU)))))));
    vlSelf->top__DOT___4699_[3U] = (0xfffU & ((0xfU 
                                               & (vlSelf->top__DOT___7137_[2U] 
                                                  >> 0xbU)) 
                                              | (0xff0U 
                                                 & (vlSelf->top__DOT___7137_[2U] 
                                                    >> 0xbU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1198(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1198\n"); );
    // Body
    vlSelf->top__DOT___3376_ = (1U & ((~ (((~ (IData)(vlSelf->top__DOT___0629_)) 
                                           & (vlSelf->top__DOT___7154_[2U] 
                                              >> 7U)) 
                                          | ((IData)(vlSelf->top__DOT___1060_) 
                                             ^ (IData)(vlSelf->top__DOT___3592_)))) 
                                      ^ (IData)(vlSelf->top__DOT___1950_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1204(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1204\n"); );
    // Body
    vlSelf->top__DOT___4226_ = ((0x7fU & (IData)(vlSelf->top__DOT___4226_)) 
                                | (0x80U & (((((IData)(vlSelf->top__DOT___0434_) 
                                               << 6U) 
                                              | (((IData)(vlSelf->top__DOT___0381_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___0070_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___1114_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___0318_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___0023_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0201_))))))) 
                                             + (IData)(vlSelf->top__DOT___4534_)) 
                                            << 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1205(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1205\n"); );
    // Body
    vlSelf->__VdfgTmp_h0f73bb1d__0 = (((IData)(vlSelf->top__DOT___1570_) 
                                       << 5U) | (((IData)(vlSelf->top__DOT____VdfgTmp_hd0bd0aa6__0) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->top__DOT____VdfgTmp_he023ae14__0)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1207(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1207\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h93a694a5__0 = (0x1fffffU 
                                                & (((0x1f0000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___4221_ 
                                                                 >> 5U)) 
                                                        << 0x10U)) 
                                                    | (IData)(vlSelf->top__DOT____VdfgTmp_hc135a6c0__0)) 
                                                   + 
                                                   ((0x1ffff8U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3996_ 
                                                                 >> 0xfU)) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->top__DOT____VdfgTmp_h762b5fd2__0))));
    vlSelf->top__DOT___0689_ = (1U & ((((0x30000U & 
                                         ((IData)((vlSelf->top__DOT___4221_ 
                                                   >> 5U)) 
                                          << 0x10U)) 
                                        | (IData)(vlSelf->top__DOT____VdfgTmp_hc135a6c0__0)) 
                                       + ((0x3fff8U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT___3996_ 
                                                       >> 0xfU)) 
                                              << 3U)) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h762b5fd2__0))) 
                                      >> 0x11U));
    vlSelf->top__DOT____VdfgTmp_h0490bc5a__0 = (0xfU 
                                                & ((((0x10000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___4221_ 
                                                                  >> 5U)) 
                                                         << 0x10U)) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_hc135a6c0__0)) 
                                                    + 
                                                    ((0x1fff8U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___3996_ 
                                                                  >> 0xfU)) 
                                                         << 3U)) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_h762b5fd2__0))) 
                                                   >> 0xdU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1213(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1213\n"); );
    // Body
    vlSelf->top__DOT___4094_ = ((0x7fU & vlSelf->top__DOT___4094_) 
                                | ((0x3ffc00U & (((0x10U 
                                                   | ((0xe000U 
                                                       & (vlSelf->top__DOT___4382_[0U] 
                                                          >> 9U)) 
                                                      | ((0x1000U 
                                                          & ((IData)(vlSelf->top__DOT___4332_) 
                                                             << 6U)) 
                                                         | (((IData)(vlSelf->top__DOT___3055_) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSelf->top__DOT___0856_) 
                                                                << 0xaU) 
                                                               | ((0x200U 
                                                                   & (vlSelf->in_data[3U] 
                                                                      >> 0xeU)) 
                                                                  | (((IData)(vlSelf->top__DOT___0757_) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSelf->top__DOT___1731_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___1521_))))))))) 
                                                  + 
                                                  (((IData)(vlSelf->top__DOT___2091_) 
                                                    << 0xfU) 
                                                   | (((IData)(vlSelf->top__DOT___1777_) 
                                                       << 0xeU) 
                                                      | (((IData)(vlSelf->top__DOT___1282_) 
                                                          << 0xdU) 
                                                         | (((IData)(vlSelf->top__DOT___0405_) 
                                                             << 0xcU) 
                                                            | (((IData)(vlSelf->top__DOT___1004_) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->top__DOT___1775_) 
                                                                   << 0xaU) 
                                                                  | (((IData)(vlSelf->top__DOT___1792_) 
                                                                      << 9U) 
                                                                     | (((IData)(vlSelf->top__DOT___1168_) 
                                                                         << 8U) 
                                                                        | (((IData)(vlSelf->top__DOT___2009_) 
                                                                            << 7U) 
                                                                           | (((IData)(vlSelf->top__DOT___0102_) 
                                                                               << 6U) 
                                                                              | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___7102_)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___7102_)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4313_ 
                                                                                >> 8U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1453_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->top__DOT___7102_))))))))))))))))) 
                                                 << 6U)) 
                                   | (((IData)(vlSelf->top__DOT___0854_) 
                                       << 9U) | (((IData)(vlSelf->top__DOT___1268_) 
                                                  << 8U) 
                                                 | ((IData)(vlSelf->top__DOT___1132_) 
                                                    << 7U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1214(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1214\n"); );
    // Body
    vlSelf->top__DOT___4389_[0U] = ((0xfc00007fU & 
                                     vlSelf->top__DOT___4389_[0U]) 
                                    | (0xffffff80U 
                                       & ((0x3800000U 
                                           & (((0x10U 
                                                | ((0x7e000U 
                                                    & (vlSelf->top__DOT___4382_[0U] 
                                                       >> 9U)) 
                                                   | ((0x1000U 
                                                       & ((IData)(vlSelf->top__DOT___4332_) 
                                                          << 6U)) 
                                                      | (((IData)(vlSelf->top__DOT___3055_) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->top__DOT___0856_) 
                                                             << 0xaU) 
                                                            | ((0x200U 
                                                                & (vlSelf->in_data[3U] 
                                                                   >> 0xeU)) 
                                                               | (((IData)(vlSelf->top__DOT___0757_) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->top__DOT___1731_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___1521_))))))))) 
                                               + ((0x70000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3814_ 
                                                               >> 0xeU)) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSelf->top__DOT___2091_) 
                                                      << 0xfU) 
                                                     | (((IData)(vlSelf->top__DOT___1777_) 
                                                         << 0xeU) 
                                                        | (((IData)(vlSelf->top__DOT___1282_) 
                                                            << 0xdU) 
                                                           | (((IData)(vlSelf->top__DOT___0405_) 
                                                               << 0xcU) 
                                                              | (((IData)(vlSelf->top__DOT___1004_) 
                                                                  << 0xbU) 
                                                                 | (((IData)(vlSelf->top__DOT___1775_) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->top__DOT___1792_) 
                                                                        << 9U) 
                                                                       | (((IData)(vlSelf->top__DOT___1168_) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->top__DOT___2009_) 
                                                                              << 7U) 
                                                                             | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___7102_)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___7102_)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4313_ 
                                                                                >> 8U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1453_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->top__DOT___7102_)))))))))))))))))) 
                                              << 7U)) 
                                          | ((0x7ff800U 
                                              & (vlSelf->top__DOT___4094_ 
                                                 << 1U)) 
                                             | (0x780U 
                                                & (((((IData)(vlSelf->top__DOT___1731_) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT___1521_)) 
                                                    + 
                                                    ((8U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___4313_ 
                                                                  >> 8U)) 
                                                         << 3U)) 
                                                     | (((IData)(vlSelf->top__DOT___1453_) 
                                                         << 2U) 
                                                        | (3U 
                                                           & (IData)(vlSelf->top__DOT___7102_))))) 
                                                   << 7U))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1216(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1216\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_35;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & 
                                               ((IData)(vlSelf->top__DOT___7010_) 
                                                >> 0xbU)))) 
                              << 0x3dU) | (((QData)((IData)(
                                                            (3U 
                                                             & ((IData)(vlSelf->top__DOT___7010_) 
                                                                >> 9U)))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT___7010_) 
                                                                   >> 8U)))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->top__DOT___7010_) 
                                                                      >> 3U)))) 
                                                  << 0x35U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT___7010_) 
                                                                         >> 2U)))) 
                                                     << 0x34U) 
                                                    | (((QData)((IData)(
                                                                        (3U 
                                                                         & (IData)(vlSelf->top__DOT___7010_)))) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1084_)) 
                                                           << 0x31U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___1762_)) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___1655_)) 
                                                                 << 0x2fU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x14U))))) 
                                                                    << 0x2eU) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___3689_)) 
                                                                       << 0x2dU) 
                                                                      | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xeU))))) 
                                                                          << 0x28U) 
                                                                         | (((QData)((IData)(vlSelf->top__DOT___2091_)) 
                                                                             << 0x27U) 
                                                                            | (((QData)((IData)(vlSelf->top__DOT___3242_)) 
                                                                                << 0x26U) 
                                                                               | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xaU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2171_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0414_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((IData)(vlSelf->top__DOT___4752_) 
                                                                                >> 7U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (0xb0f00000U 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4752_) 
                                                                                << 0x12U)) 
                                                                                | ((0xc0000U 
                                                                                & ((IData)(vlSelf->top__DOT___4752_) 
                                                                                << 0xeU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___1729_) 
                                                                                << 6U)) 
                                                                                | ((0x18000U 
                                                                                & ((IData)(vlSelf->top__DOT___4752_) 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___4752_) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___4752_) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2761_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2935_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1642_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___2032_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0xdU)) 
                                                                                << 8U)) 
                                                                                | ((0xc0U 
                                                                                & ((((0x3eU 
                                                                                & (vlSelf->in_data[4U] 
                                                                                >> 0x16U)) 
                                                                                | (IData)(vlSelf->top__DOT___1526_)) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0016_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1343_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0903_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0479_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___2154_)))))) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3000_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1652_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((((2U 
                                                                                & (vlSelf->in_data[4U] 
                                                                                >> 0x16U)) 
                                                                                | (IData)(vlSelf->top__DOT___1526_)) 
                                                                                + (IData)(vlSelf->top__DOT___2154_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2261_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0773_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1729_))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = ((0xc0000000U & ((IData)(vlSelf->top__DOT___7010_) 
                                     << 0x12U)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->top__DOT___7010_) 
                                                                                >> 0xbU)))) 
                                                             << 0x3dU) 
                                                            | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7010_) 
                                                                                >> 9U)))) 
                                                                << 0x3bU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7010_) 
                                                                                >> 8U)))) 
                                                                   << 0x3aU) 
                                                                  | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & ((IData)(vlSelf->top__DOT___7010_) 
                                                                                >> 3U)))) 
                                                                      << 0x35U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7010_) 
                                                                                >> 2U)))) 
                                                                         << 0x34U) 
                                                                        | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(vlSelf->top__DOT___7010_)))) 
                                                                            << 0x32U) 
                                                                           | (((QData)((IData)(vlSelf->top__DOT___1084_)) 
                                                                               << 0x31U) 
                                                                              | (((QData)((IData)(vlSelf->top__DOT___1762_)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1655_)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x14U))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3689_)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xeU))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2091_)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3242_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xaU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2171_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0414_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((IData)(vlSelf->top__DOT___4752_) 
                                                                                >> 7U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (0xb0f00000U 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4752_) 
                                                                                << 0x12U)) 
                                                                                | ((0xc0000U 
                                                                                & ((IData)(vlSelf->top__DOT___4752_) 
                                                                                << 0xeU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___1729_) 
                                                                                << 6U)) 
                                                                                | ((0x18000U 
                                                                                & ((IData)(vlSelf->top__DOT___4752_) 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___4752_) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___4752_) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2761_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2935_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1642_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___2032_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0xdU)) 
                                                                                << 8U)) 
                                                                                | ((0xc0U 
                                                                                & ((((0x3eU 
                                                                                & (vlSelf->in_data[4U] 
                                                                                >> 0x16U)) 
                                                                                | (IData)(vlSelf->top__DOT___1526_)) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0016_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1343_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0903_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0479_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___2154_)))))) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3000_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1652_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((((2U 
                                                                                & (vlSelf->in_data[4U] 
                                                                                >> 0x16U)) 
                                                                                | (IData)(vlSelf->top__DOT___1526_)) 
                                                                                + (IData)(vlSelf->top__DOT___2154_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2261_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0773_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1729_))))))))))))))))))))))))))))))))))))))) 
                                                           >> 0x20U)));
    __Vtemp_14[2U] = (((IData)(vlSelf->top__DOT___0520_) 
                       << 0x16U) | (((IData)(vlSelf->top__DOT___0226_) 
                                     << 0x15U) | (((IData)(vlSelf->top__DOT___2484_) 
                                                   << 0x14U) 
                                                  | (((IData)(vlSelf->top__DOT___2554_) 
                                                      << 0x13U) 
                                                     | (((IData)(vlSelf->top__DOT___0558_) 
                                                         << 0x12U) 
                                                        | ((0x20000U 
                                                            & (vlSelf->top__DOT___3825_[1U] 
                                                               >> 8U)) 
                                                           | (((IData)(vlSelf->top__DOT___2368_) 
                                                               << 0x10U) 
                                                              | ((0xf000U 
                                                                  & (vlSelf->top__DOT___3825_[1U] 
                                                                     >> 8U)) 
                                                                 | (((IData)(vlSelf->top__DOT___3740_) 
                                                                     << 0xbU) 
                                                                    | ((0x600U 
                                                                        & (vlSelf->top__DOT___3825_[1U] 
                                                                           >> 8U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3766_) 
                                                                           << 8U) 
                                                                          | ((0xf8U 
                                                                              & (vlSelf->top__DOT___3825_[1U] 
                                                                                >> 8U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0309_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7010_) 
                                                                                >> 0xeU)))))))))))))));
    __Vtemp_35[3U] = ((0x3fffc000U & ((((0x100000U 
                                         & ((IData)(vlSelf->top__DOT___7062_) 
                                            << 0x14U)) 
                                        | (((IData)(vlSelf->top__DOT___1095_) 
                                            << 0x13U) 
                                           | (((IData)(vlSelf->top__DOT___1722_) 
                                               << 0x12U) 
                                              | (((IData)(vlSelf->top__DOT___0355_) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelf->top__DOT___2245_) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->top__DOT___2278_) 
                                                        << 0xfU) 
                                                       | ((0x4000U 
                                                           & vlSelf->top__DOT___4576_) 
                                                          | ((0x2000U 
                                                              & ((IData)(vlSelf->top__DOT___4781_) 
                                                                 << 1U)) 
                                                             | ((0x1000U 
                                                                 & vlSelf->top__DOT___4576_) 
                                                                | ((0x800U 
                                                                    & ((IData)(vlSelf->top__DOT___4781_) 
                                                                       << 1U)) 
                                                                   | ((0x600U 
                                                                       & vlSelf->top__DOT___4576_) 
                                                                      | ((0x1c0U 
                                                                          & ((IData)(vlSelf->top__DOT___4781_) 
                                                                             << 1U)) 
                                                                         | (0x3bU 
                                                                            & vlSelf->top__DOT___4576_))))))))))))) 
                                       + ((0x1c0000U 
                                           & (vlSelf->top__DOT___4389_[0U] 
                                              >> 5U)) 
                                          | ((0x3ffc0U 
                                              & (vlSelf->top__DOT___4094_ 
                                                 >> 4U)) 
                                             | ((0x38U 
                                                 & (vlSelf->top__DOT___4389_[0U] 
                                                    >> 5U)) 
                                                | (((IData)(vlSelf->top__DOT___2823_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0699_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___3533_))))))) 
                                      << 9U)) | (((IData)(vlSelf->top__DOT___3702_) 
                                                  << 0xdU) 
                                                 | ((0x1e00U 
                                                     & (((0xbU 
                                                          & vlSelf->top__DOT___4576_) 
                                                         + 
                                                         ((8U 
                                                           & (vlSelf->top__DOT___4389_[0U] 
                                                              >> 5U)) 
                                                          | (((IData)(vlSelf->top__DOT___2823_) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->top__DOT___0699_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___3533_))))) 
                                                        << 9U)) 
                                                    | (((IData)(vlSelf->top__DOT___0597_) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->top__DOT___1997_) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->top__DOT___2307_) 
                                                              << 6U) 
                                                             | (((IData)(vlSelf->top__DOT___0871_) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT___0748_) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSelf->top__DOT___2203_) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelf->top__DOT___2433_) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelf->top__DOT___0463_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___3244_))))))))))));
    vlSelf->top__DOT___4038_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4038_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4038_[2U] = (((IData)(vlSelf->top__DOT___1811_) 
                                     << 0x1fU) | (((IData)(vlSelf->top__DOT___0199_) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->top__DOT___1121_) 
                                                      << 0x1dU) 
                                                     | ((0x10000000U 
                                                         & ((~ 
                                                             (vlSelf->top__DOT___7144_ 
                                                              >> 0xeU)) 
                                                            << 0x1cU)) 
                                                        | (((IData)(vlSelf->top__DOT___1010_) 
                                                            << 0x1bU) 
                                                           | (((IData)(vlSelf->top__DOT___0108_) 
                                                               << 0x1aU) 
                                                              | (((IData)(vlSelf->top__DOT___0223_) 
                                                                  << 0x19U) 
                                                                 | (((IData)(vlSelf->top__DOT___3032_) 
                                                                     << 0x18U) 
                                                                    | (((IData)(vlSelf->top__DOT___1001_) 
                                                                        << 0x17U) 
                                                                       | __Vtemp_14[2U])))))))));
    vlSelf->top__DOT___4038_[3U] = (((IData)((vlSelf->top__DOT___6971_ 
                                              >> 2U)) 
                                     << 0x1fU) | (((IData)(vlSelf->top__DOT___0420_) 
                                                   << 0x1eU) 
                                                  | __Vtemp_35[3U]));
    vlSelf->top__DOT___4038_[4U] = (((IData)((vlSelf->top__DOT___6971_ 
                                              >> 0xeU)) 
                                     << 0xbU) | ((0x400U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___6971_ 
                                                              >> 0xdU)) 
                                                     << 0xaU)) 
                                                 | ((0x3fcU 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___6971_ 
                                                                 >> 5U)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___6971_ 
                                                                    >> 4U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___6971_ 
                                                                      >> 2U)) 
                                                             >> 1U))))));
    vlSelf->top__DOT___4038_[5U] = ((0xf000U & ((IData)(
                                                        (vlSelf->top__DOT___6971_ 
                                                         >> 0x2fU)) 
                                                << 0xcU)) 
                                    | ((0x800U & ((IData)(
                                                          (vlSelf->top__DOT___6971_ 
                                                           >> 0x2eU)) 
                                                  << 0xbU)) 
                                       | ((0x7f8U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT___6971_ 
                                                     >> 0x26U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(
                                                       (vlSelf->top__DOT___6971_ 
                                                        >> 0x25U)) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___6971_ 
                                                             >> 0x24U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___6971_ 
                                                               >> 0xeU)) 
                                                      >> 0x15U)))))));
    vlSelf->top__DOT____VdfgTmp_h29edf868__0 = (0xb0fU 
                                                | ((0x3000U 
                                                    & (vlSelf->top__DOT___4038_[1U] 
                                                       << 0xcU)) 
                                                   | (0x10U 
                                                      & (vlSelf->top__DOT___4038_[0U] 
                                                         >> 0x14U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1218(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1218\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hb8d3da47__0 = (((QData)((IData)(
                                                                 (3U 
                                                                  & (vlSelf->top__DOT___4038_[0U] 
                                                                     >> 0x12U)))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    ((0xc000000U 
                                                                      & (vlSelf->top__DOT___4038_[0U] 
                                                                         << 0xbU)) 
                                                                     | ((0x2000000U 
                                                                         & ((IData)(vlSelf->top__DOT___4752_) 
                                                                            << 0x18U)) 
                                                                        | ((0x1000000U 
                                                                            & (vlSelf->top__DOT___4038_[0U] 
                                                                               << 0xbU)) 
                                                                           | ((0x800000U 
                                                                               & (vlSelf->top__DOT___4457_ 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSelf->top__DOT___1277_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0220_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1475_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___3560_) 
                                                                                << 0x12U) 
                                                                                | ((0x38000U 
                                                                                & (vlSelf->top__DOT____VdfgTmp_h93a694a5__0 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h40d5dd60__0))))))))))))) 
                                                    << 5U) 
                                                   | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hd134896c__0))));
    vlSelf->top__DOT___0294_ = (1U & (IData)((1ULL 
                                              & (((0xf000000000ULL 
                                                   | vlSelf->top__DOT____VdfgTmp_hb8d3da47__0) 
                                                  + vlSelf->top__DOT____VdfgTmp_hf150bcb1__0) 
                                                 >> 0x27U))));
    vlSelf->top__DOT___4369_[1U] = ((0x1ffffU & vlSelf->top__DOT___4369_[1U]) 
                                    | (0xfffe0000U 
                                       & (((IData)(
                                                   (0x3ffffULL 
                                                    & (((0x7000000000ULL 
                                                         | vlSelf->top__DOT____VdfgTmp_hb8d3da47__0) 
                                                        + 
                                                        (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h0b56d5ac__0)) 
                                                          << 0x24U) 
                                                         | vlSelf->top__DOT____VdfgTmp_he7f93aa6__0)) 
                                                       >> 0x15U))) 
                                           << 0x12U) 
                                          | ((IData)(vlSelf->top__DOT___2699_) 
                                             << 0x11U))));
    vlSelf->top__DOT___4369_[2U] = (0x7fffU & ((0x7fe0U 
                                                & ((IData)(
                                                           (0x3ffULL 
                                                            & (((((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h29edf868__0)) 
                                                                  << 0x24U) 
                                                                 | vlSelf->top__DOT____VdfgTmp_hb8d3da47__0) 
                                                                + 
                                                                (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->top__DOT___3816_[2U] 
                                                                                >> 7U)))) 
                                                                  << 0x28U) 
                                                                 | vlSelf->top__DOT____VdfgTmp_hf150bcb1__0)) 
                                                               >> 0x28U))) 
                                                   << 5U)) 
                                               | ((0x1fff0U 
                                                   & ((IData)(vlSelf->top__DOT___0294_) 
                                                      << 4U)) 
                                                  | ((0xfU 
                                                      & ((IData)(
                                                                 (0x3ffffULL 
                                                                  & (((0x7000000000ULL 
                                                                       | vlSelf->top__DOT____VdfgTmp_hb8d3da47__0) 
                                                                      + 
                                                                      (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h0b56d5ac__0)) 
                                                                        << 0x24U) 
                                                                       | vlSelf->top__DOT____VdfgTmp_he7f93aa6__0)) 
                                                                     >> 0x15U))) 
                                                         >> 0xeU)) 
                                                     | ((IData)(vlSelf->top__DOT___2699_) 
                                                        >> 0xfU)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1219(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1219\n"); );
    // Body
    vlSelf->top__DOT___4202_ = ((0xeU & (((8U & ((IData)(
                                                         (vlSelf->top__DOT___6971_ 
                                                          >> 0xdU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (vlSelf->top__DOT___4038_[4U] 
                                               >> 7U)) 
                                             | (((IData)(vlSelf->top__DOT___1594_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1692_)))) 
                                         + ((8U & (IData)(vlSelf->top__DOT___4548_)) 
                                            | (((IData)(vlSelf->top__DOT___0740_) 
                                                << 2U) 
                                               | (((IData)(vlSelf->top__DOT___0154_) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT___3178_)))))) 
                                | (1U & (~ (IData)(vlSelf->top__DOT___0169_))));
    vlSelf->top__DOT___4452_ = ((0x1fffff000ffffULL 
                                 & vlSelf->top__DOT___4452_) 
                                | ((QData)((IData)(
                                                   ((0xff0U 
                                                     & (((0xff0U 
                                                          & (vlSelf->top__DOT___4038_[4U] 
                                                             >> 7U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___6971_ 
                                                                         >> 0xdU)) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (vlSelf->top__DOT___4038_[4U] 
                                                                   >> 7U)) 
                                                               | (((IData)(vlSelf->top__DOT___1594_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___1692_))))) 
                                                        + 
                                                        ((0xff8U 
                                                          & (IData)(vlSelf->top__DOT___4548_)) 
                                                         | (((IData)(vlSelf->top__DOT___0740_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___0154_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___3178_)))))) 
                                                    | ((0xeU 
                                                        & (IData)(vlSelf->top__DOT___4202_)) 
                                                       | (1U 
                                                          & ((IData)(vlSelf->top__DOT___1692_) 
                                                             + (IData)(vlSelf->top__DOT___3178_))))))) 
                                   << 0x10U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1220(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1220\n"); );
    // Body
    vlSelf->top__DOT___4136_ = ((0x7ffffc000003ULL 
                                 & vlSelf->top__DOT___4136_) 
                                | ((QData)((IData)(
                                                   (0x161e00U 
                                                    | (((IData)(vlSelf->top__DOT___0285_) 
                                                        << 0x17U) 
                                                       | ((0x600000U 
                                                           & (vlSelf->top__DOT___4038_[1U] 
                                                              << 0x15U)) 
                                                          | ((0x2000U 
                                                              & (vlSelf->top__DOT___4038_[0U] 
                                                                 >> 0xbU)) 
                                                             | ((0x180U 
                                                                 & (vlSelf->top__DOT___4038_[0U] 
                                                                    >> 0xbU)) 
                                                                | (((0x30U 
                                                                     & (vlSelf->top__DOT___4038_[0U] 
                                                                        >> 0xbU)) 
                                                                    | ((8U 
                                                                        & ((IData)(vlSelf->top__DOT___4752_) 
                                                                           << 2U)) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___4038_[0U] 
                                                                              >> 0xbU)) 
                                                                          | ((IData)(vlSelf->top__DOT___1624_) 
                                                                             << 1U)))) 
                                                                   | (IData)(vlSelf->top__DOT___1208_))))))))) 
                                   << 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1221(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1221\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_12;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & 
                                               (vlSelf->top__DOT___3863_[1U] 
                                                >> 0xeU)))) 
                              << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___3617_)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                   >> 0xcU)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT___7158_ 
                                                                      >> 0xeU)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0xfU 
                                                                      & (vlSelf->top__DOT___3863_[1U] 
                                                                         >> 7U)))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT___7158_ 
                                                                            >> 9U)))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->top__DOT___3863_[1U] 
                                                                               >> 5U)))) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 3U)))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)))) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 2U)))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0023_)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3537_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1933_)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2426_)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3086_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2618_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3572_)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3154_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1205_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 9U)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x1800U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___4217_) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1506_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1205_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0228_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1481_)))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___3863_[1U] 
                                                   >> 0xeU)))) 
                               << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___3617_)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___3863_[1U] 
                                                                    >> 0xcU)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT___7158_ 
                                                                       >> 0xeU)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & (vlSelf->top__DOT___3863_[1U] 
                                                                          >> 7U)))) 
                                                      << 0x38U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->top__DOT___7158_ 
                                                                             >> 9U)))) 
                                                         << 0x37U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 5U)))) 
                                                            << 0x36U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)))) 
                                                               << 0x35U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 3U)))) 
                                                                  << 0x34U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)))) 
                                                                     << 0x33U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))) 
                                                                        << 0x32U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)))) 
                                                                           << 0x31U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 2U)))) 
                                                                              << 0x30U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0023_)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3537_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1933_)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2426_)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3086_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2618_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3572_)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3154_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1205_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 9U)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x1800U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___4217_) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1506_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1205_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0228_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1481_)))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_12[2U] = (((IData)(vlSelf->top__DOT___1183_) 
                       << 0xdU) | (((IData)(vlSelf->top__DOT___0496_) 
                                    << 0xcU) | ((0xe00U 
                                                 & (vlSelf->top__DOT___3863_[1U] 
                                                    >> 0xfU)) 
                                                | ((0x100U 
                                                    & (vlSelf->top__DOT___7158_ 
                                                       >> 0x12U)) 
                                                   | (((IData)(vlSelf->top__DOT___0023_) 
                                                       << 7U) 
                                                      | ((0x40U 
                                                          & (vlSelf->top__DOT___3863_[2U] 
                                                             >> 9U)) 
                                                         | ((0x20U 
                                                             & (vlSelf->top__DOT___7158_ 
                                                                >> 0x12U)) 
                                                            | ((0x10U 
                                                                & (vlSelf->top__DOT___7158_ 
                                                                   >> 0x12U)) 
                                                               | ((8U 
                                                                   & (vlSelf->top__DOT___7158_ 
                                                                      >> 0x12U)) 
                                                                  | ((4U 
                                                                      & (vlSelf->top__DOT___7158_ 
                                                                         >> 0x12U)) 
                                                                     | ((2U 
                                                                         & (vlSelf->top__DOT___7158_ 
                                                                            >> 0x12U)) 
                                                                        | (1U 
                                                                           & (vlSelf->top__DOT___7158_ 
                                                                              >> 0x12U)))))))))))));
    vlSelf->top__DOT___4505_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4505_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4505_[2U] = ((0x40000U & (vlSelf->top__DOT___4038_[0U] 
                                                 >> 1U)) 
                                    | (((IData)(vlSelf->top__DOT___0995_) 
                                        << 0x11U) | 
                                       ((0x10000U & 
                                         ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                          << 0x10U)) 
                                        | (((IData)(vlSelf->top__DOT___0118_) 
                                            << 0xfU) 
                                           | (((IData)(vlSelf->top__DOT___1695_) 
                                               << 0xeU) 
                                              | __Vtemp_12[2U])))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1223(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1223\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hc483fd20__0 = (0x3ac40000U 
                                                | ((0x40000000U 
                                                    & ((IData)(vlSelf->top__DOT___4791_) 
                                                       << 0x18U)) 
                                                   | ((0x4000000U 
                                                       & (vlSelf->top__DOT___4469_[2U] 
                                                          << 5U)) 
                                                      | ((0x1000000U 
                                                          & (vlSelf->top__DOT___4469_[2U] 
                                                             << 5U)) 
                                                         | ((0x300000U 
                                                             & (vlSelf->top__DOT___4469_[2U] 
                                                                << 5U)) 
                                                            | (((IData)(vlSelf->top__DOT___0880_) 
                                                                << 0x13U) 
                                                               | (((IData)(vlSelf->top__DOT___0183_) 
                                                                   << 0x11U) 
                                                                  | (((IData)(vlSelf->top__DOT___1615_) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSelf->top__DOT___0067_) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->top__DOT___0621_) 
                                                                            << 0xeU) 
                                                                           | (IData)(vlSelf->top__DOT____VdfgTmp_h29edf868__0)))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1226(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1226\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h851a08fc__0 = ((0x18U 
                                                 & (IData)(vlSelf->top__DOT___7109_)) 
                                                | ((4U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4136_ 
                                                                >> 0x27U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (IData)(vlSelf->top__DOT___7109_)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT___4136_ 
                                                                    >> 0x25U))))));
    vlSelf->top__DOT___0600_ = (1U & ((IData)((vlSelf->top__DOT___4136_ 
                                               >> 0x2cU)) 
                                      + (vlSelf->top__DOT___3825_[1U] 
                                         >> 0x17U)));
    vlSelf->top__DOT___1921_ = (1U & (((IData)((vlSelf->top__DOT___4136_ 
                                                >> 0x2cU)) 
                                       + (((IData)(vlSelf->top__DOT___2368_) 
                                           << 1U) | 
                                          (1U & (vlSelf->top__DOT___3825_[1U] 
                                                 >> 0x17U)))) 
                                      >> 1U));
    vlSelf->top__DOT____VdfgTmp_hb330876e__0 = ((0x3e0U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___4136_ 
                                                             >> 0x2aU)) 
                                                    << 5U)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h851a08fc__0));
    vlSelf->top__DOT___4377_ = ((0x7fff8001U & vlSelf->top__DOT___4377_) 
                                | ((0x7800U & ((IData)(vlSelf->top__DOT___7109_) 
                                               << 1U)) 
                                   | ((IData)(vlSelf->top__DOT____VdfgTmp_hb330876e__0) 
                                      << 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1227(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1227\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelf->top__DOT___3240_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0x1fffU 
                                                                     & (vlSelf->top__DOT___4506_[1U] 
                                                                        >> 0x10U)))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (0x1ffU 
                                                                        & (vlSelf->top__DOT___4076_ 
                                                                           >> 9U)))) 
                                                       << 0x27U) 
                                                      | (((QData)((IData)(
                                                                          ((0x80000000U 
                                                                            & (vlSelf->top__DOT___4763_[0U] 
                                                                               << 9U)) 
                                                                           | ((0x78000000U 
                                                                               & (vlSelf->top__DOT___4076_ 
                                                                                << 0x17U)) 
                                                                              | ((0x7c00000U 
                                                                                & ((vlSelf->top__DOT___4506_[1U] 
                                                                                << 0x19U) 
                                                                                | (0x1c00000U 
                                                                                & (vlSelf->top__DOT___4506_[0U] 
                                                                                >> 7U)))) 
                                                                                | ((0x1fff00U 
                                                                                & (vlSelf->top__DOT___4506_[0U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0795_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0507_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0560_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2257_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2614_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___4379_ 
                                                                                >> 7U))))))))))))) 
                                                          << 7U) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->top__DOT___0576_) 
                                                                             << 6U) 
                                                                            | ((0x20U 
                                                                                & vlSelf->top__DOT___4379_) 
                                                                               | (((IData)(vlSelf->top__DOT___3765_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1022_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0001_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0020_)))))))))))) 
                                                  + 
                                                  ((((QData)((IData)(
                                                                     ((0x200U 
                                                                       & (vlSelf->top__DOT___7158_ 
                                                                          >> 5U)) 
                                                                      | ((0x1e0U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             >> 2U)) 
                                                                         | ((0x10U 
                                                                             & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)) 
                                                                            | ((8U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                               | ((4U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)))))))))) 
                                                     << 0x33U) 
                                                    | ((QData)((IData)(
                                                                       ((0x80000000U 
                                                                         & (vlSelf->top__DOT___3863_[1U] 
                                                                            << 0x1eU)) 
                                                                        | ((0x40000000U 
                                                                            & (vlSelf->top__DOT___7158_ 
                                                                               << 0x1bU)) 
                                                                           | ((0x20000000U 
                                                                               & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1bU)) 
                                                                              | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___3537_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1933_) 
                                                                                << 0x18U) 
                                                                                | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2426_) 
                                                                                << 0x15U) 
                                                                                | ((0x1c0000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3086_) 
                                                                                << 0x11U) 
                                                                                | ((0x18000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2618_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3572_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3154_) 
                                                                                << 0xbU) 
                                                                                | (0x7feU 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U))))))))))))))))))))) 
                                                       << 0x13U)) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1205_) 
                                                                       << 0x12U) 
                                                                      | ((0x20000U 
                                                                          & vlSelf->top__DOT___4505_[0U]) 
                                                                         | ((0x10000U 
                                                                             & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                            | ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                               | ((0x4000U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 9U)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x1800U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___4217_) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___4505_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1506_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1205_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0228_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1481_)))))))))))))))))))))) 
                                                 >> 0x3cU))));
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x1ffU 
                                               & (vlSelf->top__DOT___4076_ 
                                                  >> 9U)))) 
                              << 0x27U) | (((QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___4763_[0U] 
                                                                 << 9U)) 
                                                             | ((0x78000000U 
                                                                 & (vlSelf->top__DOT___4076_ 
                                                                    << 0x17U)) 
                                                                | ((0x7c00000U 
                                                                    & ((vlSelf->top__DOT___4506_[1U] 
                                                                        << 0x19U) 
                                                                       | (0x1c00000U 
                                                                          & (vlSelf->top__DOT___4506_[0U] 
                                                                             >> 7U)))) 
                                                                   | ((0x1fff00U 
                                                                       & (vlSelf->top__DOT___4506_[0U] 
                                                                          >> 7U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0795_) 
                                                                          << 7U) 
                                                                         | (((IData)(vlSelf->top__DOT___0507_) 
                                                                             << 6U) 
                                                                            | (((IData)(vlSelf->top__DOT___0560_) 
                                                                                << 5U) 
                                                                               | (((IData)(vlSelf->top__DOT___2257_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2614_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___4379_ 
                                                                                >> 7U))))))))))))) 
                                            << 7U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0576_) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & vlSelf->top__DOT___4379_) 
                                                                 | (((IData)(vlSelf->top__DOT___3765_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___1022_) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->top__DOT___0102_) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->top__DOT___0001_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0020_))))))))))));
    __Vtemp_2[1U] = ((0xffff0000U & vlSelf->top__DOT___4506_[1U]) 
                     | (IData)(((((QData)((IData)((0x1ffU 
                                                   & (vlSelf->top__DOT___4076_ 
                                                      >> 9U)))) 
                                  << 0x27U) | (((QData)((IData)(
                                                                ((0x80000000U 
                                                                  & (vlSelf->top__DOT___4763_[0U] 
                                                                     << 9U)) 
                                                                 | ((0x78000000U 
                                                                     & (vlSelf->top__DOT___4076_ 
                                                                        << 0x17U)) 
                                                                    | ((0x7c00000U 
                                                                        & ((vlSelf->top__DOT___4506_[1U] 
                                                                            << 0x19U) 
                                                                           | (0x1c00000U 
                                                                              & (vlSelf->top__DOT___4506_[0U] 
                                                                                >> 7U)))) 
                                                                       | ((0x1fff00U 
                                                                           & (vlSelf->top__DOT___4506_[0U] 
                                                                              >> 7U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0795_) 
                                                                              << 7U) 
                                                                             | (((IData)(vlSelf->top__DOT___0507_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0560_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2257_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2614_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___4379_ 
                                                                                >> 7U))))))))))))) 
                                                << 7U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___0576_) 
                                                                   << 6U) 
                                                                  | ((0x20U 
                                                                      & vlSelf->top__DOT___4379_) 
                                                                     | (((IData)(vlSelf->top__DOT___3765_) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->top__DOT___1022_) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->top__DOT___0102_) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->top__DOT___0001_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0020_))))))))))) 
                                >> 0x20U)));
    __Vtemp_2[2U] = (0x1fU & vlSelf->top__DOT___4506_[2U]);
    __Vtemp_3[0U] = (((IData)((((QData)((IData)(((0x20000U 
                                                  & (vlSelf->top__DOT___7158_ 
                                                     >> 5U)) 
                                                 | ((0x10000U 
                                                     & (vlSelf->top__DOT___7158_ 
                                                        >> 5U)) 
                                                    | ((0x8000U 
                                                        & (vlSelf->top__DOT___7158_ 
                                                           >> 5U)) 
                                                       | ((0x4000U 
                                                           & (vlSelf->top__DOT___7158_ 
                                                              >> 5U)) 
                                                          | ((0x2000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 >> 5U)) 
                                                             | ((0x1000U 
                                                                 & (vlSelf->top__DOT___3863_[1U] 
                                                                    >> 2U)) 
                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                    << 0xbU) 
                                                                   | ((0x400U 
                                                                       & (vlSelf->top__DOT___3863_[1U] 
                                                                          >> 2U)) 
                                                                      | ((0x200U 
                                                                          & (vlSelf->top__DOT___7158_ 
                                                                             >> 5U)) 
                                                                         | ((0x1e0U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                            | ((0x10U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)) 
                                                                               | ((8U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                 << 0x1eU)) 
                                                             | ((0x40000000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0x1bU)) 
                                                                | ((0x20000000U 
                                                                    & (vlSelf->top__DOT___7158_ 
                                                                       << 0x1bU)) 
                                                                   | ((0x10000000U 
                                                                       & (vlSelf->top__DOT___7158_ 
                                                                          << 0x1bU)) 
                                                                      | ((0x8000000U 
                                                                          & (vlSelf->top__DOT___3863_[0U] 
                                                                             >> 2U)) 
                                                                         | (((IData)(vlSelf->top__DOT___0023_) 
                                                                             << 0x1aU) 
                                                                            | (((IData)(vlSelf->top__DOT___3537_) 
                                                                                << 0x19U) 
                                                                               | (((IData)(vlSelf->top__DOT___1933_) 
                                                                                << 0x18U) 
                                                                                | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2426_) 
                                                                                << 0x15U) 
                                                                                | ((0x1c0000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3086_) 
                                                                                << 0x11U) 
                                                                                | ((0x18000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2618_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3572_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3154_) 
                                                                                << 0xbU) 
                                                                                | (0x7feU 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U))))))))))))))))))))))) 
                      << 0x13U) | (((IData)(vlSelf->top__DOT___1205_) 
                                    << 0x12U) | ((0x20000U 
                                                  & vlSelf->top__DOT___4505_[0U]) 
                                                 | ((0x10000U 
                                                     & ((IData)(vlSelf->top__DOT___7049_) 
                                                        << 5U)) 
                                                    | ((0x8000U 
                                                        & ((IData)(vlSelf->top__DOT___7049_) 
                                                           << 5U)) 
                                                       | ((0x4000U 
                                                           & (vlSelf->top__DOT___3823_ 
                                                              >> 9U)) 
                                                          | ((0x2000U 
                                                              & ((IData)(vlSelf->top__DOT___7049_) 
                                                                 << 5U)) 
                                                             | ((0x1800U 
                                                                 & (vlSelf->top__DOT___3823_ 
                                                                    >> 9U)) 
                                                                | ((0x400U 
                                                                    & ((IData)(vlSelf->top__DOT___7049_) 
                                                                       << 5U)) 
                                                                   | ((0x200U 
                                                                       & (vlSelf->top__DOT___3823_ 
                                                                          >> 9U)) 
                                                                      | ((0x100U 
                                                                          & ((IData)(vlSelf->top__DOT___7049_) 
                                                                             << 5U)) 
                                                                         | ((0x80U 
                                                                             & ((IData)(vlSelf->top__DOT___4217_) 
                                                                                << 7U)) 
                                                                            | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                               | ((0x20U 
                                                                                & vlSelf->top__DOT___4505_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1506_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1205_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0228_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1481_)))))))))))))))))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)(((0x20000U 
                                                  & (vlSelf->top__DOT___7158_ 
                                                     >> 5U)) 
                                                 | ((0x10000U 
                                                     & (vlSelf->top__DOT___7158_ 
                                                        >> 5U)) 
                                                    | ((0x8000U 
                                                        & (vlSelf->top__DOT___7158_ 
                                                           >> 5U)) 
                                                       | ((0x4000U 
                                                           & (vlSelf->top__DOT___7158_ 
                                                              >> 5U)) 
                                                          | ((0x2000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 >> 5U)) 
                                                             | ((0x1000U 
                                                                 & (vlSelf->top__DOT___3863_[1U] 
                                                                    >> 2U)) 
                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                    << 0xbU) 
                                                                   | ((0x400U 
                                                                       & (vlSelf->top__DOT___3863_[1U] 
                                                                          >> 2U)) 
                                                                      | ((0x200U 
                                                                          & (vlSelf->top__DOT___7158_ 
                                                                             >> 5U)) 
                                                                         | ((0x1e0U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                            | ((0x10U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)) 
                                                                               | ((8U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                 << 0x1eU)) 
                                                             | ((0x40000000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0x1bU)) 
                                                                | ((0x20000000U 
                                                                    & (vlSelf->top__DOT___7158_ 
                                                                       << 0x1bU)) 
                                                                   | ((0x10000000U 
                                                                       & (vlSelf->top__DOT___7158_ 
                                                                          << 0x1bU)) 
                                                                      | ((0x8000000U 
                                                                          & (vlSelf->top__DOT___3863_[0U] 
                                                                             >> 2U)) 
                                                                         | (((IData)(vlSelf->top__DOT___0023_) 
                                                                             << 0x1aU) 
                                                                            | (((IData)(vlSelf->top__DOT___3537_) 
                                                                                << 0x19U) 
                                                                               | (((IData)(vlSelf->top__DOT___1933_) 
                                                                                << 0x18U) 
                                                                                | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2426_) 
                                                                                << 0x15U) 
                                                                                | ((0x1c0000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3086_) 
                                                                                << 0x11U) 
                                                                                | ((0x18000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2618_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3572_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3154_) 
                                                                                << 0xbU) 
                                                                                | (0x7feU 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U))))))))))))))))))))))) 
                      >> 0xdU) | ((IData)(((((QData)((IData)(
                                                             ((0x20000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  >> 5U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->top__DOT___7158_ 
                                                                     >> 5U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->top__DOT___7158_ 
                                                                        >> 5U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->top__DOT___7158_ 
                                                                           >> 5U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->top__DOT___7158_ 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                             | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)) 
                                                                                | ((0x1e0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)))))))))))))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((0x80000000U 
                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                   << 0x1eU)) 
                                                               | ((0x40000000U 
                                                                   & (vlSelf->top__DOT___7158_ 
                                                                      << 0x1bU)) 
                                                                  | ((0x20000000U 
                                                                      & (vlSelf->top__DOT___7158_ 
                                                                         << 0x1bU)) 
                                                                     | ((0x10000000U 
                                                                         & (vlSelf->top__DOT___7158_ 
                                                                            << 0x1bU)) 
                                                                        | ((0x8000000U 
                                                                            & (vlSelf->top__DOT___3863_[0U] 
                                                                               >> 2U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0023_) 
                                                                               << 0x1aU) 
                                                                              | (((IData)(vlSelf->top__DOT___3537_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1933_) 
                                                                                << 0x18U) 
                                                                                | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2426_) 
                                                                                << 0x15U) 
                                                                                | ((0x1c0000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3086_) 
                                                                                << 0x11U) 
                                                                                | ((0x18000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2618_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3572_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3154_) 
                                                                                << 0xbU) 
                                                                                | (0x7feU 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)))))))))))))))))))))) 
                                           >> 0x20U)) 
                                  << 0x13U));
    __Vtemp_3[2U] = ((IData)(((((QData)((IData)(((0x20000U 
                                                  & (vlSelf->top__DOT___7158_ 
                                                     >> 5U)) 
                                                 | ((0x10000U 
                                                     & (vlSelf->top__DOT___7158_ 
                                                        >> 5U)) 
                                                    | ((0x8000U 
                                                        & (vlSelf->top__DOT___7158_ 
                                                           >> 5U)) 
                                                       | ((0x4000U 
                                                           & (vlSelf->top__DOT___7158_ 
                                                              >> 5U)) 
                                                          | ((0x2000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 >> 5U)) 
                                                             | ((0x1000U 
                                                                 & (vlSelf->top__DOT___3863_[1U] 
                                                                    >> 2U)) 
                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                    << 0xbU) 
                                                                   | ((0x400U 
                                                                       & (vlSelf->top__DOT___3863_[1U] 
                                                                          >> 2U)) 
                                                                      | ((0x200U 
                                                                          & (vlSelf->top__DOT___7158_ 
                                                                             >> 5U)) 
                                                                         | ((0x1e0U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                            | ((0x10U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)) 
                                                                               | ((8U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                 << 0x1eU)) 
                                                             | ((0x40000000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0x1bU)) 
                                                                | ((0x20000000U 
                                                                    & (vlSelf->top__DOT___7158_ 
                                                                       << 0x1bU)) 
                                                                   | ((0x10000000U 
                                                                       & (vlSelf->top__DOT___7158_ 
                                                                          << 0x1bU)) 
                                                                      | ((0x8000000U 
                                                                          & (vlSelf->top__DOT___3863_[0U] 
                                                                             >> 2U)) 
                                                                         | (((IData)(vlSelf->top__DOT___0023_) 
                                                                             << 0x1aU) 
                                                                            | (((IData)(vlSelf->top__DOT___3537_) 
                                                                                << 0x19U) 
                                                                               | (((IData)(vlSelf->top__DOT___1933_) 
                                                                                << 0x18U) 
                                                                                | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2426_) 
                                                                                << 0x15U) 
                                                                                | ((0x1c0000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3086_) 
                                                                                << 0x11U) 
                                                                                | ((0x18000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2618_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3572_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3154_) 
                                                                                << 0xbU) 
                                                                                | (0x7feU 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)))))))))))))))))))))) 
                              >> 0x20U)) >> 0xdU);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelf->top__DOT___4000_ = (((QData)((IData)((0xffU 
                                                  & ((0xf8U 
                                                      & (__Vtemp_4[2U] 
                                                         << 3U)) 
                                                     | (__Vtemp_4[1U] 
                                                        >> 0x1dU))))) 
                                 << 0x27U) | (((QData)((IData)(vlSelf->top__DOT___3240_)) 
                                               << 0x26U) 
                                              | ((0x3ffffffffeULL 
                                                  & (((((QData)((IData)(
                                                                        (0xfffU 
                                                                         & (vlSelf->top__DOT___4506_[1U] 
                                                                            >> 0x10U)))) 
                                                        << 0x30U) 
                                                       | (((QData)((IData)(
                                                                           (0x1ffU 
                                                                            & (vlSelf->top__DOT___4076_ 
                                                                               >> 9U)))) 
                                                           << 0x27U) 
                                                          | (((QData)((IData)(
                                                                              ((0x80000000U 
                                                                                & (vlSelf->top__DOT___4763_[0U] 
                                                                                << 9U)) 
                                                                               | ((0x78000000U 
                                                                                & (vlSelf->top__DOT___4076_ 
                                                                                << 0x17U)) 
                                                                                | ((0x7c00000U 
                                                                                & ((vlSelf->top__DOT___4506_[1U] 
                                                                                << 0x19U) 
                                                                                | (0x1c00000U 
                                                                                & (vlSelf->top__DOT___4506_[0U] 
                                                                                >> 7U)))) 
                                                                                | ((0x1fff00U 
                                                                                & (vlSelf->top__DOT___4506_[0U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0795_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0507_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0560_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2257_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2614_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___4379_ 
                                                                                >> 7U))))))))))))) 
                                                              << 7U) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___0576_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___4379_) 
                                                                                | (((IData)(vlSelf->top__DOT___3765_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1022_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0001_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0020_)))))))))))) 
                                                      + 
                                                      ((((QData)((IData)(
                                                                         ((0x1e0U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              >> 2U)) 
                                                                          | ((0x10U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)) 
                                                                             | ((8U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U))))))))) 
                                                         << 0x33U) 
                                                        | ((QData)((IData)(
                                                                           ((0x80000000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x1eU)) 
                                                                            | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1bU)) 
                                                                               | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1bU)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___3537_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1933_) 
                                                                                << 0x18U) 
                                                                                | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2426_) 
                                                                                << 0x15U) 
                                                                                | ((0x1c0000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3086_) 
                                                                                << 0x11U) 
                                                                                | ((0x18000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2618_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3572_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3154_) 
                                                                                << 0xbU) 
                                                                                | (0x7feU 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U))))))))))))))))))))) 
                                                           << 0x13U)) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->top__DOT___1205_) 
                                                                           << 0x12U) 
                                                                          | ((0x20000U 
                                                                              & vlSelf->top__DOT___4505_[0U]) 
                                                                             | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 9U)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x1800U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___4217_) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7049_) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___4505_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1506_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1205_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0228_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1481_)))))))))))))))))))))) 
                                                     >> 0x16U)) 
                                                 | (QData)((IData)(vlSelf->top__DOT___0023_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1230(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1230\n"); );
    // Body
    vlSelf->__VdfgTmp_h1bac5395__0[0U] = (IData)(vlSelf->top__DOT____VdfgTmp_hb8d3da47__0);
    vlSelf->__VdfgTmp_h1bac5395__0[1U] = ((vlSelf->top__DOT____VdfgTmp_hc483fd20__0 
                                           << 4U) | (IData)(
                                                            (vlSelf->top__DOT____VdfgTmp_hb8d3da47__0 
                                                             >> 0x20U)));
    vlSelf->__VdfgTmp_h1bac5395__0[2U] = (0xfU & (8U 
                                                  | (vlSelf->top__DOT____VdfgTmp_hc483fd20__0 
                                                     >> 0x1cU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1231(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1231\n"); );
    // Body
    vlSelf->top__DOT___3076_ = (1U & ((((0x3eU & ((IData)(
                                                          (vlSelf->top__DOT___4000_ 
                                                           >> 1U)) 
                                                  << 1U)) 
                                        | (IData)(vlSelf->top__DOT___0023_)) 
                                       + (((IData)(vlSelf->top__DOT___0398_) 
                                           << 5U) | 
                                          (((IData)(vlSelf->top__DOT___0070_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT___1861_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0038_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___3565_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___1636_))))))) 
                                      >> 5U));
    vlSelf->top__DOT___3729_ = (1U & ((((0x7ffffeU 
                                         & ((IData)(
                                                    (vlSelf->top__DOT___4000_ 
                                                     >> 1U)) 
                                            << 1U)) 
                                        | (IData)(vlSelf->top__DOT___0023_)) 
                                       + (((0x400000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___7217_ 
                                                        >> 0x10U)) 
                                               << 0x16U)) 
                                           | ((0x300000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3999_ 
                                                           >> 0x14U)) 
                                                  << 0x14U)) 
                                              | ((0x80000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___7217_ 
                                                              >> 0xdU)) 
                                                     << 0x13U)) 
                                                 | ((0x7fe00U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3999_ 
                                                                 >> 9U)) 
                                                        << 9U)) 
                                                    | (0x100U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___7217_ 
                                                                   >> 2U)) 
                                                          << 8U)))))) 
                                          | ((0xc0U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___3999_ 
                                                          >> 6U)) 
                                                 << 6U)) 
                                             | (((IData)(vlSelf->top__DOT___0398_) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___1861_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0038_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___3565_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___1636_))))))))) 
                                      >> 0x16U));
    vlSelf->top__DOT___2772_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___4000_ 
                                                                                >> 0x27U))))) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___3240_)) 
                                                       << 0x26U) 
                                                      | ((0x3ffffffffeULL 
                                                          & vlSelf->top__DOT___4000_) 
                                                         | (QData)((IData)(vlSelf->top__DOT___0023_))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___3862_ 
                                                                                >> 0x20U))))) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___7078_ 
                                                                                >> 0x10U))))) 
                                                       << 0x28U) 
                                                      | (((QData)((IData)(
                                                                          (((IData)(vlSelf->top__DOT___0734_) 
                                                                            << 0x1fU) 
                                                                           | ((0x40000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0x20U)) 
                                                                                << 0x1eU)) 
                                                                              | ((0x3ffe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 0x19U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0x12U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0x11U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0x10U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x3000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 0x14U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0xdU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 2U)))))))))))))) 
                                                          << 8U) 
                                                         | (QData)((IData)(
                                                                           ((0xc0U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0398_) 
                                                                                << 5U) 
                                                                               | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1861_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___3565_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1636_))))))))))))) 
                                                 >> 0x2bU))));
    vlSelf->top__DOT___3998_ = (((QData)((IData)((7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (((((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4000_ 
                                                                                >> 0x27U))))) 
                                                                   << 0x27U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___3240_)) 
                                                                      << 0x26U) 
                                                                     | ((0x3ffffffffeULL 
                                                                         & vlSelf->top__DOT___4000_) 
                                                                        | (QData)((IData)(vlSelf->top__DOT___0023_))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3862_ 
                                                                                >> 0x20U))))) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7078_ 
                                                                                >> 0x10U))))) 
                                                                      << 0x28U) 
                                                                     | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0734_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0x20U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x3ffe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 0x19U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0x12U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0x11U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0x10U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x3000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 0x14U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0xdU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 2U)))))))))))))) 
                                                                         << 8U) 
                                                                        | (QData)((IData)(
                                                                                ((0xc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0398_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1861_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___3565_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1636_))))))))))))) 
                                                                >> 0x2cU)))))) 
                                 << 0x2cU) | (((QData)((IData)(vlSelf->top__DOT___2772_)) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  (0xfffffU 
                                                                   & (IData)(
                                                                             (0xfffffULL 
                                                                              & (((((QData)((IData)(
                                                                                (0xfU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4000_ 
                                                                                >> 0x27U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3240_)) 
                                                                                << 0x26U) 
                                                                                | ((0x3ffffffffeULL 
                                                                                & vlSelf->top__DOT___4000_) 
                                                                                | (QData)((IData)(vlSelf->top__DOT___0023_))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3862_ 
                                                                                >> 0x20U))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7078_ 
                                                                                >> 0x10U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0734_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0x20U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x3ffe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 0x19U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0x12U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0x11U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0x10U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x3000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 0x14U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0xdU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 2U)))))))))))))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                ((0xc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0398_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1861_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___3565_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1636_))))))))))))) 
                                                                                >> 0x17U)))))) 
                                                  << 0x17U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT___3729_) 
                                                                     << 0x16U) 
                                                                    | ((0x3fffc0U 
                                                                        & (((0x3ffffeU 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___4000_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                            | (IData)(vlSelf->top__DOT___0023_)) 
                                                                           + 
                                                                           (((0x300000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                             | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 0xdU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x7fe00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | (0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7217_ 
                                                                                >> 2U)) 
                                                                                << 8U))))) 
                                                                            | ((0xc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3999_ 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0398_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1861_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___3565_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1636_)))))))))) 
                                                                       | (((IData)(vlSelf->top__DOT___3076_) 
                                                                           << 5U) 
                                                                          | (0x1fU 
                                                                             & (((0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4000_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0023_)) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1861_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___3565_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1636_)))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1233(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1233\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___3036_)) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (((((IData)(vlSelf->top__DOT___0178_) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->top__DOT___0318_) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->top__DOT___0985_) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->top__DOT___0170_) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->top__DOT___0056_) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0201_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2848_)))))))) 
                                                                 + 
                                                                 ((0x1fcU 
                                                                   & (vlSelf->top__DOT___4337_[0U] 
                                                                      >> 0xdU)) 
                                                                  | (((IData)(vlSelf->top__DOT___0154_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___0117_)))) 
                                                                >> 8U)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___3790_)) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (((((IData)(vlSelf->top__DOT___0318_) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->top__DOT___0985_) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->top__DOT___0170_) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0201_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2848_))))))) 
                                                                       + 
                                                                       ((0x7cU 
                                                                         & (vlSelf->top__DOT___4337_[0U] 
                                                                            >> 0xdU)) 
                                                                        | (((IData)(vlSelf->top__DOT___0154_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___0117_)))) 
                                                                      >> 6U)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0353_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (((((IData)(vlSelf->top__DOT___0170_) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0201_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2848_))))) 
                                                                             + 
                                                                             ((0x1cU 
                                                                               & (vlSelf->top__DOT___4337_[0U] 
                                                                                >> 0xdU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0117_)))) 
                                                                            >> 4U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1860_)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (7U 
                                                                               & ((((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0201_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2848_))) 
                                                                                + 
                                                                                ((4U 
                                                                                & (vlSelf->top__DOT___4337_[0U] 
                                                                                >> 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0117_))))))) 
                                                              << 0x36U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___0505_)) 
                                                                 << 0x35U) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___0021_)) 
                                                                    << 0x34U) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___0273_)) 
                                                                       << 0x33U) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___1125_)) 
                                                                          << 0x32U) 
                                                                         | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3998_ 
                                                                                >> 0x2cU))))) 
                                                                             << 0x2fU) 
                                                                            | (((QData)((IData)(vlSelf->top__DOT___2772_)) 
                                                                                << 0x2eU) 
                                                                               | (((QData)((IData)(
                                                                                (0xfffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3998_ 
                                                                                >> 0x17U))))) 
                                                                                << 0x1aU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3729_) 
                                                                                << 0x19U) 
                                                                                | ((0x1fffe00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3998_ 
                                                                                >> 6U)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3076_) 
                                                                                << 8U) 
                                                                                | ((0xf8U 
                                                                                & ((IData)(vlSelf->top__DOT___3998_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0208_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2151_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0218_)))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelf->top__DOT___3036_)) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (((((IData)(vlSelf->top__DOT___0178_) 
                                                                    << 7U) 
                                                                   | (((IData)(vlSelf->top__DOT___0318_) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT___0985_) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->top__DOT___0170_) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0201_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2848_)))))))) 
                                                                  + 
                                                                  ((0x1fcU 
                                                                    & (vlSelf->top__DOT___4337_[0U] 
                                                                       >> 0xdU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0154_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0117_)))) 
                                                                 >> 8U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->top__DOT___3790_)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (((((IData)(vlSelf->top__DOT___0318_) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT___0985_) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0201_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2848_))))))) 
                                                                        + 
                                                                        ((0x7cU 
                                                                          & (vlSelf->top__DOT___4337_[0U] 
                                                                             >> 0xdU)) 
                                                                         | (((IData)(vlSelf->top__DOT___0154_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0117_)))) 
                                                                       >> 6U)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0353_)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (((((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0201_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2848_))))) 
                                                                              + 
                                                                              ((0x1cU 
                                                                                & (vlSelf->top__DOT___4337_[0U] 
                                                                                >> 0xdU)) 
                                                                               | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0117_)))) 
                                                                             >> 4U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___1860_)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (7U 
                                                                                & ((((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0201_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2848_))) 
                                                                                + 
                                                                                ((4U 
                                                                                & (vlSelf->top__DOT___4337_[0U] 
                                                                                >> 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0117_))))))) 
                                                               << 0x36U) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___0505_)) 
                                                                  << 0x35U) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___0021_)) 
                                                                     << 0x34U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___0273_)) 
                                                                        << 0x33U) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___1125_)) 
                                                                           << 0x32U) 
                                                                          | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3998_ 
                                                                                >> 0x2cU))))) 
                                                                              << 0x2fU) 
                                                                             | (((QData)((IData)(vlSelf->top__DOT___2772_)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0xfffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3998_ 
                                                                                >> 0x17U))))) 
                                                                                << 0x1aU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3729_) 
                                                                                << 0x19U) 
                                                                                | ((0x1fffe00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3998_ 
                                                                                >> 6U)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3076_) 
                                                                                << 8U) 
                                                                                | ((0xf8U 
                                                                                & ((IData)(vlSelf->top__DOT___3998_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0208_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2151_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0218_)))))))))))))))))))))))) 
                             >> 0x20U));
    vlSelf->top__DOT___4057_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4057_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4057_[2U] = ((0x7ff0U & vlSelf->top__DOT___4057_[2U]) 
                                    | (0x7fffU & (((IData)(vlSelf->top__DOT___6974_) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT___0255_))));
    vlSelf->top__DOT___1313_ = (1U & ((((8U & ((IData)(vlSelf->top__DOT___7092_) 
                                               << 3U)) 
                                        | (((IData)(vlSelf->top__DOT___0574_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___1663_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0300_)))) 
                                       + (((IData)(vlSelf->top__DOT___1860_) 
                                           << 3U) | 
                                          (7U & (vlSelf->top__DOT___4057_[1U] 
                                                 >> 0x16U)))) 
                                      >> 3U));
    vlSelf->top__DOT___3193_ = (1U & ((((0x10U & (vlSelf->top__DOT___3883_[1U] 
                                                  >> 0x19U)) 
                                        | ((8U & ((IData)(vlSelf->top__DOT___7092_) 
                                                  << 3U)) 
                                           | (((IData)(vlSelf->top__DOT___0574_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___1663_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0300_))))) 
                                       + ((0x10U & 
                                           (vlSelf->top__DOT___4057_[1U] 
                                            >> 0x16U)) 
                                          | (((IData)(vlSelf->top__DOT___1860_) 
                                              << 3U) 
                                             | (7U 
                                                & (vlSelf->top__DOT___4057_[1U] 
                                                   >> 0x16U))))) 
                                      >> 4U));
    vlSelf->top__DOT___2616_ = (1U & ((((0x80U & ((IData)(vlSelf->top__DOT___7092_) 
                                                  << 3U)) 
                                        | ((0x40U & 
                                            ((IData)(vlSelf->top__DOT___7092_) 
                                             << 3U)) 
                                           | ((0x20U 
                                               & ((IData)(vlSelf->top__DOT___7092_) 
                                                  << 3U)) 
                                              | ((0x10U 
                                                  & (vlSelf->top__DOT___3883_[1U] 
                                                     >> 0x19U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelf->top__DOT___7092_) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelf->top__DOT___0574_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___1663_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0300_)))))))) 
                                       + (((IData)(vlSelf->top__DOT___3790_) 
                                           << 7U) | 
                                          ((0x40U & 
                                            (vlSelf->top__DOT___4057_[1U] 
                                             >> 0x16U)) 
                                           | (((IData)(vlSelf->top__DOT___0353_) 
                                               << 5U) 
                                              | ((0x10U 
                                                  & (vlSelf->top__DOT___4057_[1U] 
                                                     >> 0x16U)) 
                                                 | (((IData)(vlSelf->top__DOT___1860_) 
                                                     << 3U) 
                                                    | (7U 
                                                       & (vlSelf->top__DOT___4057_[1U] 
                                                          >> 0x16U)))))))) 
                                      >> 7U));
    vlSelf->top__DOT___1859_ = (1U & (((((IData)(vlSelf->top__DOT___0574_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___1663_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0300_))) 
                                       + ((vlSelf->top__DOT___4057_[1U] 
                                           << 0xaU) 
                                          | (vlSelf->top__DOT___4057_[1U] 
                                             >> 0x16U))) 
                                      >> 2U));
    vlSelf->top__DOT___1698_ = (1U & (((((IData)(vlSelf->top__DOT___0353_) 
                                         << 0xdU) | 
                                        ((0x1000U & 
                                          (vlSelf->top__DOT___4057_[1U] 
                                           >> 0xeU)) 
                                         | (((IData)(vlSelf->top__DOT___1860_) 
                                             << 0xbU) 
                                            | ((0x700U 
                                                & (vlSelf->top__DOT___4057_[1U] 
                                                   >> 0xeU)) 
                                               | ((0x80U 
                                                   & (vlSelf->top__DOT___4198_ 
                                                      >> 8U)) 
                                                  | ((0x40U 
                                                      & ((IData)(vlSelf->top__DOT___7055_) 
                                                         << 1U)) 
                                                     | ((0x38U 
                                                         & (IData)(vlSelf->top__DOT___4073_)) 
                                                        | ((4U 
                                                            & ((IData)(vlSelf->top__DOT___7055_) 
                                                               << 1U)) 
                                                           | (2U 
                                                              & ((IData)(vlSelf->top__DOT___7055_) 
                                                                 << 1U)))))))))) 
                                       + ((0x3ff0U 
                                           & (vlSelf->top__DOT___3895_[0U] 
                                              >> 3U)) 
                                          | (((IData)(vlSelf->top__DOT___1632_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___0284_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0056_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0088_)))))) 
                                      >> 0xdU));
    vlSelf->top__DOT___4343_[2U] = ((0x3fffU & vlSelf->top__DOT___4343_[2U]) 
                                    | (0x7fffc000U 
                                       & ((IData)((0x1ffffULL 
                                                   & (((((QData)((IData)(
                                                                         (((IData)(vlSelf->top__DOT___3509_) 
                                                                           << 0x1fU) 
                                                                          | ((0x70000000U 
                                                                              & (vlSelf->top__DOT___4005_[1U] 
                                                                                << 8U)) 
                                                                             | (((IData)(vlSelf->top__DOT___2238_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7fffffeU 
                                                                                & ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 8U) 
                                                                                | (0xfeU 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x18U)))) 
                                                                                | (IData)(vlSelf->top__DOT___0920_))))))) 
                                                         << 0x13U) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->top__DOT___1692_) 
                                                                            << 0x12U) 
                                                                           | (((IData)(vlSelf->top__DOT___3036_) 
                                                                               << 0x11U) 
                                                                              | ((0x10000U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3790_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0353_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1860_) 
                                                                                << 0xbU) 
                                                                                | ((0x700U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___4198_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U)) 
                                                                                | ((0x38U 
                                                                                & (IData)(vlSelf->top__DOT___4073_)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U)))))))))))))))))) 
                                                       + 
                                                       (((QData)((IData)(
                                                                         (0x3fU 
                                                                          & (vlSelf->top__DOT___3876_ 
                                                                             >> 0xeU)))) 
                                                         << 0x2dU) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___3213_)) 
                                                            << 0x2cU) 
                                                           | (((QData)((IData)(
                                                                               (0x3fU 
                                                                                & (vlSelf->top__DOT___3876_ 
                                                                                >> 7U)))) 
                                                               << 0x26U) 
                                                              | ((0x3ffffffff0ULL 
                                                                  & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3895_[1U])) 
                                                                      << 0x1dU) 
                                                                     | (0x1ffffffffffffff0ULL 
                                                                        & ((QData)((IData)(
                                                                                vlSelf->top__DOT___3895_[0U])) 
                                                                           >> 3U)))) 
                                                                 | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0284_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0088_))))))))))) 
                                                      >> 0x22U))) 
                                          << 0xeU)));
    vlSelf->top__DOT___1858_ = ((IData)(vlSelf->top__DOT___1860_) 
                                & (IData)(vlSelf->top__DOT___1859_));
    vlSelf->top__DOT___4149_ = ((0x1ffffff80ULL & vlSelf->top__DOT___4149_) 
                                | (IData)((IData)((
                                                   ((IData)(vlSelf->top__DOT___1590_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___0428_) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT___0273_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___0826_) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT___1858_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___0568_) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & (vlSelf->top__DOT___4776_ 
                                                                        >> 6U)))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1234(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1234\n"); );
    // Body
    vlSelf->top__DOT___3569_ = (1U & ((((0xfc0U & ((IData)(
                                                           (vlSelf->top__DOT___4358_ 
                                                            >> 0xbU)) 
                                                   << 6U)) 
                                        | ((0x20U & 
                                            (vlSelf->top__DOT___7187_ 
                                             >> 3U)) 
                                           | ((0x18U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___4358_ 
                                                           >> 8U)) 
                                                  << 3U)) 
                                              | (((IData)(vlSelf->top__DOT___2288_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0191_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0719_)))))) 
                                       + (((IData)(vlSelf->top__DOT___0158_) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->top__DOT___3036_) 
                                              << 0xaU) 
                                             | ((0x200U 
                                                 & (vlSelf->top__DOT___4057_[1U] 
                                                    >> 0x15U)) 
                                                | (((IData)(vlSelf->top__DOT___3790_) 
                                                    << 8U) 
                                                   | ((0x80U 
                                                       & (vlSelf->top__DOT___4057_[1U] 
                                                          >> 0x15U)) 
                                                      | (((IData)(vlSelf->top__DOT___0353_) 
                                                          << 6U) 
                                                         | ((0x20U 
                                                             & (vlSelf->top__DOT___4057_[1U] 
                                                                >> 0x15U)) 
                                                            | (((IData)(vlSelf->top__DOT___1860_) 
                                                                << 4U) 
                                                               | ((0xeU 
                                                                   & (vlSelf->top__DOT___4057_[1U] 
                                                                      >> 0x15U)) 
                                                                  | (IData)(vlSelf->top__DOT___0107_))))))))))) 
                                      >> 0xbU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1235(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1235\n"); );
    // Init
    CData/*0:0*/ top__DOT___1794_;
    top__DOT___1794_ = 0;
    // Body
    top__DOT___1794_ = (1U & (((((IData)(vlSelf->top__DOT___2284_) 
                                 << 0x12U) | (((IData)(vlSelf->top__DOT___0547_) 
                                               << 0x11U) 
                                              | (((IData)(vlSelf->top__DOT___0866_) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->top__DOT___0170_) 
                                                     << 0xfU) 
                                                    | (((IData)(vlSelf->top__DOT___0818_) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->top__DOT___0885_) 
                                                           << 0xdU) 
                                                          | ((0x1000U 
                                                              & ((IData)(vlSelf->top__DOT___7092_) 
                                                                 << 3U)) 
                                                             | ((0x800U 
                                                                 & ((IData)(vlSelf->top__DOT___7092_) 
                                                                    << 3U)) 
                                                                | ((0x400U 
                                                                    & ((IData)(vlSelf->top__DOT___7092_) 
                                                                       << 3U)) 
                                                                   | ((0x200U 
                                                                       & (vlSelf->top__DOT___3883_[2U] 
                                                                          << 7U)) 
                                                                      | ((0x100U 
                                                                          & ((IData)(vlSelf->top__DOT___7092_) 
                                                                             << 3U)) 
                                                                         | ((0x80U 
                                                                             & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                            | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                               | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0574_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1663_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0300_))))))))))))))))))) 
                               + ((0x7c000U & (vlSelf->top__DOT___4280_[0U] 
                                               << 8U)) 
                                  | (((IData)(vlSelf->top__DOT___0987_) 
                                      << 0xdU) | (((IData)(vlSelf->top__DOT___1632_) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->top__DOT___0116_) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->top__DOT___0310_) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->top__DOT___3036_) 
                                                            << 9U) 
                                                           | ((0x100U 
                                                               & (vlSelf->top__DOT___4057_[1U] 
                                                                  >> 0x16U)) 
                                                              | (((IData)(vlSelf->top__DOT___3790_) 
                                                                  << 7U) 
                                                                 | ((0x40U 
                                                                     & (vlSelf->top__DOT___4057_[1U] 
                                                                        >> 0x16U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0353_) 
                                                                        << 5U) 
                                                                       | ((0x10U 
                                                                           & (vlSelf->top__DOT___4057_[1U] 
                                                                              >> 0x16U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1860_) 
                                                                              << 3U) 
                                                                             | (7U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0x16U))))))))))))))) 
                              >> 0x12U));
    vlSelf->top__DOT___4263_ = ((0x1c00000U & (((((IData)(vlSelf->top__DOT___0880_) 
                                                  << 0x15U) 
                                                 | (((IData)(vlSelf->top__DOT___1376_) 
                                                     << 0x14U) 
                                                    | ((0x80000U 
                                                        & (vlSelf->top__DOT___4776_ 
                                                           << 0xdU)) 
                                                       | (((IData)(vlSelf->top__DOT___2284_) 
                                                           << 0x12U) 
                                                          | (((IData)(vlSelf->top__DOT___0547_) 
                                                              << 0x11U) 
                                                             | (((IData)(vlSelf->top__DOT___0866_) 
                                                                 << 0x10U) 
                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                    << 0xfU) 
                                                                   | (((IData)(vlSelf->top__DOT___0818_) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->top__DOT___0885_) 
                                                                          << 0xdU) 
                                                                         | ((0x1000U 
                                                                             & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                            | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                               | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0574_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1663_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0300_)))))))))))))))))))))) 
                                                + (
                                                   (0x300000U 
                                                    & (vlSelf->top__DOT___4280_[0U] 
                                                       << 8U)) 
                                                   | (((IData)(vlSelf->top__DOT___1525_) 
                                                       << 0x13U) 
                                                      | ((0x7c000U 
                                                          & (vlSelf->top__DOT___4280_[0U] 
                                                             << 8U)) 
                                                         | (((IData)(vlSelf->top__DOT___0987_) 
                                                             << 0xdU) 
                                                            | (((IData)(vlSelf->top__DOT___1632_) 
                                                                << 0xcU) 
                                                               | (((IData)(vlSelf->top__DOT___0116_) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->top__DOT___0310_) 
                                                                      << 0xaU) 
                                                                     | (((IData)(vlSelf->top__DOT___3036_) 
                                                                         << 9U) 
                                                                        | ((0x100U 
                                                                            & (vlSelf->top__DOT___4057_[1U] 
                                                                               >> 0x16U)) 
                                                                           | (((IData)(vlSelf->top__DOT___3790_) 
                                                                               << 7U) 
                                                                              | ((0x40U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0353_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1860_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0x16U))))))))))))))))) 
                                               << 3U)) 
                                | (((IData)(top__DOT___1794_) 
                                    << 0x15U) | ((0x1ff800U 
                                                  & (((((IData)(vlSelf->top__DOT___0547_) 
                                                        << 0x11U) 
                                                       | (((IData)(vlSelf->top__DOT___0866_) 
                                                           << 0x10U) 
                                                          | (((IData)(vlSelf->top__DOT___0170_) 
                                                              << 0xfU) 
                                                             | (((IData)(vlSelf->top__DOT___0818_) 
                                                                 << 0xeU) 
                                                                | (((IData)(vlSelf->top__DOT___0885_) 
                                                                    << 0xdU) 
                                                                   | ((0x1000U 
                                                                       & ((IData)(vlSelf->top__DOT___7092_) 
                                                                          << 3U)) 
                                                                      | ((0x800U 
                                                                          & ((IData)(vlSelf->top__DOT___7092_) 
                                                                             << 3U)) 
                                                                         | ((0x400U 
                                                                             & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                            | ((0x200U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                << 7U)) 
                                                                               | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0574_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1663_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0300_)))))))))))))))))) 
                                                      + 
                                                      ((0x3c000U 
                                                        & (vlSelf->top__DOT___4280_[0U] 
                                                           << 8U)) 
                                                       | (((IData)(vlSelf->top__DOT___0987_) 
                                                           << 0xdU) 
                                                          | (((IData)(vlSelf->top__DOT___1632_) 
                                                              << 0xcU) 
                                                             | (((IData)(vlSelf->top__DOT___0116_) 
                                                                 << 0xbU) 
                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                    << 0xaU) 
                                                                   | (((IData)(vlSelf->top__DOT___3036_) 
                                                                       << 9U) 
                                                                      | ((0x100U 
                                                                          & (vlSelf->top__DOT___4057_[1U] 
                                                                             >> 0x16U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3790_) 
                                                                             << 7U) 
                                                                            | ((0x40U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0x16U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0353_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1860_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0x16U))))))))))))))) 
                                                     << 3U)) 
                                                 | (((IData)(vlSelf->top__DOT___2616_) 
                                                     << 0xaU) 
                                                    | ((0x300U 
                                                        & ((((0x40U 
                                                              & ((IData)(vlSelf->top__DOT___7092_) 
                                                                 << 3U)) 
                                                             | ((0x20U 
                                                                 & ((IData)(vlSelf->top__DOT___7092_) 
                                                                    << 3U)) 
                                                                | ((0x10U 
                                                                    & (vlSelf->top__DOT___3883_[1U] 
                                                                       >> 0x19U)) 
                                                                   | ((8U 
                                                                       & ((IData)(vlSelf->top__DOT___7092_) 
                                                                          << 3U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0574_) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelf->top__DOT___1663_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0300_))))))) 
                                                            + 
                                                            ((0x40U 
                                                              & (vlSelf->top__DOT___4057_[1U] 
                                                                 >> 0x16U)) 
                                                             | (((IData)(vlSelf->top__DOT___0353_) 
                                                                 << 5U) 
                                                                | ((0x10U 
                                                                    & (vlSelf->top__DOT___4057_[1U] 
                                                                       >> 0x16U)) 
                                                                   | (((IData)(vlSelf->top__DOT___1860_) 
                                                                       << 3U) 
                                                                      | (7U 
                                                                         & (vlSelf->top__DOT___4057_[1U] 
                                                                            >> 0x16U))))))) 
                                                           << 3U)) 
                                                       | (((IData)(vlSelf->top__DOT___3193_) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->top__DOT___1313_) 
                                                              << 6U) 
                                                             | (((IData)(vlSelf->top__DOT___1859_) 
                                                                 << 5U) 
                                                                | ((0x18U 
                                                                    & (((((IData)(vlSelf->top__DOT___1663_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0300_)) 
                                                                        + 
                                                                        ((vlSelf->top__DOT___4057_[1U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->top__DOT___4057_[1U] 
                                                                            >> 0x16U))) 
                                                                       << 3U)) 
                                                                   | (((IData)(vlSelf->top__DOT___0115_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0967_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___1209_))))))))))));
    vlSelf->top__DOT___1620_ = ((IData)(vlSelf->top__DOT___0899_) 
                                & (IData)(top__DOT___1794_));
    vlSelf->top__DOT___0405_ = (1U & (~ (((IData)(vlSelf->top__DOT___1252_) 
                                          & (IData)(vlSelf->top__DOT___1620_)) 
                                         | ((IData)(vlSelf->top__DOT___1212_) 
                                            & (IData)(
                                                      (vlSelf->top__DOT___7215_ 
                                                       >> 0x13U))))));
    vlSelf->top__DOT____VdfgTmp_hc99ecd26__0 = (1U 
                                                & (((IData)(vlSelf->top__DOT___0405_) 
                                                    & (IData)(vlSelf->top__DOT___1654_)) 
                                                   | (vlSelf->top__DOT___7173_[0U] 
                                                      >> 5U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1236(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1236\n"); );
    // Body
    vlSelf->top__DOT___4124_[0U] = ((1U & vlSelf->top__DOT___4124_[0U]) 
                                    | ((IData)((((QData)((IData)(vlSelf->top__DOT___1072_)) 
                                                 << 0x2eU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___0424_)) 
                                                    << 0x2dU) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0085_)) 
                                                       << 0x2cU) 
                                                      | (((QData)((IData)(
                                                                          (0x3ffffU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___4031_ 
                                                                                >> 0x17U))))) 
                                                          << 0x1aU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->top__DOT___2844_) 
                                                                             << 0x19U) 
                                                                            | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4031_ 
                                                                                >> 0x15U)) 
                                                                                << 0x18U)) 
                                                                               | (((IData)(vlSelf->top__DOT___3049_) 
                                                                                << 0x17U) 
                                                                                | ((0x7fff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4031_ 
                                                                                >> 5U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3690_) 
                                                                                << 7U) 
                                                                                | ((0x60U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4031_ 
                                                                                >> 2U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3440_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___4031_) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___4057_[2U] 
                                                                                >> 1U))))))))))))))))) 
                                       << 1U));
    vlSelf->top__DOT___4124_[1U] = ((0xffff0000U & 
                                     vlSelf->top__DOT___4124_[1U]) 
                                    | (((IData)((((QData)((IData)(vlSelf->top__DOT___1072_)) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0424_)) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0085_)) 
                                                        << 0x2cU) 
                                                       | (((QData)((IData)(
                                                                           (0x3ffffU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___4031_ 
                                                                                >> 0x17U))))) 
                                                           << 0x1aU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->top__DOT___2844_) 
                                                                              << 0x19U) 
                                                                             | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4031_ 
                                                                                >> 0x15U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3049_) 
                                                                                << 0x17U) 
                                                                                | ((0x7fff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4031_ 
                                                                                >> 5U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3690_) 
                                                                                << 7U) 
                                                                                | ((0x60U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4031_ 
                                                                                >> 2U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3440_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___4031_) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___4057_[2U] 
                                                                                >> 1U))))))))))))))))) 
                                        >> 0x1fU) | 
                                       ((IData)(((((QData)((IData)(vlSelf->top__DOT___1072_)) 
                                                   << 0x2eU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0424_)) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0085_)) 
                                                         << 0x2cU) 
                                                        | (((QData)((IData)(
                                                                            (0x3ffffU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___4031_ 
                                                                                >> 0x17U))))) 
                                                            << 0x1aU) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->top__DOT___2844_) 
                                                                               << 0x19U) 
                                                                              | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4031_ 
                                                                                >> 0x15U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3049_) 
                                                                                << 0x17U) 
                                                                                | ((0x7fff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4031_ 
                                                                                >> 5U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3690_) 
                                                                                << 7U) 
                                                                                | ((0x60U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4031_ 
                                                                                >> 2U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3440_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___4031_) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___4057_[2U] 
                                                                                >> 1U)))))))))))))))) 
                                                 >> 0x20U)) 
                                        << 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1237(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1237\n"); );
    // Body
    vlSelf->top__DOT___3251_ = (1U & (((((IData)(vlSelf->top__DOT___2288_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___0191_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0719_))) 
                                       + ((6U & (vlSelf->top__DOT___4057_[1U] 
                                                 >> 0x15U)) 
                                          | (IData)(vlSelf->top__DOT___0107_))) 
                                      >> 2U));
    vlSelf->top__DOT___4366_ = ((0xfffffffc007ULL & vlSelf->top__DOT___4366_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___3251_) 
                                                     << 0xaU) 
                                                    | ((0x200U 
                                                        & (IData)(vlSelf->top__DOT___4022_)) 
                                                       | (((IData)(vlSelf->top__DOT___0874_) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->top__DOT___2125_) 
                                                              << 7U) 
                                                             | (((IData)(vlSelf->top__DOT___2116_) 
                                                                 << 6U) 
                                                                | ((0x38U 
                                                                    & (IData)(vlSelf->top__DOT___4022_)) 
                                                                   | (((IData)(vlSelf->top__DOT___2097_) 
                                                                       << 2U) 
                                                                      | (3U 
                                                                         & (IData)(vlSelf->top__DOT___4022_))))))))))) 
                                   << 3U));
    vlSelf->top__DOT___4264_[0U] = ((0xfffffffbU & 
                                     vlSelf->top__DOT___4264_[0U]) 
                                    | ((IData)(vlSelf->top__DOT___3251_) 
                                       << 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1238(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1238\n"); );
    // Body
    vlSelf->top__DOT___0350_ = (1U & (~ (((IData)(vlSelf->top__DOT___2618_) 
                                          & (IData)(vlSelf->top__DOT___0931_)) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT___7165_ 
                                                     >> 1U)) 
                                            & (IData)(vlSelf->top__DOT___2616_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1239(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1239\n"); );
    // Init
    QData/*33:0*/ top__DOT____VdfgTmp_h22c57c0a__0;
    top__DOT____VdfgTmp_h22c57c0a__0 = 0;
    // Body
    vlSelf->top__DOT___4464_ = ((0x1fffcU & (vlSelf->top__DOT___4343_[2U] 
                                             >> 0xcU)) 
                                | (3U & (IData)((3ULL 
                                                 & (((((QData)((IData)(
                                                                       ((0x7ffeU 
                                                                         & ((vlSelf->top__DOT___4005_[1U] 
                                                                             << 8U) 
                                                                            | (0xfeU 
                                                                               & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x18U)))) 
                                                                        | (IData)(vlSelf->top__DOT___0920_)))) 
                                                       << 0x13U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->top__DOT___1692_) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->top__DOT___3036_) 
                                                                             << 0x11U) 
                                                                            | ((0x10000U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                               | (((IData)(vlSelf->top__DOT___3790_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0353_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1860_) 
                                                                                << 0xbU) 
                                                                                | ((0x700U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___4198_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U)) 
                                                                                | ((0x38U 
                                                                                & (IData)(vlSelf->top__DOT___4073_)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U)))))))))))))))))) 
                                                     + 
                                                     (((QData)((IData)(
                                                                       (0x3fffffffU 
                                                                        & ((vlSelf->top__DOT___3895_[1U] 
                                                                            << 0x19U) 
                                                                           | (vlSelf->top__DOT___3895_[0U] 
                                                                              >> 7U))))) 
                                                       << 4U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->top__DOT___1632_) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->top__DOT___0284_) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT___0088_)))))))) 
                                                    >> 0x20U)))));
    vlSelf->top__DOT___4539_ = (((QData)((IData)((7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (((((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x18U)))) 
                                                                   << 0x33U) 
                                                                  | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3509_) 
                                                                                << 0x1fU) 
                                                                                | ((0x70000000U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2238_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7fffffeU 
                                                                                & ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 8U) 
                                                                                | (0xfeU 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x18U)))) 
                                                                                | (IData)(vlSelf->top__DOT___0920_))))))) 
                                                                      << 0x13U) 
                                                                     | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___3036_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3790_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0353_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1860_) 
                                                                                << 0xbU) 
                                                                                | ((0x700U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___4198_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U)) 
                                                                                | ((0x38U 
                                                                                & (IData)(vlSelf->top__DOT___4073_)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U))))))))))))))))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3895_[1U] 
                                                                                >> 0x17U)))) 
                                                                   << 0x34U) 
                                                                  | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & (vlSelf->top__DOT___3876_ 
                                                                                >> 0xeU)))) 
                                                                      << 0x2dU) 
                                                                     | (((QData)((IData)(vlSelf->top__DOT___3213_)) 
                                                                         << 0x2cU) 
                                                                        | (((QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->top__DOT___3876_ 
                                                                                >> 7U)))) 
                                                                            << 0x26U) 
                                                                           | ((0x3ffffffff0ULL 
                                                                               & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3895_[1U])) 
                                                                                << 0x1dU) 
                                                                                | (0x1ffffffffffffff0ULL 
                                                                                & ((QData)((IData)(
                                                                                vlSelf->top__DOT___3895_[0U])) 
                                                                                >> 3U)))) 
                                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0284_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0088_)))))))))))) 
                                                                >> 0x33U)))))) 
                                 << 0x33U) | (((QData)((IData)(
                                                               (0x1ffffU 
                                                                & (vlSelf->top__DOT___4343_[2U] 
                                                                   >> 0xeU)))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (3U 
                                                                   & vlSelf->top__DOT___4464_))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0xffffc000U 
                                                                     & ((((0xfff00000U 
                                                                           & ((vlSelf->top__DOT___4005_[1U] 
                                                                               << 0x1bU) 
                                                                              | (0x7f00000U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 5U)))) 
                                                                          | ((IData)(vlSelf->top__DOT___0920_) 
                                                                             << 0x13U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1692_) 
                                                                             << 0x12U) 
                                                                            | (((IData)(vlSelf->top__DOT___3036_) 
                                                                                << 0x11U) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3790_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0353_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1860_) 
                                                                                << 0xbU) 
                                                                                | ((0x700U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___4198_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U)) 
                                                                                | ((0x38U 
                                                                                & (IData)(vlSelf->top__DOT___4073_)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U)))))))))))))))) 
                                                                        + 
                                                                        ((0xfffffff0U 
                                                                          & ((vlSelf->top__DOT___3895_[1U] 
                                                                              << 0x1dU) 
                                                                             | (0x1ffffff0U 
                                                                                & (vlSelf->top__DOT___3895_[0U] 
                                                                                >> 3U)))) 
                                                                         | (((IData)(vlSelf->top__DOT___1632_) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->top__DOT___0284_) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0088_))))))) 
                                                                    | (((IData)(vlSelf->top__DOT___1698_) 
                                                                        << 0xdU) 
                                                                       | (0x1fffU 
                                                                          & (((0x1000U 
                                                                               & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                              | (((IData)(vlSelf->top__DOT___1860_) 
                                                                                << 0xbU) 
                                                                                | ((0x700U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___4198_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U)) 
                                                                                | ((0x38U 
                                                                                & (IData)(vlSelf->top__DOT___4073_)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 1U))))))))) 
                                                                             + 
                                                                             ((0x1ff0U 
                                                                               & (vlSelf->top__DOT___3895_[0U] 
                                                                                >> 3U)) 
                                                                              | (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0284_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0088_))))))))))))));
    top__DOT____VdfgTmp_h22c57c0a__0 = (((QData)((IData)(
                                                         (0x3ffffU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT___4539_ 
                                                                     >> 0xeU))))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelf->top__DOT___1698_) 
                                                            << 0xfU) 
                                                           | ((0x7fe0U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___4539_ 
                                                                           >> 3U)) 
                                                                  << 5U)) 
                                                              | (((IData)(vlSelf->top__DOT___0223_) 
                                                                  << 4U) 
                                                                 | ((8U 
                                                                     & ((IData)(vlSelf->top__DOT___6976_) 
                                                                        << 1U)) 
                                                                    | (IData)(vlSelf->top__DOT____VdfgTmp_h4be04b7c__0))))))));
    vlSelf->top__DOT____VdfgTmp_h8ea536cc__0 = (((QData)((IData)(
                                                                 (3U 
                                                                  & vlSelf->top__DOT___4464_))) 
                                                 << 0x22U) 
                                                | top__DOT____VdfgTmp_h22c57c0a__0);
    vlSelf->top__DOT____VdfgTmp_h67537125__0 = (0x7ffffffffULL 
                                                & ((((QData)((IData)(
                                                                     (0x7fffffffU 
                                                                      & ((vlSelf->top__DOT___3842_[1U] 
                                                                          << 0x1aU) 
                                                                         | (vlSelf->top__DOT___3842_[0U] 
                                                                            >> 6U))))) 
                                                     << 4U) 
                                                    | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h8d260a29__0))) 
                                                   + 
                                                   (((QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT___4464_))) 
                                                     << 0x22U) 
                                                    | top__DOT____VdfgTmp_h22c57c0a__0)));
    vlSelf->top__DOT___2440_ = (1U & (IData)((1ULL 
                                              & ((((0x7ffffffff0ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT___3842_[1U])) 
                                                        << 0x1eU) 
                                                       | (0x3ffffffffffffff0ULL 
                                                          & ((QData)((IData)(
                                                                             vlSelf->top__DOT___3842_[0U])) 
                                                             >> 2U)))) 
                                                   | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h8d260a29__0))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->top__DOT___4343_[2U] 
                                                                        >> 0xeU)))) 
                                                    << 0x24U) 
                                                   | vlSelf->top__DOT____VdfgTmp_h8ea536cc__0)) 
                                                 >> 0x26U))));
    vlSelf->top__DOT___3845_ = ((0x7fffcU & ((IData)(
                                                     (vlSelf->top__DOT____VdfgTmp_h67537125__0 
                                                      >> 3U)) 
                                             << 2U)) 
                                | ((2U & (vlSelf->top__DOT___4749_[2U] 
                                          >> 0x15U)) 
                                   | (IData)(vlSelf->top__DOT___2288_)));
    vlSelf->top__DOT___3078_ = (1U & (~ (((vlSelf->top__DOT___7025_ 
                                           >> 0x13U) 
                                          & (IData)(
                                                    (vlSelf->top__DOT____VdfgTmp_h67537125__0 
                                                     >> 0x15U))) 
                                         | ((IData)(vlSelf->top__DOT___1121_) 
                                            & (IData)(vlSelf->top__DOT___1057_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1242(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1242\n"); );
    // Body
    vlSelf->top__DOT___0847_ = (1U & (~ (((vlSelf->top__DOT___7042_ 
                                           >> 4U) & 
                                          ((vlSelf->top__DOT___6998_[0U] 
                                            >> 5U) 
                                           & (vlSelf->top__DOT___7027_ 
                                              >> 3U))) 
                                         | (IData)(vlSelf->top__DOT___0405_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1243(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1243\n"); );
    // Body
    vlSelf->top__DOT___4139_ = ((0x3ffc00fU & vlSelf->top__DOT___4139_) 
                                | (0x20U | ((0x3f00U 
                                             & (vlSelf->top__DOT___4124_[2U] 
                                                << 5U)) 
                                            | ((0xc0U 
                                                & ((IData)(vlSelf->top__DOT___4748_) 
                                                   << 5U)) 
                                               | (0x10U 
                                                  & (vlSelf->top__DOT___4124_[1U] 
                                                     >> 0x1bU))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1244(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1244\n"); );
    // Body
    vlSelf->top__DOT___3959_ = (((IData)(vlSelf->top__DOT___2067_) 
                                 << 0x1bU) | (((IData)(vlSelf->top__DOT___1909_) 
                                               << 0x1aU) 
                                              | ((0x2000000U 
                                                  & ((IData)(vlSelf->top__DOT___7161_) 
                                                     << 0x11U)) 
                                                 | (((IData)(vlSelf->top__DOT___1149_) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->top__DOT___0275_) 
                                                        << 0x17U) 
                                                       | ((0x700000U 
                                                           & (((IData)(vlSelf->top__DOT___2158_) 
                                                               << 0x15U) 
                                                              | (0xfff00000U 
                                                                 & (((IData)(vlSelf->top__DOT___3569_) 
                                                                     << 0x14U) 
                                                                    | (0xfff00000U 
                                                                       & (((IData)(vlSelf->top__DOT___3251_) 
                                                                           << 0x13U) 
                                                                          | (((IData)(vlSelf->top__DOT___2218_) 
                                                                              << 0x12U) 
                                                                             | (((IData)(vlSelf->top__DOT___2951_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___2742_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1181_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0604_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1876_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1521_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___3264_) 
                                                                                << 0xbU) 
                                                                                | ((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 0xaU))))))))))))))) 
                                                          | ((0xff000U 
                                                              & ((((0x7c0U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___4358_ 
                                                                                >> 0xbU)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & (vlSelf->top__DOT___7187_ 
                                                                          >> 3U)) 
                                                                      | ((0x18U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___4358_ 
                                                                                >> 8U)) 
                                                                             << 3U)) 
                                                                         | (((IData)(vlSelf->top__DOT___2288_) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->top__DOT___0191_) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT___0719_)))))) 
                                                                  + 
                                                                  (((IData)(vlSelf->top__DOT___3036_) 
                                                                    << 0xaU) 
                                                                   | ((0x200U 
                                                                       & (vlSelf->top__DOT___4057_[1U] 
                                                                          >> 0x15U)) 
                                                                      | (((IData)(vlSelf->top__DOT___3790_) 
                                                                          << 8U) 
                                                                         | ((0x80U 
                                                                             & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0x15U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0353_) 
                                                                                << 6U) 
                                                                               | ((0x20U 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1860_) 
                                                                                << 4U) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___4057_[1U] 
                                                                                >> 0x15U)) 
                                                                                | (IData)(vlSelf->top__DOT___0107_)))))))))) 
                                                                 << 9U)) 
                                                             | ((0x800U 
                                                                 & ((IData)(vlSelf->top__DOT___3251_) 
                                                                    << 0xbU)) 
                                                                | ((0x400U 
                                                                    & (((((IData)(vlSelf->top__DOT___0191_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0719_)) 
                                                                        + 
                                                                        ((2U 
                                                                          & (vlSelf->top__DOT___4057_[1U] 
                                                                             >> 0x15U)) 
                                                                         | (IData)(vlSelf->top__DOT___0107_))) 
                                                                       << 9U)) 
                                                                   | (0x3ffU 
                                                                      & (((IData)(vlSelf->top__DOT___3251_) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlSelf->top__DOT___2218_) 
                                                                             << 9U) 
                                                                            | (((IData)(vlSelf->top__DOT___2951_) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->top__DOT___2742_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1181_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0604_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1876_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1521_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___3264_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 1U))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1245(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1245\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hf574e1bb__0 = (3U 
                                                & (((IData)(vlSelf->top__DOT____VdfgTmp_h46a88247__0) 
                                                    + 
                                                    ((0xc0U 
                                                      & (vlSelf->top__DOT___4264_[1U] 
                                                         >> 8U)) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_h45bf2edf__0))) 
                                                   >> 6U));
    vlSelf->top__DOT____VdfgTmp_h6f522ae7__0 = (1U 
                                                & ((((0x200U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___3861_ 
                                                                  >> 0x25U)) 
                                                         << 9U)) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_hfda4bd4a__0)) 
                                                    + 
                                                    ((0x3c0U 
                                                      & (vlSelf->top__DOT___4264_[1U] 
                                                         >> 8U)) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_h45bf2edf__0))) 
                                                   >> 9U));
    vlSelf->top__DOT____VdfgTmp_h2c3c58a5__0 = (7U 
                                                & ((((0x2000U 
                                                      & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                         << 0xcU)) 
                                                     | ((0x1000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3861_ 
                                                                     >> 0x28U)) 
                                                            << 0xcU)) 
                                                        | (((IData)(vlSelf->top__DOT___2206_) 
                                                            << 0xbU) 
                                                           | ((0x600U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___3861_ 
                                                                           >> 0x25U)) 
                                                                  << 9U)) 
                                                              | (IData)(vlSelf->top__DOT____VdfgTmp_hfda4bd4a__0))))) 
                                                    + 
                                                    ((0x3fc0U 
                                                      & (vlSelf->top__DOT___4264_[1U] 
                                                         >> 8U)) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_h45bf2edf__0))) 
                                                   >> 0xbU));
    vlSelf->top__DOT___2255_ = (1U & ((((0x600U & ((IData)(
                                                           (vlSelf->top__DOT___3861_ 
                                                            >> 0x25U)) 
                                                   << 9U)) 
                                        | (((IData)(vlSelf->top__DOT___1599_) 
                                            << 8U) 
                                           | ((0xc0U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3861_ 
                                                           >> 0x22U)) 
                                                  << 6U)) 
                                              | (((IData)(vlSelf->top__DOT___1064_) 
                                                  << 5U) 
                                                 | ((0x18U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3861_ 
                                                                 >> 0x1fU)) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelf->top__DOT___3016_) 
                                                        << 2U) 
                                                       | (3U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT___3861_ 
                                                                     >> 0x1cU))))))))) 
                                       + ((0x7c0U & 
                                           (vlSelf->top__DOT___4264_[1U] 
                                            >> 8U)) 
                                          | ((0x20U 
                                              & ((IData)(vlSelf->top__DOT___7006_) 
                                                 << 2U)) 
                                             | (((IData)(vlSelf->top__DOT___3655_) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top__DOT___0883_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0489_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0029_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0552_)))))))) 
                                      >> 0xaU));
    vlSelf->top__DOT___1103_ = (1U & (((((IData)(vlSelf->top__DOT___1599_) 
                                         << 8U) | (
                                                   (0xc0U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3861_ 
                                                                >> 0x22U)) 
                                                       << 6U)) 
                                                   | (((IData)(vlSelf->top__DOT___1064_) 
                                                       << 5U) 
                                                      | ((0x18U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___3861_ 
                                                                      >> 0x1fU)) 
                                                             << 3U)) 
                                                         | (((IData)(vlSelf->top__DOT___3016_) 
                                                             << 2U) 
                                                            | (3U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT___3861_ 
                                                                          >> 0x1cU)))))))) 
                                       + ((0x1c0U & 
                                           (vlSelf->top__DOT___4264_[1U] 
                                            >> 8U)) 
                                          | ((0x20U 
                                              & ((IData)(vlSelf->top__DOT___7006_) 
                                                 << 2U)) 
                                             | (((IData)(vlSelf->top__DOT___3655_) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top__DOT___0883_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0489_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0029_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0552_)))))))) 
                                      >> 8U));
    vlSelf->top__DOT___0459_ = (1U & (~ (((IData)(vlSelf->top__DOT___2255_) 
                                          & (IData)(vlSelf->top__DOT___3123_)) 
                                         | ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                            & (IData)(
                                                      (vlSelf->top__DOT___7116_ 
                                                       >> 0xaU))))));
    vlSelf->top__DOT___1102_ = ((IData)(vlSelf->top__DOT___1104_) 
                                & (~ (IData)(vlSelf->top__DOT___1103_)));
    vlSelf->top__DOT___1062_ = ((~ (IData)(vlSelf->top__DOT___1063_)) 
                                & (IData)(vlSelf->top__DOT___0459_));
    vlSelf->top__DOT___2702_ = (1U & (~ (((IData)(vlSelf->top__DOT___0973_) 
                                          & (IData)(vlSelf->top__DOT___0459_)) 
                                         | ((IData)(vlSelf->top__DOT___0206_) 
                                            & (IData)(vlSelf->top__DOT___1436_)))));
    vlSelf->top__DOT____VdfgTmp_h4cd762eb__0 = (((IData)(vlSelf->top__DOT___0459_) 
                                                 << 2U) 
                                                | ((2U 
                                                    & ((~ (IData)(vlSelf->top__DOT___1295_)) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->top__DOT___0818_)));
    vlSelf->top__DOT___4222_ = ((0x1fffffbfffULL & vlSelf->top__DOT___4222_) 
                                | ((QData)((IData)(vlSelf->top__DOT___1102_)) 
                                   << 0xeU));
    vlSelf->top__DOT____VdfgTmp_hd22074eb__0 = (((IData)(vlSelf->top__DOT___2218_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___1310_) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & ((~ (IData)(vlSelf->top__DOT___7162_)) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->top__DOT___1102_))));
    vlSelf->top__DOT____VdfgTmp_hb7962fb4__0 = (((IData)(vlSelf->top__DOT___1102_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___3408_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0023_)));
    vlSelf->top__DOT___4050_ = ((0x7fffc3U & vlSelf->top__DOT___4050_) 
                                | (((IData)(vlSelf->top__DOT___7162_) 
                                    << 3U) | ((IData)(vlSelf->top__DOT___1062_) 
                                              << 2U)));
    vlSelf->top__DOT___3211_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_h47a69e75__0) 
                                       + ((8U & ((IData)(
                                                         (vlSelf->top__DOT___3969_ 
                                                          >> 0x18U)) 
                                                 << 3U)) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h4cd762eb__0))) 
                                      >> 3U));
    vlSelf->top__DOT___1323_ = (1U & (~ (((IData)(vlSelf->top__DOT___0880_) 
                                          & (~ (IData)(vlSelf->top__DOT___1311_))) 
                                         | ((IData)(vlSelf->top__DOT___3211_) 
                                            & (IData)(vlSelf->top__DOT___2904_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1248(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1248\n"); );
    // Body
    vlSelf->top__DOT___3972_ = ((0x20000U & ((IData)(
                                                     (1ULL 
                                                      & (((((QData)((IData)(
                                                                            ((0xfffffffeU 
                                                                              & ((vlSelf->top__DOT___3842_[1U] 
                                                                                << 0x1bU) 
                                                                                | (0x7fffffeU 
                                                                                & (vlSelf->top__DOT___3842_[0U] 
                                                                                >> 5U)))) 
                                                                             | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 3U)))))) 
                                                            << 3U) 
                                                           | (QData)((IData)(
                                                                             (7U 
                                                                              & (vlSelf->top__DOT___3842_[0U] 
                                                                                >> 2U))))) 
                                                          + 
                                                          (((QData)((IData)(
                                                                            ((vlSelf->top__DOT___4464_ 
                                                                              << 0x1fU) 
                                                                             | ((0x7fffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4539_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1698_) 
                                                                                << 0xcU) 
                                                                                | ((0xffcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4539_ 
                                                                                >> 3U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___6976_) 
                                                                                >> 2U))))))))) 
                                                            << 3U) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->top__DOT___0102_) 
                                                                               << 2U) 
                                                                              | (IData)(vlSelf->top__DOT___7097_)))))) 
                                                         >> 0x22U))) 
                                             << 0x11U)) 
                                | (((IData)(vlSelf->top__DOT___0651_) 
                                    << 0x10U) | (((IData)(vlSelf->top__DOT___2392_) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->top__DOT___0165_) 
                                                     << 0xeU) 
                                                    | ((0x3ff0U 
                                                        & ((IData)(vlSelf->top__DOT___7139_) 
                                                           << 1U)) 
                                                       | ((8U 
                                                           & ((IData)(vlSelf->top__DOT___7139_) 
                                                              << 1U)) 
                                                          | ((6U 
                                                              & ((IData)(vlSelf->top__DOT___7139_) 
                                                                 << 1U)) 
                                                             | (IData)(vlSelf->top__DOT___0814_))))))));
    vlSelf->top__DOT____VdfgTmp_hf40e58f9__0 = (3U 
                                                & (((2U 
                                                     & vlSelf->top__DOT___3972_) 
                                                    | (IData)(vlSelf->top__DOT___0814_)) 
                                                   + (IData)(vlSelf->top__DOT____VdfgTmp_h361f1159__0)));
    vlSelf->top__DOT___2365_ = (1U & ((((6U & vlSelf->top__DOT___3972_) 
                                        | (IData)(vlSelf->top__DOT___0814_)) 
                                       + (((IData)(vlSelf->top__DOT___1813_) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT___1922_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0795_)))) 
                                      >> 2U));
    vlSelf->top__DOT____VdfgTmp_h7551a6c5__0 = ((8U 
                                                 & ((IData)(vlSelf->top__DOT___7139_) 
                                                    << 1U)) 
                                                | ((6U 
                                                    & vlSelf->top__DOT___3972_) 
                                                   | (IData)(vlSelf->top__DOT___0814_)));
    vlSelf->top__DOT___3997_[0U] = ((0xffff8003U & 
                                     vlSelf->top__DOT___3997_[0U]) 
                                    | (0xfffffffcU 
                                       & ((0x7fe0U 
                                           & (vlSelf->top__DOT___3972_ 
                                              << 1U)) 
                                          | ((0x10U 
                                              & ((IData)(vlSelf->top__DOT___7139_) 
                                                 << 2U)) 
                                             | (0xcU 
                                                & (vlSelf->top__DOT___3972_ 
                                                   << 1U))))));
    vlSelf->top__DOT___4541_ = (((QData)((IData)((0xfffU 
                                                  & (IData)(
                                                            (0xfffULL 
                                                             & (((((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___3842_[1U] 
                                                                                >> 0x12U)))) 
                                                                   << 0x30U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x2fU))))) 
                                                                      << 0x2fU) 
                                                                     | ((0x7ffffffffff0ULL 
                                                                         & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[1U])) 
                                                                             << 0x1eU) 
                                                                            | (0x3ffffffffffffff0ULL 
                                                                               & ((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[0U])) 
                                                                                >> 2U)))) 
                                                                        | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h8d260a29__0))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (0x7fffU 
                                                                                & (vlSelf->top__DOT___4343_[2U] 
                                                                                >> 0xeU)))) 
                                                                   << 0x24U) 
                                                                  | vlSelf->top__DOT____VdfgTmp_h8ea536cc__0)) 
                                                                >> 0x27U)))))) 
                                 << 0x27U) | (((QData)((IData)(vlSelf->top__DOT___2440_)) 
                                               << 0x26U) 
                                              | (((QData)((IData)(
                                                                  (7U 
                                                                   & (IData)(
                                                                             (7ULL 
                                                                              & ((((0x3ffffffff0ULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[1U])) 
                                                                                << 0x1eU) 
                                                                                | (0x3ffffffffffffff0ULL 
                                                                                & ((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[0U])) 
                                                                                >> 2U)))) 
                                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h8d260a29__0))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___4343_[2U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x24U) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h8ea536cc__0)) 
                                                                                >> 0x23U)))))) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     ((0x80000000U 
                                                                       & (vlSelf->top__DOT___3972_ 
                                                                          << 0xeU)) 
                                                                      | (0x7fffffffU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT____VdfgTmp_h67537125__0 
                                                                                >> 3U)))))) 
                                                     << 3U) 
                                                    | (QData)((IData)(
                                                                      (7U 
                                                                       & (((vlSelf->top__DOT___3842_[0U] 
                                                                            << 0x1eU) 
                                                                           | (vlSelf->top__DOT___3842_[0U] 
                                                                              >> 2U)) 
                                                                          + (IData)(vlSelf->top__DOT____VdfgTmp_h4be04b7c__0)))))))));
    vlSelf->top__DOT____VdfgTmp_h9860501f__0 = ((0x3ff0U 
                                                 & vlSelf->top__DOT___3972_) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h7551a6c5__0));
    vlSelf->top__DOT____VdfgTmp_h3d6dfe10__0 = (((IData)(vlSelf->top__DOT___0165_) 
                                                 << 0xeU) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h9860501f__0));
    vlSelf->top__DOT____VdfgTmp_hfd742613__0 = (((IData)(vlSelf->top__DOT___2392_) 
                                                 << 0xfU) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h3d6dfe10__0));
    vlSelf->top__DOT____VdfgTmp_hc347c151__0 = (((IData)(vlSelf->top__DOT___0651_) 
                                                 << 0x10U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_hfd742613__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1251(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1251\n"); );
    // Body
    vlSelf->top__DOT___4328_[2U] = ((0xffU & vlSelf->top__DOT___4328_[2U]) 
                                    | (0xffffff00U 
                                       & (((IData)(
                                                   (0xffffffffULL 
                                                    & ((vlSelf->top__DOT___3933_ 
                                                        + 
                                                        (((QData)((IData)(vlSelf->top__DOT___1262_)) 
                                                          << 0x26U) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___2106_)) 
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
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3677_) 
                                                                                << 0x17U) 
                                                                                | ((0x7f0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1765_) 
                                                                                << 0xfU) 
                                                                                | ((0x7000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1189_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3736_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h12a513e0__0)))))))))))))))))))))) 
                                                       >> 7U))) 
                                           << 0xbU) 
                                          | ((0x400U 
                                              & ((((0x70U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___6969_ 
                                                                >> 0xeU)) 
                                                       << 4U)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h3b86ec4f__0)) 
                                                  + 
                                                  ((0x60U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3932_ 
                                                                >> 5U)) 
                                                       << 5U)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h12a513e0__0))) 
                                                 << 4U)) 
                                             | ((0x200U 
                                                 & ((((0x30U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___6969_ 
                                                                   >> 0xeU)) 
                                                          << 4U)) 
                                                      | (IData)(vlSelf->top__DOT____VdfgTmp_h3b86ec4f__0)) 
                                                     + 
                                                     ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___3932_ 
                                                                   >> 5U)) 
                                                          << 5U)) 
                                                      | (IData)(vlSelf->top__DOT____VdfgTmp_h12a513e0__0))) 
                                                    << 4U)) 
                                                | ((IData)(vlSelf->top__DOT___0949_) 
                                                   << 8U))))));
    vlSelf->top__DOT___4328_[3U] = (0x7fU & ((0x7fU 
                                              & ((IData)(
                                                         (0xffffffffULL 
                                                          & ((vlSelf->top__DOT___3933_ 
                                                              + 
                                                              (((QData)((IData)(vlSelf->top__DOT___1262_)) 
                                                                << 0x26U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___2106_)) 
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
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3677_) 
                                                                                << 0x17U) 
                                                                                | ((0x7f0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1765_) 
                                                                                << 0xfU) 
                                                                                | ((0x7000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1189_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3736_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h12a513e0__0)))))))))))))))))))))) 
                                                             >> 7U))) 
                                                 >> 0x15U)) 
                                             | ((IData)(vlSelf->top__DOT___0949_) 
                                                >> 0x18U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1253(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1253\n"); );
    // Body
    vlSelf->top__DOT___1393_ = (1U & ((((0x78U & ((IData)(
                                                          (vlSelf->top__DOT___4758_ 
                                                           >> 0xbU)) 
                                                  << 3U)) 
                                        | (IData)(vlSelf->top__DOT____VdfgTmp_hb7962fb4__0)) 
                                       + (IData)(vlSelf->top__DOT____VdfgTmp_h05f0b2cf__0)) 
                                      >> 6U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1254(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1254\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h21adeac4__0 = (((IData)(vlSelf->top__DOT___1749_) 
                                                 << 0xbU) 
                                                | ((0x7c0U 
                                                    & ((((0x100U 
                                                          & (vlSelf->top__DOT___4038_[0U] 
                                                             >> 7U)) 
                                                         | ((0x80U 
                                                             & ((~ 
                                                                 (((IData)(vlSelf->top__DOT___1726_) 
                                                                   & (IData)(vlSelf->top__DOT___2492_)) 
                                                                  | ((IData)(vlSelf->top__DOT___0097_) 
                                                                     & (IData)(vlSelf->top__DOT___0293_)))) 
                                                                << 7U)) 
                                                            | (((IData)(vlSelf->top__DOT___0070_) 
                                                                << 5U) 
                                                               | (IData)(vlSelf->top__DOT____VdfgTmp_h47a69e75__0)))) 
                                                        + 
                                                        ((0x180U 
                                                          & ((IData)(vlSelf->top__DOT___7024_) 
                                                             >> 4U)) 
                                                         | ((0x40U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3969_ 
                                                                         >> 0x1bU)) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSelf->top__DOT___7024_) 
                                                                   >> 4U)) 
                                                               | ((0x18U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3969_ 
                                                                               >> 0x18U)) 
                                                                      << 3U)) 
                                                                  | (IData)(vlSelf->top__DOT____VdfgTmp_h4cd762eb__0)))))) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->top__DOT___3211_) 
                                                       << 5U) 
                                                      | ((0x1cU 
                                                          & (((IData)(vlSelf->top__DOT____VdfgTmp_h4aea1403__0) 
                                                              + (IData)(vlSelf->top__DOT____VdfgTmp_h4cd762eb__0)) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelf->top__DOT___0643_) 
                                                             << 1U) 
                                                            | (1U 
                                                               & ((((IData)(vlSelf->top__DOT___6966_) 
                                                                    >> 2U) 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___4754_ 
                                                                              >> 8U))) 
                                                                  ^ (IData)(vlSelf->top__DOT___0479_))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1256(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1256\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vtemp_1[0U] = (IData)((0x400000000000000ULL | 
                             (((QData)((IData)(vlSelf->top__DOT___0195_)) 
                               << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___1832_)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->top__DOT___1097_)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___2668_)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___1177_)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___1135_)) 
                                                         << 0x39U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->top__DOT___7131_) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->top__DOT___0094_) 
                                                                                ^ (IData)(vlSelf->top__DOT___0875_)))))) 
                                                            << 0x38U) 
                                                           | (((QData)((IData)(
                                                                               (7U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0x18U)))) 
                                                               << 0x35U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x1aU)))) 
                                                                  << 0x34U) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___0023_)) 
                                                                     << 0x33U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xfU)))) 
                                                                        << 0x32U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x17U)))) 
                                                                           << 0x31U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x16U)))) 
                                                                              << 0x30U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x15U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x13U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x12U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3617_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0xeU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 7U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 9U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 5U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 3U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1aU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1aU)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1aU)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 3U)) 
                                                                                | ((((IData)(vlSelf->top__DOT___0027_) 
                                                                                & (IData)(vlSelf->top__DOT___0711_)) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___3433_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___3286_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2858_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1332_) 
                                                                                << 0x14U) 
                                                                                | ((0xffff8U 
                                                                                & (vlSelf->top__DOT___7236_ 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7236_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7236_ 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2183_))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((0x400000000000000ULL 
                              | (((QData)((IData)(vlSelf->top__DOT___0195_)) 
                                  << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___1832_)) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___1097_)) 
                                                   << 0x3dU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___2668_)) 
                                                      << 0x3cU) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___1177_)) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___1135_)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7131_) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->top__DOT___0094_) 
                                                                                ^ (IData)(vlSelf->top__DOT___0875_)))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0x18U)))) 
                                                                  << 0x35U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x1aU)))) 
                                                                     << 0x34U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___0023_)) 
                                                                        << 0x33U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xfU)))) 
                                                                           << 0x32U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x17U)))) 
                                                                              << 0x31U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x16U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x15U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x13U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x12U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3617_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0xeU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 7U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 9U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 5U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 3U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1aU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1aU)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1aU)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 3U)) 
                                                                                | ((((IData)(vlSelf->top__DOT___0027_) 
                                                                                & (IData)(vlSelf->top__DOT___0711_)) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___3433_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___3286_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2858_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1332_) 
                                                                                << 0x14U) 
                                                                                | ((0xffff8U 
                                                                                & (vlSelf->top__DOT___7236_ 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7236_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7236_ 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2183_))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_4[2U] = ((0x3000U & ((((0x1ffffcU & ((vlSelf->top__DOT___4005_[1U] 
                                                  << 0xcU) 
                                                 | (0xffcU 
                                                    & (vlSelf->top__DOT___4005_[0U] 
                                                       >> 0x14U)))) 
                                   | (((IData)(vlSelf->top__DOT___1809_) 
                                       << 1U) | (IData)(vlSelf->top__DOT___0195_))) 
                                  + ((0x1c0000U & (
                                                   vlSelf->top__DOT___4264_[0U] 
                                                   >> 0xbU)) 
                                     | ((0x20000U & 
                                         (vlSelf->top__DOT___3966_ 
                                          << 1U)) | 
                                        ((0x1fffeU 
                                          & (vlSelf->top__DOT___4264_[0U] 
                                             >> 0xbU)) 
                                         | (IData)(vlSelf->top__DOT___1509_))))) 
                                 >> 7U)) | ((0xfe0U 
                                             & ((IData)(vlSelf->top__DOT___4068_) 
                                                >> 4U)) 
                                            | ((0x1eU 
                                                & ((((0xffcU 
                                                      & (vlSelf->top__DOT___4005_[0U] 
                                                         >> 0x14U)) 
                                                     | (((IData)(vlSelf->top__DOT___1809_) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top__DOT___0195_))) 
                                                    + 
                                                    ((0xffeU 
                                                      & (vlSelf->top__DOT___4264_[0U] 
                                                         >> 0xbU)) 
                                                     | (IData)(vlSelf->top__DOT___1509_))) 
                                                   >> 7U)) 
                                               | (IData)(vlSelf->top__DOT___1147_))));
    vlSelf->top__DOT___4119_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4119_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4119_[2U] = ((0x1ffc000U & vlSelf->top__DOT___3980_) 
                                    | __Vtemp_4[2U]);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1258(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1258\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h9a221c09__0 = (0x1fffffffffffULL 
                                                & ((((QData)((IData)(
                                                                     (0x7fU 
                                                                      & (vlSelf->top__DOT___3972_ 
                                                                         >> 7U)))) 
                                                     << 0x26U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0820_)) 
                                                        << 0x25U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1143_)) 
                                                           << 0x24U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___2230_)) 
                                                              << 0x23U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___1773_)) 
                                                                 << 0x22U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7141_ 
                                                                                >> 0x16U)))) 
                                                                    << 0x21U) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___0230_)) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1558_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((~ 
                                                                                (((IData)(vlSelf->top__DOT___2650_) 
                                                                                & (IData)(vlSelf->top__DOT___2554_)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT____VdfgTmp_h25c8249b__0 
                                                                                >> 4U)) 
                                                                                & (((IData)(4U) 
                                                                                + (IData)(
                                                                                (vlSelf->top__DOT___3991_ 
                                                                                >> 0xbU))) 
                                                                                >> 3U))))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x3c000000U 
                                                                                & (vlSelf->top__DOT___3885_ 
                                                                                << 2U)) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h76d6b53b__0)))))))))))) 
                                                   + 
                                                   (((QData)((IData)(
                                                                     (0xfU 
                                                                      & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[1U] 
                                                                         >> 0xbU)))) 
                                                     << 0x29U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT___3911_ 
                                                                            >> 0xeU)))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1560_)) 
                                                           << 0x25U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->top__DOT___7124_ 
                                                                                >> 0x16U)))) 
                                                              << 0x24U) 
                                                             | (((QData)((IData)(
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4509_ 
                                                                                >> 0x1eU))))) 
                                                                 << 0x1eU) 
                                                                | (QData)((IData)(
                                                                                ((0x20000000U 
                                                                                & (vlSelf->top__DOT___7124_ 
                                                                                << 0xeU)) 
                                                                                | ((0x1ffc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4509_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h9213fb00__0)))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1259(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1259\n"); );
    // Body
    vlSelf->top__DOT___3387_ = (1U & ((((0xf0U & vlSelf->top__DOT___3972_) 
                                        | ((8U & ((IData)(vlSelf->top__DOT___7139_) 
                                                  << 1U)) 
                                           | ((6U & vlSelf->top__DOT___3972_) 
                                              | (IData)(vlSelf->top__DOT___0814_)))) 
                                       + ((0xf0U & vlSelf->top__DOT___3971_) 
                                          | (((IData)(vlSelf->top__DOT___0202_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___1813_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1922_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0795_)))))) 
                                      >> 7U));
    vlSelf->top__DOT____VdfgTmp_h3be340f9__0 = (0xfU 
                                                & ((((0x70U 
                                                      & vlSelf->top__DOT___3972_) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_h7551a6c5__0)) 
                                                    + 
                                                    ((0x70U 
                                                      & vlSelf->top__DOT___3971_) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_hf5f631e6__0))) 
                                                   >> 3U));
    vlSelf->top__DOT____VdfgTmp_h45da9897__0 = (0x3fU 
                                                & (((IData)(vlSelf->top__DOT____VdfgTmp_h9860501f__0) 
                                                    + 
                                                    ((0x3800U 
                                                      & vlSelf->top__DOT___3971_) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_h8dafacf4__0))) 
                                                   >> 8U));
    vlSelf->top__DOT___3695_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_h3d6dfe10__0) 
                                       + (IData)(vlSelf->top__DOT____VdfgTmp_h066ab8f6__0)) 
                                      >> 0xeU));
    vlSelf->top__DOT___1752_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_hfd742613__0) 
                                       + (IData)(vlSelf->top__DOT____VdfgTmp_h749fa799__0)) 
                                      >> 0xfU));
    vlSelf->top__DOT____VdfgTmp_h5e1c72f4__0 = (1U 
                                                & ((((0x20000U 
                                                      & vlSelf->top__DOT___3972_) 
                                                     | vlSelf->top__DOT____VdfgTmp_hc347c151__0) 
                                                    + 
                                                    ((0x30000U 
                                                      & vlSelf->top__DOT___3971_) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_h749fa799__0))) 
                                                   >> 0x11U));
    vlSelf->top__DOT___1669_ = (1U & ((vlSelf->top__DOT____VdfgTmp_hc347c151__0 
                                       + ((0x10000U 
                                           & vlSelf->top__DOT___3971_) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h749fa799__0))) 
                                      >> 0x10U));
    vlSelf->top__DOT___3970_ = (((IData)(vlSelf->top__DOT____VdfgTmp_h5e1c72f4__0) 
                                 << 0x11U) | (((IData)(vlSelf->top__DOT___1669_) 
                                               << 0x10U) 
                                              | (((IData)(vlSelf->top__DOT___1752_) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->top__DOT___3695_) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->top__DOT____VdfgTmp_h45da9897__0) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->top__DOT___3387_) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->top__DOT____VdfgTmp_h3be340f9__0) 
                                                              << 3U) 
                                                             | (((IData)(vlSelf->top__DOT___2365_) 
                                                                 << 2U) 
                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_hf40e58f9__0)))))))));
    vlSelf->top__DOT___4293_ = ((0x7fffffffc3ffULL 
                                 & vlSelf->top__DOT___4293_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0023_) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT___1775_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___0023_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___1669_)))))) 
                                   << 0xaU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1261(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1261\n"); );
    // Body
    vlSelf->top__DOT___2488_ = (1U & ((((vlSelf->top__DOT___4048_[0U] 
                                         << 0x13U) 
                                        | (vlSelf->top__DOT___4048_[0U] 
                                           >> 0xdU)) 
                                       + ((vlSelf->top__DOT___3997_[1U] 
                                           << 0xdU) 
                                          | (vlSelf->top__DOT___3997_[1U] 
                                             >> 0x13U))) 
                                      >> 1U));
    vlSelf->top__DOT___3488_ = (1U & ((((vlSelf->top__DOT___4048_[0U] 
                                         << 0x13U) 
                                        | (vlSelf->top__DOT___4048_[0U] 
                                           >> 0xdU)) 
                                       + ((vlSelf->top__DOT___3997_[1U] 
                                           << 0xdU) 
                                          | (vlSelf->top__DOT___3997_[1U] 
                                             >> 0x13U))) 
                                      >> 6U));
    vlSelf->top__DOT___2532_ = (1U & (((((IData)(vlSelf->top__DOT___0675_) 
                                         << 0x16U) 
                                        | ((0x3f0000U 
                                            & ((vlSelf->top__DOT___4048_[1U] 
                                                << 0x13U) 
                                               | (0x70000U 
                                                  & (vlSelf->top__DOT___4048_[0U] 
                                                     >> 0xdU)))) 
                                           | ((0x8000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___7072_ 
                                                           >> 0x16U)) 
                                                  << 0xfU)) 
                                              | (0x7fffU 
                                                 & (vlSelf->top__DOT___4048_[0U] 
                                                    >> 0xdU))))) 
                                       + ((vlSelf->top__DOT___3997_[2U] 
                                           << 0xdU) 
                                          | (vlSelf->top__DOT___3997_[1U] 
                                             >> 0x13U))) 
                                      >> 0x16U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1262(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1262\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h4be2ad85__0 = (1U 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT___2070_) 
                                                     & ((IData)(vlSelf->top__DOT___1394_) 
                                                        & (IData)(vlSelf->top__DOT___1393_))) 
                                                    | (IData)(vlSelf->top__DOT___2121_))));
    vlSelf->top__DOT___4329_[2U] = ((0xfffffe7fU & 
                                     vlSelf->top__DOT___4329_[2U]) 
                                    | (0xffffff80U 
                                       & (0x80U | ((IData)(vlSelf->top__DOT____VdfgTmp_h4be2ad85__0) 
                                                   << 8U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1263(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1263\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h09591c99__0 = (((QData)((IData)(vlSelf->top__DOT___7026_)) 
                                                 << 0x15U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->top__DOT___7028_) 
                                                                    << 0xcU) 
                                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h21adeac4__0)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1264(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1264\n"); );
    // Body
    vlSelf->top__DOT___2428_ = (1U & ((1U & ((((0x200U 
                                                & ((IData)(vlSelf->top__DOT___7189_) 
                                                   << 9U)) 
                                               | (IData)(vlSelf->top__DOT____VdfgTmp_h8d7c2cfa__0)) 
                                              + ((0x3f8U 
                                                  & vlSelf->top__DOT___4119_[0U]) 
                                                 | ((4U 
                                                     & (vlSelf->top__DOT___7236_ 
                                                        << 1U)) 
                                                    | ((2U 
                                                        & vlSelf->top__DOT___4119_[0U]) 
                                                       | (IData)(vlSelf->top__DOT___2183_))))) 
                                             >> 9U)) 
                                      | (IData)(vlSelf->top__DOT___0527_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1265(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1265\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h4cce1c20__0 = (0x7fffffffffffffULL 
                                                & ((((QData)((IData)(vlSelf->top__DOT___2605_)) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___1461_)) 
                                                        << 0x35U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3854_ 
                                                                                >> 0x34U))))) 
                                                           << 0x34U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___3541_)) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3854_ 
                                                                                >> 0x2fU))))) 
                                                                 << 0x2fU) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___3042_)) 
                                                                    << 0x2eU) 
                                                                   | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3854_ 
                                                                                >> 0x2bU))))) 
                                                                       << 0x2bU) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___3107_)) 
                                                                          << 0x2aU) 
                                                                         | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3854_ 
                                                                                >> 0x27U))))) 
                                                                             << 0x27U) 
                                                                            | (((QData)((IData)(vlSelf->top__DOT___3280_)) 
                                                                                << 0x26U) 
                                                                               | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3854_ 
                                                                                >> 0x1fU))))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h8a24fc17__0))))))))))))) 
                                                   + 
                                                   (((QData)((IData)(vlSelf->top__DOT___3572_)) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT___3830_[0U] 
                                                                            >> 0x12U)))) 
                                                        << 0x35U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___3154_)) 
                                                           << 0x34U) 
                                                          | (((QData)((IData)(
                                                                              (0x7fU 
                                                                               & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 0xaU)))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                (0x7ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT____VdfgTmp_h9a221c09__0 
                                                                                >> 0x1aU))))) 
                                                                 << 0x1aU) 
                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h64ba03aa__0)))))))));
    vlSelf->top__DOT___3852_ = (((QData)((IData)((0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT____VdfgTmp_h4cce1c20__0 
                                                             >> 0x20U))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & ((((IData)(
                                                                            (vlSelf->top__DOT___3854_ 
                                                                             >> 0x1fU)) 
                                                                    << 0x1fU) 
                                                                   | vlSelf->top__DOT____VdfgTmp_h8a24fc17__0) 
                                                                  + 
                                                                  (((IData)(
                                                                            (vlSelf->top__DOT____VdfgTmp_h9a221c09__0 
                                                                             >> 0x1aU)) 
                                                                    << 0x1aU) 
                                                                   | vlSelf->top__DOT____VdfgTmp_h64ba03aa__0))) 
                                                              | ((0x7fc00000U 
                                                                  & (vlSelf->top__DOT____VdfgTmp_h8a24fc17__0 
                                                                     + 
                                                                     ((0x7c000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT____VdfgTmp_h9a221c09__0 
                                                                                >> 0x1aU)) 
                                                                          << 0x1aU)) 
                                                                      | vlSelf->top__DOT____VdfgTmp_h64ba03aa__0))) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->top__DOT____VdfgTmp_h243f4f59__0 
                                                                        + 
                                                                        ((0x300000U 
                                                                          & vlSelf->top__DOT____VdfgTmp_h8679a1ce__0) 
                                                                         | vlSelf->top__DOT____VdfgTmp_h7fca931d__0))) 
                                                                    | (0x1fffffU 
                                                                       & (vlSelf->top__DOT____VdfgTmp_h48d3674b__0 
                                                                          + 
                                                                          ((0x100000U 
                                                                            & vlSelf->top__DOT____VdfgTmp_h8679a1ce__0) 
                                                                           | vlSelf->top__DOT____VdfgTmp_h7fca931d__0)))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1266(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1266\n"); );
    // Body
    vlSelf->top__DOT___1400_ = (((IData)(vlSelf->top__DOT___0122_) 
                                 & (IData)(vlSelf->top__DOT___0834_)) 
                                & ((IData)(vlSelf->top__DOT___3387_) 
                                   | (IData)((vlSelf->top__DOT___7234_ 
                                              >> 0x1aU))));
    vlSelf->top__DOT___4366_ = ((0xffffff8ffffULL & vlSelf->top__DOT___4366_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___1691_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___1400_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0408_))))) 
                                   << 0x10U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1267(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1267\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((0xffe00000U & vlSelf->top__DOT___7170_[1U]) 
                     | (IData)(((((QData)((IData)((0xfffffU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT___4293_ 
                                                              >> 0x1bU))))) 
                                  << 0x21U) | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & ((vlSelf->top__DOT___7170_[1U] 
                                                                     << 0xfU) 
                                                                    | (vlSelf->top__DOT___7170_[0U] 
                                                                       >> 0x11U))))) 
                                                << 0x11U) 
                                               | (QData)((IData)(
                                                                 ((0x1f800U 
                                                                   & ((IData)(vlSelf->top__DOT___4398_) 
                                                                      << 1U)) 
                                                                  | ((0x600U 
                                                                      & vlSelf->top__DOT___7170_[0U]) 
                                                                     | ((0x1f0U 
                                                                         & ((IData)(vlSelf->top__DOT___4398_) 
                                                                            << 1U)) 
                                                                        | ((8U 
                                                                            & vlSelf->top__DOT___7170_[0U]) 
                                                                           | ((4U 
                                                                               & ((IData)(vlSelf->top__DOT___4398_) 
                                                                                << 1U)) 
                                                                              | (3U 
                                                                                & vlSelf->top__DOT___7170_[0U])))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___4467_[0U] = (IData)((((QData)((IData)(
                                                             (0xfffffU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT___4293_ 
                                                                         >> 0x1bU))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & ((vlSelf->top__DOT___7170_[1U] 
                                                                     << 0xfU) 
                                                                    | (vlSelf->top__DOT___7170_[0U] 
                                                                       >> 0x11U))))) 
                                                << 0x11U) 
                                               | (QData)((IData)(
                                                                 ((0x1f800U 
                                                                   & ((IData)(vlSelf->top__DOT___4398_) 
                                                                      << 1U)) 
                                                                  | ((0x600U 
                                                                      & vlSelf->top__DOT___7170_[0U]) 
                                                                     | ((0x1f0U 
                                                                         & ((IData)(vlSelf->top__DOT___4398_) 
                                                                            << 1U)) 
                                                                        | ((8U 
                                                                            & vlSelf->top__DOT___7170_[0U]) 
                                                                           | ((4U 
                                                                               & ((IData)(vlSelf->top__DOT___4398_) 
                                                                                << 1U)) 
                                                                              | (3U 
                                                                                & vlSelf->top__DOT___7170_[0U])))))))))));
    vlSelf->top__DOT___4467_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4467_[2U] = ((0xffe00000U & 
                                     vlSelf->top__DOT___4467_[2U]) 
                                    | (0x1fffffU & 
                                       ((0x100000U 
                                         & ((IData)(vlSelf->top__DOT___0777_) 
                                            << 0x14U)) 
                                        | (0xfffffU 
                                           & vlSelf->top__DOT___7170_[2U]))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1269(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1269\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_14;
    // Body
    vlSelf->top__DOT___1213_ = (1U & (~ (((IData)(vlSelf->top__DOT___2533_) 
                                          & (IData)(vlSelf->top__DOT___2532_)) 
                                         | (IData)(vlSelf->top__DOT___1118_))));
    vlSelf->out_data[7U] = ((0xfffffffeU & vlSelf->out_data[7U]) 
                            | (((~ ((IData)(vlSelf->top__DOT___2076_) 
                                    | (IData)(vlSelf->top__DOT___7062_))) 
                                ^ ((~ (((IData)(vlSelf->top__DOT___2775_) 
                                        & (((IData)(vlSelf->top__DOT____VdfgTmp_h87e68bae__0) 
                                            + ((0x40U 
                                                & (vlSelf->top__DOT___3842_[0U] 
                                                   >> 0x11U)) 
                                               | (((IData)(vlSelf->top__DOT___1990_) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->top__DOT___1084_) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->top__DOT___1132_) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->top__DOT___1460_) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->top__DOT___1804_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___2855_)))))))) 
                                           >> 6U)) 
                                       | ((IData)(vlSelf->top__DOT___1213_) 
                                          & (IData)(vlSelf->top__DOT___2774_)))) 
                                   | (IData)(vlSelf->top__DOT___0273_))) 
                               & ((IData)(vlSelf->top__DOT___1578_) 
                                  & (IData)(vlSelf->top__DOT___1319_))));
    vlSelf->top__DOT___4318_[0U] = ((0xffU & vlSelf->top__DOT___4318_[0U]) 
                                    | ((IData)((((QData)((IData)(
                                                                 (7U 
                                                                  & (vlSelf->top__DOT___3842_[1U] 
                                                                     >> 0x1aU)))) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___7071_ 
                                                                                >> 0x37U))))) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       (0x7fU 
                                                                        & (vlSelf->top__DOT___3842_[1U] 
                                                                           >> 0x12U)))) 
                                                       << 0x34U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x2fU))))) 
                                                          << 0x33U) 
                                                         | ((0x7ffffffffff00ULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[1U])) 
                                                                 << 0x22U) 
                                                                | (0xffffffffffffff00ULL 
                                                                   & ((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[0U])) 
                                                                      << 2U)))) 
                                                            | (QData)((IData)(
                                                                              ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 3U)) 
                                                                                << 7U)) 
                                                                               | ((0x70U 
                                                                                & (vlSelf->top__DOT___3842_[0U] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3244_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___3286_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1213_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0122_)))))))))))))) 
                                       << 8U));
    vlSelf->top__DOT___4318_[1U] = (((IData)((((QData)((IData)(
                                                               (7U 
                                                                & (vlSelf->top__DOT___3842_[1U] 
                                                                   >> 0x1aU)))) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___7071_ 
                                                                              >> 0x37U))))) 
                                                  << 0x3bU) 
                                                 | (((QData)((IData)(
                                                                     (0x7fU 
                                                                      & (vlSelf->top__DOT___3842_[1U] 
                                                                         >> 0x12U)))) 
                                                     << 0x34U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x2fU))))) 
                                                        << 0x33U) 
                                                       | ((0x7ffffffffff00ULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->top__DOT___3842_[1U])) 
                                                               << 0x22U) 
                                                              | (0xffffffffffffff00ULL 
                                                                 & ((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[0U])) 
                                                                    << 2U)))) 
                                                          | (QData)((IData)(
                                                                            ((0x80U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 3U)) 
                                                                                << 7U)) 
                                                                             | ((0x70U 
                                                                                & (vlSelf->top__DOT___3842_[0U] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3244_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___3286_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1213_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0122_)))))))))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             (7U 
                                                                              & (vlSelf->top__DOT___3842_[1U] 
                                                                                >> 0x1aU)))) 
                                                             << 0x3cU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x37U))))) 
                                                                << 0x3bU) 
                                                               | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & (vlSelf->top__DOT___3842_[1U] 
                                                                                >> 0x12U)))) 
                                                                   << 0x34U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x2fU))))) 
                                                                      << 0x33U) 
                                                                     | ((0x7ffffffffff00ULL 
                                                                         & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[1U])) 
                                                                             << 0x22U) 
                                                                            | (0xffffffffffffff00ULL 
                                                                               & ((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[0U])) 
                                                                                << 2U)))) 
                                                                        | (QData)((IData)(
                                                                                ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 3U)) 
                                                                                << 7U)) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___3842_[0U] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3244_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___3286_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1213_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0122_))))))))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
    vlSelf->top__DOT___4318_[2U] = ((0xffffff80U & 
                                     vlSelf->top__DOT___4318_[2U]) 
                                    | ((IData)(((((QData)((IData)(
                                                                  (7U 
                                                                   & (vlSelf->top__DOT___3842_[1U] 
                                                                      >> 0x1aU)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x37U))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x7fU 
                                                                         & (vlSelf->top__DOT___3842_[1U] 
                                                                            >> 0x12U)))) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x2fU))))) 
                                                           << 0x33U) 
                                                          | ((0x7ffffffffff00ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[1U])) 
                                                                  << 0x22U) 
                                                                 | (0xffffffffffffff00ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[0U])) 
                                                                       << 2U)))) 
                                                             | (QData)((IData)(
                                                                               ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 3U)) 
                                                                                << 7U)) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___3842_[0U] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3244_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___3286_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1213_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0122_))))))))))))) 
                                                >> 0x20U)) 
                                       >> 0x18U));
    vlSelf->top__DOT___4455_[2U] = ((0x8ffffffU & vlSelf->top__DOT___4455_[2U]) 
                                    | (0x7000000U & 
                                       (vlSelf->top__DOT___4318_[2U] 
                                        << 0x11U)));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x3fU 
                                               & (vlSelf->top__DOT___4772_[1U] 
                                                  >> 0x13U)))) 
                              << 0x35U) | (((QData)((IData)(
                                                            (3U 
                                                             & (vlSelf->top__DOT___4772_[1U] 
                                                                >> 0x11U)))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (3U 
                                                                & (vlSelf->top__DOT___4772_[1U] 
                                                                   >> 0xfU)))) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT___4772_[1U] 
                                                                      >> 0xeU)))) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT___4772_[1U] 
                                                                         >> 0xdU)))) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT___4772_[1U] 
                                                                            >> 0xcU)))) 
                                                        << 0x2cU) 
                                                       | (((QData)((IData)(
                                                                           (0x3fU 
                                                                            & (vlSelf->top__DOT___4772_[1U] 
                                                                               >> 6U)))) 
                                                           << 0x26U) 
                                                          | (((QData)((IData)(
                                                                              (0x7fU 
                                                                               & ((vlSelf->top__DOT___4318_[3U] 
                                                                                << 4U) 
                                                                                | (vlSelf->top__DOT___4318_[2U] 
                                                                                >> 0x1cU))))) 
                                                              << 0x1fU) 
                                                             | (QData)((IData)(
                                                                               ((0x40000000U 
                                                                                & vlSelf->top__DOT___4772_[0U]) 
                                                                                | ((0x20000000U 
                                                                                & vlSelf->top__DOT___4772_[0U]) 
                                                                                | ((0x1c000000U 
                                                                                & (vlSelf->top__DOT___4318_[2U] 
                                                                                << 3U)) 
                                                                                | (0x3ffffffU 
                                                                                & vlSelf->top__DOT___4772_[0U])))))))))))))));
    __Vtemp_1[1U] = ((0xe0000000U & (vlSelf->top__DOT___4772_[1U] 
                                     << 4U)) | (IData)(
                                                       ((((QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->top__DOT___4772_[1U] 
                                                                              >> 0x13U)))) 
                                                          << 0x35U) 
                                                         | (((QData)((IData)(
                                                                             (3U 
                                                                              & (vlSelf->top__DOT___4772_[1U] 
                                                                                >> 0x11U)))) 
                                                             << 0x32U) 
                                                            | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___4772_[1U] 
                                                                                >> 0xfU)))) 
                                                                << 0x2fU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___4772_[1U] 
                                                                                >> 0xeU)))) 
                                                                   << 0x2eU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___4772_[1U] 
                                                                                >> 0xdU)))) 
                                                                      << 0x2dU) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___4772_[1U] 
                                                                                >> 0xcU)))) 
                                                                         << 0x2cU) 
                                                                        | (((QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->top__DOT___4772_[1U] 
                                                                                >> 6U)))) 
                                                                            << 0x26U) 
                                                                           | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & ((vlSelf->top__DOT___4318_[3U] 
                                                                                << 4U) 
                                                                                | (vlSelf->top__DOT___4318_[2U] 
                                                                                >> 0x1cU))))) 
                                                                               << 0x1fU) 
                                                                              | (QData)((IData)(
                                                                                ((0x40000000U 
                                                                                & vlSelf->top__DOT___4772_[0U]) 
                                                                                | ((0x20000000U 
                                                                                & vlSelf->top__DOT___4772_[0U]) 
                                                                                | ((0x1c000000U 
                                                                                & (vlSelf->top__DOT___4318_[2U] 
                                                                                << 3U)) 
                                                                                | (0x3ffffffU 
                                                                                & vlSelf->top__DOT___4772_[0U])))))))))))))) 
                                                        >> 0x20U)));
    __Vtemp_14[2U] = (((IData)(vlSelf->top__DOT___1828_) 
                       << 0x17U) | (((IData)(vlSelf->top__DOT___1126_) 
                                     << 0x16U) | (((IData)(vlSelf->top__DOT___0077_) 
                                                   << 0x15U) 
                                                  | ((0x100000U 
                                                      & (vlSelf->top__DOT___4457_ 
                                                         << 0xdU)) 
                                                     | (((IData)(vlSelf->top__DOT___1277_) 
                                                         << 0x13U) 
                                                        | (((IData)(vlSelf->top__DOT___0220_) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->top__DOT___1475_) 
                                                               << 0x11U) 
                                                              | (((IData)(vlSelf->top__DOT___0690_) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->top__DOT___1177_) 
                                                                     << 0xfU) 
                                                                    | (((IData)(vlSelf->top__DOT___1167_) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->top__DOT___2175_) 
                                                                           << 0xdU) 
                                                                          | (((IData)(vlSelf->top__DOT___1007_) 
                                                                              << 0xcU) 
                                                                             | (((IData)(vlSelf->top__DOT___0930_) 
                                                                                << 0xbU) 
                                                                                | (0x7ffU 
                                                                                & ((0x1ffffff0U 
                                                                                & (vlSelf->top__DOT___4772_[2U] 
                                                                                << 4U)) 
                                                                                | (vlSelf->top__DOT___4772_[1U] 
                                                                                >> 0x1cU))))))))))))))));
    vlSelf->top__DOT___4521_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4521_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4521_[2U] = (((IData)(vlSelf->top__DOT___1580_) 
                                     << 0x1dU) | (((IData)(vlSelf->top__DOT___0757_) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->top__DOT___0094_) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->top__DOT___0552_) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->top__DOT___1066_) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->top__DOT___1251_) 
                                                               << 0x18U) 
                                                              | __Vtemp_14[2U]))))));
    vlSelf->top__DOT____VdfgTmp_hef5a98b4__0 = ((0x6000U 
                                                 & vlSelf->top__DOT___4772_[0U]) 
                                                | (0x1fffU 
                                                   & vlSelf->top__DOT___4521_[0U]));
    vlSelf->top__DOT____VdfgTmp_h39a6544d__0 = ((0x60U 
                                                 & (vlSelf->top__DOT___4521_[1U] 
                                                    >> 0xdU)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_hd561689f__0));
    vlSelf->top__DOT___2225_ = (1U & ((((0xc00U & (
                                                   vlSelf->top__DOT___4521_[1U] 
                                                   >> 5U)) 
                                        | ((0x200U 
                                            & (vlSelf->top__DOT___4772_[1U] 
                                               >> 5U)) 
                                           | ((0x100U 
                                               & (vlSelf->top__DOT___4521_[1U] 
                                                  >> 5U)) 
                                              | ((0x80U 
                                                  & (vlSelf->top__DOT___4772_[1U] 
                                                     >> 5U)) 
                                                 | ((0x78U 
                                                     & (vlSelf->top__DOT___4521_[1U] 
                                                        >> 5U)) 
                                                    | (((IData)(vlSelf->top__DOT___1509_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___1764_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0999_)))))))) 
                                       + ((0x20U & 
                                           (vlSelf->top__DOT___3859_ 
                                            >> 0x15U)) 
                                          | ((0x10U 
                                              & ((IData)(vlSelf->top__DOT___7185_) 
                                                 << 2U)) 
                                             | ((8U 
                                                 & (vlSelf->top__DOT___3859_ 
                                                    >> 0x15U)) 
                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0135_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1097_))))))) 
                                      >> 5U));
    vlSelf->top__DOT___4365_ = ((3U & vlSelf->top__DOT___4365_) 
                                | (0xffffcU & ((((0x3ff80U 
                                                  & (vlSelf->top__DOT___4248_[0U] 
                                                     << 5U)) 
                                                 | (IData)(vlSelf->top__DOT____VdfgTmp_h62e9bc7c__0)) 
                                                + (
                                                   (0x38000U 
                                                    & vlSelf->top__DOT___4521_[0U]) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_hef5a98b4__0))) 
                                               << 2U)));
    vlSelf->top__DOT____VdfgTmp_h1ba0c722__0 = ((0x3f00U 
                                                 & (vlSelf->top__DOT___4521_[1U] 
                                                    >> 0xdU)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h39a6544d__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1270(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1270\n"); );
    // Init
    CData/*0:0*/ top__DOT___2246_;
    top__DOT___2246_ = 0;
    CData/*0:0*/ top__DOT___3744_;
    top__DOT___3744_ = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_36;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___2488_)) 
                              << 0x3cU) | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSelf->top__DOT___4048_[0U] 
                                                                 >> 0xdU) 
                                                                + 
                                                                (vlSelf->top__DOT___3997_[1U] 
                                                                 >> 0x13U))))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x3ff8U 
                                                                    & ((IData)(vlSelf->top__DOT___1011_) 
                                                                       << 3U)) 
                                                                   | ((0x3ffcU 
                                                                       & ((IData)(vlSelf->top__DOT___0117_) 
                                                                          << 2U)) 
                                                                      | ((0x3ffeU 
                                                                          & ((IData)(vlSelf->top__DOT___0227_) 
                                                                             << 1U)) 
                                                                         | ((0x3fffU 
                                                                             & (IData)(vlSelf->top__DOT___2845_)) 
                                                                            | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___1822_) 
                                                                                >> 1U)) 
                                                                               | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___2831_) 
                                                                                >> 2U)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___1088_) 
                                                                                >> 3U)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___0193_) 
                                                                                >> 4U)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___2848_) 
                                                                                >> 5U)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___0527_) 
                                                                                >> 6U)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___0035_) 
                                                                                >> 0xaU)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___0485_) 
                                                                                >> 0xbU)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___0675_) 
                                                                                >> 0xcU)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___1125_) 
                                                                                >> 0xdU)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___2567_) 
                                                                                >> 0xeU)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___1921_) 
                                                                                >> 0xfU)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___0600_) 
                                                                                >> 0x10U)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___3565_) 
                                                                                >> 0x11U)) 
                                                                                | ((IData)(vlSelf->top__DOT___0876_) 
                                                                                >> 0x12U)))))))))))))))))))))) 
                                               << 0x36U) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((((0x7fe0U 
                                                                         & (vlSelf->top__DOT___3830_[1U] 
                                                                            >> 0x10U)) 
                                                                        | ((0x10U 
                                                                            & (vlSelf->top__DOT___4775_[0U] 
                                                                               >> 0x16U)) 
                                                                           | ((0xeU 
                                                                               & (vlSelf->top__DOT___3830_[1U] 
                                                                                >> 0x10U)) 
                                                                              | (IData)(vlSelf->top__DOT___1007_)))) 
                                                                       + 
                                                                       ((0x7800U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3977_ 
                                                                                >> 0x1aU)) 
                                                                            << 0xbU)) 
                                                                        | (((IData)(vlSelf->top__DOT___0930_) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->top__DOT___0820_) 
                                                                               << 9U) 
                                                                              | (((IData)(vlSelf->top__DOT___0670_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0119_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2219_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3548_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0325_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1717_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1245_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0639_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0711_))))))))))))) 
                                                                      >> 0xaU)))) 
                                                  << 0x31U) 
                                                 | (((QData)((IData)(
                                                                     (3U 
                                                                      & ((0xffe0U 
                                                                          & ((IData)(vlSelf->top__DOT___1011_) 
                                                                             << 5U)) 
                                                                         | ((0xfff0U 
                                                                             & ((IData)(vlSelf->top__DOT___0117_) 
                                                                                << 4U)) 
                                                                            | ((0xfff8U 
                                                                                & ((IData)(vlSelf->top__DOT___0227_) 
                                                                                << 3U)) 
                                                                               | ((0xfffcU 
                                                                                & ((IData)(vlSelf->top__DOT___2845_) 
                                                                                << 2U)) 
                                                                                | ((0xfffeU 
                                                                                & ((IData)(vlSelf->top__DOT___1822_) 
                                                                                << 1U)) 
                                                                                | ((0xffffU 
                                                                                & (IData)(vlSelf->top__DOT___2831_)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1088_) 
                                                                                >> 1U)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0193_) 
                                                                                >> 2U)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___2848_) 
                                                                                >> 3U)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0527_) 
                                                                                >> 4U)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0035_) 
                                                                                >> 8U)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0485_) 
                                                                                >> 9U)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0675_) 
                                                                                >> 0xaU)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1125_) 
                                                                                >> 0xbU)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___2567_) 
                                                                                >> 0xcU)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1921_) 
                                                                                >> 0xdU)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0600_) 
                                                                                >> 0xeU)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___3565_) 
                                                                                >> 0xfU)) 
                                                                                | ((IData)(vlSelf->top__DOT___0876_) 
                                                                                >> 0x10U)))))))))))))))))))))) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (((0xe0U 
                                                                              & (vlSelf->top__DOT___3830_[1U] 
                                                                                >> 0x10U)) 
                                                                             | ((0x10U 
                                                                                & (vlSelf->top__DOT___4775_[0U] 
                                                                                >> 0x16U)) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___3830_[1U] 
                                                                                >> 0x10U)) 
                                                                                | (IData)(vlSelf->top__DOT___1007_)))) 
                                                                            + 
                                                                            (((IData)(vlSelf->top__DOT___0119_) 
                                                                              << 7U) 
                                                                             | (((IData)(vlSelf->top__DOT___2219_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3548_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0325_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1717_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1245_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0639_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0711_)))))))))))) 
                                                        << 0x27U) 
                                                       | (((QData)((IData)(
                                                                           (0xfU 
                                                                            & ((0xffe00U 
                                                                                & ((IData)(vlSelf->top__DOT___1011_) 
                                                                                << 9U)) 
                                                                               | ((0xfff00U 
                                                                                & ((IData)(vlSelf->top__DOT___0117_) 
                                                                                << 8U)) 
                                                                                | ((0xfff80U 
                                                                                & ((IData)(vlSelf->top__DOT___0227_) 
                                                                                << 7U)) 
                                                                                | ((0xfffc0U 
                                                                                & ((IData)(vlSelf->top__DOT___2845_) 
                                                                                << 6U)) 
                                                                                | ((0xfffe0U 
                                                                                & ((IData)(vlSelf->top__DOT___1822_) 
                                                                                << 5U)) 
                                                                                | ((0xffff0U 
                                                                                & ((IData)(vlSelf->top__DOT___2831_) 
                                                                                << 4U)) 
                                                                                | ((0xffff8U 
                                                                                & ((IData)(vlSelf->top__DOT___1088_) 
                                                                                << 3U)) 
                                                                                | ((0xffffcU 
                                                                                & ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 2U)) 
                                                                                | ((0xffffeU 
                                                                                & ((IData)(vlSelf->top__DOT___2848_) 
                                                                                << 1U)) 
                                                                                | ((0xfffffU 
                                                                                & (IData)(vlSelf->top__DOT___0527_)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0035_) 
                                                                                >> 4U)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0485_) 
                                                                                >> 5U)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0675_) 
                                                                                >> 6U)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1125_) 
                                                                                >> 7U)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___2567_) 
                                                                                >> 8U)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1921_) 
                                                                                >> 9U)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0600_) 
                                                                                >> 0xaU)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___3565_) 
                                                                                >> 0xbU)) 
                                                                                | ((IData)(vlSelf->top__DOT___0876_) 
                                                                                >> 0xcU)))))))))))))))))))))) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 6U)))) 
                                                              << 0x22U) 
                                                             | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((0x3ff800U 
                                                                                & ((IData)(vlSelf->top__DOT___1011_) 
                                                                                << 0xbU)) 
                                                                                | ((0x3ffc00U 
                                                                                & ((IData)(vlSelf->top__DOT___0117_) 
                                                                                << 0xaU)) 
                                                                                | ((0x3ffe00U 
                                                                                & ((IData)(vlSelf->top__DOT___0227_) 
                                                                                << 9U)) 
                                                                                | ((0x3fff00U 
                                                                                & ((IData)(vlSelf->top__DOT___2845_) 
                                                                                << 8U)) 
                                                                                | ((0x3fff80U 
                                                                                & ((IData)(vlSelf->top__DOT___1822_) 
                                                                                << 7U)) 
                                                                                | ((0x3fffc0U 
                                                                                & ((IData)(vlSelf->top__DOT___2831_) 
                                                                                << 6U)) 
                                                                                | ((0x3fffe0U 
                                                                                & ((IData)(vlSelf->top__DOT___1088_) 
                                                                                << 5U)) 
                                                                                | ((0x3ffff0U 
                                                                                & ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 4U)) 
                                                                                | ((0x3ffff8U 
                                                                                & ((IData)(vlSelf->top__DOT___2848_) 
                                                                                << 3U)) 
                                                                                | ((0x3ffffcU 
                                                                                & ((IData)(vlSelf->top__DOT___0527_) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 4U)) 
                                                                                | ((1U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 4U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0035_) 
                                                                                >> 2U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0485_) 
                                                                                >> 3U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0675_) 
                                                                                >> 4U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1125_) 
                                                                                >> 5U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___2567_) 
                                                                                >> 6U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1921_) 
                                                                                >> 7U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0600_) 
                                                                                >> 8U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___3565_) 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->top__DOT___0876_) 
                                                                                >> 0xaU)))))))))))))))))))))))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                ((0xc0000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                << 0x1cU)) 
                                                                                | (((1U 
                                                                                & (((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 1U) 
                                                                                | ((((((((((((0x7ff000U 
                                                                                & ((IData)(vlSelf->top__DOT___1011_) 
                                                                                << 0xcU)) 
                                                                                | (0x7ff800U 
                                                                                & ((IData)(vlSelf->top__DOT___0117_) 
                                                                                << 0xbU))) 
                                                                                | (0x7ffc00U 
                                                                                & ((IData)(vlSelf->top__DOT___0227_) 
                                                                                << 0xaU))) 
                                                                                | (0x7ffe00U 
                                                                                & ((IData)(vlSelf->top__DOT___2845_) 
                                                                                << 9U))) 
                                                                                | (0x7fff00U 
                                                                                & ((IData)(vlSelf->top__DOT___1822_) 
                                                                                << 8U))) 
                                                                                | (0x7fff80U 
                                                                                & ((IData)(vlSelf->top__DOT___2831_) 
                                                                                << 7U))) 
                                                                                | (0x7fffc0U 
                                                                                & ((IData)(vlSelf->top__DOT___1088_) 
                                                                                << 6U))) 
                                                                                | (0x7fffe0U 
                                                                                & ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 5U))) 
                                                                                | (0x7ffff0U 
                                                                                & ((IData)(vlSelf->top__DOT___2848_) 
                                                                                << 4U))) 
                                                                                | (0x7ffff8U 
                                                                                & ((IData)(vlSelf->top__DOT___0527_) 
                                                                                << 3U))) 
                                                                                | (4U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 3U))) 
                                                                                | (2U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 3U))))) 
                                                                                << 0x1dU) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                << 0x1cU)) 
                                                                                | ((0xff80000U 
                                                                                & ((0x40000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                << 0x19U)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                << 0x19U)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0035_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0675_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1125_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2567_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___1921_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0600_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___3565_) 
                                                                                << 0x14U) 
                                                                                | ((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x13U))))))))))))) 
                                                                                | ((0x40000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___1594_)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3825_[1U] 
                                                                                >> 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2368_) 
                                                                                << 0x10U) 
                                                                                | ((0xf000U 
                                                                                & (vlSelf->top__DOT___3825_[1U] 
                                                                                >> 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3740_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3825_[1U] 
                                                                                >> 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3766_) 
                                                                                << 8U) 
                                                                                | ((0xf8U 
                                                                                & (vlSelf->top__DOT___3825_[1U] 
                                                                                >> 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0309_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2539_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1881_)))))))))))))))))))))))))));
    __Vtemp_1[1U] = ((0xe0000000U & ((((vlSelf->top__DOT___4048_[0U] 
                                        << 0x13U) | 
                                       (vlSelf->top__DOT___4048_[0U] 
                                        >> 0xdU)) + 
                                      ((vlSelf->top__DOT___3997_[1U] 
                                        << 0xdU) | 
                                       (vlSelf->top__DOT___3997_[1U] 
                                        >> 0x13U))) 
                                     << 0x1bU)) | (IData)(
                                                          ((((QData)((IData)(vlSelf->top__DOT___2488_)) 
                                                             << 0x3cU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((vlSelf->top__DOT___4048_[0U] 
                                                                                >> 0xdU) 
                                                                                + 
                                                                                (vlSelf->top__DOT___3997_[1U] 
                                                                                >> 0x13U))))) 
                                                                << 0x3bU) 
                                                               | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & ((0x3ff8U 
                                                                                & ((IData)(vlSelf->top__DOT___1011_) 
                                                                                << 3U)) 
                                                                                | ((0x3ffcU 
                                                                                & ((IData)(vlSelf->top__DOT___0117_) 
                                                                                << 2U)) 
                                                                                | ((0x3ffeU 
                                                                                & ((IData)(vlSelf->top__DOT___0227_) 
                                                                                << 1U)) 
                                                                                | ((0x3fffU 
                                                                                & (IData)(vlSelf->top__DOT___2845_)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___1822_) 
                                                                                >> 1U)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___2831_) 
                                                                                >> 2U)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___1088_) 
                                                                                >> 3U)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___0193_) 
                                                                                >> 4U)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___2848_) 
                                                                                >> 5U)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___0527_) 
                                                                                >> 6U)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___0035_) 
                                                                                >> 0xaU)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___0485_) 
                                                                                >> 0xbU)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___0675_) 
                                                                                >> 0xcU)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___1125_) 
                                                                                >> 0xdU)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___2567_) 
                                                                                >> 0xeU)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___1921_) 
                                                                                >> 0xfU)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___0600_) 
                                                                                >> 0x10U)) 
                                                                                | ((0x3fffU 
                                                                                & ((IData)(vlSelf->top__DOT___3565_) 
                                                                                >> 0x11U)) 
                                                                                | ((IData)(vlSelf->top__DOT___0876_) 
                                                                                >> 0x12U)))))))))))))))))))))) 
                                                                   << 0x36U) 
                                                                  | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & ((((0x7fe0U 
                                                                                & (vlSelf->top__DOT___3830_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4775_[0U] 
                                                                                >> 0x16U)) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___3830_[1U] 
                                                                                >> 0x10U)) 
                                                                                | (IData)(vlSelf->top__DOT___1007_)))) 
                                                                                + 
                                                                                ((0x7800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3977_ 
                                                                                >> 0x1aU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0930_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0820_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0670_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0119_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2219_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3548_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0325_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1717_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1245_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0639_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0711_))))))))))))) 
                                                                                >> 0xaU)))) 
                                                                      << 0x31U) 
                                                                     | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((0xffe0U 
                                                                                & ((IData)(vlSelf->top__DOT___1011_) 
                                                                                << 5U)) 
                                                                                | ((0xfff0U 
                                                                                & ((IData)(vlSelf->top__DOT___0117_) 
                                                                                << 4U)) 
                                                                                | ((0xfff8U 
                                                                                & ((IData)(vlSelf->top__DOT___0227_) 
                                                                                << 3U)) 
                                                                                | ((0xfffcU 
                                                                                & ((IData)(vlSelf->top__DOT___2845_) 
                                                                                << 2U)) 
                                                                                | ((0xfffeU 
                                                                                & ((IData)(vlSelf->top__DOT___1822_) 
                                                                                << 1U)) 
                                                                                | ((0xffffU 
                                                                                & (IData)(vlSelf->top__DOT___2831_)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1088_) 
                                                                                >> 1U)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0193_) 
                                                                                >> 2U)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___2848_) 
                                                                                >> 3U)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0527_) 
                                                                                >> 4U)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0035_) 
                                                                                >> 8U)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0485_) 
                                                                                >> 9U)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0675_) 
                                                                                >> 0xaU)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1125_) 
                                                                                >> 0xbU)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___2567_) 
                                                                                >> 0xcU)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1921_) 
                                                                                >> 0xdU)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0600_) 
                                                                                >> 0xeU)) 
                                                                                | ((0xffffU 
                                                                                & ((IData)(vlSelf->top__DOT___3565_) 
                                                                                >> 0xfU)) 
                                                                                | ((IData)(vlSelf->top__DOT___0876_) 
                                                                                >> 0x10U)))))))))))))))))))))) 
                                                                         << 0x2fU) 
                                                                        | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (((0xe0U 
                                                                                & (vlSelf->top__DOT___3830_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4775_[0U] 
                                                                                >> 0x16U)) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___3830_[1U] 
                                                                                >> 0x10U)) 
                                                                                | (IData)(vlSelf->top__DOT___1007_)))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0119_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2219_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3548_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0325_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1717_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1245_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0639_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0711_)))))))))))) 
                                                                            << 0x27U) 
                                                                           | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((0xffe00U 
                                                                                & ((IData)(vlSelf->top__DOT___1011_) 
                                                                                << 9U)) 
                                                                                | ((0xfff00U 
                                                                                & ((IData)(vlSelf->top__DOT___0117_) 
                                                                                << 8U)) 
                                                                                | ((0xfff80U 
                                                                                & ((IData)(vlSelf->top__DOT___0227_) 
                                                                                << 7U)) 
                                                                                | ((0xfffc0U 
                                                                                & ((IData)(vlSelf->top__DOT___2845_) 
                                                                                << 6U)) 
                                                                                | ((0xfffe0U 
                                                                                & ((IData)(vlSelf->top__DOT___1822_) 
                                                                                << 5U)) 
                                                                                | ((0xffff0U 
                                                                                & ((IData)(vlSelf->top__DOT___2831_) 
                                                                                << 4U)) 
                                                                                | ((0xffff8U 
                                                                                & ((IData)(vlSelf->top__DOT___1088_) 
                                                                                << 3U)) 
                                                                                | ((0xffffcU 
                                                                                & ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 2U)) 
                                                                                | ((0xffffeU 
                                                                                & ((IData)(vlSelf->top__DOT___2848_) 
                                                                                << 1U)) 
                                                                                | ((0xfffffU 
                                                                                & (IData)(vlSelf->top__DOT___0527_)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0035_) 
                                                                                >> 4U)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0485_) 
                                                                                >> 5U)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0675_) 
                                                                                >> 6U)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1125_) 
                                                                                >> 7U)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___2567_) 
                                                                                >> 8U)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1921_) 
                                                                                >> 9U)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0600_) 
                                                                                >> 0xaU)) 
                                                                                | ((0xfffffU 
                                                                                & ((IData)(vlSelf->top__DOT___3565_) 
                                                                                >> 0xbU)) 
                                                                                | ((IData)(vlSelf->top__DOT___0876_) 
                                                                                >> 0xcU)))))))))))))))))))))) 
                                                                               << 0x23U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 6U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((0x3ff800U 
                                                                                & ((IData)(vlSelf->top__DOT___1011_) 
                                                                                << 0xbU)) 
                                                                                | ((0x3ffc00U 
                                                                                & ((IData)(vlSelf->top__DOT___0117_) 
                                                                                << 0xaU)) 
                                                                                | ((0x3ffe00U 
                                                                                & ((IData)(vlSelf->top__DOT___0227_) 
                                                                                << 9U)) 
                                                                                | ((0x3fff00U 
                                                                                & ((IData)(vlSelf->top__DOT___2845_) 
                                                                                << 8U)) 
                                                                                | ((0x3fff80U 
                                                                                & ((IData)(vlSelf->top__DOT___1822_) 
                                                                                << 7U)) 
                                                                                | ((0x3fffc0U 
                                                                                & ((IData)(vlSelf->top__DOT___2831_) 
                                                                                << 6U)) 
                                                                                | ((0x3fffe0U 
                                                                                & ((IData)(vlSelf->top__DOT___1088_) 
                                                                                << 5U)) 
                                                                                | ((0x3ffff0U 
                                                                                & ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 4U)) 
                                                                                | ((0x3ffff8U 
                                                                                & ((IData)(vlSelf->top__DOT___2848_) 
                                                                                << 3U)) 
                                                                                | ((0x3ffffcU 
                                                                                & ((IData)(vlSelf->top__DOT___0527_) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 4U)) 
                                                                                | ((1U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 4U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0035_) 
                                                                                >> 2U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0485_) 
                                                                                >> 3U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0675_) 
                                                                                >> 4U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1125_) 
                                                                                >> 5U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___2567_) 
                                                                                >> 6U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1921_) 
                                                                                >> 7U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0600_) 
                                                                                >> 8U)) 
                                                                                | ((0x3fffffU 
                                                                                & ((IData)(vlSelf->top__DOT___3565_) 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->top__DOT___0876_) 
                                                                                >> 0xaU)))))))))))))))))))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0xc0000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                << 0x1cU)) 
                                                                                | (((1U 
                                                                                & (((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 1U) 
                                                                                | ((((((((((((0x7ff000U 
                                                                                & ((IData)(vlSelf->top__DOT___1011_) 
                                                                                << 0xcU)) 
                                                                                | (0x7ff800U 
                                                                                & ((IData)(vlSelf->top__DOT___0117_) 
                                                                                << 0xbU))) 
                                                                                | (0x7ffc00U 
                                                                                & ((IData)(vlSelf->top__DOT___0227_) 
                                                                                << 0xaU))) 
                                                                                | (0x7ffe00U 
                                                                                & ((IData)(vlSelf->top__DOT___2845_) 
                                                                                << 9U))) 
                                                                                | (0x7fff00U 
                                                                                & ((IData)(vlSelf->top__DOT___1822_) 
                                                                                << 8U))) 
                                                                                | (0x7fff80U 
                                                                                & ((IData)(vlSelf->top__DOT___2831_) 
                                                                                << 7U))) 
                                                                                | (0x7fffc0U 
                                                                                & ((IData)(vlSelf->top__DOT___1088_) 
                                                                                << 6U))) 
                                                                                | (0x7fffe0U 
                                                                                & ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 5U))) 
                                                                                | (0x7ffff0U 
                                                                                & ((IData)(vlSelf->top__DOT___2848_) 
                                                                                << 4U))) 
                                                                                | (0x7ffff8U 
                                                                                & ((IData)(vlSelf->top__DOT___0527_) 
                                                                                << 3U))) 
                                                                                | (4U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 3U))) 
                                                                                | (2U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 3U))))) 
                                                                                << 0x1dU) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                << 0x1cU)) 
                                                                                | ((0xff80000U 
                                                                                & ((0x40000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                << 0x19U)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                << 0x19U)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0035_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0675_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1125_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2567_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___1921_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0600_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___3565_) 
                                                                                << 0x14U) 
                                                                                | ((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x13U))))))))))))) 
                                                                                | ((0x40000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___1594_)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3825_[1U] 
                                                                                >> 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2368_) 
                                                                                << 0x10U) 
                                                                                | ((0xf000U 
                                                                                & (vlSelf->top__DOT___3825_[1U] 
                                                                                >> 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3740_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3825_[1U] 
                                                                                >> 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3766_) 
                                                                                << 8U) 
                                                                                | ((0xf8U 
                                                                                & (vlSelf->top__DOT___3825_[1U] 
                                                                                >> 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0309_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2539_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1881_)))))))))))))))))))))))))) 
                                                           >> 0x20U)));
    __Vtemp_3[2U] = ((0x1fffcU & ((((0x3f0000U & ((
                                                   vlSelf->top__DOT___4048_[1U] 
                                                   << 0x13U) 
                                                  | (0x70000U 
                                                     & (vlSelf->top__DOT___4048_[0U] 
                                                        >> 0xdU)))) 
                                    | ((0x8000U & ((IData)(
                                                           (vlSelf->top__DOT___7072_ 
                                                            >> 0x16U)) 
                                                   << 0xfU)) 
                                       | (0x7fffU & 
                                          (vlSelf->top__DOT___4048_[0U] 
                                           >> 0xdU)))) 
                                   + ((vlSelf->top__DOT___3997_[2U] 
                                       << 0xdU) | (
                                                   vlSelf->top__DOT___3997_[1U] 
                                                   >> 0x13U))) 
                                  >> 5U)) | (((IData)(vlSelf->top__DOT___3488_) 
                                              << 1U) 
                                             | (1U 
                                                & ((((vlSelf->top__DOT___4048_[0U] 
                                                      << 0x13U) 
                                                     | (vlSelf->top__DOT___4048_[0U] 
                                                        >> 0xdU)) 
                                                    + 
                                                    ((vlSelf->top__DOT___3997_[1U] 
                                                      << 0xdU) 
                                                     | (vlSelf->top__DOT___3997_[1U] 
                                                        >> 0x13U))) 
                                                   >> 5U))));
    __Vtemp_6[2U] = ((0x1800000U & (((((IData)(vlSelf->top__DOT___0156_) 
                                       << 1U) | (IData)(vlSelf->top__DOT___2395_)) 
                                     + (((IData)(vlSelf->top__DOT___0624_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___2067_))) 
                                    << 0x17U)) | ((0x7c0000U 
                                                   & ((((0xf800000U 
                                                         & (vlSelf->top__DOT___4048_[1U] 
                                                            << 0x13U)) 
                                                        | (((IData)(vlSelf->top__DOT___0675_) 
                                                            << 0x16U) 
                                                           | ((0x3f0000U 
                                                               & ((vlSelf->top__DOT___4048_[1U] 
                                                                   << 0x13U) 
                                                                  | (0x70000U 
                                                                     & (vlSelf->top__DOT___4048_[0U] 
                                                                        >> 0xdU)))) 
                                                              | ((0x8000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___7072_ 
                                                                              >> 0x16U)) 
                                                                     << 0xfU)) 
                                                                 | (0x7fffU 
                                                                    & (vlSelf->top__DOT___4048_[0U] 
                                                                       >> 0xdU)))))) 
                                                       + 
                                                       ((vlSelf->top__DOT___3997_[2U] 
                                                         << 0xdU) 
                                                        | (vlSelf->top__DOT___3997_[1U] 
                                                           >> 0x13U))) 
                                                      >> 5U)) 
                                                  | (((IData)(vlSelf->top__DOT___2532_) 
                                                      << 0x11U) 
                                                     | __Vtemp_3[2U])));
    vlSelf->top__DOT___3833_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___3833_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___3833_[2U] = (((IData)(vlSelf->top__DOT___7151_) 
                                     << 0x1eU) | (((IData)(vlSelf->top__DOT___0128_) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->top__DOT___0158_) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->top__DOT___0663_) 
                                                         << 0x1bU) 
                                                        | ((0x4000000U 
                                                            & ((((0xcU 
                                                                  & ((IData)(vlSelf->top__DOT___2180_) 
                                                                     << 2U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0156_) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->top__DOT___2395_))) 
                                                                + 
                                                                (((IData)(vlSelf->top__DOT___2237_) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelf->top__DOT___0880_) 
                                                                     << 2U) 
                                                                    | (((IData)(vlSelf->top__DOT___0624_) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->top__DOT___2067_))))) 
                                                               << 0x17U)) 
                                                           | (((IData)(vlSelf->top__DOT___3640_) 
                                                               << 0x19U) 
                                                              | __Vtemp_6[2U]))))));
    vlSelf->top__DOT___3833_[3U] = ((0x1e0U & ((IData)(vlSelf->top__DOT___7128_) 
                                               << 3U)) 
                                    | ((0x10U & ((IData)(vlSelf->top__DOT___7151_) 
                                                 >> 2U)) 
                                       | ((8U & ((IData)(vlSelf->top__DOT___7151_) 
                                                 >> 2U)) 
                                          | ((4U & 
                                              ((IData)(vlSelf->top__DOT___7151_) 
                                               >> 2U)) 
                                             | (3U 
                                                & ((IData)(vlSelf->top__DOT___7151_) 
                                                   >> 2U))))));
    vlSelf->top__DOT___2834_ = (1U & ((((0x78000U & 
                                         ((IData)((vlSelf->top__DOT___3916_ 
                                                   >> 0x2aU)) 
                                          << 0xfU)) 
                                        | (IData)(vlSelf->top__DOT____VdfgTmp_h943bd46c__0)) 
                                       + ((0x7ff00U 
                                           & (vlSelf->top__DOT___3833_[2U] 
                                              << 4U)) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_hd82acd32__0))) 
                                      >> 0x12U));
    vlSelf->top__DOT____VdfgTmp_h943d4fa4__0 = (((IData)(vlSelf->top__DOT___2532_) 
                                                 << 0x15U) 
                                                | ((0x1fff00U 
                                                    & (vlSelf->top__DOT___3833_[2U] 
                                                       << 4U)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_hd82acd32__0)));
    __Vtemp_18[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___2488_)) 
                               << 0x3cU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT___3833_[1U] 
                                                                 >> 0x1bU)))) 
                                             << 0x3bU) 
                                            | (((QData)((IData)(vlSelf->top__DOT___1011_)) 
                                                << 0x39U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0117_)) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0227_)) 
                                                      << 0x37U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___2845_)) 
                                                         << 0x36U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & (vlSelf->top__DOT___3833_[1U] 
                                                                                >> 0x11U)))) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___1822_)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___2831_)) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (vlSelf->top__DOT___3833_[1U] 
                                                                                >> 7U)))) 
                                                                     << 0x27U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___1088_)) 
                                                                        << 0x26U) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___0193_)) 
                                                                           << 0x25U) 
                                                                          | (((QData)((IData)(vlSelf->top__DOT___2848_)) 
                                                                              << 0x24U) 
                                                                             | (((QData)((IData)(vlSelf->top__DOT___0527_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3833_[1U] 
                                                                                >> 2U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 4U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0xc0000000U 
                                                                                & vlSelf->top__DOT___3833_[0U]) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & vlSelf->top__DOT___3833_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0035_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0675_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1125_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2567_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___1921_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0600_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___3565_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___1594_)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3825_[1U] 
                                                                                >> 8U)) 
                                                                                | vlSelf->top__DOT____VdfgTmp_he9253338__0)))))))))))))))))))))))))))))))));
    __Vtemp_18[1U] = ((0xe0000000U & vlSelf->top__DOT___3833_[1U]) 
                      | (IData)(((((QData)((IData)(vlSelf->top__DOT___2488_)) 
                                   << 0x3cU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___3833_[1U] 
                                                                     >> 0x1bU)))) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___1011_)) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0117_)) 
                                                       << 0x38U) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0227_)) 
                                                          << 0x37U) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___2845_)) 
                                                             << 0x36U) 
                                                            | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT___3833_[1U] 
                                                                                >> 0x11U)))) 
                                                                << 0x31U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___1822_)) 
                                                                   << 0x30U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___2831_)) 
                                                                      << 0x2fU) 
                                                                     | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (vlSelf->top__DOT___3833_[1U] 
                                                                                >> 7U)))) 
                                                                         << 0x27U) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___1088_)) 
                                                                            << 0x26U) 
                                                                           | (((QData)((IData)(vlSelf->top__DOT___0193_)) 
                                                                               << 0x25U) 
                                                                              | (((QData)((IData)(vlSelf->top__DOT___2848_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0527_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3833_[1U] 
                                                                                >> 2U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                >> 4U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0xc0000000U 
                                                                                & vlSelf->top__DOT___3833_[0U]) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7142_) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & vlSelf->top__DOT___3833_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0035_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0675_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1125_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2567_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___1921_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0600_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___3565_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___1594_)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3825_[1U] 
                                                                                >> 8U)) 
                                                                                | vlSelf->top__DOT____VdfgTmp_he9253338__0)))))))))))))))))))))))))))))))) 
                                 >> 0x20U)));
    __Vtemp_30[0U] = __Vtemp_18[0U];
    __Vtemp_30[1U] = __Vtemp_18[1U];
    __Vtemp_30[2U] = ((0xc0000000U & vlSelf->top__DOT___3833_[2U]) 
                      | (((IData)(vlSelf->top__DOT___0128_) 
                          << 0x1dU) | (((IData)(vlSelf->top__DOT___0158_) 
                                        << 0x1cU) | 
                                       (((IData)(vlSelf->top__DOT___0663_) 
                                         << 0x1bU) 
                                        | ((0x4000000U 
                                            & vlSelf->top__DOT___3833_[2U]) 
                                           | (((IData)(vlSelf->top__DOT___3640_) 
                                               << 0x19U) 
                                              | ((0x1fc0000U 
                                                  & vlSelf->top__DOT___3833_[2U]) 
                                                 | (((IData)(vlSelf->top__DOT___2532_) 
                                                     << 0x11U) 
                                                    | ((0x1fffcU 
                                                        & vlSelf->top__DOT___3833_[2U]) 
                                                       | (((IData)(vlSelf->top__DOT___3488_) 
                                                           << 1U) 
                                                          | (1U 
                                                             & vlSelf->top__DOT___3833_[2U])))))))))));
    __Vtemp_30[3U] = ((0x1f0U & vlSelf->top__DOT___3833_[3U]) 
                      | ((0xcU & ((IData)(vlSelf->top__DOT___7151_) 
                                  >> 2U)) | (3U & vlSelf->top__DOT___3833_[3U])));
    __Vtemp_31[0U] = (IData)((((QData)((IData)((3U 
                                                & ((IData)(vlSelf->top__DOT___7225_) 
                                                   >> 1U)))) 
                               << 0x2aU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT___3832_[1U] 
                                                                 >> 9U)))) 
                                             << 0x29U) 
                                            | (((QData)((IData)(vlSelf->top__DOT___0479_)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0148_)) 
                                                   << 0x27U) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___2417_)) 
                                                      << 0x26U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0905_)) 
                                                         << 0x25U) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___0820_)) 
                                                            << 0x24U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___0675_)) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___1142_)) 
                                                                  << 0x22U) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___1663_)) 
                                                                     << 0x21U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___0577_)) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0626_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0659_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & vlSelf->top__DOT___3832_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2491_) 
                                                                                << 0x1cU) 
                                                                                | ((0xe000000U 
                                                                                & vlSelf->top__DOT___3832_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1749_) 
                                                                                << 0x18U) 
                                                                                | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2426_) 
                                                                                << 0x15U) 
                                                                                | ((0x1c0000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3086_) 
                                                                                << 0x11U) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h90230870__0))))))))))))))))))))))));
    __Vtemp_31[1U] = (((IData)((0xffffffffffffULL & 
                                (((QData)((IData)(vlSelf->top__DOT___3832_[2U])) 
                                  << 0x14U) | ((QData)((IData)(
                                                               vlSelf->top__DOT___3832_[1U])) 
                                               >> 0xcU)))) 
                       << 0xcU) | (IData)(((((QData)((IData)(
                                                             (3U 
                                                              & ((IData)(vlSelf->top__DOT___7225_) 
                                                                 >> 1U)))) 
                                             << 0x2aU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___3832_[1U] 
                                                                    >> 9U)))) 
                                                << 0x29U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0479_)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0148_)) 
                                                      << 0x27U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___2417_)) 
                                                         << 0x26U) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___0905_)) 
                                                            << 0x25U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___0820_)) 
                                                               << 0x24U) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___0675_)) 
                                                                  << 0x23U) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___1142_)) 
                                                                     << 0x22U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___1663_)) 
                                                                        << 0x21U) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___0577_)) 
                                                                           << 0x20U) 
                                                                          | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0626_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0659_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & vlSelf->top__DOT___3832_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2491_) 
                                                                                << 0x1cU) 
                                                                                | ((0xe000000U 
                                                                                & vlSelf->top__DOT___3832_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1749_) 
                                                                                << 0x18U) 
                                                                                | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2426_) 
                                                                                << 0x15U) 
                                                                                | ((0x1c0000U 
                                                                                & (vlSelf->top__DOT___3830_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3086_) 
                                                                                << 0x11U) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h90230870__0))))))))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_33[0U] = __Vtemp_31[0U];
    __Vtemp_33[1U] = __Vtemp_31[1U];
    __Vtemp_33[2U] = ((0xe0000000U & vlSelf->top__DOT___3832_[2U]) 
                      | ((0x10000000U & (vlSelf->top__DOT___7231_[1U] 
                                         << 1U)) | 
                         (((IData)((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->top__DOT___3832_[2U])) 
                                        << 0x14U) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT___3832_[1U])) 
                                        >> 0xcU)))) 
                           >> 0x14U) | ((IData)(((0xffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT___3832_[2U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->top__DOT___3832_[1U])) 
                                                        >> 0xcU))) 
                                                 >> 0x20U)) 
                                        << 0xcU))));
    __Vtemp_33[3U] = (0x1ffU & vlSelf->top__DOT___3832_[3U]);
    VL_ADD_W(4, __Vtemp_34, __Vtemp_30, __Vtemp_33);
    vlSelf->top__DOT____VdfgTmp_h8188bdd3__0[0U] = 
        __Vtemp_34[0U];
    vlSelf->top__DOT____VdfgTmp_h8188bdd3__0[1U] = 
        __Vtemp_34[1U];
    vlSelf->top__DOT____VdfgTmp_h8188bdd3__0[2U] = 
        __Vtemp_34[2U];
    vlSelf->top__DOT____VdfgTmp_h8188bdd3__0[3U] = 
        (0x1ffU & __Vtemp_34[3U]);
    vlSelf->top__DOT___0583_ = (1U & ((((0xffcU & ((IData)(
                                                           (vlSelf->top__DOT___3916_ 
                                                            >> 0x1dU)) 
                                                   << 2U)) 
                                        | (((IData)(vlSelf->top__DOT___3374_) 
                                            << 1U) 
                                           | (1U & (IData)(
                                                           (vlSelf->top__DOT___3916_ 
                                                            >> 0x1bU))))) 
                                       + ((0xf00U & 
                                           (vlSelf->top__DOT___3833_[2U] 
                                            << 4U)) 
                                          | (((IData)(vlSelf->top__DOT___0985_) 
                                              << 7U) 
                                             | (((IData)(vlSelf->top__DOT___1003_) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->top__DOT___3082_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___0032_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___0479_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___0393_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___1601_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0983_)))))))))) 
                                      >> 0xbU));
    vlSelf->top__DOT___2144_ = (1U & ((((0x1ff8000U 
                                         & ((IData)(
                                                    (vlSelf->top__DOT___3916_ 
                                                     >> 0x2aU)) 
                                            << 0xfU)) 
                                        | (IData)(vlSelf->top__DOT____VdfgTmp_h943bd46c__0)) 
                                       + ((0x1c00000U 
                                           & (vlSelf->top__DOT___3833_[2U] 
                                              << 4U)) 
                                          | vlSelf->top__DOT____VdfgTmp_h943d4fa4__0)) 
                                      >> 0x18U));
    vlSelf->top__DOT___3890_ = ((0x40000000U & ((((0x1ffcU 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3916_ 
                                                               >> 0x1dU)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->top__DOT___3374_) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT___3916_ 
                                                                   >> 0x1bU))))) 
                                                 + 
                                                 ((0x1f00U 
                                                   & (vlSelf->top__DOT___3833_[2U] 
                                                      << 4U)) 
                                                  | (((IData)(vlSelf->top__DOT___0985_) 
                                                      << 7U) 
                                                     | (((IData)(vlSelf->top__DOT___1003_) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->top__DOT___3082_) 
                                                            << 5U) 
                                                           | (((IData)(vlSelf->top__DOT___0032_) 
                                                               << 4U) 
                                                              | (((IData)(vlSelf->top__DOT___0479_) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelf->top__DOT___0393_) 
                                                                     << 2U) 
                                                                    | (((IData)(vlSelf->top__DOT___1601_) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->top__DOT___0983_)))))))))) 
                                                << 0x12U)) 
                                | (((IData)(vlSelf->top__DOT___0583_) 
                                    << 0x1dU) | ((0x1fc00000U 
                                                  & ((((0x7fcU 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___3916_ 
                                                                    >> 0x1dU)) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelf->top__DOT___3374_) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT___3916_ 
                                                                        >> 0x1bU))))) 
                                                      + 
                                                      ((0x700U 
                                                        & (vlSelf->top__DOT___3833_[2U] 
                                                           << 4U)) 
                                                       | (((IData)(vlSelf->top__DOT___0985_) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->top__DOT___1003_) 
                                                              << 6U) 
                                                             | (((IData)(vlSelf->top__DOT___3082_) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT___0032_) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSelf->top__DOT___0479_) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelf->top__DOT___0393_) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelf->top__DOT___1601_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0983_)))))))))) 
                                                     << 0x12U)) 
                                                 | (((IData)(vlSelf->top__DOT___1380_) 
                                                     << 0x15U) 
                                                    | ((0x100000U 
                                                        & ((((0x7ffcU 
                                                              & ((vlSelf->top__DOT___3824_[2U] 
                                                                  << 8U) 
                                                                 | (0xfcU 
                                                                    & (vlSelf->top__DOT___3824_[1U] 
                                                                       >> 0x18U)))) 
                                                             | (((IData)(vlSelf->top__DOT___1771_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___3655_))) 
                                                            + 
                                                            ((0x4000U 
                                                              & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[1U] 
                                                                 << 9U)) 
                                                             | ((0x3ff0U 
                                                                 & (IData)(vlSelf->top__DOT___4498_)) 
                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->top__DOT___0558_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___1487_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0056_))))))) 
                                                           << 6U)) 
                                                       | (((IData)(vlSelf->top__DOT___2560_) 
                                                           << 0x13U) 
                                                          | ((0x40000U 
                                                              & ((((0x1ffcU 
                                                                    & ((vlSelf->top__DOT___3824_[2U] 
                                                                        << 8U) 
                                                                       | (0xfcU 
                                                                          & (vlSelf->top__DOT___3824_[1U] 
                                                                             >> 0x18U)))) 
                                                                   | (((IData)(vlSelf->top__DOT___1771_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___3655_))) 
                                                                  + 
                                                                  ((0x1ff0U 
                                                                    & (IData)(vlSelf->top__DOT___4498_)) 
                                                                   | (((IData)(vlSelf->top__DOT___0597_) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelf->top__DOT___0558_) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelf->top__DOT___1487_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0056_)))))) 
                                                                 << 6U)) 
                                                             | (((IData)(vlSelf->top__DOT___3194_) 
                                                                 << 0x11U) 
                                                                | ((0x1e000U 
                                                                    & ((((0x7fcU 
                                                                          & ((vlSelf->top__DOT___3824_[2U] 
                                                                              << 8U) 
                                                                             | (0xfcU 
                                                                                & (vlSelf->top__DOT___3824_[1U] 
                                                                                >> 0x18U)))) 
                                                                         | (((IData)(vlSelf->top__DOT___1771_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___3655_))) 
                                                                        + 
                                                                        ((0x7f0U 
                                                                          & (IData)(vlSelf->top__DOT___4498_)) 
                                                                         | (((IData)(vlSelf->top__DOT___0597_) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->top__DOT___0558_) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->top__DOT___1487_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0056_)))))) 
                                                                       << 6U)) 
                                                                   | (((IData)(vlSelf->top__DOT___0490_) 
                                                                       << 0xcU) 
                                                                      | ((0xf00U 
                                                                          & ((((0x3cU 
                                                                                & (vlSelf->top__DOT___3824_[1U] 
                                                                                >> 0x18U)) 
                                                                               | (((IData)(vlSelf->top__DOT___1771_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3655_))) 
                                                                              + 
                                                                              ((0x30U 
                                                                                & (IData)(vlSelf->top__DOT___4498_)) 
                                                                               | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0558_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1487_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0056_)))))) 
                                                                             << 6U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3462_) 
                                                                             << 7U) 
                                                                            | ((0x40U 
                                                                                & (((IData)(vlSelf->top__DOT___3655_) 
                                                                                + (IData)(vlSelf->top__DOT___0056_)) 
                                                                                << 6U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2589_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0446_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1066_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1877_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2494_)))))))))))))))))));
    vlSelf->top__DOT___4430_[3U] = ((0xffffU & vlSelf->top__DOT___4430_[3U]) 
                                    | (0xffff0000U 
                                       & ((0xe0000000U 
                                           & ((((0x38000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___3916_ 
                                                             >> 0x2aU)) 
                                                    << 0xfU)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h943bd46c__0)) 
                                               + ((0x3ff00U 
                                                   & (vlSelf->top__DOT___3833_[2U] 
                                                      << 4U)) 
                                                  | (IData)(vlSelf->top__DOT____VdfgTmp_hd82acd32__0))) 
                                              << 0x10U)) 
                                          | ((0x10000000U 
                                              & (vlSelf->top__DOT___3890_ 
                                                 >> 2U)) 
                                             | (((IData)(vlSelf->top__DOT___0583_) 
                                                 << 0x1bU) 
                                                | ((0x7f00000U 
                                                    & (vlSelf->top__DOT___3890_ 
                                                       >> 2U)) 
                                                   | (0xf0000U 
                                                      & ((((0xcU 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT___3916_ 
                                                                        >> 0x1dU)) 
                                                               << 2U)) 
                                                           | (IData)(vlSelf->top__DOT____VdfgTmp_h02e612f6__0)) 
                                                          + (IData)(vlSelf->top__DOT____VdfgTmp_hbaa7473e__0)) 
                                                         << 0x10U))))))));
    vlSelf->top__DOT___4430_[4U] = (0xffU & ((0xf8U 
                                              & ((((0xff8000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3916_ 
                                                                >> 0x2aU)) 
                                                       << 0xfU)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h943bd46c__0)) 
                                                  + 
                                                  ((0xc00000U 
                                                    & (vlSelf->top__DOT___3833_[2U] 
                                                       << 4U)) 
                                                   | vlSelf->top__DOT____VdfgTmp_h943d4fa4__0)) 
                                                 >> 0x10U)) 
                                             | ((0xfffcU 
                                                 & ((IData)(vlSelf->top__DOT___2834_) 
                                                    << 2U)) 
                                                | ((3U 
                                                    & ((((0x38000U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___3916_ 
                                                                      >> 0x2aU)) 
                                                             << 0xfU)) 
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_h943bd46c__0)) 
                                                        + 
                                                        ((0x3ff00U 
                                                          & (vlSelf->top__DOT___3833_[2U] 
                                                             << 4U)) 
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_hd82acd32__0))) 
                                                       >> 0x10U)) 
                                                   | (0xffffU 
                                                      & ((IData)(vlSelf->top__DOT___0583_) 
                                                         >> 5U))))));
    __Vtemp_36[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___3890_ 
                                                   >> 0x14U)))) 
                               << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___2560_)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___3890_ 
                                                                    >> 0x12U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___3194_)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & (vlSelf->top__DOT___3890_ 
                                                                          >> 0xdU)))) 
                                                      << 0x38U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0490_)) 
                                                         << 0x37U) 
                                                        | (((QData)((IData)(
                                                                            (0xfU 
                                                                             & (vlSelf->top__DOT___3890_ 
                                                                                >> 8U)))) 
                                                            << 0x33U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___3462_)) 
                                                               << 0x32U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3890_ 
                                                                                >> 6U)))) 
                                                                  << 0x31U) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___0799_)) 
                                                                     << 0x30U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___0323_)) 
                                                                        << 0x2fU) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___0923_)) 
                                                                           << 0x2eU) 
                                                                          | (((QData)((IData)(vlSelf->top__DOT___0773_)) 
                                                                              << 0x2dU) 
                                                                             | (((QData)((IData)(vlSelf->top__DOT___1772_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1177_)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2359_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((IData)(vlSelf->top__DOT___4560_) 
                                                                                >> 0xdU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2692_)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & ((IData)(vlSelf->top__DOT___3974_) 
                                                                                >> 8U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0782_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___3974_) 
                                                                                >> 3U)))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2721_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4560_) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1934_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4560_) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1259_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3e00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4221_ 
                                                                                >> 5U)) 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2930_) 
                                                                                << 0x14U) 
                                                                                | ((0xf0000U 
                                                                                & ((IData)(vlSelf->top__DOT___4221_) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___1077_)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1719_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0948_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0155_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1229_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0778_))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_36[1U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlSelf->top__DOT___3890_ 
                                                    >> 0x14U)))) 
                                << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___2560_)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___3890_ 
                                                                     >> 0x12U)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___3194_)) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (0xfU 
                                                                        & (vlSelf->top__DOT___3890_ 
                                                                           >> 0xdU)))) 
                                                       << 0x38U) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0490_)) 
                                                          << 0x37U) 
                                                         | (((QData)((IData)(
                                                                             (0xfU 
                                                                              & (vlSelf->top__DOT___3890_ 
                                                                                >> 8U)))) 
                                                             << 0x33U) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___3462_)) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3890_ 
                                                                                >> 6U)))) 
                                                                   << 0x31U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___0799_)) 
                                                                      << 0x30U) 
                                                                     | (((QData)((IData)(vlSelf->top__DOT___0323_)) 
                                                                         << 0x2fU) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___0923_)) 
                                                                            << 0x2eU) 
                                                                           | (((QData)((IData)(vlSelf->top__DOT___0773_)) 
                                                                               << 0x2dU) 
                                                                              | (((QData)((IData)(vlSelf->top__DOT___1772_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1177_)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2359_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((IData)(vlSelf->top__DOT___4560_) 
                                                                                >> 0xdU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2692_)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & ((IData)(vlSelf->top__DOT___3974_) 
                                                                                >> 8U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0782_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___3974_) 
                                                                                >> 3U)))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2721_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4560_) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1934_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4560_) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1259_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3e00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4221_ 
                                                                                >> 5U)) 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2930_) 
                                                                                << 0x14U) 
                                                                                | ((0xf0000U 
                                                                                & ((IData)(vlSelf->top__DOT___4221_) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7100_) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___1077_)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1719_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0948_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0155_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1229_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0778_))))))))))))))))))))))))))))))))))))))))))))) 
                              >> 0x20U));
    vlSelf->top__DOT___4563_[0U] = __Vtemp_36[0U];
    vlSelf->top__DOT___4563_[1U] = __Vtemp_36[1U];
    vlSelf->top__DOT___4563_[2U] = vlSelf->top__DOT___2541_;
    top__DOT___3744_ = (1U & ((((0x1c000U & vlSelf->top__DOT___3891_) 
                                | (((IData)(vlSelf->top__DOT___1695_) 
                                    << 0xdU) | ((0x1fe0U 
                                                 & vlSelf->top__DOT___3891_) 
                                                | (((IData)(vlSelf->top__DOT___1379_) 
                                                    << 4U) 
                                                   | ((0xcU 
                                                       & vlSelf->top__DOT___3891_) 
                                                      | (((IData)(vlSelf->top__DOT___2517_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___1204_))))))) 
                               + ((0x1e000U & vlSelf->top__DOT___3890_) 
                                  | (((IData)(vlSelf->top__DOT___0490_) 
                                      << 0xcU) | ((0xf00U 
                                                   & vlSelf->top__DOT___3890_) 
                                                  | (((IData)(vlSelf->top__DOT___3462_) 
                                                      << 7U) 
                                                     | ((0x40U 
                                                         & vlSelf->top__DOT___3890_) 
                                                        | (((IData)(vlSelf->top__DOT___0439_) 
                                                            << 5U) 
                                                           | (((IData)(vlSelf->top__DOT___2589_) 
                                                               << 4U) 
                                                              | (((IData)(vlSelf->top__DOT___0446_) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelf->top__DOT___1066_) 
                                                                     << 2U) 
                                                                    | (((IData)(vlSelf->top__DOT___1877_) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->top__DOT___2494_)))))))))))) 
                              >> 0x10U));
    top__DOT___2246_ = (1U & ((((0xc0000U & vlSelf->top__DOT___3891_) 
                                | (((IData)(vlSelf->top__DOT___3311_) 
                                    << 0x11U) | ((0x1c000U 
                                                  & vlSelf->top__DOT___3891_) 
                                                 | (((IData)(vlSelf->top__DOT___1695_) 
                                                     << 0xdU) 
                                                    | ((0x1fe0U 
                                                        & vlSelf->top__DOT___3891_) 
                                                       | (((IData)(vlSelf->top__DOT___1379_) 
                                                           << 4U) 
                                                          | ((0xcU 
                                                              & vlSelf->top__DOT___3891_) 
                                                             | (((IData)(vlSelf->top__DOT___2517_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___1204_))))))))) 
                               + (((IData)(vlSelf->top__DOT___2560_) 
                                   << 0x13U) | ((0x40000U 
                                                 & vlSelf->top__DOT___3890_) 
                                                | (((IData)(vlSelf->top__DOT___3194_) 
                                                    << 0x11U) 
                                                   | ((0x1e000U 
                                                       & vlSelf->top__DOT___3890_) 
                                                      | (((IData)(vlSelf->top__DOT___0490_) 
                                                          << 0xcU) 
                                                         | ((0xf00U 
                                                             & vlSelf->top__DOT___3890_) 
                                                            | (((IData)(vlSelf->top__DOT___3462_) 
                                                                << 7U) 
                                                               | ((0x40U 
                                                                   & vlSelf->top__DOT___3890_) 
                                                                  | (((IData)(vlSelf->top__DOT___0439_) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->top__DOT___2589_) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->top__DOT___0446_) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->top__DOT___1066_) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->top__DOT___1877_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2494_))))))))))))))) 
                              >> 0x13U));
    vlSelf->top__DOT___3889_ = ((0x7ff00000U & (((0x7f000000U 
                                                  & vlSelf->top__DOT___3891_) 
                                                 | (((IData)(vlSelf->top__DOT___3507_) 
                                                     << 0x17U) 
                                                    | (((IData)(vlSelf->top__DOT___0311_) 
                                                        << 0x16U) 
                                                       | ((0x3c0000U 
                                                           & vlSelf->top__DOT___3891_) 
                                                          | (((IData)(vlSelf->top__DOT___3311_) 
                                                              << 0x11U) 
                                                             | ((0x1c000U 
                                                                 & vlSelf->top__DOT___3891_) 
                                                                | (((IData)(vlSelf->top__DOT___1695_) 
                                                                    << 0xdU) 
                                                                   | ((0x1fe0U 
                                                                       & vlSelf->top__DOT___3891_) 
                                                                      | (((IData)(vlSelf->top__DOT___1379_) 
                                                                          << 4U) 
                                                                         | ((0xcU 
                                                                             & vlSelf->top__DOT___3891_) 
                                                                            | (((IData)(vlSelf->top__DOT___2517_) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT___1204_)))))))))))) 
                                                + (
                                                   (0x40000000U 
                                                    & vlSelf->top__DOT___3890_) 
                                                   | (((IData)(vlSelf->top__DOT___0583_) 
                                                       << 0x1dU) 
                                                      | ((0x1fc00000U 
                                                          & vlSelf->top__DOT___3890_) 
                                                         | (((IData)(vlSelf->top__DOT___1380_) 
                                                             << 0x15U) 
                                                            | ((0x100000U 
                                                                & vlSelf->top__DOT___3890_) 
                                                               | (((IData)(vlSelf->top__DOT___2560_) 
                                                                   << 0x13U) 
                                                                  | ((0x40000U 
                                                                      & vlSelf->top__DOT___3890_) 
                                                                     | (((IData)(vlSelf->top__DOT___3194_) 
                                                                         << 0x11U) 
                                                                        | ((0x1e000U 
                                                                            & vlSelf->top__DOT___3890_) 
                                                                           | (((IData)(vlSelf->top__DOT___0490_) 
                                                                               << 0xcU) 
                                                                              | ((0xf00U 
                                                                                & vlSelf->top__DOT___3890_) 
                                                                                | (((IData)(vlSelf->top__DOT___3462_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & vlSelf->top__DOT___3890_) 
                                                                                | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2589_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0446_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1066_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1877_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2494_))))))))))))))))))))) 
                                | (((IData)(top__DOT___2246_) 
                                    << 0x13U) | ((0x60000U 
                                                  & (((0x40000U 
                                                       & vlSelf->top__DOT___3891_) 
                                                      | (((IData)(vlSelf->top__DOT___3311_) 
                                                          << 0x11U) 
                                                         | ((0x1c000U 
                                                             & vlSelf->top__DOT___3891_) 
                                                            | (((IData)(vlSelf->top__DOT___1695_) 
                                                                << 0xdU) 
                                                               | ((0x1fe0U 
                                                                   & vlSelf->top__DOT___3891_) 
                                                                  | (((IData)(vlSelf->top__DOT___1379_) 
                                                                      << 4U) 
                                                                     | ((0xcU 
                                                                         & vlSelf->top__DOT___3891_) 
                                                                        | (((IData)(vlSelf->top__DOT___2517_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___1204_))))))))) 
                                                     + 
                                                     ((0x40000U 
                                                       & vlSelf->top__DOT___3890_) 
                                                      | (((IData)(vlSelf->top__DOT___3194_) 
                                                          << 0x11U) 
                                                         | ((0x1e000U 
                                                             & vlSelf->top__DOT___3890_) 
                                                            | (((IData)(vlSelf->top__DOT___0490_) 
                                                                << 0xcU) 
                                                               | ((0xf00U 
                                                                   & vlSelf->top__DOT___3890_) 
                                                                  | (((IData)(vlSelf->top__DOT___3462_) 
                                                                      << 7U) 
                                                                     | ((0x40U 
                                                                         & vlSelf->top__DOT___3890_) 
                                                                        | (((IData)(vlSelf->top__DOT___0439_) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->top__DOT___2589_) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->top__DOT___0446_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1066_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1877_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2494_))))))))))))))) 
                                                 | (((IData)(top__DOT___3744_) 
                                                     << 0x10U) 
                                                    | ((0xfff0U 
                                                        & (((0xc000U 
                                                             & vlSelf->top__DOT___3891_) 
                                                            | (((IData)(vlSelf->top__DOT___1695_) 
                                                                << 0xdU) 
                                                               | ((0x1fe0U 
                                                                   & vlSelf->top__DOT___3891_) 
                                                                  | (((IData)(vlSelf->top__DOT___1379_) 
                                                                      << 4U) 
                                                                     | ((0xcU 
                                                                         & vlSelf->top__DOT___3891_) 
                                                                        | (((IData)(vlSelf->top__DOT___2517_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___1204_))))))) 
                                                           + 
                                                           ((0xe000U 
                                                             & vlSelf->top__DOT___3890_) 
                                                            | (((IData)(vlSelf->top__DOT___0490_) 
                                                                << 0xcU) 
                                                               | ((0xf00U 
                                                                   & vlSelf->top__DOT___3890_) 
                                                                  | (((IData)(vlSelf->top__DOT___3462_) 
                                                                      << 7U) 
                                                                     | ((0x40U 
                                                                         & vlSelf->top__DOT___3890_) 
                                                                        | (((IData)(vlSelf->top__DOT___0439_) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->top__DOT___2589_) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->top__DOT___0446_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1066_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1877_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2494_))))))))))))) 
                                                       | (((IData)(vlSelf->top__DOT___3329_) 
                                                           << 3U) 
                                                          | (7U 
                                                             & (((4U 
                                                                  & vlSelf->top__DOT___3891_) 
                                                                 | (((IData)(vlSelf->top__DOT___2517_) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->top__DOT___1204_))) 
                                                                + 
                                                                (((IData)(vlSelf->top__DOT___1066_) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelf->top__DOT___1877_) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->top__DOT___2494_)))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1271(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1271\n"); );
    // Body
    vlSelf->top__DOT___3983_ = ((0x200000U & ((IData)(
                                                      (vlSelf->top__DOT____VdfgTmp_h4cce1c20__0 
                                                       >> 0x2cU)) 
                                              << 0x15U)) 
                                | (((IData)(vlSelf->top__DOT___1230_) 
                                    << 0x14U) | (((IData)(vlSelf->top__DOT___0553_) 
                                                  << 0x13U) 
                                                 | vlSelf->top__DOT___7183_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1272(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1272\n"); );
    // Body
    vlSelf->top__DOT___4345_[1U] = ((0xe7ffffffU & 
                                     vlSelf->top__DOT___4345_[1U]) 
                                    | (0xf8000000U 
                                       & (((IData)(vlSelf->top__DOT___1400_) 
                                           << 0x1cU) 
                                          | ((IData)(vlSelf->top__DOT___1411_) 
                                             << 0x1bU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1274(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1274\n"); );
    // Body
    vlSelf->top__DOT___1677_ = (1U & (~ (((vlSelf->top__DOT___4788_ 
                                           >> 6U) & (IData)(vlSelf->top__DOT___1480_)) 
                                         | (IData)(vlSelf->top__DOT___2225_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1275(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1275\n"); );
    // Init
    CData/*0:0*/ top__DOT___3567_;
    top__DOT___3567_ = 0;
    // Body
    top__DOT___3567_ = (1U & (IData)((0xffffffffULL 
                                      & (((((QData)((IData)(
                                                            ((0xfffc0000U 
                                                              & (vlSelf->top__DOT___3833_[2U] 
                                                                 << 0x10U)) 
                                                             | (((IData)(vlSelf->top__DOT___3488_) 
                                                                 << 0x11U) 
                                                                | ((0x10000U 
                                                                    & (vlSelf->top__DOT___3833_[2U] 
                                                                       << 0x10U)) 
                                                                   | (((IData)(vlSelf->top__DOT___1183_) 
                                                                       << 0xfU) 
                                                                      | (((IData)(vlSelf->top__DOT___2342_) 
                                                                          << 0xeU) 
                                                                         | (((IData)(vlSelf->top__DOT___0398_) 
                                                                             << 0xdU) 
                                                                            | ((0x1000U 
                                                                                & (vlSelf->top__DOT___4505_[0U] 
                                                                                >> 5U)) 
                                                                               | ((0x800U 
                                                                                & (IData)(vlSelf->top__DOT___7049_)) 
                                                                                | ((0x400U 
                                                                                & (IData)(vlSelf->top__DOT___7049_)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 0xeU)) 
                                                                                | ((0x100U 
                                                                                & (IData)(vlSelf->top__DOT___7049_)) 
                                                                                | ((0xc0U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 0xeU)) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___7049_)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 0xeU)) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___7049_)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___4217_) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (IData)(vlSelf->top__DOT___7049_)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4505_[0U] 
                                                                                >> 5U))))))))))))))))))))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0699_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___1554_))))) 
                                          + (((QData)((IData)(
                                                              (((IData)(
                                                                        (vlSelf->top__DOT___4547_ 
                                                                         >> 0x20U)) 
                                                                << 0x1eU) 
                                                               | ((0x20000000U 
                                                                   & ((IData)(vlSelf->top__DOT___4761_) 
                                                                      << 0x18U)) 
                                                                  | ((0x8000000U 
                                                                      & ((IData)(vlSelf->top__DOT___4761_) 
                                                                         << 0x17U)) 
                                                                     | ((0x7000000U 
                                                                         & (vlSelf->top__DOT___3844_ 
                                                                            << 0xbU)) 
                                                                        | ((0x800000U 
                                                                            & ((IData)(vlSelf->top__DOT___4761_) 
                                                                               << 0x17U)) 
                                                                           | (((IData)(vlSelf->top__DOT___3244_) 
                                                                               << 0x16U) 
                                                                              | (((IData)(vlSelf->top__DOT___3769_) 
                                                                                << 0x15U) 
                                                                                | ((0x1fc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4376_ 
                                                                                >> 0x37U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x3000U 
                                                                                & ((IData)(vlSelf->top__DOT___4201_) 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___7133_ 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4376_ 
                                                                                >> 0x32U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7133_ 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4376_ 
                                                                                >> 0x30U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7133_ 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7133_ 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4376_ 
                                                                                >> 0x2dU)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1093_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0815_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0779_)))))))))))))))))))))) 
                                              << 2U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0107_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___0603_)))))) 
                                         >> 2U))));
    vlSelf->top__DOT___2002_ = ((IData)(top__DOT___3567_) 
                                | (IData)(vlSelf->top__DOT___1990_));
    vlSelf->top__DOT___2200_ = ((IData)(vlSelf->top__DOT___3571_) 
                                | (IData)(vlSelf->top__DOT___2002_));
}
