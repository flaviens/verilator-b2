// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1372(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1372\n"); );
    // Init
    CData/*0:0*/ top__DOT___1405_;
    top__DOT___1405_ = 0;
    // Body
    top__DOT___1405_ = (1U & (~ (((~ (((IData)(vlSelf->top__DOT___0923_) 
                                       & (IData)(vlSelf->top__DOT___1232_)) 
                                      | (IData)(vlSelf->top__DOT___1076_))) 
                                  & (IData)(vlSelf->top__DOT___1928_)) 
                                 | (IData)(vlSelf->top__DOT___1132_))));
    vlSelf->top__DOT____VdfgTmp_h0f866493__0 = ((8U 
                                                 & ((~ (IData)(vlSelf->top__DOT___1295_)) 
                                                    << 3U)) 
                                                | (((IData)(vlSelf->top__DOT___1389_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___1205_) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (~ 
                                                            (((IData)(top__DOT___1405_) 
                                                              & (IData)(vlSelf->top__DOT___0866_)) 
                                                             | ((IData)(vlSelf->top__DOT___0102_) 
                                                                & (IData)(vlSelf->top__DOT___0067_))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1373(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1373\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___2588_)) 
                              << 0x3cU) | (((QData)((IData)(vlSelf->top__DOT___1303_)) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___1281_)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0711_)) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0250_)) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___2222_)) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1142_)) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->top__DOT___7103_) 
                                                                                >> 3U)))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___2583_)) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___1080_)) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___0880_)) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___0267_)) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(vlSelf->top__DOT___0136_)) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7175_ 
                                                                                >> 0x2bU))))) 
                                                                                << 0x2dU) 
                                                                               | (((QData)((IData)(
                                                                                (0x1ffU 
                                                                                & ((IData)(vlSelf->top__DOT___4548_) 
                                                                                >> 3U)))) 
                                                                                << 0x24U) 
                                                                                | ((0xffffffffcULL 
                                                                                & (vlSelf->top__DOT___7175_ 
                                                                                << 2U)) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2466_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1270_)))))))))))))))))))));
    __Vtemp_1[1U] = ((0xe0000000U & (vlSelf->top__DOT____VdfgTmp_h8188bdd3__0[2U] 
                                     << 0xcU)) | (IData)(
                                                         ((((QData)((IData)(vlSelf->top__DOT___2588_)) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___1303_)) 
                                                               << 0x3bU) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___1281_)) 
                                                                  << 0x3aU) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___0711_)) 
                                                                     << 0x39U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___0250_)) 
                                                                        << 0x38U) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___2222_)) 
                                                                           << 0x37U) 
                                                                          | (((QData)((IData)(vlSelf->top__DOT___1142_)) 
                                                                              << 0x36U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7103_) 
                                                                                >> 3U)))) 
                                                                                << 0x35U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2583_)) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1080_)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0880_)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0267_)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0136_)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7175_ 
                                                                                >> 0x2bU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x1ffU 
                                                                                & ((IData)(vlSelf->top__DOT___4548_) 
                                                                                >> 3U)))) 
                                                                                << 0x24U) 
                                                                                | ((0xffffffffcULL 
                                                                                & (vlSelf->top__DOT___7175_ 
                                                                                << 2U)) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2466_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1270_)))))))))))))))))))) 
                                                          >> 0x20U)));
    vlSelf->top__DOT___4620_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4620_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4620_[2U] = (0x3ffffU & ((0x1ffff000U 
                                                 & (vlSelf->top__DOT____VdfgTmp_h8188bdd3__0[3U] 
                                                    << 0xcU)) 
                                                | (vlSelf->top__DOT____VdfgTmp_h8188bdd3__0[2U] 
                                                   >> 0x14U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1379(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1379\n"); );
    // Body
    vlSelf->top__DOT___2706_ = (1U & ((((0x10U & ((IData)(vlSelf->top__DOT___7123_) 
                                                  >> 6U)) 
                                        | ((8U & (vlSelf->top__DOT___4054_[0U] 
                                                  >> 0x15U)) 
                                           | ((4U & 
                                               ((IData)(vlSelf->top__DOT___7123_) 
                                                >> 6U)) 
                                              | ((2U 
                                                  & (vlSelf->top__DOT___4054_[0U] 
                                                     >> 0x15U)) 
                                                 | (IData)(vlSelf->top__DOT___0956_))))) 
                                       + (((IData)(vlSelf->top__DOT___2267_) 
                                           << 4U) | 
                                          ((0xcU & 
                                            (vlSelf->top__DOT___3893_ 
                                             >> 0xfU)) 
                                           | (((IData)(vlSelf->top__DOT___0451_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0577_))))) 
                                      >> 4U));
    vlSelf->top__DOT___0765_ = (1U & ((((0x60U & (vlSelf->top__DOT___4054_[0U] 
                                                  >> 0x15U)) 
                                        | ((0x10U & 
                                            ((IData)(vlSelf->top__DOT___7123_) 
                                             >> 6U)) 
                                           | ((8U & 
                                               (vlSelf->top__DOT___4054_[0U] 
                                                >> 0x15U)) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->top__DOT___7123_) 
                                                     >> 6U)) 
                                                 | ((2U 
                                                     & (vlSelf->top__DOT___4054_[0U] 
                                                        >> 0x15U)) 
                                                    | (IData)(vlSelf->top__DOT___0956_)))))) 
                                       + ((0x40U & 
                                           (vlSelf->top__DOT___3893_ 
                                            >> 0xfU)) 
                                          | (((IData)(vlSelf->top__DOT___3296_) 
                                              << 5U) 
                                             | (((IData)(vlSelf->top__DOT___2267_) 
                                                 << 4U) 
                                                | ((0xcU 
                                                    & (vlSelf->top__DOT___3893_ 
                                                       >> 0xfU)) 
                                                   | (((IData)(vlSelf->top__DOT___0451_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0577_))))))) 
                                      >> 6U));
    vlSelf->top__DOT___3200_ = (1U & ((((8U & (vlSelf->top__DOT___4054_[0U] 
                                               >> 0x15U)) 
                                        | ((4U & ((IData)(vlSelf->top__DOT___7123_) 
                                                  >> 6U)) 
                                           | ((2U & 
                                               (vlSelf->top__DOT___4054_[0U] 
                                                >> 0x15U)) 
                                              | (IData)(vlSelf->top__DOT___0956_)))) 
                                       + ((0xcU & (vlSelf->top__DOT___3893_ 
                                                   >> 0xfU)) 
                                          | (((IData)(vlSelf->top__DOT___0451_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___0577_)))) 
                                      >> 3U));
    vlSelf->top__DOT___4092_ = (((IData)(vlSelf->top__DOT___0765_) 
                                 << 7U) | ((0x40U & 
                                            ((((0x20U 
                                                & (vlSelf->top__DOT___4054_[0U] 
                                                   >> 0x15U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->top__DOT___7123_) 
                                                      >> 6U)) 
                                                  | ((8U 
                                                      & (vlSelf->top__DOT___4054_[0U] 
                                                         >> 0x15U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->top__DOT___7123_) 
                                                            >> 6U)) 
                                                        | ((2U 
                                                            & (vlSelf->top__DOT___4054_[0U] 
                                                               >> 0x15U)) 
                                                           | (IData)(vlSelf->top__DOT___0956_)))))) 
                                              + (((IData)(vlSelf->top__DOT___3296_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___2267_) 
                                                     << 4U) 
                                                    | ((0xcU 
                                                        & (vlSelf->top__DOT___3893_ 
                                                           >> 0xfU)) 
                                                       | (((IData)(vlSelf->top__DOT___0451_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0577_)))))) 
                                             << 1U)) 
                                           | (((IData)(vlSelf->top__DOT___2706_) 
                                               << 5U) 
                                              | (((IData)(vlSelf->top__DOT___3200_) 
                                                  << 4U) 
                                                 | ((0xcU 
                                                     & ((((4U 
                                                           & ((IData)(vlSelf->top__DOT___7123_) 
                                                              >> 6U)) 
                                                          | ((2U 
                                                              & (vlSelf->top__DOT___4054_[0U] 
                                                                 >> 0x15U)) 
                                                             | (IData)(vlSelf->top__DOT___0956_))) 
                                                         + 
                                                         ((4U 
                                                           & (vlSelf->top__DOT___3893_ 
                                                              >> 0xfU)) 
                                                          | (((IData)(vlSelf->top__DOT___0451_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0577_)))) 
                                                        << 1U)) 
                                                    | (((IData)(vlSelf->top__DOT___1591_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0816_)))))));
    vlSelf->top__DOT____VdfgTmp_h3de7e2f0__0 = ((0x40U 
                                                 & (IData)(vlSelf->top__DOT___4092_)) 
                                                | (((IData)(vlSelf->top__DOT___2706_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___3200_) 
                                                       << 4U) 
                                                      | ((0xcU 
                                                          & (IData)(vlSelf->top__DOT___4092_)) 
                                                         | (((IData)(vlSelf->top__DOT___1591_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0816_))))));
    vlSelf->top__DOT___2838_ = (1U & (((((IData)(vlSelf->top__DOT___3200_) 
                                         << 6U) | (
                                                   (0x30U 
                                                    & ((IData)(vlSelf->top__DOT___4092_) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->top__DOT___1591_) 
                                                       << 3U) 
                                                      | ((4U 
                                                          & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelf->top__DOT___0097_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___1456_)))))) 
                                       + ((0x78U & 
                                           (vlSelf->top__DOT___4434_ 
                                            << 2U)) 
                                          | (7U & (IData)(vlSelf->top__DOT___4529_)))) 
                                      >> 6U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1381(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1381\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x1ffU 
                                               & (vlSelf->top__DOT___4765_[1U] 
                                                  >> 0x14U)))) 
                              << 0x35U) | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT___4765_[1U] 
                                                                >> 0x13U)))) 
                                            << 0x34U) 
                                           | (((QData)((IData)(
                                                               (0x3fU 
                                                                & (vlSelf->top__DOT___4765_[1U] 
                                                                   >> 0xdU)))) 
                                               << 0x2eU) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___4224_ 
                                                                              >> 0x2bU))))) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT___4765_[1U] 
                                                                         >> 4U)))) 
                                                     << 0x25U) 
                                                    | (((QData)((IData)(
                                                                        (0x1ffffU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___4224_ 
                                                                                >> 0x19U))))) 
                                                        << 0x14U) 
                                                       | (QData)((IData)(
                                                                         ((0x80000U 
                                                                           & (vlSelf->top__DOT___4336_ 
                                                                              << 0x12U)) 
                                                                          | ((0x7ffc0U 
                                                                              & (vlSelf->top__DOT___4765_[0U] 
                                                                                << 1U)) 
                                                                             | (0x1fU 
                                                                                & vlSelf->top__DOT___4765_[0U]))))))))))));
    __Vtemp_1[1U] = ((0x80000000U & (vlSelf->top__DOT___4765_[1U] 
                                     << 2U)) | (IData)(
                                                       ((((QData)((IData)(
                                                                          (0x1ffU 
                                                                           & (vlSelf->top__DOT___4765_[1U] 
                                                                              >> 0x14U)))) 
                                                          << 0x35U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->top__DOT___4765_[1U] 
                                                                                >> 0x13U)))) 
                                                             << 0x34U) 
                                                            | (((QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->top__DOT___4765_[1U] 
                                                                                >> 0xdU)))) 
                                                                << 0x2eU) 
                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4224_ 
                                                                                >> 0x2bU))))) 
                                                                   << 0x26U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___4765_[1U] 
                                                                                >> 4U)))) 
                                                                      << 0x25U) 
                                                                     | (((QData)((IData)(
                                                                                (0x1ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4224_ 
                                                                                >> 0x19U))))) 
                                                                         << 0x14U) 
                                                                        | (QData)((IData)(
                                                                                ((0x80000U 
                                                                                & (vlSelf->top__DOT___4336_ 
                                                                                << 0x12U)) 
                                                                                | ((0x7ffc0U 
                                                                                & (vlSelf->top__DOT___4765_[0U] 
                                                                                << 1U)) 
                                                                                | (0x1fU 
                                                                                & vlSelf->top__DOT___4765_[0U]))))))))))) 
                                                        >> 0x20U)));
    vlSelf->top__DOT___4582_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4582_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4582_[2U] = ((0xfffe0000U & 
                                     (vlSelf->top__DOT___4240_[1U] 
                                      << 0xeU)) | (
                                                   ((IData)(vlSelf->top__DOT___3395_) 
                                                    << 0x10U) 
                                                   | ((0xffe0U 
                                                       & ((vlSelf->top__DOT___4240_[1U] 
                                                           << 0xeU) 
                                                          | (0x3fe0U 
                                                             & (vlSelf->top__DOT___4240_[0U] 
                                                                >> 0x12U)))) 
                                                      | (0x1fU 
                                                         & ((0x7ffffffcU 
                                                             & (vlSelf->top__DOT___4765_[2U] 
                                                                << 2U)) 
                                                            | (vlSelf->top__DOT___4765_[1U] 
                                                               >> 0x1eU))))));
    vlSelf->top__DOT___4582_[3U] = ((0xfffc00U & ((
                                                   vlSelf->top__DOT___4240_[2U] 
                                                   << 0xeU) 
                                                  | (0x3c00U 
                                                     & (vlSelf->top__DOT___4240_[1U] 
                                                        >> 0x12U)))) 
                                    | (((IData)(vlSelf->top__DOT___2030_) 
                                        << 9U) | (0x1ffU 
                                                  & (vlSelf->top__DOT___4240_[1U] 
                                                     >> 0x12U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1382(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1382\n"); );
    // Init
    SData/*8:0*/ top__DOT____VdfgTmp_h72abaebe__0;
    top__DOT____VdfgTmp_h72abaebe__0 = 0;
    // Body
    vlSelf->top__DOT___0863_ = (1U & ((((0x1f0000U 
                                         & (vlSelf->top__DOT___4233_[2U] 
                                            << 1U)) 
                                        | (IData)(vlSelf->top__DOT____VdfgTmp_hb4d0fe1b__0)) 
                                       + vlSelf->top__DOT___4540_) 
                                      >> 0x14U));
    vlSelf->top__DOT___1437_ = (1U & ((((0x70000U & 
                                         (vlSelf->top__DOT___4233_[2U] 
                                          << 1U)) | (IData)(vlSelf->top__DOT____VdfgTmp_hb4d0fe1b__0)) 
                                       + ((0x7e000U 
                                           & (vlSelf->top__DOT___4746_[1U] 
                                              << 5U)) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h750874ca__0))) 
                                      >> 0x12U));
    vlSelf->top__DOT___3454_ = (1U & ((((0x10000U & 
                                         (vlSelf->top__DOT___4233_[2U] 
                                          << 1U)) | (IData)(vlSelf->top__DOT____VdfgTmp_hb4d0fe1b__0)) 
                                       + ((0x1e000U 
                                           & (vlSelf->top__DOT___4746_[1U] 
                                              << 5U)) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h750874ca__0))) 
                                      >> 0x10U));
    vlSelf->top__DOT___4409_ = ((0x7fffe00000ULL & vlSelf->top__DOT___4409_) 
                                | (IData)((IData)((
                                                   ((IData)(vlSelf->top__DOT___0863_) 
                                                    << 0x14U) 
                                                   | ((0x80000U 
                                                       & (((0xf0000U 
                                                            & (vlSelf->top__DOT___4233_[2U] 
                                                               << 1U)) 
                                                           | (IData)(vlSelf->top__DOT____VdfgTmp_hb4d0fe1b__0)) 
                                                          + 
                                                          ((0xfe000U 
                                                            & (vlSelf->top__DOT___4746_[1U] 
                                                               << 5U)) 
                                                           | (IData)(vlSelf->top__DOT____VdfgTmp_h750874ca__0)))) 
                                                      | (((IData)(vlSelf->top__DOT___1437_) 
                                                          << 0x12U) 
                                                         | ((0x20000U 
                                                             & (((0x30000U 
                                                                  & (vlSelf->top__DOT___4233_[2U] 
                                                                     << 1U)) 
                                                                 | (IData)(vlSelf->top__DOT____VdfgTmp_hb4d0fe1b__0)) 
                                                                + 
                                                                ((0x3e000U 
                                                                  & (vlSelf->top__DOT___4746_[1U] 
                                                                     << 5U)) 
                                                                 | (IData)(vlSelf->top__DOT____VdfgTmp_h750874ca__0)))) 
                                                            | (((IData)(vlSelf->top__DOT___3454_) 
                                                                << 0x10U) 
                                                               | ((0xf800U 
                                                                   & ((IData)(vlSelf->top__DOT____VdfgTmp_hb4d0fe1b__0) 
                                                                      + 
                                                                      ((0xe000U 
                                                                        & (vlSelf->top__DOT___4746_[1U] 
                                                                           << 5U)) 
                                                                       | (IData)(vlSelf->top__DOT____VdfgTmp_h750874ca__0)))) 
                                                                  | (((IData)(vlSelf->top__DOT___3392_) 
                                                                      << 0xaU) 
                                                                     | ((0x200U 
                                                                         & ((IData)(vlSelf->top__DOT____VdfgTmp_h77fb26b8__0) 
                                                                            + (IData)(vlSelf->top__DOT____VdfgTmp_h3183c95a__0))) 
                                                                        | (((IData)(vlSelf->top__DOT___2974_) 
                                                                            << 8U) 
                                                                           | ((0x80U 
                                                                               & ((IData)(vlSelf->top__DOT____VdfgTmp_hc68afb4c__0) 
                                                                                + (IData)(vlSelf->top__DOT____VdfgTmp_h14821014__0))) 
                                                                              | (((IData)(vlSelf->top__DOT___1874_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT____VdfgTmp_h5e81d6fa__0) 
                                                                                + 
                                                                                ((0x20U 
                                                                                & (vlSelf->top__DOT___4317_[2U] 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h66e715ed__0)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1686_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT____VdfgTmp_hb689c3e0__0) 
                                                                                + (IData)(vlSelf->top__DOT____VdfgTmp_h04c15e02__0))) 
                                                                                | (((IData)(vlSelf->top__DOT___0653_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT____VdfgTmp_h8fdb1bcc__0) 
                                                                                + 
                                                                                ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___4158_) 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->top__DOT___0821_))))))))))))))))))))));
    vlSelf->top__DOT____VdfgTmp_h23b619de__0 = (((IData)(vlSelf->top__DOT___1874_) 
                                                 << 7U) 
                                                | ((0x40U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4409_ 
                                                                >> 5U)) 
                                                       << 6U)) 
                                                   | (((IData)(vlSelf->top__DOT___1686_) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT___2317_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___0204_) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT___2422_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___0856_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___2648_))))))));
    top__DOT____VdfgTmp_h72abaebe__0 = ((0x100U & ((IData)(
                                                           (vlSelf->top__DOT___4409_ 
                                                            >> 7U)) 
                                                   << 8U)) 
                                        | (IData)(vlSelf->top__DOT____VdfgTmp_h23b619de__0));
    vlSelf->top__DOT___0058_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_hc503e0d4__0) 
                                       + (IData)(top__DOT____VdfgTmp_h72abaebe__0)) 
                                      >> 8U));
    vlSelf->top__DOT____VdfgTmp_h115c85aa__0 = (((IData)(vlSelf->top__DOT___2974_) 
                                                 << 9U) 
                                                | (IData)(top__DOT____VdfgTmp_h72abaebe__0));
    vlSelf->top__DOT____VdfgTmp_h5767319e__0 = ((0x400U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___4409_ 
                                                             >> 9U)) 
                                                    << 0xaU)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h115c85aa__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1384(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1384\n"); );
    // Body
    vlSelf->top__DOT___1500_ = (1U & (~ (((~ (((IData)(vlSelf->top__DOT___1219_) 
                                               & (vlSelf->top__DOT___7210_ 
                                                  >> 0xbU)) 
                                              | ((IData)(vlSelf->top__DOT___7202_) 
                                                 & (IData)(vlSelf->top__DOT___0160_)))) 
                                          & (IData)(vlSelf->top__DOT___1938_)) 
                                         | (IData)(vlSelf->top__DOT___1992_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1385(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1385\n"); );
    // Body
    vlSelf->top__DOT___0646_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_h372d59b6__0) 
                                       + (IData)(vlSelf->top__DOT____VdfgTmp_habd1b636__0)) 
                                      >> 2U));
    vlSelf->top__DOT___0667_ = (1U & ((((0x38U & ((IData)(
                                                          (vlSelf->top__DOT___4275_ 
                                                           >> 5U)) 
                                                  << 3U)) 
                                        | (IData)(vlSelf->top__DOT____VdfgTmp_h372d59b6__0)) 
                                       + (IData)(vlSelf->top__DOT____VdfgTmp_h302f01e6__0)) 
                                      >> 5U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1387(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1387\n"); );
    // Body
    vlSelf->top__DOT___2410_ = (1U & (~ (((IData)(vlSelf->top__DOT___2880_) 
                                          & (IData)(vlSelf->top__DOT___1213_)) 
                                         | ((IData)(vlSelf->top__DOT___0276_) 
                                            & (IData)(vlSelf->top__DOT___1731_)))));
    vlSelf->top__DOT____VdfgTmp_hd1f3319a__0 = (((IData)(vlSelf->top__DOT___2410_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0579_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0825_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1388(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1388\n"); );
    // Body
    vlSelf->top__DOT___2384_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_h1af5929d__0) 
                                       + ((4U & (IData)(vlSelf->top__DOT___7095_)) 
                                          | (3U & (IData)(vlSelf->top__DOT___3867_)))) 
                                      >> 2U));
    vlSelf->top__DOT___3279_ = (1U & ((((0x3c00U & 
                                         (vlSelf->top__DOT___3829_[1U] 
                                          >> 7U)) | (IData)(vlSelf->top__DOT____VdfgTmp_h52ddc1ca__0)) 
                                       + (IData)(vlSelf->__VdfgTmp_h3c4ede0c__0)) 
                                      >> 0xdU));
    vlSelf->top__DOT___3444_ = (1U & ((vlSelf->__VdfgTmp_h5d1da824__0 
                                       + ((0x3fc0000U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT___3867_ 
                                                       >> 0x12U)) 
                                              << 0x12U)) 
                                          | vlSelf->top__DOT____VdfgTmp_hd117cc13__0)) 
                                      >> 0x19U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1389(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1389\n"); );
    // Body
    vlSelf->top__DOT___4631_[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0917_)) 
                                             << 0x22U) 
                                            | (((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___0063_) 
                                                                   << 0x1fU) 
                                                                  | (((IData)(vlSelf->top__DOT___1971_) 
                                                                      << 0x1eU) 
                                                                     | ((0x20000000U 
                                                                         & ((~ (IData)(vlSelf->top__DOT___1295_)) 
                                                                            << 0x1dU)) 
                                                                        | ((0x10000000U 
                                                                            & ((IData)(vlSelf->top__DOT___7095_) 
                                                                               << 0x15U)) 
                                                                           | ((0x8000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3867_ 
                                                                                >> 6U)) 
                                                                                << 0x1bU)) 
                                                                              | (((IData)(vlSelf->top__DOT___2405_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3867_ 
                                                                                >> 4U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7095_) 
                                                                                << 0x15U)) 
                                                                                | ((0x600000U 
                                                                                & ((IData)(vlSelf->top__DOT___3867_) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___6963_) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___7130_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0816_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0107_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0137_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1980_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1885_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0484_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2200_)))))))))))))))))))))));
    vlSelf->top__DOT___4631_[1U] = ((0xfffffff8U & 
                                     vlSelf->top__DOT___4631_[1U]) 
                                    | (IData)(((((QData)((IData)(vlSelf->top__DOT___0917_)) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0063_) 
                                                                       << 0x1fU) 
                                                                      | (((IData)(vlSelf->top__DOT___1971_) 
                                                                          << 0x1eU) 
                                                                         | ((0x20000000U 
                                                                             & ((~ (IData)(vlSelf->top__DOT___1295_)) 
                                                                                << 0x1dU)) 
                                                                            | ((0x10000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7095_) 
                                                                                << 0x15U)) 
                                                                               | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3867_ 
                                                                                >> 6U)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2405_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3867_ 
                                                                                >> 4U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7095_) 
                                                                                << 0x15U)) 
                                                                                | ((0x600000U 
                                                                                & ((IData)(vlSelf->top__DOT___3867_) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___6963_) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___7130_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0816_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0107_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0137_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1980_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1885_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0484_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2200_)))))))))))))))))))))) 
                                               >> 0x20U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1392(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1392\n"); );
    // Body
    vlSelf->top__DOT___1517_ = (1U & ((((0x38000000U 
                                         & ((IData)(vlSelf->top__DOT____VdfgTmp_hab01eb0a__0) 
                                            << 0x1bU)) 
                                        | vlSelf->top__DOT____VdfgTmp_hce855002__0) 
                                       + ((0x3ffc0000U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT___3867_ 
                                                       >> 0x12U)) 
                                              << 0x12U)) 
                                          | vlSelf->top__DOT____VdfgTmp_hd117cc13__0)) 
                                      >> 0x1dU));
    vlSelf->top__DOT___3866_ = (((QData)((IData)((0x3fU 
                                                  & (IData)(
                                                            (0x3fULL 
                                                             & (((((QData)((IData)(vlSelf->top__DOT____VdfgTmp_hab01eb0a__0)) 
                                                                   << 0x1bU) 
                                                                  | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hce855002__0))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (0x3ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3867_ 
                                                                                >> 0x12U))))) 
                                                                   << 0x12U) 
                                                                  | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hd117cc13__0)))) 
                                                                >> 0x1eU)))))) 
                                 << 0x1eU) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1517_) 
                                                               << 0x1dU) 
                                                              | ((0x1c000000U 
                                                                  & (((0x18000000U 
                                                                       & ((IData)(vlSelf->top__DOT____VdfgTmp_hab01eb0a__0) 
                                                                          << 0x1bU)) 
                                                                      | vlSelf->top__DOT____VdfgTmp_hce855002__0) 
                                                                     + 
                                                                     ((0x1ffc0000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3867_ 
                                                                                >> 0x12U)) 
                                                                          << 0x12U)) 
                                                                      | vlSelf->top__DOT____VdfgTmp_hd117cc13__0))) 
                                                                 | (((IData)(vlSelf->top__DOT___3444_) 
                                                                     << 0x19U) 
                                                                    | ((0x1ffc000U 
                                                                        & (((0x1f80000U 
                                                                             & (vlSelf->top__DOT___3829_[1U] 
                                                                                >> 7U)) 
                                                                            | (((IData)(vlSelf->top__DOT____VdfgTmp_h7be3d6bc__0) 
                                                                                << 4U) 
                                                                               | (IData)(vlSelf->top__DOT____VdfgTmp_h612f208f__0))) 
                                                                           + 
                                                                           ((0x1fc0000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3867_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                            | vlSelf->top__DOT____VdfgTmp_hd117cc13__0))) 
                                                                       | (((IData)(vlSelf->top__DOT___3279_) 
                                                                           << 0xdU) 
                                                                          | ((0x1ff8U 
                                                                              & (((0x1c00U 
                                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                                >> 7U)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h52ddc1ca__0)) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT____VdfgTmp_hfcde9399__0) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h6647c8d5__0)))) 
                                                                             | (((IData)(vlSelf->top__DOT___2384_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT____VdfgTmp_h1becd27f__0) 
                                                                                + (IData)(vlSelf->top__DOT___3867_)))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1394(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1394\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h7162c88f__0 = (0x1ffU 
                                                & ((vlSelf->top__DOT____VdfgTmp_hdc35411d__0 
                                                    + 
                                                    ((0xff000U 
                                                      & ((IData)(vlSelf->top__DOT___3820_) 
                                                         << 5U)) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_h0a1ba4ec__0))) 
                                                   >> 0xbU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1397(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1397\n"); );
    // Body
    vlSelf->top__DOT___3634_ = (1U & ((((0x800000U 
                                         & vlSelf->top__DOT___4580_) 
                                        | ((0x200000U 
                                            & vlSelf->top__DOT___4580_) 
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
                                                                         >> 1U)))))))))))) 
                                       + ((0x1ff000U 
                                           & ((IData)(vlSelf->top__DOT___3820_) 
                                              << 5U)) 
                                          | ((0xfe0U 
                                              & (vlSelf->top__DOT___3894_ 
                                                 >> 0xaU)) 
                                             | (((IData)(vlSelf->top__DOT___2789_) 
                                                 << 4U) 
                                                | (0xfU 
                                                   & (vlSelf->top__DOT___3894_ 
                                                      >> 0xaU)))))) 
                                      >> 0x14U));
    vlSelf->top__DOT___3633_ = (1U & (((IData)(vlSelf->top__DOT___7206_) 
                                       >> 2U) ^ (IData)(vlSelf->top__DOT___3634_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1398(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1398\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h9099783c__0 = (0xffU 
                                                & ((((0x1e000000U 
                                                      & vlSelf->top__DOT___4580_) 
                                                     | ((0x800000U 
                                                         & vlSelf->top__DOT___4580_) 
                                                        | ((0x200000U 
                                                            & vlSelf->top__DOT___4580_) 
                                                           | (((IData)(vlSelf->top__DOT___0640_) 
                                                               << 0x14U) 
                                                              | vlSelf->top__DOT____VdfgTmp_hdc35411d__0)))) 
                                                    + 
                                                    (((IData)(vlSelf->top__DOT___3803_) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->top__DOT____VdfgTmp_h18ab4ce9__0) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->top__DOT___2419_) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSelf->top__DOT____VdfgTmp_h30f8ec0e__0) 
                                                               << 0x16U) 
                                                              | (((IData)(vlSelf->top__DOT____VdfgTmp_ha07ef2a2__0) 
                                                                  << 0x15U) 
                                                                 | ((0x1ff000U 
                                                                     & ((IData)(vlSelf->top__DOT___3820_) 
                                                                        << 5U)) 
                                                                    | (IData)(vlSelf->top__DOT____VdfgTmp_h0a1ba4ec__0)))))))) 
                                                   >> 0x15U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1399(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1399\n"); );
    // Init
    CData/*0:0*/ top__DOT___2231_;
    top__DOT___2231_ = 0;
    SData/*8:0*/ top__DOT____VdfgTmp_h8309804b__0;
    top__DOT____VdfgTmp_h8309804b__0 = 0;
    // Body
    top__DOT___2231_ = (1U & (~ (((IData)(vlSelf->top__DOT___3200_) 
                                  & (IData)(vlSelf->top__DOT___0311_)) 
                                 | (((IData)(vlSelf->top__DOT___7219_) 
                                     >> 3U) & (IData)(vlSelf->top__DOT___0046_)))));
    vlSelf->top__DOT___1294_ = (1U & (~ (((IData)(top__DOT___2231_) 
                                          & (IData)(vlSelf->top__DOT___0563_)) 
                                         | (IData)(vlSelf->top__DOT___2605_))));
    vlSelf->top__DOT____VdfgTmp_h7fc7b0bc__0 = ((0x20U 
                                                 & (vlSelf->top__DOT___3823_ 
                                                    >> 6U)) 
                                                | ((0x1eU 
                                                    & ((IData)(vlSelf->top__DOT___7150_) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->top__DOT___1294_)));
    vlSelf->top__DOT___0610_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_he6756e4a__0) 
                                       + ((0xc0U & 
                                           ((IData)(vlSelf->top__DOT___7150_) 
                                            << 1U)) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h7fc7b0bc__0))) 
                                      >> 7U));
    top__DOT____VdfgTmp_h8309804b__0 = ((0x1c0U & ((IData)(vlSelf->top__DOT___7150_) 
                                                   << 1U)) 
                                        | (IData)(vlSelf->top__DOT____VdfgTmp_h7fc7b0bc__0));
    vlSelf->top__DOT___2292_ = (1U & ((((0x100U & ((IData)(
                                                           (vlSelf->top__DOT___4557_ 
                                                            >> 0x13U)) 
                                                   << 8U)) 
                                        | (IData)(vlSelf->top__DOT____VdfgTmp_he6756e4a__0)) 
                                       + (IData)(top__DOT____VdfgTmp_h8309804b__0)) 
                                      >> 8U));
    vlSelf->top__DOT____VdfgTmp_hf9c30f98__0 = (((IData)(vlSelf->top__DOT___1209_) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->top__DOT___2121_) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->top__DOT___1861_) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->top__DOT___0858_) 
                                                          << 0xbU) 
                                                         | ((0x600U 
                                                             & (vlSelf->top__DOT___3823_ 
                                                                >> 6U)) 
                                                            | (IData)(top__DOT____VdfgTmp_h8309804b__0))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1400(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1400\n"); );
    // Body
    vlSelf->top__DOT___3351_ = (1U & (IData)((0xffffffffULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___4438_ 
                                                                               >> 0x2aU)) 
                                                                      << 0x1eU) 
                                                                     | (((IData)(vlSelf->top__DOT___0926_) 
                                                                         << 0x1dU) 
                                                                        | ((0x1fffffc0U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___4438_ 
                                                                                >> 0x12U)) 
                                                                               << 6U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0793_) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->top__DOT___2372_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1038_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1282_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0765_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                >> 6U)))))))))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___2706_) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->top__DOT___3200_) 
                                                                          << 6U) 
                                                                         | ((0x30U 
                                                                             & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                << 2U)) 
                                                                            | (((IData)(vlSelf->top__DOT___1591_) 
                                                                                << 3U) 
                                                                               | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1456_)))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->top__DOT___4263_ 
                                                                        >> 0xbU)))) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0860_)) 
                                                       << 0x24U) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                          << 0x23U) 
                                                         | (((QData)((IData)(
                                                                             (((IData)(
                                                                                (vlSelf->top__DOT___4529_ 
                                                                                >> 0x22U)) 
                                                                               << 0x1fU) 
                                                                              | ((0x7fe00000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3267_) 
                                                                                << 0x14U) 
                                                                                | ((0xf8000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2937_) 
                                                                                << 0xeU) 
                                                                                | ((0x3000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___4434_ 
                                                                                >> 1U)))))))))) 
                                                             << 3U) 
                                                            | (QData)((IData)(
                                                                              (7U 
                                                                               & (IData)(vlSelf->top__DOT___4529_))))))))) 
                                                 >> 8U))));
    vlSelf->top__DOT___2730_ = (1U & (IData)((0x7fULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___4438_ 
                                                                               >> 0x2aU)) 
                                                                      << 0x1eU) 
                                                                     | (((IData)(vlSelf->top__DOT___0926_) 
                                                                         << 0x1dU) 
                                                                        | ((0x1fffffc0U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___4438_ 
                                                                                >> 0x12U)) 
                                                                               << 6U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0793_) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->top__DOT___2372_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1038_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1282_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0765_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                >> 6U)))))))))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___2706_) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->top__DOT___3200_) 
                                                                          << 6U) 
                                                                         | ((0x30U 
                                                                             & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                << 2U)) 
                                                                            | (((IData)(vlSelf->top__DOT___1591_) 
                                                                                << 3U) 
                                                                               | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1456_)))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->top__DOT___4263_ 
                                                                        >> 0xbU)))) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0860_)) 
                                                       << 0x24U) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                          << 0x23U) 
                                                         | (((QData)((IData)(
                                                                             (((IData)(
                                                                                (vlSelf->top__DOT___4529_ 
                                                                                >> 0x22U)) 
                                                                               << 0x1fU) 
                                                                              | ((0x7fe00000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3267_) 
                                                                                << 0x14U) 
                                                                                | ((0xf8000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2937_) 
                                                                                << 0xeU) 
                                                                                | ((0x3000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___4434_ 
                                                                                >> 1U)))))))))) 
                                                             << 3U) 
                                                            | (QData)((IData)(
                                                                              (7U 
                                                                               & (IData)(vlSelf->top__DOT___4529_))))))))) 
                                                 >> 0x21U))));
    vlSelf->top__DOT___0454_ = (1U & (IData)((0x3fffULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___4438_ 
                                                                               >> 0x2aU)) 
                                                                      << 0x1eU) 
                                                                     | (((IData)(vlSelf->top__DOT___0926_) 
                                                                         << 0x1dU) 
                                                                        | ((0x1fffffc0U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___4438_ 
                                                                                >> 0x12U)) 
                                                                               << 6U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0793_) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->top__DOT___2372_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1038_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1282_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0765_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                >> 6U)))))))))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___2706_) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->top__DOT___3200_) 
                                                                          << 6U) 
                                                                         | ((0x30U 
                                                                             & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                << 2U)) 
                                                                            | (((IData)(vlSelf->top__DOT___1591_) 
                                                                                << 3U) 
                                                                               | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1456_)))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->top__DOT___4263_ 
                                                                        >> 0xbU)))) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0860_)) 
                                                       << 0x24U) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                          << 0x23U) 
                                                         | (((QData)((IData)(
                                                                             (((IData)(
                                                                                (vlSelf->top__DOT___4529_ 
                                                                                >> 0x22U)) 
                                                                               << 0x1fU) 
                                                                              | ((0x7fe00000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3267_) 
                                                                                << 0x14U) 
                                                                                | ((0xf8000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2937_) 
                                                                                << 0xeU) 
                                                                                | ((0x3000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___4434_ 
                                                                                >> 1U)))))))))) 
                                                             << 3U) 
                                                            | (QData)((IData)(
                                                                              (7U 
                                                                               & (IData)(vlSelf->top__DOT___4529_))))))))) 
                                                 >> 0x1aU))));
    vlSelf->top__DOT___4168_ = ((1U & vlSelf->top__DOT___4168_) 
                                | ((0x3f0000U & ((IData)(
                                                         (0x3fULL 
                                                          & (((((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4438_ 
                                                                                >> 0x2aU)) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___0926_) 
                                                                                << 0x1dU) 
                                                                                | ((0x1fffffc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4438_ 
                                                                                >> 0x12U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0793_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2372_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1038_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1282_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0765_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                >> 6U)))))))))))) 
                                                                << 8U) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2706_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___3200_) 
                                                                                << 6U) 
                                                                                | ((0x30U 
                                                                                & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1591_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1456_)))))))))) 
                                                              + 
                                                              (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4263_ 
                                                                                >> 0xbU)))) 
                                                                << 0x25U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___0860_)) 
                                                                   << 0x24U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4529_ 
                                                                                >> 0x22U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x7fe00000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3267_) 
                                                                                << 0x14U) 
                                                                                | ((0xf8000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2937_) 
                                                                                << 0xeU) 
                                                                                | ((0x3000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___4434_ 
                                                                                >> 1U)))))))))) 
                                                                         << 3U) 
                                                                        | (QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(vlSelf->top__DOT___4529_))))))))) 
                                                             >> 0x22U))) 
                                                 << 0x10U)) 
                                   | (((IData)(vlSelf->top__DOT___2730_) 
                                       << 0xfU) | (
                                                   (0x7e00U 
                                                    & ((IData)(
                                                               (0x1fffULL 
                                                                & (((((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4438_ 
                                                                                >> 0x2aU)) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___0926_) 
                                                                                << 0x1dU) 
                                                                                | ((0x1fffffc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4438_ 
                                                                                >> 0x12U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0793_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2372_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1038_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1282_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0765_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                >> 6U)))))))))))) 
                                                                      << 8U) 
                                                                     | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2706_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___3200_) 
                                                                                << 6U) 
                                                                                | ((0x30U 
                                                                                & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1591_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1456_)))))))))) 
                                                                    + 
                                                                    (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4263_ 
                                                                                >> 0xbU)))) 
                                                                      << 0x25U) 
                                                                     | (((QData)((IData)(vlSelf->top__DOT___0860_)) 
                                                                         << 0x24U) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                                            << 0x23U) 
                                                                           | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4529_ 
                                                                                >> 0x22U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x7fe00000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3267_) 
                                                                                << 0x14U) 
                                                                                | ((0xf8000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2937_) 
                                                                                << 0xeU) 
                                                                                | ((0x3000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___4434_ 
                                                                                >> 1U)))))))))) 
                                                                               << 3U) 
                                                                              | (QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(vlSelf->top__DOT___4529_))))))))) 
                                                                   >> 0x1bU))) 
                                                       << 9U)) 
                                                   | (((IData)(vlSelf->top__DOT___0454_) 
                                                       << 8U) 
                                                      | (0xfeU 
                                                         & ((IData)(
                                                                    (0x1fffffULL 
                                                                     & (((((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4438_ 
                                                                                >> 0x2aU)) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___0926_) 
                                                                                << 0x1dU) 
                                                                                | ((0x1fffffc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4438_ 
                                                                                >> 0x12U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0793_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2372_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1038_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1282_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0765_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                >> 6U)))))))))))) 
                                                                           << 8U) 
                                                                          | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2706_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___3200_) 
                                                                                << 6U) 
                                                                                | ((0x30U 
                                                                                & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1591_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1456_)))))))))) 
                                                                         + 
                                                                         (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4263_ 
                                                                                >> 0xbU)))) 
                                                                           << 0x25U) 
                                                                          | (((QData)((IData)(vlSelf->top__DOT___0860_)) 
                                                                              << 0x24U) 
                                                                             | (((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4529_ 
                                                                                >> 0x22U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x7fe00000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3267_) 
                                                                                << 0x14U) 
                                                                                | ((0xf8000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2937_) 
                                                                                << 0xeU) 
                                                                                | ((0x3000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___4434_ 
                                                                                >> 1U)))))))))) 
                                                                                << 3U) 
                                                                                | (QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(vlSelf->top__DOT___4529_))))))))) 
                                                                        >> 0x13U))) 
                                                            << 1U)))))));
    vlSelf->top__DOT___4566_ = (((QData)((IData)((0x3fU 
                                                  & (vlSelf->top__DOT___4168_ 
                                                     >> 0x10U)))) 
                                 << 0x22U) | (((QData)((IData)(vlSelf->top__DOT___2730_)) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & (vlSelf->top__DOT___4168_ 
                                                                      >> 9U)))) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT___0454_) 
                                                                     << 0x1aU) 
                                                                    | ((0x3f80000U 
                                                                        & (vlSelf->top__DOT___4168_ 
                                                                           << 0x12U)) 
                                                                       | ((0x7fe00U 
                                                                           & ((IData)(
                                                                                (0x7fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4438_ 
                                                                                >> 0x2aU)) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___0926_) 
                                                                                << 0x1dU) 
                                                                                | ((0x1fffffc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4438_ 
                                                                                >> 0x12U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0793_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2372_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1038_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1282_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0765_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                >> 6U)))))))))))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2706_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___3200_) 
                                                                                << 6U) 
                                                                                | ((0x30U 
                                                                                & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1591_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1456_)))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4263_ 
                                                                                >> 0xbU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0860_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4529_ 
                                                                                >> 0x22U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x7fe00000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3267_) 
                                                                                << 0x14U) 
                                                                                | ((0xf8000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2937_) 
                                                                                << 0xeU) 
                                                                                | ((0x3000U 
                                                                                & (vlSelf->top__DOT___4296_ 
                                                                                << 0xcU)) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___4434_ 
                                                                                >> 1U)))))))))) 
                                                                                << 3U) 
                                                                                | (QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(vlSelf->top__DOT___4529_))))))))) 
                                                                                >> 9U))) 
                                                                              << 9U)) 
                                                                          | (((IData)(vlSelf->top__DOT___3351_) 
                                                                              << 8U) 
                                                                             | ((0x80U 
                                                                                & ((((IData)(vlSelf->top__DOT___2706_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___3200_) 
                                                                                << 6U) 
                                                                                | ((0x30U 
                                                                                & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1591_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1456_))))))) 
                                                                                + 
                                                                                ((0xf8U 
                                                                                & (vlSelf->top__DOT___4434_ 
                                                                                << 2U)) 
                                                                                | (7U 
                                                                                & (IData)(vlSelf->top__DOT___4529_))))) 
                                                                                | (((IData)(vlSelf->top__DOT___2838_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & (((0x30U 
                                                                                & ((IData)(vlSelf->top__DOT___4092_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1591_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1456_))))) 
                                                                                + 
                                                                                ((0x38U 
                                                                                & (vlSelf->top__DOT___4434_ 
                                                                                << 2U)) 
                                                                                | (7U 
                                                                                & (IData)(vlSelf->top__DOT___4529_))))))))))))))));
    vlSelf->top__DOT____VdfgTmp_hb063e19c__0 = (((IData)(vlSelf->top__DOT___3351_) 
                                                 << 0x11U) 
                                                | ((0x10000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4566_ 
                                                                >> 7U)) 
                                                       << 0x10U)) 
                                                   | (((IData)(vlSelf->top__DOT___2838_) 
                                                       << 0xfU) 
                                                      | ((0x7e00U 
                                                          & ((IData)(vlSelf->top__DOT___4566_) 
                                                             << 9U)) 
                                                         | (((IData)(vlSelf->top__DOT___1672_) 
                                                             << 8U) 
                                                            | (((IData)(vlSelf->top__DOT___1128_) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->top__DOT___0366_) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->top__DOT___7006_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___0318_)))))))));
    vlSelf->top__DOT____VdfgTmp_h9c118fcc__0 = (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___4739_[0U] 
                                                                     >> 0x11U)))) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->top__DOT___4555_[0U] 
                                                                        >> 0xdU)))) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       (3U 
                                                                        & (vlSelf->top__DOT___4223_ 
                                                                           >> 0x15U)))) 
                                                       << 0x32U) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0032_)) 
                                                          << 0x31U) 
                                                         | (((QData)((IData)(
                                                                             (0x3fU 
                                                                              & (vlSelf->top__DOT___4168_ 
                                                                                >> 0x10U)))) 
                                                             << 0x2bU) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___2730_)) 
                                                                << 0x2aU) 
                                                               | (((QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->top__DOT___4168_ 
                                                                                >> 9U)))) 
                                                                   << 0x24U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___0454_)) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & (vlSelf->top__DOT___4168_ 
                                                                                >> 1U)))) 
                                                                         << 0x1cU) 
                                                                        | (QData)((IData)(
                                                                                ((0xffc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4566_ 
                                                                                >> 9U)) 
                                                                                << 0x12U)) 
                                                                                | vlSelf->top__DOT____VdfgTmp_hb063e19c__0))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1402(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1402\n"); );
    // Body
    vlSelf->top__DOT___3948_ = ((0xf8U & ((IData)((0xffffffffULL 
                                                   & ((((((QData)((IData)(
                                                                          ((0x3fff0U 
                                                                            & (vlSelf->top__DOT___4583_[1U] 
                                                                               >> 7U)) 
                                                                           | (((4U 
                                                                                & (vlSelf->top__DOT___4583_[1U] 
                                                                                >> 7U)) 
                                                                               | (2U 
                                                                                & (vlSelf->top__DOT___4766_[0U] 
                                                                                >> 0x1dU))) 
                                                                              | (IData)(vlSelf->top__DOT___1006_))))) 
                                                          << 0x27U) 
                                                         | ((QData)((IData)(
                                                                            ((0xfc000000U 
                                                                              & (vlSelf->top__DOT___4278_ 
                                                                                << 0xcU)) 
                                                                             | (((IData)(vlSelf->top__DOT___3709_) 
                                                                                << 0x19U) 
                                                                                | ((0x1c00000U 
                                                                                & (vlSelf->top__DOT___4278_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2963_) 
                                                                                << 0x15U) 
                                                                                | ((0x1fc000U 
                                                                                & (vlSelf->top__DOT___4278_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2124_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___4278_ 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1aU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0xaU) 
                                                                                | ((0x3feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3898_ 
                                                                                >> 0x1bU)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1308_))))))))))))) 
                                                            << 7U)) 
                                                        | (QData)((IData)(
                                                                          ((0x78U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3898_ 
                                                                                >> 0x16U)) 
                                                                               << 3U)) 
                                                                           | ((6U 
                                                                               & ((IData)(vlSelf->top__DOT___3838_) 
                                                                                >> 5U)) 
                                                                              | (IData)(vlSelf->top__DOT___1735_)))))) 
                                                       + 
                                                       ((((QData)((IData)(
                                                                          (0xfffffU 
                                                                           & ((0x1ff0000U 
                                                                               & (vlSelf->top__DOT___4582_[1U] 
                                                                                >> 5U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->top__DOT___4765_[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x7e00U 
                                                                                & (vlSelf->top__DOT___4582_[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x1feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4224_ 
                                                                                >> 0x2bU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4765_[1U] 
                                                                                >> 4U))))))))) 
                                                          << 0x25U) 
                                                         | ((QData)((IData)(
                                                                            (((IData)(
                                                                                (vlSelf->top__DOT___4224_ 
                                                                                >> 0x19U)) 
                                                                              << 0xfU) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT___4336_ 
                                                                                << 0xdU)) 
                                                                                | (0x3ffeU 
                                                                                & (vlSelf->top__DOT___4582_[0U] 
                                                                                >> 5U)))))) 
                                                            << 5U)) 
                                                        | (QData)((IData)(
                                                                          ((0x1eU 
                                                                            & vlSelf->top__DOT___4582_[0U]) 
                                                                           | (1U 
                                                                              & vlSelf->top__DOT___4765_[0U])))))) 
                                                      >> 0x19U))) 
                                          << 3U)) | 
                                (((IData)(vlSelf->top__DOT___0561_) 
                                  << 2U) | (((IData)(vlSelf->top__DOT___0236_) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT___1200_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1403(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1403\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h4e93e432__0 = ((0x1c000U 
                                                 & (((((IData)(vlSelf->top__DOT___3366_) 
                                                       << 0xdU) 
                                                      | ((0x1e00U 
                                                          & ((vlSelf->top__DOT___3817_[1U] 
                                                              << 0xcU) 
                                                             | (0xe00U 
                                                                & (vlSelf->top__DOT___3817_[0U] 
                                                                   >> 0x14U)))) 
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_hc503e0d4__0))) 
                                                     + 
                                                     ((0x3000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___4409_ 
                                                                   >> 0xbU)) 
                                                          << 0xcU)) 
                                                      | (((IData)(vlSelf->top__DOT___3392_) 
                                                          << 0xbU) 
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_h5767319e__0)))) 
                                                    << 3U)) 
                                                | ((0x2000U 
                                                    & ((((0x600U 
                                                          & (vlSelf->top__DOT___3817_[0U] 
                                                             >> 0x14U)) 
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_hc503e0d4__0)) 
                                                        + (IData)(vlSelf->top__DOT____VdfgTmp_h5767319e__0)) 
                                                       << 3U)) 
                                                   | ((0x1000U 
                                                       & ((((0x200U 
                                                             & (vlSelf->top__DOT___3817_[0U] 
                                                                >> 0x14U)) 
                                                            | (IData)(vlSelf->top__DOT____VdfgTmp_hc503e0d4__0)) 
                                                           + (IData)(vlSelf->top__DOT____VdfgTmp_h115c85aa__0)) 
                                                          << 3U)) 
                                                      | (((IData)(vlSelf->top__DOT___0058_) 
                                                          << 0xbU) 
                                                         | ((0x7f8U 
                                                             & (((IData)(vlSelf->top__DOT____VdfgTmp_h401fa367__0) 
                                                                 + (IData)(vlSelf->top__DOT____VdfgTmp_h23b619de__0)) 
                                                                << 3U)) 
                                                            | (((IData)(vlSelf->top__DOT___1482_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___1828_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___0308_))))))));
    vlSelf->top__DOT____VdfgTmp_h60d03f84__0 = (((IData)(vlSelf->top__DOT___1290_) 
                                                 << 0x11U) 
                                                | vlSelf->top__DOT____VdfgTmp_h4e93e432__0);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1404(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1404\n"); );
    // Body
    vlSelf->top__DOT___4209_ = ((1U & (IData)(vlSelf->top__DOT___4209_)) 
                                | ((0x7ff8U & (vlSelf->top__DOT___7081_[1U] 
                                               << 1U)) 
                                   | (((IData)(vlSelf->top__DOT___1500_) 
                                       << 2U) | ((IData)(vlSelf->top__DOT___0054_) 
                                                 << 1U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1408(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1408\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h9c90059d__0 = (0x1fffffffffULL 
                                                & ((0x1000000000ULL 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT___3906_[3U] 
                                                                            >> 0x1bU)))) 
                                                        << 0x22U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                           << 0x21U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___1432_)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___0482_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3969_ 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x30000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7024_) 
                                                                                << 0x11U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3969_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7024_) 
                                                                                << 0x11U)) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3969_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7024_) 
                                                                                << 0x11U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3969_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(vlSelf->top__DOT___7024_) 
                                                                                << 0x11U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3969_ 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3759_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3969_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2438_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___7074_) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1378_) 
                                                                                << 0xdU) 
                                                                                | ((0x1c00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 9U) 
                                                                                | ((0x1c0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0904_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1051_))))))))))))))))))))))))))))))) 
                                                   + 
                                                   (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h9099783c__0)) 
                                                     << 0x1dU) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->top__DOT___3634_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT____VdfgTmp_h7162c88f__0) 
                                                                           << 0x13U) 
                                                                          | ((0x70000U 
                                                                              & (((vlSelf->top__DOT___4085_ 
                                                                                >> 1U) 
                                                                                + 
                                                                                ((0x7e0U 
                                                                                & (vlSelf->top__DOT___3894_ 
                                                                                >> 0xaU)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h6bc39b6f__0))) 
                                                                                << 8U)) 
                                                                             | ((0x8000U 
                                                                                & (((vlSelf->top__DOT___4085_ 
                                                                                >> 1U) 
                                                                                + 
                                                                                ((0xe0U 
                                                                                & (vlSelf->top__DOT___3894_ 
                                                                                >> 0xaU)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h6bc39b6f__0))) 
                                                                                << 8U)) 
                                                                                | ((0x6000U 
                                                                                & (((vlSelf->top__DOT___4085_ 
                                                                                >> 1U) 
                                                                                + 
                                                                                ((0x60U 
                                                                                & (vlSelf->top__DOT___3894_ 
                                                                                >> 0xaU)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h6bc39b6f__0))) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0301_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (((vlSelf->top__DOT___4085_ 
                                                                                >> 1U) 
                                                                                + 
                                                                                (vlSelf->top__DOT___3894_ 
                                                                                >> 0xaU)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0569_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1844_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___3491_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___3825_[2U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0806_) 
                                                                                << 6U) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->top__DOT___3825_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3580_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___3457_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0036_)))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1410(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1410\n"); );
    // Body
    vlSelf->top__DOT___3881_ = ((0x1ffffffffffULL & vlSelf->top__DOT___3881_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___1200_) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->top__DOT___0245_) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->top__DOT___1294_) 
                                                           << 0xeU) 
                                                          | (((IData)(vlSelf->top__DOT___0493_) 
                                                              << 0xdU) 
                                                             | (0x1fffU 
                                                                & ((0x1f800U 
                                                                    & ((IData)(vlSelf->top__DOT___1249_) 
                                                                       << 0xbU)) 
                                                                   | ((0x1fc00U 
                                                                       & ((IData)(vlSelf->top__DOT___0439_) 
                                                                          << 0xaU)) 
                                                                      | ((0x1fe00U 
                                                                          & ((IData)(vlSelf->top__DOT___1201_) 
                                                                             << 9U)) 
                                                                         | ((0x1ff00U 
                                                                             & ((IData)(vlSelf->top__DOT___0079_) 
                                                                                << 8U)) 
                                                                            | ((0x1ff80U 
                                                                                & ((IData)(vlSelf->top__DOT___2129_) 
                                                                                << 7U)) 
                                                                               | ((0x1ffc0U 
                                                                                & ((IData)(vlSelf->top__DOT___0444_) 
                                                                                << 6U)) 
                                                                                | ((0x1ffe0U 
                                                                                & ((IData)(vlSelf->top__DOT___0276_) 
                                                                                << 5U)) 
                                                                                | ((0x1fff0U 
                                                                                & ((IData)(vlSelf->top__DOT___1369_) 
                                                                                << 4U)) 
                                                                                | ((0x1fff8U 
                                                                                & ((IData)(vlSelf->top__DOT___1837_) 
                                                                                << 3U)) 
                                                                                | ((0x1fffcU 
                                                                                & ((IData)(vlSelf->top__DOT___0651_) 
                                                                                << 2U)) 
                                                                                | ((0x1fffeU 
                                                                                & ((IData)(vlSelf->top__DOT___1442_) 
                                                                                << 1U)) 
                                                                                | ((0x1ffffU 
                                                                                & (IData)(vlSelf->top__DOT___2410_)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0696_) 
                                                                                >> 1U)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0485_) 
                                                                                >> 2U)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0528_) 
                                                                                >> 3U)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___2563_) 
                                                                                >> 4U)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___2614_) 
                                                                                >> 0xbU)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0122_) 
                                                                                >> 0xcU)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1004_) 
                                                                                >> 0xdU)) 
                                                                                | ((IData)(vlSelf->top__DOT___0451_) 
                                                                                >> 0xfU))))))))))))))))))))))))))) 
                                   << 0x29U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1411(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1411\n"); );
    // Body
    vlSelf->top__DOT___3056_ = (1U & (((((IData)(vlSelf->top__DOT___3630_) 
                                         << 0x10U) 
                                        | (IData)(vlSelf->top__DOT____VdfgTmp_heb33be86__0)) 
                                       + ((0x18000U 
                                           & (vlSelf->top__DOT___7178_[0U] 
                                              << 0xfU)) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_hf9c30f98__0))) 
                                      >> 0x10U));
    vlSelf->top__DOT___4216_ = ((0x1ffffc0001ULL & vlSelf->top__DOT___4216_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___3056_) 
                                                     << 0x10U) 
                                                    | ((0xfe00U 
                                                        & ((IData)(vlSelf->top__DOT____VdfgTmp_heb33be86__0) 
                                                           + 
                                                           ((0x8000U 
                                                             & (vlSelf->top__DOT___7178_[0U] 
                                                                << 0xfU)) 
                                                            | (IData)(vlSelf->top__DOT____VdfgTmp_hf9c30f98__0)))) 
                                                       | (((IData)(vlSelf->top__DOT___2292_) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->top__DOT___0610_) 
                                                              << 7U) 
                                                             | (0x7fU 
                                                                & ((IData)(vlSelf->top__DOT____VdfgTmp_hd274abc0__0) 
                                                                   + 
                                                                   ((0x40U 
                                                                     & ((IData)(vlSelf->top__DOT___7150_) 
                                                                        << 1U)) 
                                                                    | (IData)(vlSelf->top__DOT____VdfgTmp_h7fc7b0bc__0)))))))))) 
                                   << 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1414(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1414\n"); );
    // Body
    vlSelf->top__DOT___4180_ = (0xffffffU & ((0x100U 
                                              | ((0x800000U 
                                                  & (vlSelf->top__DOT___7212_ 
                                                     << 6U)) 
                                                 | ((0x7ffe00U 
                                                     & ((vlSelf->top__DOT___4047_[2U] 
                                                         << 0x10U) 
                                                        | (0xfe00U 
                                                           & (vlSelf->top__DOT___4047_[1U] 
                                                              >> 0x10U)))) 
                                                    | (((IData)(vlSelf->top__DOT___0445_) 
                                                        << 7U) 
                                                       | (((IData)(vlSelf->top__DOT___0676_) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->top__DOT___0230_) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT___2641_) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->top__DOT___1200_) 
                                                                    << 3U) 
                                                                   | (7U 
                                                                      & (vlSelf->top__DOT___4057_[2U] 
                                                                         >> 1U)))))))))) 
                                             + ((0xffffc0U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___7017_ 
                                                             >> 0xcU)) 
                                                    << 6U)) 
                                                | (((IData)(vlSelf->top__DOT___1548_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___0219_) 
                                                       << 4U) 
                                                      | ((8U 
                                                          & ((~ (IData)(vlSelf->top__DOT___0626_)) 
                                                             << 3U)) 
                                                         | ((((IData)(vlSelf->top__DOT____VdfgTmp_h3c7a4aaa__0) 
                                                              & (IData)(vlSelf->top__DOT___1350_)) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___1804_) 
                                                                << 1U) 
                                                               | (1U 
                                                                  & (~ 
                                                                     (((IData)(vlSelf->top__DOT___0420_) 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT___7106_ 
                                                                                >> 2U))) 
                                                                      | ((IData)(vlSelf->top__DOT___0154_) 
                                                                         & (IData)(vlSelf->top__DOT___0964_)))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1415(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1415\n"); );
    // Body
    vlSelf->top__DOT___3518_ = (1U & ((((4U & (vlSelf->top__DOT___4047_[1U] 
                                               >> 0x1bU)) 
                                        | (((IData)(vlSelf->top__DOT___0809_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___1611_))) 
                                       + (((IData)(vlSelf->top__DOT___1554_) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT___0621_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___1783_)))) 
                                      >> 2U));
    vlSelf->top__DOT___1307_ = (1U & ((((0x3fcU & (
                                                   (vlSelf->top__DOT___4047_[2U] 
                                                    << 5U) 
                                                   | (0x1cU 
                                                      & (vlSelf->top__DOT___4047_[1U] 
                                                         >> 0x1bU)))) 
                                        | (((IData)(vlSelf->top__DOT___0809_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___1611_))) 
                                       + ((0x3c0U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT___3923_ 
                                                     >> 6U)) 
                                            << 6U)) 
                                          | (((IData)(vlSelf->top__DOT___1258_) 
                                              << 5U) 
                                             | (((IData)(vlSelf->top__DOT___0094_) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___1554_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0621_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___1783_)))))))) 
                                      >> 9U));
    vlSelf->top__DOT___1451_ = (1U & ((((0x7fcU & (
                                                   (vlSelf->top__DOT___4047_[2U] 
                                                    << 5U) 
                                                   | (0x1cU 
                                                      & (vlSelf->top__DOT___4047_[1U] 
                                                         >> 0x1bU)))) 
                                        | (((IData)(vlSelf->top__DOT___0809_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___1611_))) 
                                       + (((IData)(vlSelf->top__DOT___1801_) 
                                           << 0xaU) 
                                          | ((0x3c0U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___3923_ 
                                                          >> 6U)) 
                                                 << 6U)) 
                                             | (((IData)(vlSelf->top__DOT___1258_) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->top__DOT___0094_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___0861_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___1554_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___0621_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___1783_))))))))) 
                                      >> 0xaU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1416(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1416\n"); );
    // Body
    vlSelf->top__DOT___3947_ = (0xffU & ((0x5aU | (
                                                   (0x80U 
                                                    & ((IData)(vlSelf->top__DOT___7164_) 
                                                       << 7U)) 
                                                   | (IData)(vlSelf->top__DOT___1061_))) 
                                         + ((0xf8U 
                                             & (IData)(vlSelf->top__DOT___3948_)) 
                                            | (((IData)(vlSelf->top__DOT___0561_) 
                                                << 2U) 
                                               | (((IData)(vlSelf->top__DOT___0236_) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT___1200_))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1417(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1417\n"); );
    // Init
    IData/*24:0*/ top__DOT____VdfgTmp_h4295c424__0;
    top__DOT____VdfgTmp_h4295c424__0 = 0;
    // Body
    top__DOT____VdfgTmp_h4295c424__0 = ((0x1000000U 
                                         & ((IData)(
                                                    (vlSelf->top__DOT___3854_ 
                                                     >> 1U)) 
                                            << 0x18U)) 
                                        | ((0x800000U 
                                            & ((~ (
                                                   ((IData)(vlSelf->top__DOT____VdfgTmp_hb66860e9__0) 
                                                    & (IData)(vlSelf->top__DOT___0191_)) 
                                                   | (((IData)(vlSelf->top__DOT___1407_) 
                                                       | (IData)(vlSelf->top__DOT___0044_)) 
                                                      & (IData)(
                                                                (vlSelf->top__DOT___7217_ 
                                                                 >> 2U))))) 
                                               << 0x17U)) 
                                           | (((IData)(vlSelf->top__DOT___2177_) 
                                               << 0x16U) 
                                              | (((IData)(vlSelf->top__DOT___3078_) 
                                                  << 0x15U) 
                                                 | (((IData)(vlSelf->top__DOT___2804_) 
                                                     << 0x14U) 
                                                    | (((IData)(vlSelf->top__DOT___1820_) 
                                                        << 0x13U) 
                                                       | (((IData)(vlSelf->top__DOT____VdfgTmp_h666a9191__0) 
                                                           << 0x12U) 
                                                          | vlSelf->top__DOT____VdfgTmp_h60d03f84__0)))))));
    vlSelf->top__DOT___4197_ = ((0x1e000000U & ((IData)(vlSelf->top__DOT___7007_) 
                                                << 0x18U)) 
                                | top__DOT____VdfgTmp_h4295c424__0);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1418(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1418\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & 
                                               (vlSelf->top__DOT___7081_[1U] 
                                                >> 0x1bU)))) 
                              << 0x3eU) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSelf->top__DOT___7081_[1U] 
                                                                >> 0x16U)))) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT___7081_[1U] 
                                                                   >> 0x15U)))) 
                                               << 0x38U) 
                                              | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & (vlSelf->top__DOT___7081_[1U] 
                                                                      >> 0xeU)))) 
                                                  << 0x31U) 
                                                 | (((QData)((IData)(
                                                                     (0xfffU 
                                                                      & ((IData)(vlSelf->top__DOT___4209_) 
                                                                         >> 3U)))) 
                                                     << 0x25U) 
                                                    | (((QData)((IData)(
                                                                        (0xffffffU 
                                                                         & ((vlSelf->top__DOT___7081_[1U] 
                                                                             << 0x16U) 
                                                                            | (vlSelf->top__DOT___7081_[0U] 
                                                                               >> 0xaU))))) 
                                                        << 0xdU) 
                                                       | (QData)((IData)(
                                                                         ((0x1000U 
                                                                           & (vlSelf->top__DOT___7081_[0U] 
                                                                              << 3U)) 
                                                                          | ((0xff8U 
                                                                              & (vlSelf->top__DOT___7081_[0U] 
                                                                                << 3U)) 
                                                                             | (((IData)(vlSelf->top__DOT___1252_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___2369_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0265_))))))))))))));
    __Vtemp_1[1U] = ((0x80000000U & (vlSelf->top__DOT___7081_[1U] 
                                     << 3U)) | (IData)(
                                                       ((((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->top__DOT___7081_[1U] 
                                                                              >> 0x1bU)))) 
                                                          << 0x3eU) 
                                                         | (((QData)((IData)(
                                                                             (0x1fU 
                                                                              & (vlSelf->top__DOT___7081_[1U] 
                                                                                >> 0x16U)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7081_[1U] 
                                                                                >> 0x15U)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & (vlSelf->top__DOT___7081_[1U] 
                                                                                >> 0xeU)))) 
                                                                   << 0x31U) 
                                                                  | (((QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((IData)(vlSelf->top__DOT___4209_) 
                                                                                >> 3U)))) 
                                                                      << 0x25U) 
                                                                     | (((QData)((IData)(
                                                                                (0xffffffU 
                                                                                & ((vlSelf->top__DOT___7081_[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->top__DOT___7081_[0U] 
                                                                                >> 0xaU))))) 
                                                                         << 0xdU) 
                                                                        | (QData)((IData)(
                                                                                ((0x1000U 
                                                                                & (vlSelf->top__DOT___7081_[0U] 
                                                                                << 3U)) 
                                                                                | ((0xff8U 
                                                                                & (vlSelf->top__DOT___7081_[0U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1252_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___2369_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0265_))))))))))))) 
                                                        >> 0x20U)));
    vlSelf->top__DOT___4496_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4496_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4496_[2U] = ((0x7c0000U & (vlSelf->top__DOT___3885_ 
                                                  << 6U)) 
                                    | (((IData)(vlSelf->top__DOT___1030_) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->top__DOT___0459_) 
                                         << 0xfU) | 
                                        (((IData)(vlSelf->top__DOT___1084_) 
                                          << 0xeU) 
                                         | (((IData)(vlSelf->top__DOT___0577_) 
                                             << 0xdU) 
                                            | (((IData)(vlSelf->top__DOT___1580_) 
                                                << 0xcU) 
                                               | (0xfffU 
                                                  & ((0x7ffffff8U 
                                                      & (vlSelf->top__DOT___7081_[2U] 
                                                         << 3U)) 
                                                     | (vlSelf->top__DOT___7081_[1U] 
                                                        >> 0x1dU)))))))));
    vlSelf->top__DOT___2164_ = (1U & ((1U & (((IData)(0x22U) 
                                              + ((0x20U 
                                                  & (vlSelf->top__DOT___4496_[1U] 
                                                     >> 0x1aU)) 
                                                 | ((0x10U 
                                                     & (vlSelf->top__DOT___7081_[1U] 
                                                        >> 0x17U)) 
                                                    | (0xfU 
                                                       & (vlSelf->top__DOT___4496_[1U] 
                                                          >> 0x1aU))))) 
                                             >> 5U)) 
                                      ^ (IData)(vlSelf->top__DOT___0424_)));
    vlSelf->top__DOT____VdfgTmp_h84ee3354__0 = ((0x1000U 
                                                 & (vlSelf->top__DOT___7081_[0U] 
                                                    << 3U)) 
                                                | ((0xff8U 
                                                    & vlSelf->top__DOT___4496_[0U]) 
                                                   | (((IData)(vlSelf->top__DOT___1252_) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((~ (IData)(vlSelf->top__DOT___2369_)) 
                                                             << 1U)) 
                                                         | (IData)(vlSelf->top__DOT___0265_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1419(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1419\n"); );
    // Body
    vlSelf->top__DOT___4203_ = (0xffffU & (((0xe000U 
                                             & ((IData)(vlSelf->top__DOT___7050_) 
                                                << 8U)) 
                                            | (((IData)(vlSelf->top__DOT___0409_) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & (vlSelf->top__DOT___3893_ 
                                                      >> 0xcU)) 
                                                  | (((IData)(vlSelf->top__DOT___3245_) 
                                                      << 0xaU) 
                                                     | ((0x200U 
                                                         & (vlSelf->top__DOT___3893_ 
                                                            >> 0xcU)) 
                                                        | (((IData)(vlSelf->top__DOT___3296_) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->top__DOT___2267_) 
                                                               << 7U) 
                                                              | ((0x78U 
                                                                  & (vlSelf->top__DOT___3893_ 
                                                                     >> 0xcU)) 
                                                                 | ((4U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___1507_)) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0486_) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->top__DOT___3364_))))))))))) 
                                           + ((0xe000U 
                                               & (IData)(vlSelf->top__DOT___4204_)) 
                                              | (((IData)(vlSelf->top__DOT___3633_) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->top__DOT___1500_) 
                                                     << 0xbU) 
                                                    | ((0x400U 
                                                        & (IData)(vlSelf->top__DOT___3973_)) 
                                                       | (((IData)(vlSelf->top__DOT___3235_) 
                                                           << 9U) 
                                                          | (0x1ffU 
                                                             & (IData)(vlSelf->top__DOT___3973_)))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1421(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1421\n"); );
    // Body
    vlSelf->top__DOT___2670_ = (1U & ((IData)(vlSelf->top__DOT___4420_) 
                                      + (IData)((vlSelf->top__DOT___3881_ 
                                                 >> 0xaU))));
    vlSelf->top__DOT___1961_ = (1U & ((((0x7800U & 
                                         (vlSelf->top__DOT___4296_ 
                                          << 2U)) | 
                                        (((IData)(vlSelf->top__DOT___3267_) 
                                          << 0xaU) 
                                         | ((0x3c0U 
                                             & (vlSelf->top__DOT___4296_ 
                                                << 2U)) 
                                            | (((IData)(vlSelf->top__DOT___1143_) 
                                                << 5U) 
                                               | ((0x18U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___4420_ 
                                                               >> 3U)) 
                                                      << 3U)) 
                                                  | (((IData)(vlSelf->top__DOT___0457_) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top__DOT___2456_) 
                                                         << 1U) 
                                                        | (1U 
                                                           & (IData)(vlSelf->top__DOT___4420_))))))))) 
                                       + ((0x7000U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT___3881_ 
                                                       >> 0x16U)) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (vlSelf->top__DOT___7222_ 
                                                 >> 5U)) 
                                             | (0x7ffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT___3881_ 
                                                           >> 0xaU)))))) 
                                      >> 0xeU));
    vlSelf->top__DOT___1671_ = (1U & (~ (((IData)(vlSelf->top__DOT___0532_) 
                                          & (IData)(vlSelf->top__DOT___1961_)) 
                                         | (IData)(vlSelf->top__DOT___0599_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1422(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1422\n"); );
    // Body
    vlSelf->top__DOT___3813_ = (((QData)((IData)((0x7fffffU 
                                                  & (IData)(
                                                            (0xffffffffULL 
                                                             & (((((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___4555_[0U] 
                                                                                >> 0x11U)))) 
                                                                   << 0x38U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___4739_[0U] 
                                                                                >> 0x11U)))) 
                                                                      << 0x37U) 
                                                                     | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4555_[0U] 
                                                                                >> 0xdU)))) 
                                                                         << 0x34U) 
                                                                        | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___4223_ 
                                                                                >> 0x15U)))) 
                                                                            << 0x32U) 
                                                                           | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0032_) 
                                                                                << 0x1fU) 
                                                                                | ((0x7e000000U 
                                                                                & (vlSelf->top__DOT___4168_ 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2730_) 
                                                                                << 0x18U) 
                                                                                | ((0xfc0000U 
                                                                                & (vlSelf->top__DOT___4168_ 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0454_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fc00U 
                                                                                & (vlSelf->top__DOT___4168_ 
                                                                                << 9U)) 
                                                                                | (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4566_ 
                                                                                >> 9U))))))))))) 
                                                                               << 0x12U) 
                                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3351_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4566_ 
                                                                                >> 7U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2838_) 
                                                                                << 0xfU) 
                                                                                | ((0x7e00U 
                                                                                & ((IData)(vlSelf->top__DOT___4566_) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1128_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0366_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0318_)))))))))))))))))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (4U 
                                                                                | ((0xfff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3977_ 
                                                                                >> 0x12U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7051_ 
                                                                                << 7U)) 
                                                                                | ((0x3f00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3977_ 
                                                                                >> 0xbU)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1438_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0537_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3178_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0956_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1929_))))))))))))) 
                                                                   << 0x1eU) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___1348_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0635_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2786_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7063_) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fc0000U 
                                                                                & (vlSelf->top__DOT___4044_[2U] 
                                                                                << 0x10U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7063_) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1050_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0896_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1783_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0567_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___2858_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 1U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1072_))))))))))))))))))))))))))) 
                                                                >> 0x1aU)))))) 
                                 << 0x29U) | (((QData)((IData)(vlSelf->top__DOT___2927_)) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((((0x1fc0000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___4566_ 
                                                                                >> 9U)) 
                                                                            << 0x12U)) 
                                                                        | (((IData)(vlSelf->top__DOT___3351_) 
                                                                            << 0x11U) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___4566_ 
                                                                                >> 7U)) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSelf->top__DOT___2838_) 
                                                                                << 0xfU) 
                                                                                | ((0x7e00U 
                                                                                & ((IData)(vlSelf->top__DOT___4566_) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1128_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0366_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0318_)))))))))))))) 
                                                                       + 
                                                                       ((0x1fc0000U 
                                                                         & (vlSelf->top__DOT___4044_[2U] 
                                                                            << 0x10U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSelf->top__DOT___7063_) 
                                                                               << 0x11U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0489_) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT___1050_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0896_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1783_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0567_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___2858_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 1U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1072_))))))))))))))))))) 
                                                                      >> 0x18U)))) 
                                                  << 0x27U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0750_)) 
                                                     << 0x26U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0023_)) 
                                                        << 0x25U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___0119_)) 
                                                           << 0x24U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___2601_)) 
                                                              << 0x23U) 
                                                             | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT___4792_ 
                                                                                >> 0x16U)))) 
                                                                 << 0x1fU) 
                                                                | (QData)((IData)(
                                                                                ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4792_ 
                                                                                << 9U)) 
                                                                                | ((0x3f000000U 
                                                                                & (vlSelf->top__DOT___4792_ 
                                                                                << 9U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___1102_) 
                                                                                << 0xfU)) 
                                                                                | ((0x7fff00U 
                                                                                & (vlSelf->top__DOT___4792_ 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2262_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0537_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1438_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1991_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2218_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1310_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___7162_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1102_))))))))))))))))))))));
    vlSelf->top__DOT___4405_[0U] = ((0xffcfffffU & 
                                     vlSelf->top__DOT___4405_[0U]) 
                                    | (0x300000U & 
                                       ((IData)((((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___3813_ 
                                                                              >> 0xfU))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (0xa000000U 
                                                                      | (((IData)(vlSelf->top__DOT___1775_) 
                                                                          << 0x1fU) 
                                                                         | ((0x40000000U 
                                                                             & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                            | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                               | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                     << 1U) 
                                                    | (QData)((IData)(vlSelf->top__DOT___2068_))))) 
                                        << 0x14U)));
    vlSelf->top__DOT___4405_[1U] = ((0xffffffdfU & 
                                     vlSelf->top__DOT___4405_[1U]) 
                                    | (0x20U & ((IData)(
                                                        ((0x3fffffff80000000ULL 
                                                          & ((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                             << 0x1fU)) 
                                                         | ((0x3fffffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                >> 1U)) 
                                                            | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                               >> 2U)))) 
                                                << 5U)));
    vlSelf->top__DOT___4405_[1U] = ((0xfffff8ffU & 
                                     vlSelf->top__DOT___4405_[1U]) 
                                    | (0x700U & ((IData)(
                                                         ((0x1fffffffc0000000ULL 
                                                           & ((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                              << 0x1eU)) 
                                                          | ((0x1fffffffffffffffULL 
                                                              & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                 >> 2U)) 
                                                             | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                >> 3U)))) 
                                                 << 8U)));
    vlSelf->top__DOT___4405_[1U] = ((0xf8000fffU & 
                                     vlSelf->top__DOT___4405_[1U]) 
                                    | (0x7fff000U & 
                                       ((IData)(((0x3fffffff8000000ULL 
                                                  & ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                     << 0x1bU)) 
                                                 | ((0x3ffffffffffffffULL 
                                                     & ((QData)((IData)(
                                                                        (0xa000000U 
                                                                         | (((IData)(vlSelf->top__DOT___1775_) 
                                                                             << 0x1fU) 
                                                                            | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                               | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                        >> 5U)) 
                                                    | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                       >> 6U)))) 
                                        << 0xcU)));
    vlSelf->top__DOT___4405_[1U] = ((0x3fffffffU & 
                                     vlSelf->top__DOT___4405_[1U]) 
                                    | ((IData)(((0x7fffffff000ULL 
                                                 & ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                    << 0xcU)) 
                                                | ((0x7ffffffffffULL 
                                                    & ((QData)((IData)(
                                                                       (0xa000000U 
                                                                        | (((IData)(vlSelf->top__DOT___1775_) 
                                                                            << 0x1fU) 
                                                                           | ((0x40000000U 
                                                                               & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                              | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                       >> 0x14U)) 
                                                   | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                      >> 0x15U)))) 
                                       << 0x1eU));
    vlSelf->top__DOT___4405_[2U] = ((3U & vlSelf->top__DOT___4405_[2U]) 
                                    | ((IData)((((QData)((IData)(
                                                                 (0xfU 
                                                                  & (vlSelf->top__DOT___4782_ 
                                                                     >> 0x1aU)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  ((0x38000000U 
                                                                    & ((IData)(
                                                                               ((0x7fffffff0ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 4U)) 
                                                                                | ((0x7ffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x1cU)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x1dU)))) 
                                                                       << 0x1bU)) 
                                                                   | ((0x7fe0000U 
                                                                       & (vlSelf->top__DOT___4782_ 
                                                                          << 4U)) 
                                                                      | ((0x10000U 
                                                                          & ((IData)(
                                                                                ((0xfffffffe0ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 5U)) 
                                                                                | ((0xfffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x1bU)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x1cU)))) 
                                                                             << 0x10U)) 
                                                                         | ((0xe000U 
                                                                             & (vlSelf->top__DOT___4782_ 
                                                                                << 3U)) 
                                                                            | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0x1fffffffc0ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 6U)) 
                                                                                | ((0x1fffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x1aU)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x1bU)))) 
                                                                                << 0xcU)) 
                                                                               | ((0xc00U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 3U)) 
                                                                                | ((0x300U 
                                                                                & ((IData)(
                                                                                ((0x7fffffff00ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 8U)) 
                                                                                | ((0x7fffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x18U)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x19U)))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0xfffffffe00ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 9U)) 
                                                                                | ((0xffffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x17U)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x18U)))) 
                                                                                << 3U)) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                ((0x1fffffffc00ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x1ffffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x16U)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x17U))))))))))))))))))) 
                                       << 2U));
    vlSelf->top__DOT___4405_[3U] = ((0x7fffff0U & vlSelf->top__DOT___4405_[3U]) 
                                    | (0x7ffffffU & 
                                       (((IData)((((QData)((IData)(
                                                                   (0xfU 
                                                                    & (vlSelf->top__DOT___4782_ 
                                                                       >> 0x1aU)))) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(
                                                                    ((0x38000000U 
                                                                      & ((IData)(
                                                                                ((0x7fffffff0ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 4U)) 
                                                                                | ((0x7ffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x1cU)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x1dU)))) 
                                                                         << 0x1bU)) 
                                                                     | ((0x7fe0000U 
                                                                         & (vlSelf->top__DOT___4782_ 
                                                                            << 4U)) 
                                                                        | ((0x10000U 
                                                                            & ((IData)(
                                                                                ((0xfffffffe0ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 5U)) 
                                                                                | ((0xfffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x1bU)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x1cU)))) 
                                                                               << 0x10U)) 
                                                                           | ((0xe000U 
                                                                               & (vlSelf->top__DOT___4782_ 
                                                                                << 3U)) 
                                                                              | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0x1fffffffc0ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 6U)) 
                                                                                | ((0x1fffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x1aU)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x1bU)))) 
                                                                                << 0xcU)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 3U)) 
                                                                                | ((0x300U 
                                                                                & ((IData)(
                                                                                ((0x7fffffff00ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 8U)) 
                                                                                | ((0x7fffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x18U)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x19U)))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0xfffffffe00ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 9U)) 
                                                                                | ((0xffffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x17U)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x18U)))) 
                                                                                << 3U)) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                ((0x1fffffffc00ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x1ffffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x16U)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x17U))))))))))))))))))) 
                                         >> 0x1eU) 
                                        | ((IData)(
                                                   ((((QData)((IData)(
                                                                      (0xfU 
                                                                       & (vlSelf->top__DOT___4782_ 
                                                                          >> 0x1aU)))) 
                                                      << 0x1eU) 
                                                     | (QData)((IData)(
                                                                       ((0x38000000U 
                                                                         & ((IData)(
                                                                                ((0x7fffffff0ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 4U)) 
                                                                                | ((0x7ffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x1cU)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x1dU)))) 
                                                                            << 0x1bU)) 
                                                                        | ((0x7fe0000U 
                                                                            & (vlSelf->top__DOT___4782_ 
                                                                               << 4U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(
                                                                                ((0xfffffffe0ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 5U)) 
                                                                                | ((0xfffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x1bU)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x1cU)))) 
                                                                                << 0x10U)) 
                                                                              | ((0xe000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 3U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0x1fffffffc0ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 6U)) 
                                                                                | ((0x1fffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x1aU)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x1bU)))) 
                                                                                << 0xcU)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 3U)) 
                                                                                | ((0x300U 
                                                                                & ((IData)(
                                                                                ((0x7fffffff00ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 8U)) 
                                                                                | ((0x7fffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x18U)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x19U)))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0xfffffffe00ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 9U)) 
                                                                                | ((0xffffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x17U)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x18U)))) 
                                                                                << 3U)) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                ((0x1fffffffc00ULL 
                                                                                & ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x1ffffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                                >> 0x16U)) 
                                                                                | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                                >> 0x17U)))))))))))))))))) 
                                                    >> 0x20U)) 
                                           << 2U))));
    vlSelf->top__DOT___4405_[3U] = ((0x7ffefffU & vlSelf->top__DOT___4405_[3U]) 
                                    | (0x1000U & ((IData)(
                                                          ((0xfffffffeULL 
                                                            & ((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU))))) 
                                                               << 1U)) 
                                                           | ((0xffffffffULL 
                                                               & ((QData)((IData)(
                                                                                (0xa000000U 
                                                                                | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                                  >> 0x1fU)) 
                                                              | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                                 >> 0x20U)))) 
                                                  << 0xcU)));
    vlSelf->top__DOT___4405_[3U] = ((0x3fffU & vlSelf->top__DOT___4405_[3U]) 
                                    | (0x7ffc000U & 
                                       ((0x7800000U 
                                         & ((IData)(
                                                    (vlSelf->top__DOT___3813_ 
                                                     >> 0x18U)) 
                                            << 0x17U)) 
                                        | (0x7fc000U 
                                           & ((IData)(
                                                      ((0x7fffffffULL 
                                                        & (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0xfU)))))) 
                                                       | ((0x7fffffffULL 
                                                           & ((QData)((IData)(
                                                                              (0xa000000U 
                                                                               | (((IData)(vlSelf->top__DOT___1775_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 5U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0874_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0902_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2434_) 
                                                                                << 0x12U) 
                                                                                | ((0x3ffe0U 
                                                                                & (vlSelf->top__DOT___4085_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2061_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0403_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1244_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1668_)))))))))))))))))))) 
                                                              >> 0x20U)) 
                                                          | ((QData)((IData)(vlSelf->top__DOT___2068_)) 
                                                             >> 0x21U)))) 
                                              << 0xeU)))));
    vlSelf->top__DOT___4277_ = (((QData)((IData)((7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (((((QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->top__DOT___4555_[0U] 
                                                                                >> 0x11U)))) 
                                                                   << 0x38U) 
                                                                  | vlSelf->top__DOT____VdfgTmp_h9c118fcc__0) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3977_ 
                                                                                >> 0x20U))))) 
                                                                   << 0x3bU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7051_ 
                                                                                >> 0x15U)))) 
                                                                      << 0x3aU) 
                                                                     | vlSelf->top__DOT____VdfgTmp_h7eaf7ba1__0))) 
                                                                >> 0x3bU)))))) 
                                 << 0x3bU) | (((QData)((IData)(vlSelf->top__DOT___2635_)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (((IData)(
                                                                            (vlSelf->top__DOT____VdfgTmp_h9db4ecae__0 
                                                                             >> 0x31U)) 
                                                                    << 0x17U) 
                                                                   | (0x7fffffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0x29U)))))) 
                                                  << 0x1aU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT___2927_) 
                                                                     << 0x19U) 
                                                                    | ((0x1000000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3813_ 
                                                                                >> 0x27U)) 
                                                                           << 0x18U)) 
                                                                       | ((0xfffff0U 
                                                                           & (((0xfc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4566_ 
                                                                                >> 9U)) 
                                                                                << 0x12U)) 
                                                                               | vlSelf->top__DOT____VdfgTmp_hb063e19c__0) 
                                                                              + 
                                                                              ((0xfc0000U 
                                                                                & (vlSelf->top__DOT___4044_[2U] 
                                                                                << 0x10U)) 
                                                                               | vlSelf->top__DOT____VdfgTmp_h6de0996c__0))) 
                                                                          | ((8U 
                                                                              & (((0xeU 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0318_)) 
                                                                                + (IData)(vlSelf->top__DOT____VdfgTmp_h632e497e__0))) 
                                                                             | (7U 
                                                                                & (((6U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0318_)) 
                                                                                + (IData)(vlSelf->top__DOT____VdfgTmp_h8c218a8f__0))))))))))));
    vlSelf->top__DOT___4631_[1U] = ((0xfU & vlSelf->top__DOT___4631_[1U]) 
                                    | ((IData)((((QData)((IData)(
                                                                 (0xfU 
                                                                  & vlSelf->top__DOT___4405_[3U]))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (0x10200U 
                                                                   | ((0x38000000U 
                                                                       & (vlSelf->top__DOT___4782_ 
                                                                          << 4U)) 
                                                                      | ((0x7fe0000U 
                                                                          & (vlSelf->top__DOT___4405_[2U] 
                                                                             >> 2U)) 
                                                                         | ((0xe000U 
                                                                             & (vlSelf->top__DOT___4405_[2U] 
                                                                                >> 2U)) 
                                                                            | ((0x1000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 3U)) 
                                                                               | ((0xc00U 
                                                                                & (vlSelf->top__DOT___4405_[2U] 
                                                                                >> 2U)) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___4405_[2U] 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 1U)) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___4405_[2U] 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT___0056_)))))))))))))) 
                                       << 4U));
    vlSelf->top__DOT___4631_[2U] = ((0xffffffc0U & 
                                     vlSelf->top__DOT___4631_[2U]) 
                                    | (((IData)((((QData)((IData)(
                                                                  (0xfU 
                                                                   & vlSelf->top__DOT___4405_[3U]))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (0x10200U 
                                                                    | ((0x38000000U 
                                                                        & (vlSelf->top__DOT___4782_ 
                                                                           << 4U)) 
                                                                       | ((0x7fe0000U 
                                                                           & (vlSelf->top__DOT___4405_[2U] 
                                                                              >> 2U)) 
                                                                          | ((0xe000U 
                                                                              & (vlSelf->top__DOT___4405_[2U] 
                                                                                >> 2U)) 
                                                                             | ((0x1000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 3U)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___4405_[2U] 
                                                                                >> 2U)) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___4405_[2U] 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 1U)) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___4405_[2U] 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT___0056_)))))))))))))) 
                                        >> 0x1cU) | 
                                       ((IData)(((((QData)((IData)(
                                                                   (0xfU 
                                                                    & vlSelf->top__DOT___4405_[3U]))) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(
                                                                    (0x10200U 
                                                                     | ((0x38000000U 
                                                                         & (vlSelf->top__DOT___4782_ 
                                                                            << 4U)) 
                                                                        | ((0x7fe0000U 
                                                                            & (vlSelf->top__DOT___4405_[2U] 
                                                                               >> 2U)) 
                                                                           | ((0xe000U 
                                                                               & (vlSelf->top__DOT___4405_[2U] 
                                                                                >> 2U)) 
                                                                              | ((0x1000U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 3U)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___4405_[2U] 
                                                                                >> 2U)) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___4405_[2U] 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4782_ 
                                                                                << 1U)) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___4405_[2U] 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT___0056_))))))))))))) 
                                                 >> 0x20U)) 
                                        << 4U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1424(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1424\n"); );
    // Init
    QData/*60:0*/ top__DOT____VdfgTmp_h254b2a58__0;
    top__DOT____VdfgTmp_h254b2a58__0 = 0;
    SData/*10:0*/ top__DOT____VdfgTmp_hc91e80ca__0;
    top__DOT____VdfgTmp_hc91e80ca__0 = 0;
    QData/*38:0*/ top__DOT____VdfgTmp_ha6707204__0;
    top__DOT____VdfgTmp_ha6707204__0 = 0;
    CData/*6:0*/ top__DOT____VdfgTmp_haf064849__0;
    top__DOT____VdfgTmp_haf064849__0 = 0;
    SData/*11:0*/ top__DOT____VdfgTmp_h38ed1539__0;
    top__DOT____VdfgTmp_h38ed1539__0 = 0;
    IData/*19:0*/ top__DOT____VdfgTmp_h9087c519__0;
    top__DOT____VdfgTmp_h9087c519__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_62;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    // Body
    __Vtemp_2[0U] = (((IData)(vlSelf->top__DOT___0906_) 
                      << 0x17U) | (((IData)(vlSelf->top__DOT___1397_) 
                                    << 0x16U) | (((IData)(vlSelf->top__DOT___2823_) 
                                                  << 0x15U) 
                                                 | (((IData)(vlSelf->top__DOT___3538_) 
                                                     << 0x14U) 
                                                    | (((IData)(vlSelf->top__DOT___3683_) 
                                                        << 0x13U) 
                                                       | (((IData)(vlSelf->top__DOT___2178_) 
                                                           << 0x12U) 
                                                          | (((IData)(vlSelf->top__DOT___3684_) 
                                                              << 0x11U) 
                                                             | (((IData)(vlSelf->top__DOT___3001_) 
                                                                 << 0x10U) 
                                                                | (((IData)(vlSelf->top__DOT___2548_) 
                                                                    << 0xfU) 
                                                                   | (((IData)(vlSelf->top__DOT___1332_) 
                                                                       << 0xeU) 
                                                                      | ((0x1000U 
                                                                          & (vlSelf->top__DOT___4043_[0U] 
                                                                             << 4U)) 
                                                                         | ((0x800U 
                                                                             & ((IData)(vlSelf->top__DOT___7146_) 
                                                                                << 6U)) 
                                                                            | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7146_) 
                                                                                << 6U)) 
                                                                               | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___4043_[0U] 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0125_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1270_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0977_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2055_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1683_))))))))))))))))))));
    vlSelf->top__DOT___4291_[1U] = ((0x3fffU & vlSelf->top__DOT___4291_[1U]) 
                                    | (0x3fc000U & 
                                       (__Vtemp_2[0U] 
                                        >> 0xaU)));
    vlSelf->top__DOT___4291_[2U] = 0U;
    vlSelf->top__DOT___4291_[3U] = ((0xc0000000U & 
                                     vlSelf->top__DOT___4291_[3U]) 
                                    | ((IData)(vlSelf->top__DOT___3947_) 
                                       << 0x16U));
    vlSelf->top__DOT___4306_[3U] = ((0x7fffffU & vlSelf->top__DOT___4306_[3U]) 
                                    | (0xff800000U 
                                       & (vlSelf->top__DOT___4291_[4U] 
                                          << 0x16U)));
    vlSelf->top__DOT___4306_[4U] = ((1U & vlSelf->top__DOT___4306_[4U]) 
                                    | ((IData)((0x1ffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->top__DOT___4291_[5U])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT___4291_[4U])) 
                                                      >> 0xbU)))) 
                                       << 1U));
    vlSelf->top__DOT___4306_[5U] = ((4U & vlSelf->top__DOT___4306_[5U]) 
                                    | (7U & (((IData)(
                                                      (0x1ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->top__DOT___4291_[5U])) 
                                                           << 0x15U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->top__DOT___4291_[4U])) 
                                                             >> 0xbU)))) 
                                              >> 0x1fU) 
                                             | ((IData)(
                                                        ((0x1ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->top__DOT___4291_[5U])) 
                                                              << 0x15U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->top__DOT___4291_[4U])) 
                                                                >> 0xbU))) 
                                                         >> 0x20U)) 
                                                << 1U))));
    __Vtemp_7[0U] = (IData)((((QData)((IData)((1U & (IData)(
                                                            (vlSelf->top__DOT___3834_ 
                                                             >> 0x27U))))) 
                              << 0x27U) | (((QData)((IData)(vlSelf->top__DOT___3557_)) 
                                            << 0x26U) 
                                           | (((QData)((IData)(
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3834_ 
                                                                           >> 0x20U))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___2264_) 
                                                                  << 0x1fU) 
                                                                 | ((0x70000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x1cU)) 
                                                                        << 0x1cU)) 
                                                                    | (((IData)(vlSelf->top__DOT___1803_) 
                                                                        << 0x1bU) 
                                                                       | ((0x7fffc00U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0xaU)) 
                                                                              << 0xaU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3389_) 
                                                                              << 9U) 
                                                                             | ((0x1e0U 
                                                                                & ((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___3264_))))))))))))))));
    __Vtemp_7[1U] = (((IData)((((QData)((IData)(((0x1000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___7096_ 
                                                              >> 5U)) 
                                                     << 0xcU)) 
                                                 | ((0xc00U 
                                                     & (vlSelf->top__DOT___3899_[0U] 
                                                        << 5U)) 
                                                    | (((IData)(vlSelf->top__DOT___0628_) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->top__DOT___0628_) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->top__DOT___0444_) 
                                                              << 6U) 
                                                             | (((IData)(vlSelf->top__DOT___1168_) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT___1632_) 
                                                                    << 4U) 
                                                                   | ((0xeU 
                                                                       & (vlSelf->top__DOT___4291_[1U] 
                                                                          >> 4U)) 
                                                                      | (IData)(vlSelf->top__DOT___3538_))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___3683_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___2178_) 
                                                                 << 0x1eU) 
                                                                | (((IData)(vlSelf->top__DOT___3684_) 
                                                                    << 0x1dU) 
                                                                   | ((0x1f000000U 
                                                                       & ((vlSelf->top__DOT___4291_[1U] 
                                                                           << 0x1cU) 
                                                                          | (0xf000000U 
                                                                             & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)))) 
                                                                      | (((IData)(vlSelf->top__DOT___3001_) 
                                                                          << 0x17U) 
                                                                         | ((0x600000U 
                                                                             & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)) 
                                                                            | (((IData)(vlSelf->top__DOT___2548_) 
                                                                                << 0x14U) 
                                                                               | ((0xfc000U 
                                                                                & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0764_) 
                                                                                << 0xdU) 
                                                                                | ((0x1fc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x2eU)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3146_) 
                                                                                << 5U) 
                                                                                | ((0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x29U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3534_))))))))))))))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT___3834_ 
                                                                      >> 0x27U))))) 
                                          << 0x27U) 
                                         | (((QData)((IData)(vlSelf->top__DOT___3557_)) 
                                             << 0x26U) 
                                            | (((QData)((IData)(
                                                                (0x3fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___3834_ 
                                                                            >> 0x20U))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___2264_) 
                                                                   << 0x1fU) 
                                                                  | ((0x70000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x1cU)) 
                                                                         << 0x1cU)) 
                                                                     | (((IData)(vlSelf->top__DOT___1803_) 
                                                                         << 0x1bU) 
                                                                        | ((0x7fffc00U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0xaU)) 
                                                                               << 0xaU)) 
                                                                           | (((IData)(vlSelf->top__DOT___3389_) 
                                                                               << 9U) 
                                                                              | ((0x1e0U 
                                                                                & ((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___3264_))))))))))))))) 
                                        >> 0x20U)));
    __Vtemp_7[2U] = (((IData)((((QData)((IData)(((0x1000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___7096_ 
                                                              >> 5U)) 
                                                     << 0xcU)) 
                                                 | ((0xc00U 
                                                     & (vlSelf->top__DOT___3899_[0U] 
                                                        << 5U)) 
                                                    | (((IData)(vlSelf->top__DOT___0628_) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->top__DOT___0628_) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->top__DOT___0444_) 
                                                              << 6U) 
                                                             | (((IData)(vlSelf->top__DOT___1168_) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT___1632_) 
                                                                    << 4U) 
                                                                   | ((0xeU 
                                                                       & (vlSelf->top__DOT___4291_[1U] 
                                                                          >> 4U)) 
                                                                      | (IData)(vlSelf->top__DOT___3538_))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___3683_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___2178_) 
                                                                 << 0x1eU) 
                                                                | (((IData)(vlSelf->top__DOT___3684_) 
                                                                    << 0x1dU) 
                                                                   | ((0x1f000000U 
                                                                       & ((vlSelf->top__DOT___4291_[1U] 
                                                                           << 0x1cU) 
                                                                          | (0xf000000U 
                                                                             & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)))) 
                                                                      | (((IData)(vlSelf->top__DOT___3001_) 
                                                                          << 0x17U) 
                                                                         | ((0x600000U 
                                                                             & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)) 
                                                                            | (((IData)(vlSelf->top__DOT___2548_) 
                                                                                << 0x14U) 
                                                                               | ((0xfc000U 
                                                                                & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0764_) 
                                                                                << 0xdU) 
                                                                                | ((0x1fc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x2eU)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3146_) 
                                                                                << 5U) 
                                                                                | ((0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x29U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3534_))))))))))))))))) 
                      >> 0x18U) | ((IData)(((((QData)((IData)(
                                                              ((0x1000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___7096_ 
                                                                            >> 5U)) 
                                                                   << 0xcU)) 
                                                               | ((0xc00U 
                                                                   & (vlSelf->top__DOT___3899_[0U] 
                                                                      << 5U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0628_) 
                                                                      << 9U) 
                                                                     | (((IData)(vlSelf->top__DOT___0628_) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSelf->top__DOT___0444_) 
                                                                            << 6U) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 4U) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___4291_[1U] 
                                                                                >> 4U)) 
                                                                                | (IData)(vlSelf->top__DOT___3538_))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___3683_) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___2178_) 
                                                                    << 0x1eU) 
                                                                   | (((IData)(vlSelf->top__DOT___3684_) 
                                                                       << 0x1dU) 
                                                                      | ((0x1f000000U 
                                                                          & ((vlSelf->top__DOT___4291_[1U] 
                                                                              << 0x1cU) 
                                                                             | (0xf000000U 
                                                                                & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)))) 
                                                                         | (((IData)(vlSelf->top__DOT___3001_) 
                                                                             << 0x17U) 
                                                                            | ((0x600000U 
                                                                                & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)) 
                                                                               | (((IData)(vlSelf->top__DOT___2548_) 
                                                                                << 0x14U) 
                                                                                | ((0xfc000U 
                                                                                & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0764_) 
                                                                                << 0xdU) 
                                                                                | ((0x1fc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x2eU)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3146_) 
                                                                                << 5U) 
                                                                                | ((0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x29U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3534_)))))))))))))))) 
                                            >> 0x20U)) 
                                   << 8U));
    __Vtemp_8[0U] = (IData)((((QData)((IData)((1U & 
                                               (vlSelf->top__DOT___4350_[1U] 
                                                >> 7U)))) 
                              << 0x27U) | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT___4740_[1U] 
                                                                >> 0xbU)))) 
                                            << 0x26U) 
                                           | (((QData)((IData)(
                                                               (0x3fffU 
                                                                & ((vlSelf->top__DOT___4350_[1U] 
                                                                    << 8U) 
                                                                   | (vlSelf->top__DOT___4350_[0U] 
                                                                      >> 0x18U))))) 
                                               << 0x18U) 
                                              | (QData)((IData)(
                                                                ((0x800000U 
                                                                  & (vlSelf->top__DOT___4740_[0U] 
                                                                     >> 5U)) 
                                                                 | ((0x7fe000U 
                                                                     & vlSelf->top__DOT___4350_[0U]) 
                                                                    | ((0x1000U 
                                                                        & (vlSelf->top__DOT___4740_[0U] 
                                                                           >> 5U)) 
                                                                       | ((0xff8U 
                                                                           & vlSelf->top__DOT___4350_[0U]) 
                                                                          | (((IData)(vlSelf->top__DOT___1295_) 
                                                                              << 2U) 
                                                                             | (IData)(vlSelf->top__DOT___0054_))))))))))));
    __Vtemp_8[1U] = (((IData)((((QData)((IData)(((0x1000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3953_ 
                                                              >> 0x2aU)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT___4740_[2U] 
                                                        >> 0xdU)) 
                                                    | (0x7ffU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT___3953_ 
                                                                  >> 0x1eU))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___4740_[2U] 
                                                                 << 0x13U)) 
                                                             | ((0x7ffc0000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3953_ 
                                                                             >> 0x10U)) 
                                                                    << 0x12U)) 
                                                                | ((0x3e000U 
                                                                    & (vlSelf->top__DOT___4282_[0U] 
                                                                       << 8U)) 
                                                                   | ((0x1ffeU 
                                                                       & (vlSelf->top__DOT___4350_[1U] 
                                                                          >> 8U)) 
                                                                      | (1U 
                                                                         & (vlSelf->top__DOT___4740_[1U] 
                                                                            >> 0xdU)))))))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->top__DOT___4350_[1U] 
                                                              >> 7U)))) 
                                          << 0x27U) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT___4740_[1U] 
                                                                 >> 0xbU)))) 
                                             << 0x26U) 
                                            | (((QData)((IData)(
                                                                (0x3fffU 
                                                                 & ((vlSelf->top__DOT___4350_[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->top__DOT___4350_[0U] 
                                                                       >> 0x18U))))) 
                                                << 0x18U) 
                                               | (QData)((IData)(
                                                                 ((0x800000U 
                                                                   & (vlSelf->top__DOT___4740_[0U] 
                                                                      >> 5U)) 
                                                                  | ((0x7fe000U 
                                                                      & vlSelf->top__DOT___4350_[0U]) 
                                                                     | ((0x1000U 
                                                                         & (vlSelf->top__DOT___4740_[0U] 
                                                                            >> 5U)) 
                                                                        | ((0xff8U 
                                                                            & vlSelf->top__DOT___4350_[0U]) 
                                                                           | (((IData)(vlSelf->top__DOT___1295_) 
                                                                               << 2U) 
                                                                              | (IData)(vlSelf->top__DOT___0054_))))))))))) 
                                        >> 0x20U)));
    __Vtemp_8[2U] = (((IData)((((QData)((IData)(((0x1000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3953_ 
                                                              >> 0x2aU)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT___4740_[2U] 
                                                        >> 0xdU)) 
                                                    | (0x7ffU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT___3953_ 
                                                                  >> 0x1eU))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___4740_[2U] 
                                                                 << 0x13U)) 
                                                             | ((0x7ffc0000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3953_ 
                                                                             >> 0x10U)) 
                                                                    << 0x12U)) 
                                                                | ((0x3e000U 
                                                                    & (vlSelf->top__DOT___4282_[0U] 
                                                                       << 8U)) 
                                                                   | ((0x1ffeU 
                                                                       & (vlSelf->top__DOT___4350_[1U] 
                                                                          >> 8U)) 
                                                                      | (1U 
                                                                         & (vlSelf->top__DOT___4740_[1U] 
                                                                            >> 0xdU)))))))))) 
                      >> 0x18U) | ((IData)(((((QData)((IData)(
                                                              ((0x1000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3953_ 
                                                                            >> 0x2aU)) 
                                                                   << 0xcU)) 
                                                               | ((0x800U 
                                                                   & (vlSelf->top__DOT___4740_[2U] 
                                                                      >> 0xdU)) 
                                                                  | (0x7ffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___3953_ 
                                                                                >> 0x1eU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0x80000000U 
                                                                 & (vlSelf->top__DOT___4740_[2U] 
                                                                    << 0x13U)) 
                                                                | ((0x7ffc0000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3953_ 
                                                                                >> 0x10U)) 
                                                                       << 0x12U)) 
                                                                   | ((0x3e000U 
                                                                       & (vlSelf->top__DOT___4282_[0U] 
                                                                          << 8U)) 
                                                                      | ((0x1ffeU 
                                                                          & (vlSelf->top__DOT___4350_[1U] 
                                                                             >> 8U)) 
                                                                         | (1U 
                                                                            & (vlSelf->top__DOT___4740_[1U] 
                                                                               >> 0xdU))))))))) 
                                            >> 0x20U)) 
                                   << 8U));
    VL_ADD_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    vlSelf->top__DOT___1927_ = (1U & (__Vtemp_9[2U] 
                                      >> 9U));
    __Vtemp_12[0U] = (IData)((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT___3834_ 
                                                           >> 0x27U))))) 
                               << 0x27U) | (((QData)((IData)(vlSelf->top__DOT___3557_)) 
                                             << 0x26U) 
                                            | (((QData)((IData)(
                                                                (0x3fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___3834_ 
                                                                            >> 0x20U))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___2264_) 
                                                                   << 0x1fU) 
                                                                  | ((0x70000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x1cU)) 
                                                                         << 0x1cU)) 
                                                                     | (((IData)(vlSelf->top__DOT___1803_) 
                                                                         << 0x1bU) 
                                                                        | ((0x7fffc00U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0xaU)) 
                                                                               << 0xaU)) 
                                                                           | (((IData)(vlSelf->top__DOT___3389_) 
                                                                               << 9U) 
                                                                              | ((0x1e0U 
                                                                                & ((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___3264_))))))))))))))));
    __Vtemp_12[1U] = (((IData)((((QData)((IData)(((0x1000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___7096_ 
                                                               >> 5U)) 
                                                      << 0xcU)) 
                                                  | ((0xc00U 
                                                      & (vlSelf->top__DOT___3899_[0U] 
                                                         << 5U)) 
                                                     | (((IData)(vlSelf->top__DOT___0628_) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->top__DOT___0628_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___0444_) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->top__DOT___1168_) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->top__DOT___1632_) 
                                                                     << 4U) 
                                                                    | ((0xeU 
                                                                        & (vlSelf->top__DOT___4291_[1U] 
                                                                           >> 4U)) 
                                                                       | (IData)(vlSelf->top__DOT___3538_))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___3683_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___2178_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___3684_) 
                                                                     << 0x1dU) 
                                                                    | ((0x1f000000U 
                                                                        & ((vlSelf->top__DOT___4291_[1U] 
                                                                            << 0x1cU) 
                                                                           | (0xf000000U 
                                                                              & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)))) 
                                                                       | (((IData)(vlSelf->top__DOT___3001_) 
                                                                           << 0x17U) 
                                                                          | ((0x600000U 
                                                                              & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)) 
                                                                             | (((IData)(vlSelf->top__DOT___2548_) 
                                                                                << 0x14U) 
                                                                                | ((0xfc000U 
                                                                                & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0764_) 
                                                                                << 0xdU) 
                                                                                | ((0x1fc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x2eU)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3146_) 
                                                                                << 5U) 
                                                                                | ((0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x29U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3534_))))))))))))))))) 
                       << 8U) | (IData)(((((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT___3834_ 
                                                                       >> 0x27U))))) 
                                           << 0x27U) 
                                          | (((QData)((IData)(vlSelf->top__DOT___3557_)) 
                                              << 0x26U) 
                                             | (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT___3834_ 
                                                                             >> 0x20U))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->top__DOT___2264_) 
                                                                    << 0x1fU) 
                                                                   | ((0x70000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x1cU)) 
                                                                          << 0x1cU)) 
                                                                      | (((IData)(vlSelf->top__DOT___1803_) 
                                                                          << 0x1bU) 
                                                                         | ((0x7fffc00U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                            | (((IData)(vlSelf->top__DOT___3389_) 
                                                                                << 9U) 
                                                                               | ((0x1e0U 
                                                                                & ((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___3264_))))))))))))))) 
                                         >> 0x20U)));
    __Vtemp_12[2U] = (((IData)((((QData)((IData)(((0x1000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___7096_ 
                                                               >> 5U)) 
                                                      << 0xcU)) 
                                                  | ((0xc00U 
                                                      & (vlSelf->top__DOT___3899_[0U] 
                                                         << 5U)) 
                                                     | (((IData)(vlSelf->top__DOT___0628_) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->top__DOT___0628_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___0444_) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->top__DOT___1168_) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->top__DOT___1632_) 
                                                                     << 4U) 
                                                                    | ((0xeU 
                                                                        & (vlSelf->top__DOT___4291_[1U] 
                                                                           >> 4U)) 
                                                                       | (IData)(vlSelf->top__DOT___3538_))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___3683_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___2178_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___3684_) 
                                                                     << 0x1dU) 
                                                                    | ((0x1f000000U 
                                                                        & ((vlSelf->top__DOT___4291_[1U] 
                                                                            << 0x1cU) 
                                                                           | (0xf000000U 
                                                                              & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)))) 
                                                                       | (((IData)(vlSelf->top__DOT___3001_) 
                                                                           << 0x17U) 
                                                                          | ((0x600000U 
                                                                              & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)) 
                                                                             | (((IData)(vlSelf->top__DOT___2548_) 
                                                                                << 0x14U) 
                                                                                | ((0xfc000U 
                                                                                & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0764_) 
                                                                                << 0xdU) 
                                                                                | ((0x1fc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x2eU)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3146_) 
                                                                                << 5U) 
                                                                                | ((0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x29U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3534_))))))))))))))))) 
                       >> 0x18U) | ((IData)(((((QData)((IData)(
                                                               ((0x1000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___7096_ 
                                                                             >> 5U)) 
                                                                    << 0xcU)) 
                                                                | ((0xc00U 
                                                                    & (vlSelf->top__DOT___3899_[0U] 
                                                                       << 5U)) 
                                                                   | (((IData)(vlSelf->top__DOT___0628_) 
                                                                       << 9U) 
                                                                      | (((IData)(vlSelf->top__DOT___0628_) 
                                                                          << 7U) 
                                                                         | (((IData)(vlSelf->top__DOT___0444_) 
                                                                             << 6U) 
                                                                            | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 5U) 
                                                                               | (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 4U) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___4291_[1U] 
                                                                                >> 4U)) 
                                                                                | (IData)(vlSelf->top__DOT___3538_))))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___3683_) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlSelf->top__DOT___2178_) 
                                                                     << 0x1eU) 
                                                                    | (((IData)(vlSelf->top__DOT___3684_) 
                                                                        << 0x1dU) 
                                                                       | ((0x1f000000U 
                                                                           & ((vlSelf->top__DOT___4291_[1U] 
                                                                               << 0x1cU) 
                                                                              | (0xf000000U 
                                                                                & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)))) 
                                                                          | (((IData)(vlSelf->top__DOT___3001_) 
                                                                              << 0x17U) 
                                                                             | ((0x600000U 
                                                                                & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2548_) 
                                                                                << 0x14U) 
                                                                                | ((0xfc000U 
                                                                                & (vlSelf->top__DOT___4291_[0U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0764_) 
                                                                                << 0xdU) 
                                                                                | ((0x1fc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x2eU)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3146_) 
                                                                                << 5U) 
                                                                                | ((0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3834_ 
                                                                                >> 0x29U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3534_)))))))))))))))) 
                                             >> 0x20U)) 
                                    << 8U));
    __Vtemp_13[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___4350_[1U] 
                                                   >> 7U)))) 
                               << 0x27U) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT___4740_[1U] 
                                                                 >> 0xbU)))) 
                                             << 0x26U) 
                                            | (((QData)((IData)(
                                                                (0x3fffU 
                                                                 & ((vlSelf->top__DOT___4350_[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->top__DOT___4350_[0U] 
                                                                       >> 0x18U))))) 
                                                << 0x18U) 
                                               | (QData)((IData)(
                                                                 ((0x800000U 
                                                                   & (vlSelf->top__DOT___4740_[0U] 
                                                                      >> 5U)) 
                                                                  | ((0x7fe000U 
                                                                      & vlSelf->top__DOT___4350_[0U]) 
                                                                     | ((0x1000U 
                                                                         & (vlSelf->top__DOT___4740_[0U] 
                                                                            >> 5U)) 
                                                                        | ((0xff8U 
                                                                            & vlSelf->top__DOT___4350_[0U]) 
                                                                           | (((IData)(vlSelf->top__DOT___1295_) 
                                                                               << 2U) 
                                                                              | (IData)(vlSelf->top__DOT___0054_))))))))))));
    __Vtemp_13[1U] = (((IData)((((QData)((IData)(((0x1000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3953_ 
                                                               >> 0x2aU)) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & (vlSelf->top__DOT___4740_[2U] 
                                                         >> 0xdU)) 
                                                     | (0x7ffU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT___3953_ 
                                                                   >> 0x1eU))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___4740_[2U] 
                                                                  << 0x13U)) 
                                                              | ((0x7ffc0000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3953_ 
                                                                              >> 0x10U)) 
                                                                     << 0x12U)) 
                                                                 | ((0x3e000U 
                                                                     & (vlSelf->top__DOT___4282_[0U] 
                                                                        << 8U)) 
                                                                    | ((0x1ffeU 
                                                                        & (vlSelf->top__DOT___4350_[1U] 
                                                                           >> 8U)) 
                                                                       | (1U 
                                                                          & (vlSelf->top__DOT___4740_[1U] 
                                                                             >> 0xdU)))))))))) 
                       << 8U) | (IData)(((((QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->top__DOT___4350_[1U] 
                                                               >> 7U)))) 
                                           << 0x27U) 
                                          | (((QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT___4740_[1U] 
                                                                  >> 0xbU)))) 
                                              << 0x26U) 
                                             | (((QData)((IData)(
                                                                 (0x3fffU 
                                                                  & ((vlSelf->top__DOT___4350_[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->top__DOT___4350_[0U] 
                                                                        >> 0x18U))))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0x800000U 
                                                                    & (vlSelf->top__DOT___4740_[0U] 
                                                                       >> 5U)) 
                                                                   | ((0x7fe000U 
                                                                       & vlSelf->top__DOT___4350_[0U]) 
                                                                      | ((0x1000U 
                                                                          & (vlSelf->top__DOT___4740_[0U] 
                                                                             >> 5U)) 
                                                                         | ((0xff8U 
                                                                             & vlSelf->top__DOT___4350_[0U]) 
                                                                            | (((IData)(vlSelf->top__DOT___1295_) 
                                                                                << 2U) 
                                                                               | (IData)(vlSelf->top__DOT___0054_))))))))))) 
                                         >> 0x20U)));
    __Vtemp_13[2U] = (((IData)((((QData)((IData)(((0x1000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3953_ 
                                                               >> 0x2aU)) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & (vlSelf->top__DOT___4740_[2U] 
                                                         >> 0xdU)) 
                                                     | (0x7ffU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT___3953_ 
                                                                   >> 0x1eU))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___4740_[2U] 
                                                                  << 0x13U)) 
                                                              | ((0x7ffc0000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3953_ 
                                                                              >> 0x10U)) 
                                                                     << 0x12U)) 
                                                                 | ((0x3e000U 
                                                                     & (vlSelf->top__DOT___4282_[0U] 
                                                                        << 8U)) 
                                                                    | ((0x1ffeU 
                                                                        & (vlSelf->top__DOT___4350_[1U] 
                                                                           >> 8U)) 
                                                                       | (1U 
                                                                          & (vlSelf->top__DOT___4740_[1U] 
                                                                             >> 0xdU)))))))))) 
                       >> 0x18U) | ((IData)(((((QData)((IData)(
                                                               ((0x1000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3953_ 
                                                                             >> 0x2aU)) 
                                                                    << 0xcU)) 
                                                                | ((0x800U 
                                                                    & (vlSelf->top__DOT___4740_[2U] 
                                                                       >> 0xdU)) 
                                                                   | (0x7ffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x1eU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x80000000U 
                                                                  & (vlSelf->top__DOT___4740_[2U] 
                                                                     << 0x13U)) 
                                                                 | ((0x7ffc0000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x10U)) 
                                                                        << 0x12U)) 
                                                                    | ((0x3e000U 
                                                                        & (vlSelf->top__DOT___4282_[0U] 
                                                                           << 8U)) 
                                                                       | ((0x1ffeU 
                                                                           & (vlSelf->top__DOT___4350_[1U] 
                                                                              >> 8U)) 
                                                                          | (1U 
                                                                             & (vlSelf->top__DOT___4740_[1U] 
                                                                                >> 0xdU))))))))) 
                                             >> 0x20U)) 
                                    << 8U));
    VL_ADD_W(3, __Vtemp_14, __Vtemp_12, __Vtemp_13);
    vlSelf->top__DOT___3182_ = (1U & (__Vtemp_14[2U] 
                                      >> 0x12U));
    __Vtemp_17[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0571_)) 
                                 << 0x3fU) | (((QData)((IData)(
                                                               (1U 
                                                                & (((IData)(0x13U) 
                                                                    + (IData)(vlSelf->top__DOT___4307_)) 
                                                                   >> 4U)))) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___2348_)) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___1260_)) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT___4256_) 
                                                                            >> 4U)))) 
                                                        << 0x3bU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___3183_)) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___1829_)) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___2392_)) 
                                                                 << 0x38U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7062_) 
                                                                                >> 2U)))) 
                                                                    << 0x37U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4307_) 
                                                                                >> 3U)))) 
                                                                       << 0x36U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___7062_)))) 
                                                                          << 0x35U) 
                                                                         | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0711_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 0x1dU) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2449_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0979_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1288_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___2202_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0867_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0603_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)))))))))))))))))))))))) 
                                                                             << 0x15U) 
                                                                            | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0x14U) 
                                                                                | ((0xfff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3688_)))))))))))))))))))))))) 
                       << 0x15U) | ((0x1ff800U & ((IData)(
                                                          (vlSelf->top__DOT___3916_ 
                                                           >> 0xbU)) 
                                                  << 0xbU)) 
                                    | (((IData)(vlSelf->top__DOT___0162_) 
                                        << 0xaU) | 
                                       (((IData)(vlSelf->top__DOT___3319_) 
                                         << 9U) | (0x1ffU 
                                                   & (IData)(vlSelf->top__DOT___3916_))))));
    __Vtemp_17[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0571_)) 
                                 << 0x3fU) | (((QData)((IData)(
                                                               (1U 
                                                                & (((IData)(0x13U) 
                                                                    + (IData)(vlSelf->top__DOT___4307_)) 
                                                                   >> 4U)))) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___2348_)) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___1260_)) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT___4256_) 
                                                                            >> 4U)))) 
                                                        << 0x3bU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___3183_)) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___1829_)) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___2392_)) 
                                                                 << 0x38U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7062_) 
                                                                                >> 2U)))) 
                                                                    << 0x37U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4307_) 
                                                                                >> 3U)))) 
                                                                       << 0x36U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___7062_)))) 
                                                                          << 0x35U) 
                                                                         | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0711_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 0x1dU) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2449_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0979_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1288_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___2202_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0867_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0603_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)))))))))))))))))))))))) 
                                                                             << 0x15U) 
                                                                            | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0x14U) 
                                                                                | ((0xfff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3688_)))))))))))))))))))))))) 
                       >> 0xbU) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___0571_)) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (((IData)(0x13U) 
                                                                      + (IData)(vlSelf->top__DOT___4307_)) 
                                                                     >> 4U)))) 
                                                 << 0x3eU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___2348_)) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___1260_)) 
                                                       << 0x3cU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->top__DOT___4256_) 
                                                                              >> 4U)))) 
                                                          << 0x3bU) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___3183_)) 
                                                             << 0x3aU) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___1829_)) 
                                                                << 0x39U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___2392_)) 
                                                                   << 0x38U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7062_) 
                                                                                >> 2U)))) 
                                                                      << 0x37U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4307_) 
                                                                                >> 3U)))) 
                                                                         << 0x36U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___7062_)))) 
                                                                            << 0x35U) 
                                                                           | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0711_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 0x1dU) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2449_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0979_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1288_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___2202_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0867_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0603_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)))))))))))))))))))))))) 
                                                                               << 0x15U) 
                                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0x14U) 
                                                                                | ((0xfff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3688_))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0x15U));
    __Vtemp_17[2U] = ((IData)(((((QData)((IData)(vlSelf->top__DOT___0571_)) 
                                 << 0x3fU) | (((QData)((IData)(
                                                               (1U 
                                                                & (((IData)(0x13U) 
                                                                    + (IData)(vlSelf->top__DOT___4307_)) 
                                                                   >> 4U)))) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___2348_)) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___1260_)) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT___4256_) 
                                                                            >> 4U)))) 
                                                        << 0x3bU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___3183_)) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___1829_)) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___2392_)) 
                                                                 << 0x38U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7062_) 
                                                                                >> 2U)))) 
                                                                    << 0x37U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4307_) 
                                                                                >> 3U)))) 
                                                                       << 0x36U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___7062_)))) 
                                                                          << 0x35U) 
                                                                         | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0711_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 0x1dU) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2449_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0979_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1288_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___2202_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0867_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0603_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)))))))))))))))))))))))) 
                                                                             << 0x15U) 
                                                                            | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0x14U) 
                                                                                | ((0xfff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3688_))))))))))))))))))))))) 
                               >> 0x20U)) >> 0xbU);
    __Vtemp_18[0U] = (((IData)((((QData)((IData)(((
                                                   (~ (IData)(vlSelf->top__DOT___0195_)) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->top__DOT___0170_) 
                                                      << 0x1eU) 
                                                     | ((0x3c000000U 
                                                         & (vlSelf->top__DOT___4242_ 
                                                            << 0xbU)) 
                                                        | (((IData)(vlSelf->top__DOT___2645_) 
                                                            << 0x19U) 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->top__DOT___4242_ 
                                                                  << 0xbU)) 
                                                              | (((IData)(vlSelf->top__DOT___2792_) 
                                                                  << 0x13U) 
                                                                 | (((IData)(vlSelf->top__DOT___0431_) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->top__DOT___2905_) 
                                                                        << 0x11U) 
                                                                       | ((0x1f800U 
                                                                           & (vlSelf->top__DOT___4242_ 
                                                                              << 0xbU)) 
                                                                          | ((0x780U 
                                                                              & (vlSelf->top__DOT___4242_ 
                                                                                >> 8U)) 
                                                                             | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4242_ 
                                                                                >> 8U)) 
                                                                                | (IData)(vlSelf->top__DOT___2792_))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0431_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___2905_) 
                                                                  << 0x1eU) 
                                                                 | ((0x3f000000U 
                                                                     & (vlSelf->top__DOT___4242_ 
                                                                        << 0x18U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0509_) 
                                                                        << 0x17U) 
                                                                       | (((IData)(vlSelf->top__DOT___2951_) 
                                                                           << 0x16U) 
                                                                          | (((IData)(vlSelf->top__DOT___1205_) 
                                                                              << 0x15U) 
                                                                             | (((IData)(vlSelf->top__DOT___0695_) 
                                                                                << 0x13U) 
                                                                                | ((0x78000U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 0xeU) 
                                                                                | ((0x3e00U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2792_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0431_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & vlSelf->top__DOT___4242_)))))))))))))))))) 
                       << 0x12U) | ((0x20000U & ((~ (IData)(vlSelf->top__DOT___1366_)) 
                                                 << 0x11U)) 
                                    | (((IData)(vlSelf->top__DOT___0645_) 
                                        << 0x10U) | 
                                       ((0xc000U & 
                                         (vlSelf->top__DOT___3823_ 
                                          >> 1U)) | 
                                        ((0x2000U & 
                                          ((IData)(vlSelf->top__DOT___7150_) 
                                           << 6U)) 
                                         | ((0x1000U 
                                             & ((IData)(vlSelf->top__DOT___7150_) 
                                                << 6U)) 
                                            | ((0x800U 
                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                   << 6U)) 
                                               | ((0x400U 
                                                   & (vlSelf->top__DOT___3823_ 
                                                      >> 1U)) 
                                                  | ((0x200U 
                                                      & ((IData)(vlSelf->top__DOT___7150_) 
                                                         << 6U)) 
                                                     | ((0x100U 
                                                         & ((IData)(vlSelf->top__DOT___7150_) 
                                                            << 6U)) 
                                                        | ((0x80U 
                                                            & ((IData)(vlSelf->top__DOT___7150_) 
                                                               << 6U)) 
                                                           | ((0x40U 
                                                               & ((IData)(vlSelf->top__DOT___7150_) 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0338_) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->top__DOT___1521_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___1132_) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->top__DOT___1561_) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->top__DOT___1252_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0750_))))))))))))))))));
    __Vtemp_18[1U] = (((IData)((((QData)((IData)(((
                                                   (~ (IData)(vlSelf->top__DOT___0195_)) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->top__DOT___0170_) 
                                                      << 0x1eU) 
                                                     | ((0x3c000000U 
                                                         & (vlSelf->top__DOT___4242_ 
                                                            << 0xbU)) 
                                                        | (((IData)(vlSelf->top__DOT___2645_) 
                                                            << 0x19U) 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->top__DOT___4242_ 
                                                                  << 0xbU)) 
                                                              | (((IData)(vlSelf->top__DOT___2792_) 
                                                                  << 0x13U) 
                                                                 | (((IData)(vlSelf->top__DOT___0431_) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->top__DOT___2905_) 
                                                                        << 0x11U) 
                                                                       | ((0x1f800U 
                                                                           & (vlSelf->top__DOT___4242_ 
                                                                              << 0xbU)) 
                                                                          | ((0x780U 
                                                                              & (vlSelf->top__DOT___4242_ 
                                                                                >> 8U)) 
                                                                             | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4242_ 
                                                                                >> 8U)) 
                                                                                | (IData)(vlSelf->top__DOT___2792_))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0431_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___2905_) 
                                                                  << 0x1eU) 
                                                                 | ((0x3f000000U 
                                                                     & (vlSelf->top__DOT___4242_ 
                                                                        << 0x18U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0509_) 
                                                                        << 0x17U) 
                                                                       | (((IData)(vlSelf->top__DOT___2951_) 
                                                                           << 0x16U) 
                                                                          | (((IData)(vlSelf->top__DOT___1205_) 
                                                                              << 0x15U) 
                                                                             | (((IData)(vlSelf->top__DOT___0695_) 
                                                                                << 0x13U) 
                                                                                | ((0x78000U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 0xeU) 
                                                                                | ((0x3e00U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2792_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0431_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & vlSelf->top__DOT___4242_)))))))))))))))))) 
                       >> 0xeU) | ((IData)(((((QData)((IData)(
                                                              (((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                << 0x1fU) 
                                                               | (((IData)(vlSelf->top__DOT___0170_) 
                                                                   << 0x1eU) 
                                                                  | ((0x3c000000U 
                                                                      & (vlSelf->top__DOT___4242_ 
                                                                         << 0xbU)) 
                                                                     | (((IData)(vlSelf->top__DOT___2645_) 
                                                                         << 0x19U) 
                                                                        | ((0x1f00000U 
                                                                            & (vlSelf->top__DOT___4242_ 
                                                                               << 0xbU)) 
                                                                           | (((IData)(vlSelf->top__DOT___2792_) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->top__DOT___0431_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                                << 0x11U) 
                                                                                | ((0x1f800U 
                                                                                & (vlSelf->top__DOT___4242_ 
                                                                                << 0xbU)) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___4242_ 
                                                                                >> 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4242_ 
                                                                                >> 8U)) 
                                                                                | (IData)(vlSelf->top__DOT___2792_))))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0431_) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                    << 0x1eU) 
                                                                   | ((0x3f000000U 
                                                                       & (vlSelf->top__DOT___4242_ 
                                                                          << 0x18U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0509_) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelf->top__DOT___2951_) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelf->top__DOT___1205_) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelf->top__DOT___0695_) 
                                                                                << 0x13U) 
                                                                                | ((0x78000U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 0xeU) 
                                                                                | ((0x3e00U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2792_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0431_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & vlSelf->top__DOT___4242_))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0x12U));
    __Vtemp_18[2U] = ((IData)(((((QData)((IData)(((
                                                   (~ (IData)(vlSelf->top__DOT___0195_)) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->top__DOT___0170_) 
                                                      << 0x1eU) 
                                                     | ((0x3c000000U 
                                                         & (vlSelf->top__DOT___4242_ 
                                                            << 0xbU)) 
                                                        | (((IData)(vlSelf->top__DOT___2645_) 
                                                            << 0x19U) 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->top__DOT___4242_ 
                                                                  << 0xbU)) 
                                                              | (((IData)(vlSelf->top__DOT___2792_) 
                                                                  << 0x13U) 
                                                                 | (((IData)(vlSelf->top__DOT___0431_) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->top__DOT___2905_) 
                                                                        << 0x11U) 
                                                                       | ((0x1f800U 
                                                                           & (vlSelf->top__DOT___4242_ 
                                                                              << 0xbU)) 
                                                                          | ((0x780U 
                                                                              & (vlSelf->top__DOT___4242_ 
                                                                                >> 8U)) 
                                                                             | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4242_ 
                                                                                >> 8U)) 
                                                                                | (IData)(vlSelf->top__DOT___2792_))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0431_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___2905_) 
                                                                  << 0x1eU) 
                                                                 | ((0x3f000000U 
                                                                     & (vlSelf->top__DOT___4242_ 
                                                                        << 0x18U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0509_) 
                                                                        << 0x17U) 
                                                                       | (((IData)(vlSelf->top__DOT___2951_) 
                                                                           << 0x16U) 
                                                                          | (((IData)(vlSelf->top__DOT___1205_) 
                                                                              << 0x15U) 
                                                                             | (((IData)(vlSelf->top__DOT___0695_) 
                                                                                << 0x13U) 
                                                                                | ((0x78000U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 0xeU) 
                                                                                | ((0x3e00U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2792_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0431_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & vlSelf->top__DOT___4242_))))))))))))))))) 
                               >> 0x20U)) >> 0xeU);
    __Vtemp_19[0U] = __Vtemp_18[0U];
    __Vtemp_19[1U] = __Vtemp_18[1U];
    __Vtemp_19[2U] = ((0x1c0000U & ((vlSelf->top__DOT___4291_[1U] 
                                     << 0x14U) | (0xc0000U 
                                                  & (vlSelf->top__DOT___4291_[0U] 
                                                     >> 0xcU)))) 
                      | __Vtemp_18[2U]);
    VL_ADD_W(3, __Vtemp_20, __Vtemp_17, __Vtemp_19);
    __Vtemp_23[0U] = (((IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___2449_) 
                                                   << 0x16U) 
                                                  | (((IData)(vlSelf->top__DOT___0979_) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3920_ 
                                                                     >> 8U)) 
                                                            << 0x14U)) 
                                                        | (((IData)(vlSelf->top__DOT___1288_) 
                                                            << 0x13U) 
                                                           | (((IData)(vlSelf->top__DOT___0102_) 
                                                               << 0x12U) 
                                                              | (((IData)(vlSelf->top__DOT___2202_) 
                                                                  << 0x11U) 
                                                                 | (((IData)(vlSelf->top__DOT___0867_) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->top__DOT___0603_) 
                                                                        << 0xfU) 
                                                                       | ((0x6000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                              << 0xdU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3570_) 
                                                                              << 0xcU) 
                                                                             | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU))))))))))))))) 
                                 << 0x15U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0719_) 
                                                               << 0x14U) 
                                                              | ((0xfff00U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3916_ 
                                                                              >> 0x1dU)) 
                                                                     << 8U)) 
                                                                 | (((IData)(vlSelf->top__DOT___3374_) 
                                                                     << 7U) 
                                                                    | ((0x40U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                           << 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3532_) 
                                                                           << 5U) 
                                                                          | ((0x18U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                             | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3688_))))))))))))) 
                       << 0x15U) | ((0x1ff800U & ((IData)(
                                                          (vlSelf->top__DOT___3916_ 
                                                           >> 0xbU)) 
                                                  << 0xbU)) 
                                    | (((IData)(vlSelf->top__DOT___0162_) 
                                        << 0xaU) | 
                                       (((IData)(vlSelf->top__DOT___3319_) 
                                         << 9U) | (0x1ffU 
                                                   & (IData)(vlSelf->top__DOT___3916_))))));
    __Vtemp_23[1U] = (((IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___2449_) 
                                                   << 0x16U) 
                                                  | (((IData)(vlSelf->top__DOT___0979_) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3920_ 
                                                                     >> 8U)) 
                                                            << 0x14U)) 
                                                        | (((IData)(vlSelf->top__DOT___1288_) 
                                                            << 0x13U) 
                                                           | (((IData)(vlSelf->top__DOT___0102_) 
                                                               << 0x12U) 
                                                              | (((IData)(vlSelf->top__DOT___2202_) 
                                                                  << 0x11U) 
                                                                 | (((IData)(vlSelf->top__DOT___0867_) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->top__DOT___0603_) 
                                                                        << 0xfU) 
                                                                       | ((0x6000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                              << 0xdU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3570_) 
                                                                              << 0xcU) 
                                                                             | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU))))))))))))))) 
                                 << 0x15U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0719_) 
                                                               << 0x14U) 
                                                              | ((0xfff00U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3916_ 
                                                                              >> 0x1dU)) 
                                                                     << 8U)) 
                                                                 | (((IData)(vlSelf->top__DOT___3374_) 
                                                                     << 7U) 
                                                                    | ((0x40U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                           << 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3532_) 
                                                                           << 5U) 
                                                                          | ((0x18U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                             | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3688_))))))))))))) 
                       >> 0xbU) | ((IData)(((((QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___2449_) 
                                                                << 0x16U) 
                                                               | (((IData)(vlSelf->top__DOT___0979_) 
                                                                   << 0x15U) 
                                                                  | ((0x100000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                         << 0x14U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1288_) 
                                                                         << 0x13U) 
                                                                        | (((IData)(vlSelf->top__DOT___0102_) 
                                                                            << 0x12U) 
                                                                           | (((IData)(vlSelf->top__DOT___2202_) 
                                                                               << 0x11U) 
                                                                              | (((IData)(vlSelf->top__DOT___0867_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0603_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU))))))))))))))) 
                                              << 0x15U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0719_) 
                                                                 << 0x14U) 
                                                                | ((0xfff00U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU)) 
                                                                       << 8U)) 
                                                                   | (((IData)(vlSelf->top__DOT___3374_) 
                                                                       << 7U) 
                                                                      | ((0x40U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                             << 6U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3532_) 
                                                                             << 5U) 
                                                                            | ((0x18U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                               | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3688_)))))))))))) 
                                            >> 0x20U)) 
                                   << 0x15U));
    __Vtemp_23[2U] = ((IData)(((((QData)((IData)((((IData)(vlSelf->top__DOT___2449_) 
                                                   << 0x16U) 
                                                  | (((IData)(vlSelf->top__DOT___0979_) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3920_ 
                                                                     >> 8U)) 
                                                            << 0x14U)) 
                                                        | (((IData)(vlSelf->top__DOT___1288_) 
                                                            << 0x13U) 
                                                           | (((IData)(vlSelf->top__DOT___0102_) 
                                                               << 0x12U) 
                                                              | (((IData)(vlSelf->top__DOT___2202_) 
                                                                  << 0x11U) 
                                                                 | (((IData)(vlSelf->top__DOT___0867_) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->top__DOT___0603_) 
                                                                        << 0xfU) 
                                                                       | ((0x6000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                              << 0xdU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3570_) 
                                                                              << 0xcU) 
                                                                             | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU))))))))))))))) 
                                 << 0x15U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0719_) 
                                                               << 0x14U) 
                                                              | ((0xfff00U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3916_ 
                                                                              >> 0x1dU)) 
                                                                     << 8U)) 
                                                                 | (((IData)(vlSelf->top__DOT___3374_) 
                                                                     << 7U) 
                                                                    | ((0x40U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                           << 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3532_) 
                                                                           << 5U) 
                                                                          | ((0x18U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                             | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3688_)))))))))))) 
                               >> 0x20U)) >> 0xbU);
    __Vtemp_24[0U] = (((IData)((((QData)((IData)(((0x7800U 
                                                   & (vlSelf->top__DOT___4242_ 
                                                      << 0xbU)) 
                                                  | ((0x780U 
                                                      & (vlSelf->top__DOT___4242_ 
                                                         >> 8U)) 
                                                     | (((IData)(vlSelf->top__DOT___2645_) 
                                                         << 6U) 
                                                        | ((0x3eU 
                                                            & (vlSelf->top__DOT___4242_ 
                                                               >> 8U)) 
                                                           | (IData)(vlSelf->top__DOT___2792_))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0431_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___2905_) 
                                                                  << 0x1eU) 
                                                                 | ((0x3f000000U 
                                                                     & (vlSelf->top__DOT___4242_ 
                                                                        << 0x18U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0509_) 
                                                                        << 0x17U) 
                                                                       | (((IData)(vlSelf->top__DOT___2951_) 
                                                                           << 0x16U) 
                                                                          | (((IData)(vlSelf->top__DOT___1205_) 
                                                                              << 0x15U) 
                                                                             | (((IData)(vlSelf->top__DOT___0695_) 
                                                                                << 0x13U) 
                                                                                | ((0x78000U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 0xeU) 
                                                                                | ((0x3e00U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2792_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0431_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & vlSelf->top__DOT___4242_)))))))))))))))))) 
                       << 0x12U) | ((0x20000U & ((~ (IData)(vlSelf->top__DOT___1366_)) 
                                                 << 0x11U)) 
                                    | (((IData)(vlSelf->top__DOT___0645_) 
                                        << 0x10U) | 
                                       ((0xc000U & 
                                         (vlSelf->top__DOT___3823_ 
                                          >> 1U)) | 
                                        ((0x2000U & 
                                          ((IData)(vlSelf->top__DOT___7150_) 
                                           << 6U)) 
                                         | ((0x1000U 
                                             & ((IData)(vlSelf->top__DOT___7150_) 
                                                << 6U)) 
                                            | ((0x800U 
                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                   << 6U)) 
                                               | ((0x400U 
                                                   & (vlSelf->top__DOT___3823_ 
                                                      >> 1U)) 
                                                  | ((0x200U 
                                                      & ((IData)(vlSelf->top__DOT___7150_) 
                                                         << 6U)) 
                                                     | ((0x100U 
                                                         & ((IData)(vlSelf->top__DOT___7150_) 
                                                            << 6U)) 
                                                        | ((0x80U 
                                                            & ((IData)(vlSelf->top__DOT___7150_) 
                                                               << 6U)) 
                                                           | ((0x40U 
                                                               & ((IData)(vlSelf->top__DOT___7150_) 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0338_) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->top__DOT___1521_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___1132_) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->top__DOT___1561_) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->top__DOT___1252_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0750_))))))))))))))))));
    __Vtemp_24[1U] = (((IData)((((QData)((IData)(((0x7800U 
                                                   & (vlSelf->top__DOT___4242_ 
                                                      << 0xbU)) 
                                                  | ((0x780U 
                                                      & (vlSelf->top__DOT___4242_ 
                                                         >> 8U)) 
                                                     | (((IData)(vlSelf->top__DOT___2645_) 
                                                         << 6U) 
                                                        | ((0x3eU 
                                                            & (vlSelf->top__DOT___4242_ 
                                                               >> 8U)) 
                                                           | (IData)(vlSelf->top__DOT___2792_))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0431_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___2905_) 
                                                                  << 0x1eU) 
                                                                 | ((0x3f000000U 
                                                                     & (vlSelf->top__DOT___4242_ 
                                                                        << 0x18U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0509_) 
                                                                        << 0x17U) 
                                                                       | (((IData)(vlSelf->top__DOT___2951_) 
                                                                           << 0x16U) 
                                                                          | (((IData)(vlSelf->top__DOT___1205_) 
                                                                              << 0x15U) 
                                                                             | (((IData)(vlSelf->top__DOT___0695_) 
                                                                                << 0x13U) 
                                                                                | ((0x78000U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 0xeU) 
                                                                                | ((0x3e00U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2792_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0431_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & vlSelf->top__DOT___4242_)))))))))))))))))) 
                       >> 0xeU) | ((IData)(((((QData)((IData)(
                                                              ((0x7800U 
                                                                & (vlSelf->top__DOT___4242_ 
                                                                   << 0xbU)) 
                                                               | ((0x780U 
                                                                   & (vlSelf->top__DOT___4242_ 
                                                                      >> 8U)) 
                                                                  | (((IData)(vlSelf->top__DOT___2645_) 
                                                                      << 6U) 
                                                                     | ((0x3eU 
                                                                         & (vlSelf->top__DOT___4242_ 
                                                                            >> 8U)) 
                                                                        | (IData)(vlSelf->top__DOT___2792_))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0431_) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                    << 0x1eU) 
                                                                   | ((0x3f000000U 
                                                                       & (vlSelf->top__DOT___4242_ 
                                                                          << 0x18U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0509_) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelf->top__DOT___2951_) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelf->top__DOT___1205_) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelf->top__DOT___0695_) 
                                                                                << 0x13U) 
                                                                                | ((0x78000U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 0xeU) 
                                                                                | ((0x3e00U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2792_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0431_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & vlSelf->top__DOT___4242_))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0x12U));
    __Vtemp_24[2U] = ((IData)(((((QData)((IData)(((0x7800U 
                                                   & (vlSelf->top__DOT___4242_ 
                                                      << 0xbU)) 
                                                  | ((0x780U 
                                                      & (vlSelf->top__DOT___4242_ 
                                                         >> 8U)) 
                                                     | (((IData)(vlSelf->top__DOT___2645_) 
                                                         << 6U) 
                                                        | ((0x3eU 
                                                            & (vlSelf->top__DOT___4242_ 
                                                               >> 8U)) 
                                                           | (IData)(vlSelf->top__DOT___2792_))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0431_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___2905_) 
                                                                  << 0x1eU) 
                                                                 | ((0x3f000000U 
                                                                     & (vlSelf->top__DOT___4242_ 
                                                                        << 0x18U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0509_) 
                                                                        << 0x17U) 
                                                                       | (((IData)(vlSelf->top__DOT___2951_) 
                                                                           << 0x16U) 
                                                                          | (((IData)(vlSelf->top__DOT___1205_) 
                                                                              << 0x15U) 
                                                                             | (((IData)(vlSelf->top__DOT___0695_) 
                                                                                << 0x13U) 
                                                                                | ((0x78000U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 0xeU) 
                                                                                | ((0x3e00U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2792_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0431_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & vlSelf->top__DOT___4242_))))))))))))))))) 
                               >> 0x20U)) >> 0xeU);
    VL_ADD_W(3, __Vtemp_25, __Vtemp_23, __Vtemp_24);
    __Vtemp_28[0U] = (((IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___2449_) 
                                                   << 0x16U) 
                                                  | (((IData)(vlSelf->top__DOT___0979_) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3920_ 
                                                                     >> 8U)) 
                                                            << 0x14U)) 
                                                        | (((IData)(vlSelf->top__DOT___1288_) 
                                                            << 0x13U) 
                                                           | (((IData)(vlSelf->top__DOT___0102_) 
                                                               << 0x12U) 
                                                              | (((IData)(vlSelf->top__DOT___2202_) 
                                                                  << 0x11U) 
                                                                 | (((IData)(vlSelf->top__DOT___0867_) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->top__DOT___0603_) 
                                                                        << 0xfU) 
                                                                       | ((0x6000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                              << 0xdU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3570_) 
                                                                              << 0xcU) 
                                                                             | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU))))))))))))))) 
                                 << 0x15U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0719_) 
                                                               << 0x14U) 
                                                              | ((0xfff00U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3916_ 
                                                                              >> 0x1dU)) 
                                                                     << 8U)) 
                                                                 | (((IData)(vlSelf->top__DOT___3374_) 
                                                                     << 7U) 
                                                                    | ((0x40U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                           << 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3532_) 
                                                                           << 5U) 
                                                                          | ((0x18U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                             | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3688_))))))))))))) 
                       << 0x15U) | ((0x1ff800U & ((IData)(
                                                          (vlSelf->top__DOT___3916_ 
                                                           >> 0xbU)) 
                                                  << 0xbU)) 
                                    | (((IData)(vlSelf->top__DOT___0162_) 
                                        << 0xaU) | 
                                       (((IData)(vlSelf->top__DOT___3319_) 
                                         << 9U) | (0x1ffU 
                                                   & (IData)(vlSelf->top__DOT___3916_))))));
    __Vtemp_28[1U] = (((IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___2449_) 
                                                   << 0x16U) 
                                                  | (((IData)(vlSelf->top__DOT___0979_) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3920_ 
                                                                     >> 8U)) 
                                                            << 0x14U)) 
                                                        | (((IData)(vlSelf->top__DOT___1288_) 
                                                            << 0x13U) 
                                                           | (((IData)(vlSelf->top__DOT___0102_) 
                                                               << 0x12U) 
                                                              | (((IData)(vlSelf->top__DOT___2202_) 
                                                                  << 0x11U) 
                                                                 | (((IData)(vlSelf->top__DOT___0867_) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->top__DOT___0603_) 
                                                                        << 0xfU) 
                                                                       | ((0x6000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                              << 0xdU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3570_) 
                                                                              << 0xcU) 
                                                                             | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU))))))))))))))) 
                                 << 0x15U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0719_) 
                                                               << 0x14U) 
                                                              | ((0xfff00U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3916_ 
                                                                              >> 0x1dU)) 
                                                                     << 8U)) 
                                                                 | (((IData)(vlSelf->top__DOT___3374_) 
                                                                     << 7U) 
                                                                    | ((0x40U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                           << 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3532_) 
                                                                           << 5U) 
                                                                          | ((0x18U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                             | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3688_))))))))))))) 
                       >> 0xbU) | ((IData)(((((QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___2449_) 
                                                                << 0x16U) 
                                                               | (((IData)(vlSelf->top__DOT___0979_) 
                                                                   << 0x15U) 
                                                                  | ((0x100000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                         << 0x14U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1288_) 
                                                                         << 0x13U) 
                                                                        | (((IData)(vlSelf->top__DOT___0102_) 
                                                                            << 0x12U) 
                                                                           | (((IData)(vlSelf->top__DOT___2202_) 
                                                                               << 0x11U) 
                                                                              | (((IData)(vlSelf->top__DOT___0867_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0603_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU))))))))))))))) 
                                              << 0x15U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0719_) 
                                                                 << 0x14U) 
                                                                | ((0xfff00U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU)) 
                                                                       << 8U)) 
                                                                   | (((IData)(vlSelf->top__DOT___3374_) 
                                                                       << 7U) 
                                                                      | ((0x40U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                             << 6U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3532_) 
                                                                             << 5U) 
                                                                            | ((0x18U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                               | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3688_)))))))))))) 
                                            >> 0x20U)) 
                                   << 0x15U));
    __Vtemp_28[2U] = ((IData)(((((QData)((IData)((((IData)(vlSelf->top__DOT___2449_) 
                                                   << 0x16U) 
                                                  | (((IData)(vlSelf->top__DOT___0979_) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3920_ 
                                                                     >> 8U)) 
                                                            << 0x14U)) 
                                                        | (((IData)(vlSelf->top__DOT___1288_) 
                                                            << 0x13U) 
                                                           | (((IData)(vlSelf->top__DOT___0102_) 
                                                               << 0x12U) 
                                                              | (((IData)(vlSelf->top__DOT___2202_) 
                                                                  << 0x11U) 
                                                                 | (((IData)(vlSelf->top__DOT___0867_) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->top__DOT___0603_) 
                                                                        << 0xfU) 
                                                                       | ((0x6000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                              << 0xdU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3570_) 
                                                                              << 0xcU) 
                                                                             | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU))))))))))))))) 
                                 << 0x15U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0719_) 
                                                               << 0x14U) 
                                                              | ((0xfff00U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3916_ 
                                                                              >> 0x1dU)) 
                                                                     << 8U)) 
                                                                 | (((IData)(vlSelf->top__DOT___3374_) 
                                                                     << 7U) 
                                                                    | ((0x40U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                           << 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3532_) 
                                                                           << 5U) 
                                                                          | ((0x18U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 3U)) 
                                                                             | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___3688_)))))))))))) 
                               >> 0x20U)) >> 0xbU);
    __Vtemp_29[0U] = (((IData)((((QData)((IData)(((0x7800U 
                                                   & (vlSelf->top__DOT___4242_ 
                                                      << 0xbU)) 
                                                  | ((0x780U 
                                                      & (vlSelf->top__DOT___4242_ 
                                                         >> 8U)) 
                                                     | (((IData)(vlSelf->top__DOT___2645_) 
                                                         << 6U) 
                                                        | ((0x3eU 
                                                            & (vlSelf->top__DOT___4242_ 
                                                               >> 8U)) 
                                                           | (IData)(vlSelf->top__DOT___2792_))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0431_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___2905_) 
                                                                  << 0x1eU) 
                                                                 | ((0x3f000000U 
                                                                     & (vlSelf->top__DOT___4242_ 
                                                                        << 0x18U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0509_) 
                                                                        << 0x17U) 
                                                                       | (((IData)(vlSelf->top__DOT___2951_) 
                                                                           << 0x16U) 
                                                                          | (((IData)(vlSelf->top__DOT___1205_) 
                                                                              << 0x15U) 
                                                                             | (((IData)(vlSelf->top__DOT___0695_) 
                                                                                << 0x13U) 
                                                                                | ((0x78000U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 0xeU) 
                                                                                | ((0x3e00U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2792_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0431_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & vlSelf->top__DOT___4242_)))))))))))))))))) 
                       << 0x12U) | ((0x20000U & ((~ (IData)(vlSelf->top__DOT___1366_)) 
                                                 << 0x11U)) 
                                    | (((IData)(vlSelf->top__DOT___0645_) 
                                        << 0x10U) | 
                                       ((0xc000U & 
                                         (vlSelf->top__DOT___3823_ 
                                          >> 1U)) | 
                                        ((0x2000U & 
                                          ((IData)(vlSelf->top__DOT___7150_) 
                                           << 6U)) 
                                         | ((0x1000U 
                                             & ((IData)(vlSelf->top__DOT___7150_) 
                                                << 6U)) 
                                            | ((0x800U 
                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                   << 6U)) 
                                               | ((0x400U 
                                                   & (vlSelf->top__DOT___3823_ 
                                                      >> 1U)) 
                                                  | ((0x200U 
                                                      & ((IData)(vlSelf->top__DOT___7150_) 
                                                         << 6U)) 
                                                     | ((0x100U 
                                                         & ((IData)(vlSelf->top__DOT___7150_) 
                                                            << 6U)) 
                                                        | ((0x80U 
                                                            & ((IData)(vlSelf->top__DOT___7150_) 
                                                               << 6U)) 
                                                           | ((0x40U 
                                                               & ((IData)(vlSelf->top__DOT___7150_) 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0338_) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->top__DOT___1521_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___1132_) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->top__DOT___1561_) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->top__DOT___1252_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0750_))))))))))))))))));
    __Vtemp_29[1U] = (((IData)((((QData)((IData)(((0x7800U 
                                                   & (vlSelf->top__DOT___4242_ 
                                                      << 0xbU)) 
                                                  | ((0x780U 
                                                      & (vlSelf->top__DOT___4242_ 
                                                         >> 8U)) 
                                                     | (((IData)(vlSelf->top__DOT___2645_) 
                                                         << 6U) 
                                                        | ((0x3eU 
                                                            & (vlSelf->top__DOT___4242_ 
                                                               >> 8U)) 
                                                           | (IData)(vlSelf->top__DOT___2792_))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0431_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___2905_) 
                                                                  << 0x1eU) 
                                                                 | ((0x3f000000U 
                                                                     & (vlSelf->top__DOT___4242_ 
                                                                        << 0x18U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0509_) 
                                                                        << 0x17U) 
                                                                       | (((IData)(vlSelf->top__DOT___2951_) 
                                                                           << 0x16U) 
                                                                          | (((IData)(vlSelf->top__DOT___1205_) 
                                                                              << 0x15U) 
                                                                             | (((IData)(vlSelf->top__DOT___0695_) 
                                                                                << 0x13U) 
                                                                                | ((0x78000U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 0xeU) 
                                                                                | ((0x3e00U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2792_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0431_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & vlSelf->top__DOT___4242_)))))))))))))))))) 
                       >> 0xeU) | ((IData)(((((QData)((IData)(
                                                              ((0x7800U 
                                                                & (vlSelf->top__DOT___4242_ 
                                                                   << 0xbU)) 
                                                               | ((0x780U 
                                                                   & (vlSelf->top__DOT___4242_ 
                                                                      >> 8U)) 
                                                                  | (((IData)(vlSelf->top__DOT___2645_) 
                                                                      << 6U) 
                                                                     | ((0x3eU 
                                                                         & (vlSelf->top__DOT___4242_ 
                                                                            >> 8U)) 
                                                                        | (IData)(vlSelf->top__DOT___2792_))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0431_) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                    << 0x1eU) 
                                                                   | ((0x3f000000U 
                                                                       & (vlSelf->top__DOT___4242_ 
                                                                          << 0x18U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0509_) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelf->top__DOT___2951_) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelf->top__DOT___1205_) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelf->top__DOT___0695_) 
                                                                                << 0x13U) 
                                                                                | ((0x78000U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 0xeU) 
                                                                                | ((0x3e00U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2792_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0431_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & vlSelf->top__DOT___4242_))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0x12U));
    __Vtemp_29[2U] = ((IData)(((((QData)((IData)(((0x7800U 
                                                   & (vlSelf->top__DOT___4242_ 
                                                      << 0xbU)) 
                                                  | ((0x780U 
                                                      & (vlSelf->top__DOT___4242_ 
                                                         >> 8U)) 
                                                     | (((IData)(vlSelf->top__DOT___2645_) 
                                                         << 6U) 
                                                        | ((0x3eU 
                                                            & (vlSelf->top__DOT___4242_ 
                                                               >> 8U)) 
                                                           | (IData)(vlSelf->top__DOT___2792_))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0431_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___2905_) 
                                                                  << 0x1eU) 
                                                                 | ((0x3f000000U 
                                                                     & (vlSelf->top__DOT___4242_ 
                                                                        << 0x18U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0509_) 
                                                                        << 0x17U) 
                                                                       | (((IData)(vlSelf->top__DOT___2951_) 
                                                                           << 0x16U) 
                                                                          | (((IData)(vlSelf->top__DOT___1205_) 
                                                                              << 0x15U) 
                                                                             | (((IData)(vlSelf->top__DOT___0695_) 
                                                                                << 0x13U) 
                                                                                | ((0x78000U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2645_) 
                                                                                << 0xeU) 
                                                                                | ((0x3e00U 
                                                                                & vlSelf->top__DOT___4242_) 
                                                                                | (((IData)(vlSelf->top__DOT___2792_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0431_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2905_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & vlSelf->top__DOT___4242_))))))))))))))))) 
                               >> 0x20U)) >> 0xeU);
    VL_ADD_W(3, __Vtemp_30, __Vtemp_28, __Vtemp_29);
    vlSelf->top__DOT___4364_[0U] = (((IData)((0x1fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  (1U 
                                                                   & __Vtemp_25[2U]))) 
                                                  << 0x34U) 
                                                 | (((QData)((IData)(
                                                                     __Vtemp_25[1U])) 
                                                     << 0x14U) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_25[0U])) 
                                                       >> 0xcU))))) 
                                     << 0xcU) | (((IData)(vlSelf->top__DOT___2611_) 
                                                  << 0xbU) 
                                                 | ((0x7feU 
                                                     & __Vtemp_30[0U]) 
                                                    | (IData)(vlSelf->top__DOT___0386_))));
    vlSelf->top__DOT___4364_[1U] = (((IData)((0x1fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  (1U 
                                                                   & __Vtemp_25[2U]))) 
                                                  << 0x34U) 
                                                 | (((QData)((IData)(
                                                                     __Vtemp_25[1U])) 
                                                     << 0x14U) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_25[0U])) 
                                                       >> 0xcU))))) 
                                     >> 0x14U) | ((IData)(
                                                          ((0x1fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                (1U 
                                                                                & __Vtemp_25[2U]))) 
                                                                << 0x34U) 
                                                               | (((QData)((IData)(
                                                                                __Vtemp_25[1U])) 
                                                                   << 0x14U) 
                                                                  | ((QData)((IData)(
                                                                                __Vtemp_25[0U])) 
                                                                     >> 0xcU)))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
    vlSelf->top__DOT___4364_[2U] = ((0x1ffffcU & __Vtemp_20[2U]) 
                                    | (((IData)(vlSelf->top__DOT___1417_) 
                                        << 1U) | ((IData)(
                                                          ((0x1fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                (1U 
                                                                                & __Vtemp_25[2U]))) 
                                                                << 0x34U) 
                                                               | (((QData)((IData)(
                                                                                __Vtemp_25[1U])) 
                                                                   << 0x14U) 
                                                                  | ((QData)((IData)(
                                                                                __Vtemp_25[0U])) 
                                                                     >> 0xcU)))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U)));
    vlSelf->top__DOT___1952_ = (1U & (~ (((IData)(vlSelf->top__DOT___3183_) 
                                          & (IData)(vlSelf->top__DOT___3182_)) 
                                         | ((IData)(vlSelf->top__DOT___3181_) 
                                            & (IData)(vlSelf->top__DOT___0132_)))));
    vlSelf->top__DOT___1243_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (3U 
                                                                     & (vlSelf->top__DOT___4364_[1U] 
                                                                        >> 0xeU)))) 
                                                    << 0x29U) 
                                                   | vlSelf->top__DOT____VdfgTmp_h69fa475f__0) 
                                                  + vlSelf->__VdfgTmp_hde23fc41__0) 
                                                 >> 0x2aU))));
    vlSelf->top__DOT___3169_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (3U 
                                                                     & (vlSelf->top__DOT___4531_[1U] 
                                                                        >> 0x13U)))) 
                                                    << 0x33U) 
                                                   | ((0x3fffffffffffcULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->top__DOT___4531_[1U])) 
                                                           << 0x20U) 
                                                          | (0xfffffffffffffffcULL 
                                                             & (QData)((IData)(
                                                                               vlSelf->top__DOT___4531_[0U]))))) 
                                                      | (QData)((IData)(
                                                                        ((IData)(vlSelf->top__DOT___0305_) 
                                                                         << 1U))))) 
                                                  + 
                                                  ((0x1ffffffffff000ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT___4364_[1U])) 
                                                        << 0x20U) 
                                                       | (0xfffffffffffff000ULL 
                                                          & (QData)((IData)(
                                                                            vlSelf->top__DOT___4364_[0U]))))) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___2611_) 
                                                                       << 0xbU) 
                                                                      | ((0x7feU 
                                                                          & vlSelf->top__DOT___4364_[0U]) 
                                                                         | (IData)(vlSelf->top__DOT___0386_))))))) 
                                                 >> 0x34U))));
    top__DOT____VdfgTmp_h254b2a58__0 = (((QData)((IData)(vlSelf->top__DOT___1417_)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (0x7ffffU 
                                                             & ((vlSelf->top__DOT___4364_[2U] 
                                                                 << 0x12U) 
                                                                | (vlSelf->top__DOT___4364_[1U] 
                                                                   >> 0xeU))))) 
                                            << 0x29U) 
                                           | vlSelf->top__DOT____VdfgTmp_h69fa475f__0));
    vlSelf->top__DOT___2032_ = (1U & (IData)((0xffffffffULL 
                                              & (((((QData)((IData)(
                                                                    (3U 
                                                                     & (vlSelf->top__DOT___4531_[1U] 
                                                                        >> 0x13U)))) 
                                                    << 0x33U) 
                                                   | ((0x3fffffffffffcULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->top__DOT___4531_[1U])) 
                                                           << 0x20U) 
                                                          | (0xfffffffffffffffcULL 
                                                             & (QData)((IData)(
                                                                               vlSelf->top__DOT___4531_[0U]))))) 
                                                      | (QData)((IData)(
                                                                        ((IData)(vlSelf->top__DOT___0305_) 
                                                                         << 1U))))) 
                                                  + 
                                                  ((0x1ffffffffff000ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT___4364_[1U])) 
                                                        << 0x20U) 
                                                       | (0xfffffffffffff000ULL 
                                                          & (QData)((IData)(
                                                                            vlSelf->top__DOT___4364_[0U]))))) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___2611_) 
                                                                       << 0xbU) 
                                                                      | ((0x7feU 
                                                                          & vlSelf->top__DOT___4364_[0U]) 
                                                                         | (IData)(vlSelf->top__DOT___0386_))))))) 
                                                 >> 0x15U))));
    top__DOT____VdfgTmp_hc91e80ca__0 = ((0x7feU & vlSelf->top__DOT___4364_[0U]) 
                                        | (IData)(vlSelf->top__DOT___0386_));
    vlSelf->top__DOT___2770_ = (1U & (((8U | (((IData)(vlSelf->top__DOT___1442_) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->top__DOT___0777_) 
                                                  << 0xdU) 
                                                 | ((0x1000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___7215_ 
                                                                 >> 0x1bU)) 
                                                        << 0xcU)) 
                                                    | (((IData)(vlSelf->top__DOT___0842_) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->top__DOT___2193_) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->top__DOT___1083_) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->top__DOT___0452_) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->top__DOT___0740_) 
                                                                    << 7U) 
                                                                   | (((IData)(vlSelf->top__DOT___1768_) 
                                                                       << 6U) 
                                                                      | ((0x20U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 8U)) 
                                                                             << 5U)) 
                                                                         | ((6U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 4U)) 
                                                                                << 1U)) 
                                                                            | (1U 
                                                                               & (IData)(vlSelf->top__DOT___4738_)))))))))))))) 
                                       + ((0xff80U 
                                           & (vlSelf->top__DOT___4364_[2U] 
                                              << 5U)) 
                                          | (((IData)(vlSelf->top__DOT___1417_) 
                                              << 6U) 
                                             | (0x3fU 
                                                & ((vlSelf->top__DOT___4364_[2U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT___4364_[1U] 
                                                      >> 0x1bU)))))) 
                                      >> 0xfU));
    vlSelf->top__DOT___0433_ = (1U & (((8U | ((0x10000U 
                                               & ((IData)(vlSelf->top__DOT___7065_) 
                                                  << 9U)) 
                                              | (((IData)(vlSelf->top__DOT___1442_) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->top__DOT___0777_) 
                                                     << 0xdU) 
                                                    | ((0x1000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___7215_ 
                                                                    >> 0x1bU)) 
                                                           << 0xcU)) 
                                                       | (((IData)(vlSelf->top__DOT___0842_) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->top__DOT___2193_) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->top__DOT___1083_) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->top__DOT___0452_) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->top__DOT___0740_) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->top__DOT___1768_) 
                                                                          << 6U) 
                                                                         | ((0x20U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 8U)) 
                                                                                << 5U)) 
                                                                            | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 4U)) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & (IData)(vlSelf->top__DOT___4738_))))))))))))))) 
                                       + ((0x1ff80U 
                                           & (vlSelf->top__DOT___4364_[2U] 
                                              << 5U)) 
                                          | (((IData)(vlSelf->top__DOT___1417_) 
                                              << 6U) 
                                             | (0x3fU 
                                                & ((vlSelf->top__DOT___4364_[2U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT___4364_[1U] 
                                                      >> 0x1bU)))))) 
                                      >> 0x10U));
    vlSelf->top__DOT___1158_ = (1U & (((8U | ((0x20000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___4049_ 
                                                           >> 0x26U)) 
                                                  << 0x11U)) 
                                              | ((0x10000U 
                                                  & ((IData)(vlSelf->top__DOT___7065_) 
                                                     << 9U)) 
                                                 | (((IData)(vlSelf->top__DOT___1442_) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->top__DOT___0777_) 
                                                        << 0xdU) 
                                                       | ((0x1000U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___7215_ 
                                                                       >> 0x1bU)) 
                                                              << 0xcU)) 
                                                          | (((IData)(vlSelf->top__DOT___0842_) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT___2193_) 
                                                                 << 0xaU) 
                                                                | (((IData)(vlSelf->top__DOT___1083_) 
                                                                    << 9U) 
                                                                   | (((IData)(vlSelf->top__DOT___0452_) 
                                                                       << 8U) 
                                                                      | (((IData)(vlSelf->top__DOT___0740_) 
                                                                          << 7U) 
                                                                         | (((IData)(vlSelf->top__DOT___1768_) 
                                                                             << 6U) 
                                                                            | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 8U)) 
                                                                                << 5U)) 
                                                                               | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 4U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___4738_)))))))))))))))) 
                                       + ((0x3ff80U 
                                           & (vlSelf->top__DOT___4364_[2U] 
                                              << 5U)) 
                                          | (((IData)(vlSelf->top__DOT___1417_) 
                                              << 6U) 
                                             | (0x3fU 
                                                & ((vlSelf->top__DOT___4364_[2U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT___4364_[1U] 
                                                      >> 0x1bU)))))) 
                                      >> 0x11U));
    vlSelf->top__DOT___3608_ = (1U & ((IData)(vlSelf->top__DOT___4738_) 
                                      + (vlSelf->top__DOT___4364_[1U] 
                                         >> 0x1bU)));
    vlSelf->top__DOT___2954_ = (1U & (((8U | (((IData)(vlSelf->top__DOT___0740_) 
                                               << 7U) 
                                              | (((IData)(vlSelf->top__DOT___1768_) 
                                                  << 6U) 
                                                 | ((0x20U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___4100_ 
                                                                 >> 8U)) 
                                                        << 5U)) 
                                                    | ((6U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___4100_ 
                                                                    >> 4U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(vlSelf->top__DOT___4738_))))))) 
                                       + ((0x80U & 
                                           (vlSelf->top__DOT___4364_[2U] 
                                            << 5U)) 
                                          | (((IData)(vlSelf->top__DOT___1417_) 
                                              << 6U) 
                                             | (0x3fU 
                                                & ((vlSelf->top__DOT___4364_[2U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT___4364_[1U] 
                                                      >> 0x1bU)))))) 
                                      >> 7U));
    vlSelf->top__DOT___0909_ = (1U & (((8U | (((IData)(vlSelf->top__DOT___0452_) 
                                               << 8U) 
                                              | (((IData)(vlSelf->top__DOT___0740_) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->top__DOT___1768_) 
                                                     << 6U) 
                                                    | ((0x20U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___4100_ 
                                                                    >> 8U)) 
                                                           << 5U)) 
                                                       | ((6U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___4100_ 
                                                                       >> 4U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(vlSelf->top__DOT___4738_)))))))) 
                                       + ((0x180U & 
                                           (vlSelf->top__DOT___4364_[2U] 
                                            << 5U)) 
                                          | (((IData)(vlSelf->top__DOT___1417_) 
                                              << 6U) 
                                             | (0x3fU 
                                                & ((vlSelf->top__DOT___4364_[2U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT___4364_[1U] 
                                                      >> 0x1bU)))))) 
                                      >> 8U));
    __Vtemp_36[0U] = (IData)(top__DOT____VdfgTmp_h254b2a58__0);
    __Vtemp_36[1U] = ((0xe0000000U & (vlSelf->top__DOT___4364_[2U] 
                                      << 0x1bU)) | (IData)(
                                                           (top__DOT____VdfgTmp_h254b2a58__0 
                                                            >> 0x20U)));
    __Vtemp_36[2U] = (0x1ffU & (vlSelf->top__DOT___4364_[2U] 
                                >> 5U));
    VL_ADD_W(3, __Vtemp_37, __Vtemp_36, vlSelf->top__DOT____VdfgTmp_h5e91855a__0);
    vlSelf->top__DOT____VdfgTmp_hc0ad76dc__0[0U] = 
        __Vtemp_37[0U];
    vlSelf->top__DOT____VdfgTmp_hc0ad76dc__0[1U] = 
        __Vtemp_37[1U];
    vlSelf->top__DOT____VdfgTmp_hc0ad76dc__0[2U] = 
        (0x1ffU & __Vtemp_37[2U]);
    vlSelf->top__DOT____VdfgTmp_h30b75e63__0 = (((QData)((IData)(vlSelf->top__DOT___2091_)) 
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
                                                                                & vlSelf->top__DOT___4038_[1U]))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                (0xb0f00000U 
                                                                                | ((0x1000000U 
                                                                                & vlSelf->top__DOT___4038_[0U]) 
                                                                                | ((0xc0000U 
                                                                                & vlSelf->top__DOT___4038_[0U]) 
                                                                                | ((0x18000U 
                                                                                & vlSelf->top__DOT___4038_[0U]) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___4752_) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & vlSelf->top__DOT___4038_[0U]) 
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
                                                                                & vlSelf->top__DOT___4038_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___3000_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1652_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT___4038_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2261_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0773_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1729_))))))))))))))))))))))))));
    top__DOT____VdfgTmp_h38ed1539__0 = (((IData)(vlSelf->top__DOT___2611_) 
                                         << 0xbU) | (IData)(top__DOT____VdfgTmp_hc91e80ca__0));
    vlSelf->top__DOT___1157_ = ((~ (IData)(vlSelf->top__DOT___0312_)) 
                                & (IData)(vlSelf->top__DOT___1158_));
    __Vtemp_40[0U] = (IData)(top__DOT____VdfgTmp_h254b2a58__0);
    __Vtemp_40[1U] = ((0xe0000000U & (vlSelf->top__DOT___4364_[2U] 
                                      << 0x1bU)) | (IData)(
                                                           (top__DOT____VdfgTmp_h254b2a58__0 
                                                            >> 0x20U)));
    __Vtemp_40[2U] = (0x7fffU & (vlSelf->top__DOT___4364_[2U] 
                                 >> 5U));
    __Vtemp_41[0U] = vlSelf->top__DOT____VdfgTmp_hc7bba8e4__0[0U];
    __Vtemp_41[1U] = vlSelf->top__DOT____VdfgTmp_hc7bba8e4__0[1U];
    __Vtemp_41[2U] = ((0x7c00U & (vlSelf->top__DOT___3989_ 
                                  >> 7U)) | vlSelf->top__DOT____VdfgTmp_hc7bba8e4__0[2U]);
    VL_ADD_W(3, __Vtemp_42, __Vtemp_40, __Vtemp_41);
    __Vtemp_45[0U] = (IData)(top__DOT____VdfgTmp_h254b2a58__0);
    __Vtemp_45[1U] = ((0xe0000000U & (vlSelf->top__DOT___4364_[2U] 
                                      << 0x1bU)) | (IData)(
                                                           (top__DOT____VdfgTmp_h254b2a58__0 
                                                            >> 0x20U)));
    __Vtemp_45[2U] = (0x3fffU & (vlSelf->top__DOT___4364_[2U] 
                                 >> 5U));
    __Vtemp_46[0U] = vlSelf->top__DOT____VdfgTmp_hc7bba8e4__0[0U];
    __Vtemp_46[1U] = vlSelf->top__DOT____VdfgTmp_hc7bba8e4__0[1U];
    __Vtemp_46[2U] = ((0x3c00U & (vlSelf->top__DOT___3989_ 
                                  >> 7U)) | vlSelf->top__DOT____VdfgTmp_hc7bba8e4__0[2U]);
    VL_ADD_W(3, __Vtemp_47, __Vtemp_45, __Vtemp_46);
    __Vtemp_50[0U] = (IData)(top__DOT____VdfgTmp_h254b2a58__0);
    __Vtemp_50[1U] = ((0xe0000000U & (vlSelf->top__DOT___4364_[2U] 
                                      << 0x1bU)) | (IData)(
                                                           (top__DOT____VdfgTmp_h254b2a58__0 
                                                            >> 0x20U)));
    __Vtemp_50[2U] = (0x1fffU & (vlSelf->top__DOT___4364_[2U] 
                                 >> 5U));
    __Vtemp_52[0U] = vlSelf->top__DOT____VdfgTmp_h5e91855a__0[0U];
    __Vtemp_52[1U] = vlSelf->top__DOT____VdfgTmp_h5e91855a__0[1U];
    __Vtemp_52[2U] = ((0x1c00U & (vlSelf->top__DOT___3989_ 
                                  >> 7U)) | (((IData)(vlSelf->top__DOT___1151_) 
                                              << 9U) 
                                             | vlSelf->top__DOT____VdfgTmp_h5e91855a__0[2U]));
    VL_ADD_W(3, __Vtemp_53, __Vtemp_50, __Vtemp_52);
    __Vtemp_55[0U] = (IData)((((QData)((IData)((0x1fU 
                                                & (IData)(
                                                          (0x1fULL 
                                                           & (((((QData)((IData)(
                                                                                (0x1fffU 
                                                                                & (vlSelf->top__DOT___4364_[1U] 
                                                                                >> 0xeU)))) 
                                                                 << 0x29U) 
                                                                | vlSelf->top__DOT____VdfgTmp_h69fa475f__0) 
                                                               + vlSelf->__VdfgTmp_ha450f554__0) 
                                                              >> 0x31U)))))) 
                               << 0x31U) | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (1ULL 
                                                                         & (((((QData)((IData)(
                                                                                (0xffU 
                                                                                & (vlSelf->top__DOT___4364_[1U] 
                                                                                >> 0xeU)))) 
                                                                               << 0x29U) 
                                                                              | vlSelf->top__DOT____VdfgTmp_h69fa475f__0) 
                                                                             + 
                                                                             (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_he57d4102__0)) 
                                                                               << 0x2dU) 
                                                                              | vlSelf->top__DOT____VdfgTmp_he1cf6bd8__0)) 
                                                                            >> 0x30U)))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (0x1fULL 
                                                                            & (((((QData)((IData)(
                                                                                (0x7fU 
                                                                                & (vlSelf->top__DOT___4364_[1U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x29U) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h69fa475f__0) 
                                                                                + 
                                                                                (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h10479c7e__0)) 
                                                                                << 0x2dU) 
                                                                                | vlSelf->top__DOT____VdfgTmp_he1cf6bd8__0)) 
                                                                               >> 0x2bU)))))) 
                                                << 0x2bU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___1243_)) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fffU 
                                                                       & (IData)(
                                                                                (0x1fffULL 
                                                                                & (((((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___4364_[1U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x29U) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h69fa475f__0) 
                                                                                + 
                                                                                (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h751c384c__0)) 
                                                                                << 0xdU) 
                                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h7db95bb2__0)))) 
                                                                                >> 0x1dU)))))) 
                                                      << 0x1dU) 
                                                     | (QData)((IData)(
                                                                       ((0x1ffc0000U 
                                                                         & vlSelf->top__DOT____VdfgTmp_h08ff1b95__0) 
                                                                        | (0x3ffffU 
                                                                           & (vlSelf->top__DOT____VdfgTmp_h5bdc3ec3__0 
                                                                              + vlSelf->__VdfgTmp_hb1f11e02__0)))))))))));
    __Vtemp_55[1U] = ((0xffc00000U & vlSelf->top__DOT____VdfgTmp_hc0ad76dc__0[1U]) 
                      | (IData)(((((QData)((IData)(
                                                   (0x1fU 
                                                    & (IData)(
                                                              (0x1fULL 
                                                               & (((((QData)((IData)(
                                                                                (0x1fffU 
                                                                                & (vlSelf->top__DOT___4364_[1U] 
                                                                                >> 0xeU)))) 
                                                                     << 0x29U) 
                                                                    | vlSelf->top__DOT____VdfgTmp_h69fa475f__0) 
                                                                   + vlSelf->__VdfgTmp_ha450f554__0) 
                                                                  >> 0x31U)))))) 
                                   << 0x31U) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (1ULL 
                                                                             & (((((QData)((IData)(
                                                                                (0xffU 
                                                                                & (vlSelf->top__DOT___4364_[1U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x29U) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h69fa475f__0) 
                                                                                + 
                                                                                (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_he57d4102__0)) 
                                                                                << 0x2dU) 
                                                                                | vlSelf->top__DOT____VdfgTmp_he1cf6bd8__0)) 
                                                                                >> 0x30U)))))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (0x1fULL 
                                                                                & (((((QData)((IData)(
                                                                                (0x7fU 
                                                                                & (vlSelf->top__DOT___4364_[1U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x29U) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h69fa475f__0) 
                                                                                + 
                                                                                (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h10479c7e__0)) 
                                                                                << 0x2dU) 
                                                                                | vlSelf->top__DOT____VdfgTmp_he1cf6bd8__0)) 
                                                                                >> 0x2bU)))))) 
                                                    << 0x2bU) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___1243_)) 
                                                       << 0x2aU) 
                                                      | (((QData)((IData)(
                                                                          (0x1fffU 
                                                                           & (IData)(
                                                                                (0x1fffULL 
                                                                                & (((((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___4364_[1U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x29U) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h69fa475f__0) 
                                                                                + 
                                                                                (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h751c384c__0)) 
                                                                                << 0xdU) 
                                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h7db95bb2__0)))) 
                                                                                >> 0x1dU)))))) 
                                                          << 0x1dU) 
                                                         | (QData)((IData)(
                                                                           ((0x1ffc0000U 
                                                                             & vlSelf->top__DOT____VdfgTmp_h08ff1b95__0) 
                                                                            | (0x3ffffU 
                                                                               & (vlSelf->top__DOT____VdfgTmp_h5bdc3ec3__0 
                                                                                + vlSelf->__VdfgTmp_hb1f11e02__0)))))))))) 
                                 >> 0x20U)));
    vlSelf->top__DOT___4490_[0U] = __Vtemp_55[0U];
    vlSelf->top__DOT___4490_[1U] = __Vtemp_55[1U];
    vlSelf->top__DOT___4490_[2U] = ((0x4000U & __Vtemp_42[2U]) 
                                    | ((0x2000U & __Vtemp_47[2U]) 
                                       | ((0x1e00U 
                                           & __Vtemp_53[2U]) 
                                          | (0x1ffU 
                                             & vlSelf->top__DOT____VdfgTmp_hc0ad76dc__0[2U]))));
    vlSelf->top__DOT___3827_ = ((0xffffe0U & ((vlSelf->top__DOT____VdfgTmp_hc0ad76dc__0[2U] 
                                               << 0xfU) 
                                              | (0x7fe0U 
                                                 & (vlSelf->top__DOT____VdfgTmp_hc0ad76dc__0[1U] 
                                                    >> 0x11U)))) 
                                | (IData)(vlSelf->top__DOT____VdfgTmp_h8fe4a24b__0));
    vlSelf->top__DOT____VdfgTmp_h3ed700af__0[0U] = 
        (((IData)((0x1fffffffffffffULL & (((QData)((IData)(
                                                           vlSelf->top__DOT___4364_[2U])) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              vlSelf->top__DOT___4364_[1U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlSelf->top__DOT___4364_[0U])) 
                                                >> 0xcU))))) 
          << 0xcU) | (IData)(top__DOT____VdfgTmp_h38ed1539__0));
    vlSelf->top__DOT____VdfgTmp_h3ed700af__0[1U] = 
        (((IData)((0x1fffffffffffffULL & (((QData)((IData)(
                                                           vlSelf->top__DOT___4364_[2U])) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              vlSelf->top__DOT___4364_[1U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlSelf->top__DOT___4364_[0U])) 
                                                >> 0xcU))))) 
          >> 0x14U) | ((IData)(((0x1fffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->top__DOT___4364_[2U])) 
                                     << 0x34U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT___4364_[1U])) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT___4364_[0U])) 
                                                     >> 0xcU)))) 
                                >> 0x20U)) << 0xcU));
    vlSelf->top__DOT____VdfgTmp_h3ed700af__0[2U] = 
        (((IData)(vlSelf->top__DOT___1417_) << 1U) 
         | ((IData)(((0x1fffffffffffffULL & (((QData)((IData)(
                                                              vlSelf->top__DOT___4364_[2U])) 
                                              << 0x34U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->top__DOT___4364_[1U])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top__DOT___4364_[0U])) 
                                                   >> 0xcU)))) 
                     >> 0x20U)) >> 0x14U));
    top__DOT____VdfgTmp_haf064849__0 = (0x7fU & (((
                                                   (0x1ffffcU 
                                                    & vlSelf->top__DOT___4531_[0U]) 
                                                   | ((IData)(vlSelf->top__DOT___0305_) 
                                                      << 1U)) 
                                                  + 
                                                  ((0x1ff000U 
                                                    & vlSelf->top__DOT___4364_[0U]) 
                                                   | (IData)(top__DOT____VdfgTmp_h38ed1539__0))) 
                                                 >> 0xeU));
    vlSelf->top__DOT____VdfgTmp_hc647572b__0 = (0x1fffffffffffffULL 
                                                & ((((QData)((IData)(
                                                                     (3U 
                                                                      & (vlSelf->top__DOT___4531_[1U] 
                                                                         >> 0x13U)))) 
                                                     << 0x33U) 
                                                    | vlSelf->top__DOT____VdfgTmp_h9fd0dcbd__0) 
                                                   + 
                                                   ((0x1ffffffffff000ULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top__DOT___4364_[1U])) 
                                                         << 0x20U) 
                                                        | (0xfffffffffffff000ULL 
                                                           & (QData)((IData)(
                                                                             vlSelf->top__DOT___4364_[0U]))))) 
                                                    | (QData)((IData)(top__DOT____VdfgTmp_h38ed1539__0)))));
    __Vtemp_62[0U] = vlSelf->top__DOT____VdfgTmp_hcaba1764__0[0U];
    __Vtemp_62[1U] = vlSelf->top__DOT____VdfgTmp_hcaba1764__0[1U];
    __Vtemp_62[2U] = ((0xc00U & vlSelf->top__DOT___4531_[2U]) 
                      | vlSelf->top__DOT____VdfgTmp_hcaba1764__0[2U]);
    __Vtemp_63[0U] = vlSelf->top__DOT____VdfgTmp_h3ed700af__0[0U];
    __Vtemp_63[1U] = vlSelf->top__DOT____VdfgTmp_h3ed700af__0[1U];
    __Vtemp_63[2U] = ((0xffcU & vlSelf->top__DOT___4364_[2U]) 
                      | vlSelf->top__DOT____VdfgTmp_h3ed700af__0[2U]);
    VL_ADD_W(3, __Vtemp_64, __Vtemp_62, __Vtemp_63);
    vlSelf->top__DOT____VdfgTmp_hba53feec__0[0U] = 
        __Vtemp_64[0U];
    vlSelf->top__DOT____VdfgTmp_hba53feec__0[1U] = 
        __Vtemp_64[1U];
    vlSelf->top__DOT____VdfgTmp_hba53feec__0[2U] = 
        (0xfffU & __Vtemp_64[2U]);
    vlSelf->top__DOT____VdfgTmp_h0a6328fc__0 = (((IData)(top__DOT____VdfgTmp_haf064849__0) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0594_));
    top__DOT____VdfgTmp_h9087c519__0 = (((IData)(top__DOT____VdfgTmp_haf064849__0) 
                                         << 0xdU) | 
                                        ((0x1c00U & 
                                          ((((0x3ffcU 
                                              & vlSelf->top__DOT___4531_[0U]) 
                                             | ((IData)(vlSelf->top__DOT___0305_) 
                                                << 1U)) 
                                            + ((0x3000U 
                                                & vlSelf->top__DOT___4364_[0U]) 
                                               | (IData)(top__DOT____VdfgTmp_h38ed1539__0))) 
                                           >> 1U)) 
                                         | ((0x200U 
                                             & ((((0x7fcU 
                                                   & vlSelf->top__DOT___4531_[0U]) 
                                                  | ((IData)(vlSelf->top__DOT___0305_) 
                                                     << 1U)) 
                                                 + (IData)(top__DOT____VdfgTmp_hc91e80ca__0)) 
                                                >> 1U)) 
                                            | (0x1ffU 
                                               & ((((0x3fcU 
                                                     & vlSelf->top__DOT___4531_[0U]) 
                                                    | ((IData)(vlSelf->top__DOT___0305_) 
                                                       << 1U)) 
                                                   + 
                                                   ((0x3feU 
                                                     & vlSelf->top__DOT___4364_[0U]) 
                                                    | (IData)(vlSelf->top__DOT___0386_))) 
                                                  >> 1U)))));
    vlSelf->top__DOT____VdfgTmp_he89b21ce__0 = (((IData)(vlSelf->top__DOT___3169_) 
                                                 << 0x1fU) 
                                                | ((0x7ffffffeU 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT____VdfgTmp_hc647572b__0 
                                                                >> 0x16U)) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->top__DOT___2032_)));
    top__DOT____VdfgTmp_ha6707204__0 = (((QData)((IData)(
                                                         (0x3ffffU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT____VdfgTmp_hc647572b__0 
                                                                     >> 0x16U))))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelf->top__DOT___2032_) 
                                                            << 0x14U) 
                                                           | top__DOT____VdfgTmp_h9087c519__0))));
    vlSelf->top__DOT____VdfgTmp_hf3a6452a__0 = (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_he89b21ce__0)) 
                                                 << 0x14U) 
                                                | (QData)((IData)(top__DOT____VdfgTmp_h9087c519__0)));
    vlSelf->top__DOT___4449_ = ((1U & vlSelf->top__DOT___4449_) 
                                | ((0x3ffc00U & ((IData)(
                                                         (0xfffULL 
                                                          & (((((QData)((IData)(
                                                                                (0x1ffffU 
                                                                                & (vlSelf->top__DOT___4048_[0U] 
                                                                                >> 7U)))) 
                                                                << 0x27U) 
                                                               | vlSelf->top__DOT____VdfgTmp_h4256fdd3__0) 
                                                              + 
                                                              (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT____VdfgTmp_hba53feec__0[1U] 
                                                                                >> 0x15U)))) 
                                                                << 0x34U) 
                                                               | vlSelf->top__DOT____VdfgTmp_hf3a6452a__0)) 
                                                             >> 0x2cU))) 
                                                 << 0xaU)) 
                                   | ((0x200U & ((IData)(
                                                         (1ULL 
                                                          & (((((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT___4048_[0U] 
                                                                                >> 7U)))) 
                                                                << 0x27U) 
                                                               | vlSelf->top__DOT____VdfgTmp_h4256fdd3__0) 
                                                              + 
                                                              (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT____VdfgTmp_hc647572b__0 
                                                                                >> 0x28U))))) 
                                                                << 0x27U) 
                                                               | top__DOT____VdfgTmp_ha6707204__0)) 
                                                             >> 0x2bU))) 
                                                 << 9U)) 
                                      | ((0x1fcU & 
                                          ((IData)(
                                                   (0x7fULL 
                                                    & (((((QData)((IData)(
                                                                          (0xfU 
                                                                           & (vlSelf->top__DOT___4048_[0U] 
                                                                              >> 7U)))) 
                                                          << 0x27U) 
                                                         | vlSelf->top__DOT____VdfgTmp_h4256fdd3__0) 
                                                        + 
                                                        (((QData)((IData)(
                                                                          (0xfU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT____VdfgTmp_hc647572b__0 
                                                                                >> 0x28U))))) 
                                                          << 0x27U) 
                                                         | top__DOT____VdfgTmp_ha6707204__0)) 
                                                       >> 0x24U))) 
                                           << 2U)) 
                                         | ((IData)(vlSelf->top__DOT___0196_) 
                                            << 1U)))));
    vlSelf->top__DOT____VdfgTmp_h000502bf__0 = (((IData)(
                                                         (0x1fULL 
                                                          & ((vlSelf->__VdfgTmp_hc6b75ff6__0 
                                                              + 
                                                              (((QData)((IData)(
                                                                                (0x1ffU 
                                                                                & (vlSelf->top__DOT____VdfgTmp_hba53feec__0[1U] 
                                                                                >> 0x15U)))) 
                                                                << 0x34U) 
                                                               | vlSelf->top__DOT____VdfgTmp_hf3a6452a__0)) 
                                                             >> 0x38U))) 
                                                 << 0x1bU) 
                                                | ((0x7f80000U 
                                                    & (vlSelf->top__DOT___4449_ 
                                                       << 5U)) 
                                                   | (((IData)(vlSelf->top__DOT___0622_) 
                                                       << 0x12U) 
                                                      | (((IData)(vlSelf->top__DOT___2121_) 
                                                          << 0x11U) 
                                                         | ((0x10000U 
                                                             & (vlSelf->top__DOT___3872_[1U] 
                                                                >> 6U)) 
                                                            | (((IData)(vlSelf->top__DOT___0268_) 
                                                                << 0xfU) 
                                                               | (((IData)(vlSelf->top__DOT___0843_) 
                                                                   << 0xeU) 
                                                                  | ((0x2000U 
                                                                      & (vlSelf->top__DOT___3872_[1U] 
                                                                         >> 6U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1743_) 
                                                                         << 0xcU) 
                                                                        | (((IData)(vlSelf->top__DOT___0699_) 
                                                                            << 0xbU) 
                                                                           | (((IData)(vlSelf->top__DOT___0488_) 
                                                                               << 0xaU) 
                                                                              | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 9U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h932cc739__0)))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1425(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1425\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0xfffU 
                                               & ((IData)(vlSelf->top__DOT___4209_) 
                                                  >> 3U)))) 
                              << 0x25U) | (((QData)((IData)(
                                                            (0xffffffU 
                                                             & ((vlSelf->top__DOT___4496_[1U] 
                                                                 << 0x13U) 
                                                                | (vlSelf->top__DOT___4496_[0U] 
                                                                   >> 0xdU))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(
                                                             ((0x1000U 
                                                               & (vlSelf->top__DOT___7081_[0U] 
                                                                  << 3U)) 
                                                              | ((0xff8U 
                                                                  & vlSelf->top__DOT___4496_[0U]) 
                                                                 | (((IData)(vlSelf->top__DOT___1252_) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & ((~ (IData)(vlSelf->top__DOT___2369_)) 
                                                                           << 1U)) 
                                                                       | (IData)(vlSelf->top__DOT___0265_))))))))));
    __Vtemp_2[1U] = ((0xfffe0000U & ((0x80000000U & 
                                      vlSelf->top__DOT___4496_[1U]) 
                                     | ((0x40000000U 
                                         & (vlSelf->top__DOT___7081_[1U] 
                                            << 3U)) 
                                        | ((0x3e000000U 
                                            & vlSelf->top__DOT___4496_[1U]) 
                                           | ((0x1000000U 
                                               & (vlSelf->top__DOT___7081_[1U] 
                                                  << 3U)) 
                                              | (0xfe0000U 
                                                 & vlSelf->top__DOT___4496_[1U])))))) 
                     | (IData)(((((QData)((IData)((0xfffU 
                                                   & ((IData)(vlSelf->top__DOT___4209_) 
                                                      >> 3U)))) 
                                  << 0x25U) | (((QData)((IData)(
                                                                (0xffffffU 
                                                                 & ((vlSelf->top__DOT___4496_[1U] 
                                                                     << 0x13U) 
                                                                    | (vlSelf->top__DOT___4496_[0U] 
                                                                       >> 0xdU))))) 
                                                << 0xdU) 
                                               | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & (vlSelf->top__DOT___7081_[0U] 
                                                                      << 3U)) 
                                                                  | ((0xff8U 
                                                                      & vlSelf->top__DOT___4496_[0U]) 
                                                                     | (((IData)(vlSelf->top__DOT___1252_) 
                                                                         << 2U) 
                                                                        | ((2U 
                                                                            & ((~ (IData)(vlSelf->top__DOT___2369_)) 
                                                                               << 1U)) 
                                                                           | (IData)(vlSelf->top__DOT___0265_))))))))) 
                                >> 0x20U)));
    __Vtemp_2[2U] = (0x1ffU & vlSelf->top__DOT___4496_[2U]);
    __Vtemp_3[0U] = (((IData)((((QData)((IData)((3U 
                                                 & (vlSelf->top__DOT___4006_[2U] 
                                                    >> 5U)))) 
                                << 0x30U) | (((QData)((IData)(
                                                              ((0x70000000U 
                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                   << 0x1bU)) 
                                                               | ((0xf000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___4220_ 
                                                                               >> 0x2aU)) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & (vlSelf->top__DOT___4744_[1U] 
                                                                         << 4U)) 
                                                                     | ((0x7fff00U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___4220_ 
                                                                                >> 0x1aU)) 
                                                                            << 8U)) 
                                                                        | ((0x80U 
                                                                            & (vlSelf->top__DOT___4744_[1U] 
                                                                               << 4U)) 
                                                                           | ((0x7eU 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___4220_ 
                                                                                >> 0x13U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (vlSelf->top__DOT___4744_[0U] 
                                                                                >> 0x1cU)))))))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               ((0xffe0U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___4220_ 
                                                                             >> 7U)) 
                                                                    << 5U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->top__DOT___4495_[0U] 
                                                                      >> 0x17U)))))))) 
                      << 0x17U) | ((0x7f0000U & (vlSelf->top__DOT___4084_ 
                                                 >> 2U)) 
                                   | ((0xf800U & vlSelf->top__DOT___4495_[0U]) 
                                      | (((IData)(vlSelf->top__DOT___1558_) 
                                          << 0xaU) 
                                         | (((IData)(vlSelf->top__DOT___1594_) 
                                             << 9U) 
                                            | (((IData)(vlSelf->top__DOT___0880_) 
                                                << 8U) 
                                               | (((IData)(vlSelf->top__DOT___0144_) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->top__DOT___0987_) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->top__DOT___2094_) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->top__DOT___0135_) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->top__DOT___2928_) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->top__DOT___0038_) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelf->top__DOT___0088_) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->top__DOT___0688_))))))))))))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)((3U 
                                                 & (vlSelf->top__DOT___4006_[2U] 
                                                    >> 5U)))) 
                                << 0x30U) | (((QData)((IData)(
                                                              ((0x70000000U 
                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                   << 0x1bU)) 
                                                               | ((0xf000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___4220_ 
                                                                               >> 0x2aU)) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & (vlSelf->top__DOT___4744_[1U] 
                                                                         << 4U)) 
                                                                     | ((0x7fff00U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___4220_ 
                                                                                >> 0x1aU)) 
                                                                            << 8U)) 
                                                                        | ((0x80U 
                                                                            & (vlSelf->top__DOT___4744_[1U] 
                                                                               << 4U)) 
                                                                           | ((0x7eU 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___4220_ 
                                                                                >> 0x13U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (vlSelf->top__DOT___4744_[0U] 
                                                                                >> 0x1cU)))))))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               ((0xffe0U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___4220_ 
                                                                             >> 7U)) 
                                                                    << 5U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->top__DOT___4495_[0U] 
                                                                      >> 0x17U)))))))) 
                      >> 9U) | ((IData)(((((QData)((IData)(
                                                           (3U 
                                                            & (vlSelf->top__DOT___4006_[2U] 
                                                               >> 5U)))) 
                                           << 0x30U) 
                                          | (((QData)((IData)(
                                                              ((0x70000000U 
                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                   << 0x1bU)) 
                                                               | ((0xf000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___4220_ 
                                                                               >> 0x2aU)) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & (vlSelf->top__DOT___4744_[1U] 
                                                                         << 4U)) 
                                                                     | ((0x7fff00U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___4220_ 
                                                                                >> 0x1aU)) 
                                                                            << 8U)) 
                                                                        | ((0x80U 
                                                                            & (vlSelf->top__DOT___4744_[1U] 
                                                                               << 4U)) 
                                                                           | ((0x7eU 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___4220_ 
                                                                                >> 0x13U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (vlSelf->top__DOT___4744_[0U] 
                                                                                >> 0x1cU)))))))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               ((0xffe0U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___4220_ 
                                                                             >> 7U)) 
                                                                    << 5U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->top__DOT___4495_[0U] 
                                                                      >> 0x17U))))))) 
                                         >> 0x20U)) 
                                << 0x17U));
    __Vtemp_3[2U] = ((IData)(((((QData)((IData)((3U 
                                                 & (vlSelf->top__DOT___4006_[2U] 
                                                    >> 5U)))) 
                                << 0x30U) | (((QData)((IData)(
                                                              ((0x70000000U 
                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                   << 0x1bU)) 
                                                               | ((0xf000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___4220_ 
                                                                               >> 0x2aU)) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & (vlSelf->top__DOT___4744_[1U] 
                                                                         << 4U)) 
                                                                     | ((0x7fff00U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___4220_ 
                                                                                >> 0x1aU)) 
                                                                            << 8U)) 
                                                                        | ((0x80U 
                                                                            & (vlSelf->top__DOT___4744_[1U] 
                                                                               << 4U)) 
                                                                           | ((0x7eU 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___4220_ 
                                                                                >> 0x13U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (vlSelf->top__DOT___4744_[0U] 
                                                                                >> 0x1cU)))))))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               ((0xffe0U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___4220_ 
                                                                             >> 7U)) 
                                                                    << 5U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->top__DOT___4495_[0U] 
                                                                      >> 0x17U))))))) 
                              >> 0x20U)) >> 9U);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelf->top__DOT___0174_ = (1U & (__Vtemp_4[2U] 
                                      >> 8U));
    vlSelf->top__DOT___0890_ = (1U & ((~ ((((IData)(vlSelf->top__DOT___4774_) 
                                            >> 5U) 
                                           & (IData)(vlSelf->top__DOT___0984_)) 
                                          | (IData)(vlSelf->top__DOT___1007_))) 
                                      ^ (1U & ((((0xcU 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___4163_ 
                                                              >> 0x15U)) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelf->top__DOT___3721_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___1929_))) 
                                                + (IData)(
                                                          (0x1fffULL 
                                                           & (((((QData)((IData)(
                                                                                (0x3fU 
                                                                                & ((IData)(vlSelf->top__DOT___4209_) 
                                                                                >> 3U)))) 
                                                                 << 0x25U) 
                                                                | (((QData)((IData)(
                                                                                (0xffffffU 
                                                                                & ((vlSelf->top__DOT___4496_[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->top__DOT___4496_[0U] 
                                                                                >> 0xdU))))) 
                                                                    << 0xdU) 
                                                                   | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h84ee3354__0)))) 
                                                               + 
                                                               (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4220_ 
                                                                                >> 0x13U))))) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___4744_[0U] 
                                                                                >> 0x1cU)))) 
                                                                    << 0x27U) 
                                                                   | (((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4220_ 
                                                                                >> 7U))))) 
                                                                       << 0x1cU) 
                                                                      | (QData)((IData)(
                                                                                ((0xf800000U 
                                                                                & vlSelf->top__DOT___4495_[0U]) 
                                                                                | ((0x7f0000U 
                                                                                & (vlSelf->top__DOT___4084_ 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_hda07bc62__0))))))))) 
                                                              >> 0x1eU)))) 
                                               >> 3U))));
    vlSelf->top__DOT___3519_ = (1U & ((~ ((((~ (vlSelf->top__DOT___7208_ 
                                                >> 4U)) 
                                            & ((IData)(vlSelf->top__DOT___0389_) 
                                               & ((IData)(vlSelf->top__DOT___0890_) 
                                                  | (IData)(vlSelf->top__DOT___0764_)))) 
                                           | (IData)(vlSelf->top__DOT___0501_)) 
                                          | (IData)(vlSelf->top__DOT___0764_))) 
                                      | (IData)(vlSelf->top__DOT___1424_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1426(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1426\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & (IData)(
                                                            (vlSelf->top__DOT___7019_ 
                                                             >> 0x20U))))) 
                              << 0x34U) | (((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT___7019_ 
                                                                        >> 0x16U))))) 
                                            << 0x2aU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___7019_ 
                                                                           >> 0x15U))))) 
                                               << 0x29U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___7019_ 
                                                                              >> 0x14U))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___7019_ 
                                                                                >> 0x13U))))) 
                                                     << 0x27U) 
                                                    | (((QData)((IData)(
                                                                        (0x7ffffU 
                                                                         & (IData)(vlSelf->top__DOT___7019_)))) 
                                                        << 0x14U) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->top__DOT___4203_) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->top__DOT___1964_) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7137_[0U] 
                                                                                >> 0x19U)) 
                                                                                | (IData)(vlSelf->top__DOT___1130_))))))))))))));
    __Vtemp_1[1U] = (((IData)((vlSelf->top__DOT___7019_ 
                               >> 0x21U)) << 0x15U) 
                     | (IData)(((((QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT___7019_ 
                                                              >> 0x20U))))) 
                                  << 0x34U) | (((QData)((IData)(
                                                                (0x3ffU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___7019_ 
                                                                            >> 0x16U))))) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT___7019_ 
                                                                               >> 0x15U))))) 
                                                   << 0x29U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT___7019_ 
                                                                                >> 0x14U))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT___7019_ 
                                                                                >> 0x13U))))) 
                                                         << 0x27U) 
                                                        | (((QData)((IData)(
                                                                            (0x7ffffU 
                                                                             & (IData)(vlSelf->top__DOT___7019_)))) 
                                                            << 0x14U) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->top__DOT___4203_) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->top__DOT___1964_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7137_[0U] 
                                                                                >> 0x19U)) 
                                                                                | (IData)(vlSelf->top__DOT___1130_))))))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___4212_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4212_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4212_[2U] = ((0x4000U & ((~ 
                                                 (((IData)(vlSelf->top__DOT___1601_) 
                                                   & (((IData)(
                                                               (vlSelf->top__DOT___7043_ 
                                                                >> 1U)) 
                                                       + 
                                                       ((2U 
                                                         & (vlSelf->top__DOT___3871_ 
                                                            >> 0x14U)) 
                                                        | (IData)(vlSelf->top__DOT___1912_))) 
                                                      >> 1U)) 
                                                  | ((IData)(vlSelf->top__DOT___3312_) 
                                                     | (IData)(vlSelf->top__DOT___0517_)))) 
                                                << 0xeU)) 
                                    | ((((IData)(vlSelf->top__DOT___2596_) 
                                         ^ (IData)(vlSelf->top__DOT___2150_)) 
                                        << 0xdU) | 
                                       (0x1fffU & ((IData)(
                                                           (vlSelf->top__DOT___7019_ 
                                                            >> 0x21U)) 
                                                   >> 0xbU))));
}
