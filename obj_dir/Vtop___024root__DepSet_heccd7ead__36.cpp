// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1344(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1344\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    // Body
    vlSelf->top__DOT___3188_ = (1U & ((((0x20U & (vlSelf->top__DOT___4421_[0U] 
                                                  >> 0x14U)) 
                                        | (((IData)(vlSelf->top__DOT___1342_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT___1586_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0642_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0226_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0400_)))))) 
                                       + (((IData)(vlSelf->top__DOT___1357_) 
                                           << 5U) | 
                                          (((IData)(vlSelf->top__DOT___0923_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT___0699_) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_h09d4ce40__0)) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelf->top__DOT___0091_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0662_))))))) 
                                      >> 5U));
    vlSelf->top__DOT___3988_ = ((0x1ff001ffffULL & vlSelf->top__DOT___3988_) 
                                | ((QData)((IData)(
                                                   ((0x400U 
                                                     & ((((0x60U 
                                                           & (vlSelf->top__DOT___4421_[0U] 
                                                              >> 0x14U)) 
                                                          | (((IData)(vlSelf->top__DOT___1342_) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT___1586_) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->top__DOT___0642_) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->top__DOT___0226_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0400_)))))) 
                                                         + 
                                                         (((IData)(vlSelf->top__DOT___2492_) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->top__DOT___1357_) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT___0923_) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_h09d4ce40__0)) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0091_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0662_)))))))) 
                                                        << 4U)) 
                                                    | (((IData)(vlSelf->top__DOT___3188_) 
                                                        << 9U) 
                                                       | ((0x100U 
                                                           & (((((IData)(vlSelf->top__DOT___1342_) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->top__DOT___1586_) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->top__DOT___0642_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0226_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0400_))))) 
                                                               + 
                                                               (((IData)(vlSelf->top__DOT___0923_) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                    << 3U) 
                                                                   | ((4U 
                                                                       & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_h09d4ce40__0)) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0091_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0662_)))))) 
                                                              << 4U)) 
                                                          | (((IData)(vlSelf->top__DOT___0925_) 
                                                              << 7U) 
                                                             | ((0x40U 
                                                                 & (((((IData)(vlSelf->top__DOT___0642_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0226_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0400_))) 
                                                                     + 
                                                                     ((4U 
                                                                       & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_h09d4ce40__0)) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0091_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0662_)))) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___3638_) 
                                                                    << 5U) 
                                                                   | ((0x10U 
                                                                       & (((IData)(vlSelf->top__DOT___0400_) 
                                                                           + (IData)(vlSelf->top__DOT___0662_)) 
                                                                          << 4U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0251_) 
                                                                          << 3U) 
                                                                         | ((4U 
                                                                             & (IData)(vlSelf->top__DOT___7211_)) 
                                                                            | ((2U 
                                                                                & (IData)(vlSelf->top__DOT___7211_)) 
                                                                               | (IData)(vlSelf->top__DOT___0529_))))))))))))) 
                                   << 0x11U));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((3U & (IData)(
                                                            (vlSelf->top__DOT___3916_ 
                                                             >> 0x37U))))) 
                              << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___3570_)) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               (0xfffU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3916_ 
                                                                           >> 0x2aU))))) 
                                               << 0x31U) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0719_)) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     (0xfffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___3374_)) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU))))) 
                                                           << 0x22U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___3532_)) 
                                                              << 0x21U) 
                                                             | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U))))) 
                                                                 << 0x1fU) 
                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x1dU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x1cU) 
                                                                                | ((0xffc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 0x10U) 
                                                                                | ((0xff80U 
                                                                                & ((IData)(vlSelf->top__DOT___3916_) 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((3U 
                                                & (IData)(
                                                          (vlSelf->top__DOT___3916_ 
                                                           >> 0x37U))))) 
                               << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___3570_)) 
                                             << 0x3dU) 
                                            | (((QData)((IData)(
                                                                (0xfffU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___3916_ 
                                                                            >> 0x2aU))))) 
                                                << 0x31U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0719_)) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___3374_)) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU))))) 
                                                            << 0x22U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___3532_)) 
                                                               << 0x21U) 
                                                              | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U))))) 
                                                                  << 0x1fU) 
                                                                 | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x1dU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x1cU) 
                                                                                | ((0xffc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 0x10U) 
                                                                                | ((0xff80U 
                                                                                & ((IData)(vlSelf->top__DOT___3916_) 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_))))))))))))))))))))))))))) 
                             >> 0x20U));
    vlSelf->top__DOT___4006_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4006_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4006_[2U] = ((0x100U & (vlSelf->top__DOT___4744_[1U] 
                                               >> 0x16U)) 
                                    | ((0x80U & (vlSelf->top__DOT___4744_[1U] 
                                                 >> 0x16U)) 
                                       | ((0x60U & 
                                           (vlSelf->top__DOT___4744_[1U] 
                                            >> 0x16U)) 
                                          | ((0xeU 
                                              & (vlSelf->top__DOT___4744_[1U] 
                                                 >> 0x17U)) 
                                             | (IData)(vlSelf->top__DOT___2484_)))));
    vlSelf->top__DOT___3782_ = (1U & (IData)((1ULL 
                                              & ((((0xffffffffffff80ULL 
                                                    & (((QData)((IData)(
                                                                        ((0xe0000000U 
                                                                          & (vlSelf->top__DOT___4006_[2U] 
                                                                             << 0x1cU)) 
                                                                         | (((IData)(vlSelf->top__DOT___2484_) 
                                                                             << 0x1cU) 
                                                                            | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                               | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                        << 0x24U) 
                                                       | ((QData)((IData)(
                                                                          (((IData)(vlSelf->top__DOT___3374_) 
                                                                            << 0x1cU) 
                                                                           | ((0x8000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                              | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))) 
                                                          << 7U))) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1667_) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT___0170_) 
                                                                          << 5U) 
                                                                         | ((0x10U 
                                                                             & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                            | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))))) 
                                                  + 
                                                  ((((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(
                                                                        (7U 
                                                                         & (vlSelf->top__DOT___4005_[1U] 
                                                                            >> 0x14U)))) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                               | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))) 
                                                                << 9U))))) 
                                                   | (QData)((IData)(
                                                                     ((0x100U 
                                                                       & (vlSelf->top__DOT___3872_[1U] 
                                                                          >> 0xeU)) 
                                                                      | (((IData)(vlSelf->top__DOT___0268_) 
                                                                          << 7U) 
                                                                         | (((IData)(vlSelf->top__DOT___0843_) 
                                                                             << 6U) 
                                                                            | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                               | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))) 
                                                 >> 0x37U))));
    vlSelf->top__DOT___2754_ = (1U & (IData)((1ULL 
                                              & ((((0x3fffffffffffff80ULL 
                                                    & (((QData)((IData)(
                                                                        ((0xe0000000U 
                                                                          & (vlSelf->top__DOT___4006_[2U] 
                                                                             << 0x1cU)) 
                                                                         | (((IData)(vlSelf->top__DOT___2484_) 
                                                                             << 0x1cU) 
                                                                            | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                               | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                        << 0x24U) 
                                                       | ((QData)((IData)(
                                                                          (((IData)(vlSelf->top__DOT___3374_) 
                                                                            << 0x1cU) 
                                                                           | ((0x8000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                              | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))) 
                                                          << 7U))) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1667_) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT___0170_) 
                                                                          << 5U) 
                                                                         | ((0x10U 
                                                                             & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                            | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))))) 
                                                  + 
                                                  ((((QData)((IData)(
                                                                     (3U 
                                                                      & (vlSelf->top__DOT___4005_[1U] 
                                                                         >> 0x1cU)))) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___3262_)) 
                                                        << 0x3bU) 
                                                       | (((QData)((IData)(
                                                                           (7U 
                                                                            & (vlSelf->top__DOT___4005_[1U] 
                                                                               >> 0x18U)))) 
                                                           << 0x38U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                              << 0x37U) 
                                                             | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                       << 0x13U) 
                                                                      | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))) 
                                                                         << 9U)))))))) 
                                                   | (QData)((IData)(
                                                                     ((0x100U 
                                                                       & (vlSelf->top__DOT___3872_[1U] 
                                                                          >> 0xeU)) 
                                                                      | (((IData)(vlSelf->top__DOT___0268_) 
                                                                          << 7U) 
                                                                         | (((IData)(vlSelf->top__DOT___0843_) 
                                                                             << 6U) 
                                                                            | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                               | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))) 
                                                 >> 0x3dU))));
    vlSelf->top__DOT___1824_ = (1U & ((((0xffff80U 
                                         & ((IData)(
                                                    (((QData)((IData)(
                                                                      ((0xe0000000U 
                                                                        & (vlSelf->top__DOT___4006_[2U] 
                                                                           << 0x1cU)) 
                                                                       | (((IData)(vlSelf->top__DOT___2484_) 
                                                                           << 0x1cU) 
                                                                          | ((0xc000000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                             | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                      << 0x1dU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->top__DOT___3374_) 
                                                                         << 0x1cU) 
                                                                        | ((0x8000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                               << 0x1bU)) 
                                                                           | (((IData)(vlSelf->top__DOT___3532_) 
                                                                               << 0x1aU) 
                                                                              | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))))) 
                                            << 7U)) 
                                        | (((IData)(vlSelf->top__DOT___1667_) 
                                            << 6U) 
                                           | (((IData)(vlSelf->top__DOT___0170_) 
                                               << 5U) 
                                              | ((0x10U 
                                                  & ((IData)(vlSelf->top__DOT___7211_) 
                                                     << 2U)) 
                                                 | ((8U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3988_ 
                                                                 >> 0x12U)) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelf->top__DOT___0529_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___0183_) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (~ (IData)(vlSelf->top__DOT___0876_)))))))))) 
                                       + (((0xf80000U 
                                            & vlSelf->top__DOT___4005_[0U]) 
                                           | (((IData)(vlSelf->top__DOT___2053_) 
                                               << 0x12U) 
                                              | ((0x30000U 
                                                  & vlSelf->top__DOT___4005_[0U]) 
                                                 | (((IData)(vlSelf->top__DOT___1118_) 
                                                     << 0xfU) 
                                                    | (((IData)(vlSelf->top__DOT___0088_) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->top__DOT___0198_) 
                                                           << 0xdU) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                 << 0xcU)) 
                                                             | (((IData)(vlSelf->top__DOT___2502_) 
                                                                 << 0xbU) 
                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                    << 0xaU) 
                                                                   | ((IData)(vlSelf->top__DOT___2121_) 
                                                                      << 9U)))))))))) 
                                          | ((0x100U 
                                              & (vlSelf->top__DOT___3872_[1U] 
                                                 >> 0xeU)) 
                                             | (((IData)(vlSelf->top__DOT___0268_) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                    << 6U) 
                                                   | ((0x20U 
                                                       & (vlSelf->top__DOT___3872_[1U] 
                                                          >> 0xeU)) 
                                                      | (((IData)(vlSelf->top__DOT___1743_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___0699_) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT___0310_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___0218_) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & (vlSelf->top__DOT___4749_[2U] 
                                                                        >> 0x16U)))))))))))) 
                                      >> 0x17U));
    __Vtemp_8[0U] = (((IData)((0x3ffffffffffffffULL 
                               & (((QData)((IData)(
                                                   ((0xe0000000U 
                                                     & (vlSelf->top__DOT___4006_[2U] 
                                                        << 0x1cU)) 
                                                    | (((IData)(vlSelf->top__DOT___2484_) 
                                                        << 0x1cU) 
                                                       | ((0xc000000U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3916_ 
                                                                       >> 0x37U)) 
                                                              << 0x1aU)) 
                                                          | (((IData)(vlSelf->top__DOT___3570_) 
                                                              << 0x19U) 
                                                             | ((0x1ffe000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3916_ 
                                                                             >> 0x2aU)) 
                                                                    << 0xdU)) 
                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                    << 0xcU) 
                                                                   | (0xfffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                   << 0x1dU) | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___3374_) 
                                                                 << 0x1cU) 
                                                                | ((0x8000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                       << 0x1bU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3532_) 
                                                                       << 0x1aU) 
                                                                      | ((0x3000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                             << 0x18U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3181_) 
                                                                             << 0x17U) 
                                                                            | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                               | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_))))))))))))))))) 
                      << 7U) | (((IData)(vlSelf->top__DOT___1667_) 
                                 << 6U) | (((IData)(vlSelf->top__DOT___0170_) 
                                            << 5U) 
                                           | ((0x10U 
                                               & ((IData)(vlSelf->top__DOT___7211_) 
                                                  << 2U)) 
                                              | ((8U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3988_ 
                                                              >> 0x12U)) 
                                                     << 3U)) 
                                                 | (((IData)(vlSelf->top__DOT___0529_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___0183_) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSelf->top__DOT___0876_))))))))));
    __Vtemp_8[1U] = (((IData)((0x3ffffffffffffffULL 
                               & (((QData)((IData)(
                                                   ((0xe0000000U 
                                                     & (vlSelf->top__DOT___4006_[2U] 
                                                        << 0x1cU)) 
                                                    | (((IData)(vlSelf->top__DOT___2484_) 
                                                        << 0x1cU) 
                                                       | ((0xc000000U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3916_ 
                                                                       >> 0x37U)) 
                                                              << 0x1aU)) 
                                                          | (((IData)(vlSelf->top__DOT___3570_) 
                                                              << 0x19U) 
                                                             | ((0x1ffe000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3916_ 
                                                                             >> 0x2aU)) 
                                                                    << 0xdU)) 
                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                    << 0xcU) 
                                                                   | (0xfffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                   << 0x1dU) | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___3374_) 
                                                                 << 0x1cU) 
                                                                | ((0x8000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                       << 0x1bU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3532_) 
                                                                       << 0x1aU) 
                                                                      | ((0x3000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                             << 0x18U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3181_) 
                                                                             << 0x17U) 
                                                                            | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                               | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_))))))))))))))))) 
                      >> 0x19U) | ((IData)(((0x3ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 ((0xe0000000U 
                                                                   & (vlSelf->top__DOT___4006_[2U] 
                                                                      << 0x1cU)) 
                                                                  | (((IData)(vlSelf->top__DOT___2484_) 
                                                                      << 0x1cU) 
                                                                     | ((0xc000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                            << 0x1aU)) 
                                                                        | (((IData)(vlSelf->top__DOT___3570_) 
                                                                            << 0x19U) 
                                                                           | ((0x1ffe000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                 << 0x1dU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->top__DOT___3374_) 
                                                                    << 0x1cU) 
                                                                   | ((0x8000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                          << 0x1bU)) 
                                                                      | (((IData)(vlSelf->top__DOT___3532_) 
                                                                          << 0x1aU) 
                                                                         | ((0x3000000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                            | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                               | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))))) 
                                            >> 0x20U)) 
                                   << 7U));
    __Vtemp_8[2U] = ((IData)(((0x3ffffffffffffffULL 
                               & (((QData)((IData)(
                                                   ((0xe0000000U 
                                                     & (vlSelf->top__DOT___4006_[2U] 
                                                        << 0x1cU)) 
                                                    | (((IData)(vlSelf->top__DOT___2484_) 
                                                        << 0x1cU) 
                                                       | ((0xc000000U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3916_ 
                                                                       >> 0x37U)) 
                                                              << 0x1aU)) 
                                                          | (((IData)(vlSelf->top__DOT___3570_) 
                                                              << 0x19U) 
                                                             | ((0x1ffe000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3916_ 
                                                                             >> 0x2aU)) 
                                                                    << 0xdU)) 
                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                    << 0xcU) 
                                                                   | (0xfffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                   << 0x1dU) | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___3374_) 
                                                                 << 0x1cU) 
                                                                | ((0x8000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                       << 0x1bU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3532_) 
                                                                       << 0x1aU) 
                                                                      | ((0x3000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                             << 0x18U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3181_) 
                                                                             << 0x17U) 
                                                                            | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                               | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))))) 
                              >> 0x20U)) >> 0x19U);
    __Vtemp_9[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___2867_)) 
                                << 0x37U) | (((QData)((IData)(
                                                              (vlSelf->top__DOT___4005_[1U] 
                                                               >> 0x1cU))) 
                                              << 0x33U) 
                                             | (((QData)((IData)(vlSelf->top__DOT___3262_)) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->top__DOT___4005_[1U] 
                                                                        >> 0x18U)))) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                       << 0x2eU) 
                                                      | (((QData)((IData)(
                                                                          (7U 
                                                                           & (vlSelf->top__DOT___4005_[1U] 
                                                                              >> 0x14U)))) 
                                                          << 0x2bU) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                             << 0x2aU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                << 0xaU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_)))))))))))))))))))) 
                      << 9U) | ((0x100U & (vlSelf->top__DOT___3872_[1U] 
                                           >> 0xeU)) 
                                | (((IData)(vlSelf->top__DOT___0268_) 
                                    << 7U) | (((IData)(vlSelf->top__DOT___0843_) 
                                               << 6U) 
                                              | ((0x20U 
                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                     >> 0xeU)) 
                                                 | (((IData)(vlSelf->top__DOT___1743_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___0699_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___0310_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___0218_) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                   >> 0x16U)))))))))));
    __Vtemp_9[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___2867_)) 
                                << 0x37U) | (((QData)((IData)(
                                                              (vlSelf->top__DOT___4005_[1U] 
                                                               >> 0x1cU))) 
                                              << 0x33U) 
                                             | (((QData)((IData)(vlSelf->top__DOT___3262_)) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->top__DOT___4005_[1U] 
                                                                        >> 0x18U)))) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                       << 0x2eU) 
                                                      | (((QData)((IData)(
                                                                          (7U 
                                                                           & (vlSelf->top__DOT___4005_[1U] 
                                                                              >> 0x14U)))) 
                                                          << 0x2bU) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                             << 0x2aU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                << 0xaU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_)))))))))))))))))))) 
                      >> 0x17U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___2867_)) 
                                              << 0x37U) 
                                             | (((QData)((IData)(
                                                                 (vlSelf->top__DOT___4005_[1U] 
                                                                  >> 0x1cU))) 
                                                 << 0x33U) 
                                                | (((QData)((IData)(vlSelf->top__DOT___3262_)) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       (7U 
                                                                        & (vlSelf->top__DOT___4005_[1U] 
                                                                           >> 0x18U)))) 
                                                       << 0x2fU) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                          << 0x2eU) 
                                                         | (((QData)((IData)(
                                                                             (7U 
                                                                              & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                             << 0x2bU) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                << 0x2aU) 
                                                               | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                   << 0xaU) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 9U));
    __Vtemp_9[2U] = ((IData)(((((QData)((IData)(vlSelf->top__DOT___2867_)) 
                                << 0x37U) | (((QData)((IData)(
                                                              (vlSelf->top__DOT___4005_[1U] 
                                                               >> 0x1cU))) 
                                              << 0x33U) 
                                             | (((QData)((IData)(vlSelf->top__DOT___3262_)) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->top__DOT___4005_[1U] 
                                                                        >> 0x18U)))) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                       << 0x2eU) 
                                                      | (((QData)((IData)(
                                                                          (7U 
                                                                           & (vlSelf->top__DOT___4005_[1U] 
                                                                              >> 0x14U)))) 
                                                          << 0x2bU) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                             << 0x2aU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                << 0xaU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))))))))))) 
                              >> 0x20U)) >> 0x17U);
    VL_ADD_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
    vlSelf->top__DOT___0682_ = (1U & __Vtemp_10[2U]);
    vlSelf->top__DOT___2519_ = (1U & ((((0x7ff80U & 
                                         ((IData)((
                                                   ((QData)((IData)(
                                                                    ((0xe0000000U 
                                                                      & (vlSelf->top__DOT___4006_[2U] 
                                                                         << 0x1cU)) 
                                                                     | (((IData)(vlSelf->top__DOT___2484_) 
                                                                         << 0x1cU) 
                                                                        | ((0xc000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                               << 0x1aU)) 
                                                                           | (((IData)(vlSelf->top__DOT___3570_) 
                                                                               << 0x19U) 
                                                                              | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                    << 0x1dU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___3374_) 
                                                                       << 0x1cU) 
                                                                      | ((0x8000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                             << 0x1bU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3532_) 
                                                                             << 0x1aU) 
                                                                            | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                               | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))))) 
                                          << 7U)) | 
                                        (((IData)(vlSelf->top__DOT___1667_) 
                                          << 6U) | 
                                         (((IData)(vlSelf->top__DOT___0170_) 
                                           << 5U) | 
                                          ((0x10U & 
                                            ((IData)(vlSelf->top__DOT___7211_) 
                                             << 2U)) 
                                           | ((8U & 
                                               ((IData)(
                                                        (vlSelf->top__DOT___3988_ 
                                                         >> 0x12U)) 
                                                << 3U)) 
                                              | (((IData)(vlSelf->top__DOT___0529_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0183_) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->top__DOT___0876_)))))))))) 
                                       + ((((IData)(vlSelf->top__DOT___2053_) 
                                            << 0x12U) 
                                           | ((0x30000U 
                                               & vlSelf->top__DOT___4005_[0U]) 
                                              | (((IData)(vlSelf->top__DOT___1118_) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->top__DOT___0088_) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->top__DOT___0198_) 
                                                        << 0xdU) 
                                                       | ((0x1000U 
                                                           & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                              << 0xcU)) 
                                                          | (((IData)(vlSelf->top__DOT___2502_) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT___0622_) 
                                                                 << 0xaU) 
                                                                | ((IData)(vlSelf->top__DOT___2121_) 
                                                                   << 9U))))))))) 
                                          | ((0x100U 
                                              & (vlSelf->top__DOT___3872_[1U] 
                                                 >> 0xeU)) 
                                             | (((IData)(vlSelf->top__DOT___0268_) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                    << 6U) 
                                                   | ((0x20U 
                                                       & (vlSelf->top__DOT___3872_[1U] 
                                                          >> 0xeU)) 
                                                      | (((IData)(vlSelf->top__DOT___1743_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___0699_) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT___0310_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___0218_) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & (vlSelf->top__DOT___4749_[2U] 
                                                                        >> 0x16U)))))))))))) 
                                      >> 0x12U));
    vlSelf->top__DOT___3391_ = (1U & (IData)((0xfffULL 
                                              & ((((0xffffffffffff80ULL 
                                                    & (((QData)((IData)(
                                                                        ((0xe0000000U 
                                                                          & (vlSelf->top__DOT___4006_[2U] 
                                                                             << 0x1cU)) 
                                                                         | (((IData)(vlSelf->top__DOT___2484_) 
                                                                             << 0x1cU) 
                                                                            | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                               | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                        << 0x24U) 
                                                       | ((QData)((IData)(
                                                                          (((IData)(vlSelf->top__DOT___3374_) 
                                                                            << 0x1cU) 
                                                                           | ((0x8000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                              | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))) 
                                                          << 7U))) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1667_) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT___0170_) 
                                                                          << 5U) 
                                                                         | ((0x10U 
                                                                             & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                            | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))))) 
                                                  + 
                                                  ((((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(
                                                                        (7U 
                                                                         & (vlSelf->top__DOT___4005_[1U] 
                                                                            >> 0x14U)))) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                               | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))) 
                                                                << 9U))))) 
                                                   | (QData)((IData)(
                                                                     ((0x100U 
                                                                       & (vlSelf->top__DOT___3872_[1U] 
                                                                          >> 0xeU)) 
                                                                      | (((IData)(vlSelf->top__DOT___0268_) 
                                                                          << 7U) 
                                                                         | (((IData)(vlSelf->top__DOT___0843_) 
                                                                             << 6U) 
                                                                            | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                               | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))) 
                                                 >> 0x2cU))));
    vlSelf->top__DOT___2945_ = (1U & (IData)((0x1fffULL 
                                              & ((((0xffffffffffff80ULL 
                                                    & (((QData)((IData)(
                                                                        ((0xe0000000U 
                                                                          & (vlSelf->top__DOT___4006_[2U] 
                                                                             << 0x1cU)) 
                                                                         | (((IData)(vlSelf->top__DOT___2484_) 
                                                                             << 0x1cU) 
                                                                            | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                               | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                        << 0x24U) 
                                                       | ((QData)((IData)(
                                                                          (((IData)(vlSelf->top__DOT___3374_) 
                                                                            << 0x1cU) 
                                                                           | ((0x8000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                              | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))) 
                                                          << 7U))) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1667_) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT___0170_) 
                                                                          << 5U) 
                                                                         | ((0x10U 
                                                                             & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                            | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))))) 
                                                  + 
                                                  ((((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(
                                                                        (7U 
                                                                         & (vlSelf->top__DOT___4005_[1U] 
                                                                            >> 0x14U)))) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                               | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))) 
                                                                << 9U))))) 
                                                   | (QData)((IData)(
                                                                     ((0x100U 
                                                                       & (vlSelf->top__DOT___3872_[1U] 
                                                                          >> 0xeU)) 
                                                                      | (((IData)(vlSelf->top__DOT___0268_) 
                                                                          << 7U) 
                                                                         | (((IData)(vlSelf->top__DOT___0843_) 
                                                                             << 6U) 
                                                                            | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                               | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))) 
                                                 >> 0x2bU))));
    vlSelf->top__DOT___2145_ = (1U & (~ (((IData)(vlSelf->top__DOT___0729_) 
                                          & (IData)(vlSelf->top__DOT___2076_)) 
                                         | (IData)(vlSelf->top__DOT___2519_))));
    vlSelf->top__DOT___3390_ = ((IData)(vlSelf->top__DOT___3391_) 
                                | (IData)(vlSelf->top__DOT___0532_));
    vlSelf->top__DOT___4222_ = ((0x1ffffeffffULL & vlSelf->top__DOT___4222_) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (~ 
                                                       (((IData)(vlSelf->top__DOT___2145_) 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT___7087_ 
                                                                    >> 7U))) 
                                                        | ((IData)(vlSelf->top__DOT___0750_) 
                                                           & (IData)(vlSelf->top__DOT___0160_))))))) 
                                   << 0x10U));
    vlSelf->top__DOT___2239_ = (1U & (~ (((IData)(vlSelf->top__DOT___2145_) 
                                          & (IData)(
                                                    (vlSelf->top__DOT___7087_ 
                                                     >> 7U))) 
                                         | ((IData)(vlSelf->top__DOT___0750_) 
                                            & (IData)(vlSelf->top__DOT___0160_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1345(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1345\n"); );
    // Body
    vlSelf->top__DOT___4240_[0U] = ((0xfffffe01U & 
                                     vlSelf->top__DOT___4240_[0U]) 
                                    | (0xfffffffeU 
                                       & (((IData)(vlSelf->top__DOT___2614_) 
                                           << 8U) | 
                                          (((IData)(vlSelf->top__DOT___0856_) 
                                            << 7U) 
                                           | ((0x40U 
                                               & ((((8U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___4438_ 
                                                                 >> 0x1dU)) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelf->top__DOT___0958_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0923_))) 
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
                                                  << 3U)) 
                                              | (((IData)(vlSelf->top__DOT___1421_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___2182_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___0702_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___1449_) 
                                                           << 2U) 
                                                          | ((IData)(vlSelf->top__DOT___2842_) 
                                                             << 1U))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1346(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1346\n"); );
    // Body
    vlSelf->top__DOT___0759_ = (1U & ((((IData)(vlSelf->top__DOT___0443_) 
                                        & (vlSelf->in_data[2U] 
                                           >> 0x1aU)) 
                                       | (IData)(vlSelf->top__DOT___1835_)) 
                                      & ((((0x20U & 
                                            ((IData)(
                                                     (vlSelf->top__DOT___3988_ 
                                                      >> 0x15U)) 
                                             << 5U)) 
                                           | (((IData)(vlSelf->top__DOT___3222_) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT___0669_) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT___0719_) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & ((~ 
                                                            ((IData)(vlSelf->top__DOT___0169_) 
                                                             | (IData)(vlSelf->top__DOT___0305_))) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->top__DOT___2583_)))))) 
                                          + ((0x20U 
                                              & vlSelf->top__DOT___7176_) 
                                             | (((IData)(vlSelf->top__DOT___1395_) 
                                                 << 4U) 
                                                | ((((IData)(vlSelf->top__DOT___1688_) 
                                                     | (IData)(vlSelf->top__DOT___0818_)) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0446_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0178_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___1128_))))))) 
                                         >> 5U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1347(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1347\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->top__DOT___4220_ = ((0x3fULL & vlSelf->top__DOT___4220_) 
                                | (((QData)((IData)(
                                                    (7U 
                                                     & (vlSelf->top__DOT___4006_[2U] 
                                                        >> 1U)))) 
                                    << 0x2eU) | (((QData)((IData)(
                                                                  (0xfU 
                                                                   & (vlSelf->top__DOT___4744_[1U] 
                                                                      >> 0x14U)))) 
                                                  << 0x2aU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT___4744_[1U] 
                                                                         >> 0x13U)))) 
                                                     << 0x29U) 
                                                    | (((QData)((IData)(
                                                                        (0x7fffU 
                                                                         & (vlSelf->top__DOT___4744_[1U] 
                                                                            >> 4U)))) 
                                                        << 0x1aU) 
                                                       | ((QData)((IData)(
                                                                          ((0x80000U 
                                                                            & (vlSelf->top__DOT___4744_[1U] 
                                                                               << 0x10U)) 
                                                                           | ((0x7e000U 
                                                                               & ((vlSelf->top__DOT___4744_[1U] 
                                                                                << 0x10U) 
                                                                                | (0xe000U 
                                                                                & (vlSelf->top__DOT___4744_[0U] 
                                                                                >> 0x10U)))) 
                                                                              | ((0x1000U 
                                                                                & (vlSelf->top__DOT___4744_[0U] 
                                                                                >> 0x10U)) 
                                                                                | ((0xffeU 
                                                                                & (vlSelf->top__DOT___4744_[0U] 
                                                                                >> 0x10U)) 
                                                                                | (IData)(vlSelf->top__DOT___0222_))))))) 
                                                          << 6U))))));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x7ffU 
                                               & (IData)(
                                                         (vlSelf->top__DOT___4220_ 
                                                          >> 7U))))) 
                              << 0x1cU) | (QData)((IData)(
                                                          ((0xf800000U 
                                                            & (vlSelf->top__DOT___4744_[0U] 
                                                               << 0xbU)) 
                                                           | ((0x7f0000U 
                                                               & (vlSelf->top__DOT___4084_ 
                                                                  >> 2U)) 
                                                              | ((0xf800U 
                                                                  & (vlSelf->top__DOT___4744_[0U] 
                                                                     << 0xbU)) 
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
                                                                                | (IData)(vlSelf->top__DOT___0688_))))))))))))))))));
    __Vtemp_1[1U] = ((0xffffff80U & (((IData)((vlSelf->top__DOT___4220_ 
                                               >> 0x2aU)) 
                                      << 0x1fU) | (
                                                   (0x40000000U 
                                                    & (vlSelf->top__DOT___4744_[1U] 
                                                       << 0xbU)) 
                                                   | ((0x3fff8000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___4220_ 
                                                                   >> 0x1aU)) 
                                                          << 0xfU)) 
                                                      | ((0x4000U 
                                                          & (vlSelf->top__DOT___4744_[1U] 
                                                             << 0xbU)) 
                                                         | ((0x3f00U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___4220_ 
                                                                         >> 0x13U)) 
                                                                << 8U)) 
                                                            | (0x80U 
                                                               & (vlSelf->top__DOT___4744_[0U] 
                                                                  >> 0x15U)))))))) 
                     | (IData)(((((QData)((IData)((0x7ffU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT___4220_ 
                                                              >> 7U))))) 
                                  << 0x1cU) | (QData)((IData)(
                                                              ((0xf800000U 
                                                                & (vlSelf->top__DOT___4744_[0U] 
                                                                   << 0xbU)) 
                                                               | ((0x7f0000U 
                                                                   & (vlSelf->top__DOT___4084_ 
                                                                      >> 2U)) 
                                                                  | ((0xf800U 
                                                                      & (vlSelf->top__DOT___4744_[0U] 
                                                                         << 0xbU)) 
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
                                                                                | (IData)(vlSelf->top__DOT___0688_))))))))))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___4495_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4495_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4495_[2U] = ((0x7ff800U & ((
                                                   vlSelf->top__DOT___4744_[2U] 
                                                   << 0xcU) 
                                                  | (0x800U 
                                                     & (vlSelf->top__DOT___4744_[1U] 
                                                        >> 0x14U)))) 
                                    | ((0x400U & (vlSelf->top__DOT___4006_[2U] 
                                                  << 2U)) 
                                       | ((0x200U & 
                                           (vlSelf->top__DOT___4744_[1U] 
                                            >> 0x14U)) 
                                          | ((0x180U 
                                              & (vlSelf->top__DOT___4006_[2U] 
                                                 << 2U)) 
                                             | (0x7fU 
                                                & ((0x38U 
                                                    & (vlSelf->top__DOT___4006_[2U] 
                                                       << 2U)) 
                                                   | (7U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___4220_ 
                                                                  >> 0x2aU)) 
                                                         >> 1U))))))));
    vlSelf->top__DOT___2372_ = (1U & ((IData)(vlSelf->top__DOT___0345_) 
                                      + (IData)((vlSelf->top__DOT___4220_ 
                                                 >> 0x23U))));
    vlSelf->top__DOT____VdfgTmp_hda07bc62__0 = ((0xf800U 
                                                 & vlSelf->top__DOT___4495_[0U]) 
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
                                                                              | (IData)(vlSelf->top__DOT___0688_))))))))))));
    vlSelf->top__DOT___0793_ = (1U & (((((IData)(vlSelf->top__DOT___1598_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___2372_)) 
                                       + ((IData)(vlSelf->top__DOT___0099_) 
                                          << 1U)) >> 1U));
    vlSelf->top__DOT___4219_ = ((0xf0ffffffffffffffULL 
                                 & vlSelf->top__DOT___4219_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0341_) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT___0793_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___2372_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___1775_)))))) 
                                   << 0x38U));
    vlSelf->top__DOT___2949_ = (1U & (((((IData)(vlSelf->top__DOT___0793_) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->top__DOT___2372_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___1905_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0073_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___0460_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0069_)))))) 
                                       + (((IData)(vlSelf->top__DOT___2739_) 
                                           << 5U) | 
                                          ((0x1cU & 
                                            (vlSelf->top__DOT___3822_ 
                                             << 1U)) 
                                           | (((IData)(vlSelf->top__DOT___0183_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0366_))))) 
                                      >> 5U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1348(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1348\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_10;
    // Body
    __Vtemp_2[0U] = (((IData)((((QData)((IData)((3U 
                                                 & (vlSelf->top__DOT___4006_[2U] 
                                                    >> 5U)))) 
                                << 0x3eU) | (((QData)((IData)(
                                                              ((0xe0000000U 
                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                   << 0x1cU)) 
                                                               | (((IData)(vlSelf->top__DOT___2484_) 
                                                                   << 0x1cU) 
                                                                  | ((0xc000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                         << 0x1aU)) 
                                                                     | (((IData)(vlSelf->top__DOT___3570_) 
                                                                         << 0x19U) 
                                                                        | ((0x1ffe000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                               << 0xdU)) 
                                                                           | (((IData)(vlSelf->top__DOT___0719_) 
                                                                               << 0xcU) 
                                                                              | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                              << 0x1dU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___3374_) 
                                                                 << 0x1cU) 
                                                                | ((0x8000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                       << 0x1bU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3532_) 
                                                                       << 0x1aU) 
                                                                      | ((0x3000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                             << 0x18U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3181_) 
                                                                             << 0x17U) 
                                                                            | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                               | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_))))))))))))))))) 
                      << 7U) | (((IData)(vlSelf->top__DOT___1667_) 
                                 << 6U) | (((IData)(vlSelf->top__DOT___0170_) 
                                            << 5U) 
                                           | ((0x10U 
                                               & ((IData)(vlSelf->top__DOT___7211_) 
                                                  << 2U)) 
                                              | ((8U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3988_ 
                                                              >> 0x12U)) 
                                                     << 3U)) 
                                                 | (((IData)(vlSelf->top__DOT___0529_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___0183_) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSelf->top__DOT___0876_))))))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)((3U 
                                                 & (vlSelf->top__DOT___4006_[2U] 
                                                    >> 5U)))) 
                                << 0x3eU) | (((QData)((IData)(
                                                              ((0xe0000000U 
                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                   << 0x1cU)) 
                                                               | (((IData)(vlSelf->top__DOT___2484_) 
                                                                   << 0x1cU) 
                                                                  | ((0xc000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                         << 0x1aU)) 
                                                                     | (((IData)(vlSelf->top__DOT___3570_) 
                                                                         << 0x19U) 
                                                                        | ((0x1ffe000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                               << 0xdU)) 
                                                                           | (((IData)(vlSelf->top__DOT___0719_) 
                                                                               << 0xcU) 
                                                                              | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                              << 0x1dU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___3374_) 
                                                                 << 0x1cU) 
                                                                | ((0x8000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                       << 0x1bU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3532_) 
                                                                       << 0x1aU) 
                                                                      | ((0x3000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                             << 0x18U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3181_) 
                                                                             << 0x17U) 
                                                                            | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                               | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_))))))))))))))))) 
                      >> 0x19U) | ((IData)(((((QData)((IData)(
                                                              (3U 
                                                               & (vlSelf->top__DOT___4006_[2U] 
                                                                  >> 5U)))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((0xe0000000U 
                                                                   & (vlSelf->top__DOT___4006_[2U] 
                                                                      << 0x1cU)) 
                                                                  | (((IData)(vlSelf->top__DOT___2484_) 
                                                                      << 0x1cU) 
                                                                     | ((0xc000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                            << 0x1aU)) 
                                                                        | (((IData)(vlSelf->top__DOT___3570_) 
                                                                            << 0x19U) 
                                                                           | ((0x1ffe000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                 << 0x1dU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->top__DOT___3374_) 
                                                                    << 0x1cU) 
                                                                   | ((0x8000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                          << 0x1bU)) 
                                                                      | (((IData)(vlSelf->top__DOT___3532_) 
                                                                          << 0x1aU) 
                                                                         | ((0x3000000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                            | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                               | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))))) 
                                            >> 0x20U)) 
                                   << 7U));
    __Vtemp_2[2U] = ((IData)(((((QData)((IData)((3U 
                                                 & (vlSelf->top__DOT___4006_[2U] 
                                                    >> 5U)))) 
                                << 0x3eU) | (((QData)((IData)(
                                                              ((0xe0000000U 
                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                   << 0x1cU)) 
                                                               | (((IData)(vlSelf->top__DOT___2484_) 
                                                                   << 0x1cU) 
                                                                  | ((0xc000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                         << 0x1aU)) 
                                                                     | (((IData)(vlSelf->top__DOT___3570_) 
                                                                         << 0x19U) 
                                                                        | ((0x1ffe000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                               << 0xdU)) 
                                                                           | (((IData)(vlSelf->top__DOT___0719_) 
                                                                               << 0xcU) 
                                                                              | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                              << 0x1dU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___3374_) 
                                                                 << 0x1cU) 
                                                                | ((0x8000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                       << 0x1bU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3532_) 
                                                                       << 0x1aU) 
                                                                      | ((0x3000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                             << 0x18U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3181_) 
                                                                             << 0x17U) 
                                                                            | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                               | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))))) 
                              >> 0x20U)) >> 0x19U);
    __Vtemp_4[0U] = __Vtemp_2[0U];
    __Vtemp_4[1U] = __Vtemp_2[1U];
    __Vtemp_4[2U] = ((0x100U & vlSelf->top__DOT___4006_[2U]) 
                     | ((0x80U & (vlSelf->top__DOT___4744_[1U] 
                                  >> 0x16U)) | __Vtemp_2[2U]));
    __Vtemp_5[0U] = (((IData)((((QData)((IData)((7U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT___3996_ 
                                                            >> 0x1eU))))) 
                                << 0x3dU) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___4005_[2U] 
                                                                  >> 1U)))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(vlSelf->top__DOT___2867_)) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    (vlSelf->top__DOT___4005_[1U] 
                                                                     >> 0x1cU))) 
                                                    << 0x33U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___3262_)) 
                                                       << 0x32U) 
                                                      | (((QData)((IData)(
                                                                          (7U 
                                                                           & (vlSelf->top__DOT___4005_[1U] 
                                                                              >> 0x18U)))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                                << 0x2bU) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                      << 0xaU) 
                                                                     | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_)))))))))))))))))))))) 
                      << 9U) | ((0x100U & (vlSelf->top__DOT___3872_[1U] 
                                           >> 0xeU)) 
                                | (((IData)(vlSelf->top__DOT___0268_) 
                                    << 7U) | (((IData)(vlSelf->top__DOT___0843_) 
                                               << 6U) 
                                              | ((0x20U 
                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                     >> 0xeU)) 
                                                 | (((IData)(vlSelf->top__DOT___1743_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___0699_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___0310_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___0218_) 
                                                              << 1U) 
                                                             | (1U 
                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                   >> 0x16U)))))))))));
    __Vtemp_5[1U] = (((IData)((((QData)((IData)((7U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT___3996_ 
                                                            >> 0x1eU))))) 
                                << 0x3dU) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___4005_[2U] 
                                                                  >> 1U)))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(vlSelf->top__DOT___2867_)) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    (vlSelf->top__DOT___4005_[1U] 
                                                                     >> 0x1cU))) 
                                                    << 0x33U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___3262_)) 
                                                       << 0x32U) 
                                                      | (((QData)((IData)(
                                                                          (7U 
                                                                           & (vlSelf->top__DOT___4005_[1U] 
                                                                              >> 0x18U)))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                                << 0x2bU) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                      << 0xaU) 
                                                                     | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_)))))))))))))))))))))) 
                      >> 0x17U) | ((IData)(((((QData)((IData)(
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT___3996_ 
                                                                          >> 0x1eU))))) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->top__DOT___4005_[2U] 
                                                                     >> 1U)))) 
                                                 << 0x38U) 
                                                | (((QData)((IData)(vlSelf->top__DOT___2867_)) 
                                                    << 0x37U) 
                                                   | (((QData)((IData)(
                                                                       (vlSelf->top__DOT___4005_[1U] 
                                                                        >> 0x1cU))) 
                                                       << 0x33U) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___3262_)) 
                                                          << 0x32U) 
                                                         | (((QData)((IData)(
                                                                             (7U 
                                                                              & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x18U)))) 
                                                             << 0x2fU) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                                << 0x2eU) 
                                                               | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                                   << 0x2bU) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                      << 0x2aU) 
                                                                     | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                         << 0xaU) 
                                                                        | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 9U));
    __Vtemp_5[2U] = ((IData)(((((QData)((IData)((7U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT___3996_ 
                                                            >> 0x1eU))))) 
                                << 0x3dU) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___4005_[2U] 
                                                                  >> 1U)))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(vlSelf->top__DOT___2867_)) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    (vlSelf->top__DOT___4005_[1U] 
                                                                     >> 0x1cU))) 
                                                    << 0x33U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___3262_)) 
                                                       << 0x32U) 
                                                      | (((QData)((IData)(
                                                                          (7U 
                                                                           & (vlSelf->top__DOT___4005_[1U] 
                                                                              >> 0x18U)))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                                << 0x2bU) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                      << 0xaU) 
                                                                     | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))))))))))))) 
                              >> 0x20U)) >> 0x17U);
    VL_ADD_W(3, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    __Vtemp_8[0U] = (IData)((((QData)((IData)((3U & (IData)(
                                                            ((((0xffffffffffffff80ULL 
                                                                & (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                                    << 0x24U) 
                                                                   | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))) 
                                                                      << 7U))) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))))) 
                                                              + 
                                                              ((((QData)((IData)(
                                                                                (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x1cU))) 
                                                                 << 0x3cU) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___3262_)) 
                                                                    << 0x3bU) 
                                                                   | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x18U)))) 
                                                                       << 0x38U) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                                          << 0x37U) 
                                                                         | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                                             << 0x34U) 
                                                                            | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                                << 0x33U) 
                                                                               | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))) 
                                                                                << 9U)))))))) 
                                                               | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))) 
                                                             >> 0x3eU))))) 
                              << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___2754_)) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & (IData)(
                                                                          (0x1fULL 
                                                                           & ((((0x1fffffffffffff80ULL 
                                                                                & (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                                                << 0x24U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))) 
                                                                                << 7U))) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))))) 
                                                                               + 
                                                                               ((((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x3cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3262_)) 
                                                                                << 0x3bU) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x38U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                                                << 0x37U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))) 
                                                                                << 9U)))))))) 
                                                                                | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))) 
                                                                              >> 0x38U)))))) 
                                               << 0x38U) 
                                              | (((QData)((IData)(vlSelf->top__DOT___3782_)) 
                                                  << 0x37U) 
                                                 | (((QData)((IData)(
                                                                     (0x3ffU 
                                                                      & (IData)(
                                                                                (0x7ffULL 
                                                                                & ((((0xffffffffffff80ULL 
                                                                                & (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                                                << 0x24U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))) 
                                                                                << 7U))) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))))) 
                                                                                + 
                                                                                ((((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                                                << 0x37U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))) 
                                                                                << 9U))))) 
                                                                                | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))) 
                                                                                >> 0x2dU)))))) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___3391_)) 
                                                        << 0x2cU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___2945_)) 
                                                           << 0x2bU) 
                                                          | (((QData)((IData)(
                                                                              (0x7ffffU 
                                                                               & (IData)(
                                                                                (0xffffffffULL 
                                                                                & ((((0xffffffffffff80ULL 
                                                                                & (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                                                << 0x24U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))) 
                                                                                << 7U))) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))))) 
                                                                                + 
                                                                                ((((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                                                << 0x37U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))) 
                                                                                << 9U))))) 
                                                                                | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))) 
                                                                                >> 0x18U)))))) 
                                                              << 0x18U) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___1824_) 
                                                                                << 0x17U) 
                                                                                | ((0x780000U 
                                                                                & (((0x7fff80U 
                                                                                & ((IData)(
                                                                                (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))))) 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))) 
                                                                                + 
                                                                                (((0x780000U 
                                                                                & vlSelf->top__DOT___4005_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 0x12U) 
                                                                                | ((0x30000U 
                                                                                & vlSelf->top__DOT___4005_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 0xaU) 
                                                                                | ((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 9U)))))))))) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U))))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___2519_) 
                                                                                << 0x12U) 
                                                                                | ((0x3fff8U 
                                                                                & (((0x3ff80U 
                                                                                & ((IData)(
                                                                                (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))))) 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))) 
                                                                                + 
                                                                                (((0x30000U 
                                                                                & vlSelf->top__DOT___4005_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 0xaU) 
                                                                                | ((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 9U)))))))) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U))))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___2958_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))))))))));
    __Vtemp_8[1U] = (IData)(((((QData)((IData)((3U 
                                                & (IData)(
                                                          ((((0xffffffffffffff80ULL 
                                                              & (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                                  << 0x24U) 
                                                                 | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))) 
                                                                    << 7U))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))))) 
                                                            + 
                                                            ((((QData)((IData)(
                                                                               (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x1cU))) 
                                                               << 0x3cU) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___3262_)) 
                                                                  << 0x3bU) 
                                                                 | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x18U)))) 
                                                                     << 0x38U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                                        << 0x37U) 
                                                                       | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))) 
                                                                                << 9U)))))))) 
                                                             | (QData)((IData)(
                                                                               ((0x100U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))) 
                                                           >> 0x3eU))))) 
                               << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___2754_)) 
                                             << 0x3dU) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (0x1fULL 
                                                                            & ((((0x1fffffffffffff80ULL 
                                                                                & (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                                                << 0x24U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))) 
                                                                                << 7U))) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))))) 
                                                                                + 
                                                                                ((((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x3cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3262_)) 
                                                                                << 0x3bU) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x38U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                                                << 0x37U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))) 
                                                                                << 9U)))))))) 
                                                                                | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))) 
                                                                               >> 0x38U)))))) 
                                                << 0x38U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___3782_)) 
                                                   << 0x37U) 
                                                  | (((QData)((IData)(
                                                                      (0x3ffU 
                                                                       & (IData)(
                                                                                (0x7ffULL 
                                                                                & ((((0xffffffffffff80ULL 
                                                                                & (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                                                << 0x24U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))) 
                                                                                << 7U))) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))))) 
                                                                                + 
                                                                                ((((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                                                << 0x37U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))) 
                                                                                << 9U))))) 
                                                                                | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))) 
                                                                                >> 0x2dU)))))) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___3391_)) 
                                                         << 0x2cU) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___2945_)) 
                                                            << 0x2bU) 
                                                           | (((QData)((IData)(
                                                                               (0x7ffffU 
                                                                                & (IData)(
                                                                                (0xffffffffULL 
                                                                                & ((((0xffffffffffff80ULL 
                                                                                & (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                                                << 0x24U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))) 
                                                                                << 7U))) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))))) 
                                                                                + 
                                                                                ((((QData)((IData)(vlSelf->top__DOT___3509_)) 
                                                                                << 0x37U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___4005_[1U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2238_)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___4005_[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U) 
                                                                                | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4005_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2121_))))))))))) 
                                                                                << 9U))))) 
                                                                                | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))) 
                                                                                >> 0x18U)))))) 
                                                               << 0x18U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1824_) 
                                                                                << 0x17U) 
                                                                                | ((0x780000U 
                                                                                & (((0x7fff80U 
                                                                                & ((IData)(
                                                                                (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))))) 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))) 
                                                                                + 
                                                                                (((0x780000U 
                                                                                & vlSelf->top__DOT___4005_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2053_) 
                                                                                << 0x12U) 
                                                                                | ((0x30000U 
                                                                                & vlSelf->top__DOT___4005_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 0xaU) 
                                                                                | ((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 9U)))))))))) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U))))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___2519_) 
                                                                                << 0x12U) 
                                                                                | ((0x3fff8U 
                                                                                & (((0x3ff80U 
                                                                                & ((IData)(
                                                                                (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4006_[2U] 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x37U)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3570_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ffe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x2aU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU))))))))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3374_) 
                                                                                << 0x1cU) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3181_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 9U) 
                                                                                | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))))))))))))))) 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))) 
                                                                                + 
                                                                                (((0x30000U 
                                                                                & vlSelf->top__DOT___4005_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 0xaU) 
                                                                                | ((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 9U)))))))) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0310_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U))))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___2958_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U)))))))))))))))))))) 
                             >> 0x20U));
    vlSelf->top__DOT___4004_[0U] = __Vtemp_8[0U];
    vlSelf->top__DOT___4004_[1U] = __Vtemp_8[1U];
    vlSelf->top__DOT___4004_[2U] = ((0x1feU & __Vtemp_6[2U]) 
                                    | (IData)(vlSelf->top__DOT___0682_));
    vlSelf->top__DOT___0911_ = (1U & (((((IData)(vlSelf->top__DOT___0493_) 
                                         << 0x10U) 
                                        | ((0x8000U 
                                            & ((IData)(vlSelf->top__DOT___4774_) 
                                               << 4U)) 
                                           | ((0x6000U 
                                               & (vlSelf->top__DOT___3841_[1U] 
                                                  >> 9U)) 
                                              | ((0x1000U 
                                                  & ((IData)(vlSelf->top__DOT___4774_) 
                                                     << 4U)) 
                                                 | ((0x400U 
                                                     & ((IData)(vlSelf->top__DOT___4774_) 
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
                                                                      | (IData)(vlSelf->top__DOT___0997_)))))))))))) 
                                       + (((IData)(vlSelf->top__DOT___2945_) 
                                           << 0x10U) 
                                          | ((0xfffcU 
                                              & ((vlSelf->top__DOT___4004_[1U] 
                                                  << 5U) 
                                                 | (0x1cU 
                                                    & (vlSelf->top__DOT___4004_[0U] 
                                                       >> 0x1bU)))) 
                                             | (((IData)(vlSelf->top__DOT___1762_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1460_))))) 
                                      >> 0x10U));
    vlSelf->top__DOT___2886_ = (1U & (((IData)((vlSelf->top__DOT___4132_ 
                                                >> 0xeU)) 
                                       + ((vlSelf->top__DOT___4004_[0U] 
                                           << 0x17U) 
                                          | (vlSelf->top__DOT___4004_[0U] 
                                             >> 9U))) 
                                      >> 6U));
    vlSelf->top__DOT___2655_ = (1U & (((IData)((vlSelf->top__DOT___4132_ 
                                                >> 0xeU)) 
                                       + ((vlSelf->top__DOT___4004_[0U] 
                                           << 0x17U) 
                                          | (vlSelf->top__DOT___4004_[0U] 
                                             >> 9U))) 
                                      >> 3U));
    vlSelf->top__DOT___2210_ = (1U & ((((0xe00U & ((IData)(
                                                           (vlSelf->top__DOT___4132_ 
                                                            >> 0x17U)) 
                                                   << 9U)) 
                                        | (((IData)(vlSelf->top__DOT___3652_) 
                                            << 8U) 
                                           | (0xffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT___4132_ 
                                                         >> 0xeU))))) 
                                       + ((0xc00U & 
                                           (vlSelf->top__DOT___4004_[0U] 
                                            >> 9U)) 
                                          | (((IData)(vlSelf->top__DOT___2519_) 
                                              << 9U) 
                                             | (0x1ffU 
                                                & (vlSelf->top__DOT___4004_[0U] 
                                                   >> 9U))))) 
                                      >> 0xbU));
    vlSelf->top__DOT___1058_ = (1U & ((((0x200U & ((IData)(
                                                           (vlSelf->top__DOT___4132_ 
                                                            >> 0x17U)) 
                                                   << 9U)) 
                                        | (((IData)(vlSelf->top__DOT___3652_) 
                                            << 8U) 
                                           | (0xffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT___4132_ 
                                                         >> 0xeU))))) 
                                       + (((IData)(vlSelf->top__DOT___2519_) 
                                           << 9U) | 
                                          (0x1ffU & 
                                           (vlSelf->top__DOT___4004_[0U] 
                                            >> 9U)))) 
                                      >> 9U));
    vlSelf->top__DOT___3676_ = (1U & (((((IData)(vlSelf->top__DOT___3014_) 
                                         << 0xcU) | 
                                        ((0xe00U & 
                                          ((IData)(
                                                   (vlSelf->top__DOT___4132_ 
                                                    >> 0x17U)) 
                                           << 9U)) 
                                         | (((IData)(vlSelf->top__DOT___3652_) 
                                             << 8U) 
                                            | (0xffU 
                                               & (IData)(
                                                         (vlSelf->top__DOT___4132_ 
                                                          >> 0xeU)))))) 
                                       + ((0x1c00U 
                                           & (vlSelf->top__DOT___4004_[0U] 
                                              >> 9U)) 
                                          | (((IData)(vlSelf->top__DOT___2519_) 
                                              << 9U) 
                                             | (0x1ffU 
                                                & (vlSelf->top__DOT___4004_[0U] 
                                                   >> 9U))))) 
                                      >> 0xcU));
    vlSelf->top__DOT___1638_ = (1U & (((IData)((vlSelf->top__DOT___4132_ 
                                                >> 0xeU)) 
                                       + ((vlSelf->top__DOT___4004_[0U] 
                                           << 0x17U) 
                                          | (vlSelf->top__DOT___4004_[0U] 
                                             >> 9U))) 
                                      >> 1U));
    vlSelf->top__DOT___0137_ = (1U & (((IData)((vlSelf->top__DOT___4132_ 
                                                >> 0xeU)) 
                                       + ((vlSelf->top__DOT___4004_[0U] 
                                           << 0x17U) 
                                          | (vlSelf->top__DOT___4004_[0U] 
                                             >> 9U))) 
                                      >> 2U));
    vlSelf->top__DOT___2446_ = (1U & ((((0x400U & ((IData)(vlSelf->top__DOT___4774_) 
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
                                       + ((0xcU & (
                                                   vlSelf->top__DOT___4004_[0U] 
                                                   >> 0x1bU)) 
                                          | (((IData)(vlSelf->top__DOT___1762_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___1460_)))) 
                                      >> 3U));
    vlSelf->top__DOT___3197_ = (1U & ((((0x400U & ((IData)(vlSelf->top__DOT___4774_) 
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
                                       + ((0x1fcU & 
                                           ((vlSelf->top__DOT___4004_[1U] 
                                             << 5U) 
                                            | (0x1cU 
                                               & (vlSelf->top__DOT___4004_[0U] 
                                                  >> 0x1bU)))) 
                                          | (((IData)(vlSelf->top__DOT___1762_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___1460_)))) 
                                      >> 8U));
    vlSelf->top__DOT___4164_ = ((0xffff8U & vlSelf->top__DOT___4164_) 
                                | (((IData)(vlSelf->top__DOT___0137_) 
                                    << 2U) | (((IData)(vlSelf->top__DOT___2037_) 
                                               << 1U) 
                                              | (1U 
                                                 & (vlSelf->top__DOT___7154_[2U] 
                                                    >> 0x16U)))));
    vlSelf->top__DOT___4435_[1U] = ((0xffe3ffffU & 
                                     vlSelf->top__DOT___4435_[1U]) 
                                    | (0xfffc0000U 
                                       & (((IData)(vlSelf->top__DOT___3786_) 
                                           << 0x14U) 
                                          | (((IData)(vlSelf->top__DOT___0137_) 
                                              << 0x13U) 
                                             | ((IData)(vlSelf->top__DOT___2212_) 
                                                << 0x12U)))));
    vlSelf->top__DOT___4148_ = ((0xfffffffffffULL & vlSelf->top__DOT___4148_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0760_) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->top__DOT___0992_) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT___0662_) 
                                                           << 3U) 
                                                          | ((4U 
                                                              & ((~ (IData)(vlSelf->top__DOT___1077_)) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelf->top__DOT___0137_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___2046_)))))))) 
                                   << 0x2cU));
    __Vtemp_10[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___3764_)) 
                               << 0x29U) | (((QData)((IData)(
                                                             (0x3ffffffU 
                                                              & ((vlSelf->top__DOT___3997_[1U] 
                                                                  << 0x10U) 
                                                                 | (vlSelf->top__DOT___3997_[0U] 
                                                                    >> 0x10U))))) 
                                             << 0xfU) 
                                            | (QData)((IData)(
                                                              (0x7fffU 
                                                               & (((0x6000U 
                                                                    & vlSelf->top__DOT___4482_[0U]) 
                                                                   | (((IData)(vlSelf->top__DOT___1311_) 
                                                                       << 0xcU) 
                                                                      | (((IData)(vlSelf->top__DOT___2848_) 
                                                                          << 0xbU) 
                                                                         | (((IData)(vlSelf->top__DOT___0137_) 
                                                                             << 0xaU) 
                                                                            | (((IData)(vlSelf->top__DOT___0551_) 
                                                                                << 9U) 
                                                                               | (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0195_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0318_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0438_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0144_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1962_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0067_))))))))))))) 
                                                                  + 
                                                                  ((0x7fc0U 
                                                                    & (vlSelf->top__DOT___4749_[0U] 
                                                                       >> 9U)) 
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
                                                                                | (IData)(vlSelf->top__DOT___0479_))))))))))))));
    __Vtemp_10[1U] = (((IData)((0xffffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT___3997_[2U])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT___3997_[1U])) 
                                                      >> 0xbU)))) 
                       << 0xaU) | (IData)(((((QData)((IData)(vlSelf->top__DOT___3764_)) 
                                             << 0x29U) 
                                            | (((QData)((IData)(
                                                                (0x3ffffffU 
                                                                 & ((vlSelf->top__DOT___3997_[1U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->top__DOT___3997_[0U] 
                                                                       >> 0x10U))))) 
                                                << 0xfU) 
                                               | (QData)((IData)(
                                                                 (0x7fffU 
                                                                  & (((0x6000U 
                                                                       & vlSelf->top__DOT___4482_[0U]) 
                                                                      | (((IData)(vlSelf->top__DOT___1311_) 
                                                                          << 0xcU) 
                                                                         | (((IData)(vlSelf->top__DOT___2848_) 
                                                                             << 0xbU) 
                                                                            | (((IData)(vlSelf->top__DOT___0137_) 
                                                                                << 0xaU) 
                                                                               | (((IData)(vlSelf->top__DOT___0551_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1667_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0195_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0318_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0438_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0144_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1962_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0067_))))))))))))) 
                                                                     + 
                                                                     ((0x7fc0U 
                                                                       & (vlSelf->top__DOT___4749_[0U] 
                                                                          >> 9U)) 
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
                                                                                | (IData)(vlSelf->top__DOT___0479_))))))))))))) 
                                           >> 0x20U)));
    vlSelf->top__DOT___4480_[0U] = __Vtemp_10[0U];
    vlSelf->top__DOT___4480_[1U] = __Vtemp_10[1U];
    vlSelf->top__DOT___4480_[2U] = (((IData)((0xffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->top__DOT___3997_[2U])) 
                                                  << 0x15U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT___3997_[1U])) 
                                                    >> 0xbU)))) 
                                     >> 0x16U) | ((IData)(
                                                          ((0xffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3997_[2U])) 
                                                                << 0x15U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->top__DOT___3997_[1U])) 
                                                                  >> 0xbU))) 
                                                           >> 0x20U)) 
                                                  << 0xaU));
    vlSelf->top__DOT____VdfgTmp_habd1b636__0 = (((IData)(vlSelf->top__DOT___0014_) 
                                                 << 2U) 
                                                | ((IData)(vlSelf->top__DOT___0137_) 
                                                   << 1U));
    vlSelf->top__DOT____VdfgTmp_h77fb26b8__0 = (((IData)(vlSelf->top__DOT___0137_) 
                                                 << 9U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h29525426__0));
    vlSelf->top__DOT___4331_ = ((0x20000U & ((((IData)(vlSelf->top__DOT___1460_) 
                                               << 0x11U) 
                                              | (((IData)(vlSelf->top__DOT___0493_) 
                                                  << 0x10U) 
                                                 | ((0x8000U 
                                                     & ((IData)(vlSelf->top__DOT___4774_) 
                                                        << 4U)) 
                                                    | ((0x6000U 
                                                        & (vlSelf->top__DOT___3841_[1U] 
                                                           >> 9U)) 
                                                       | ((0x1000U 
                                                           & ((IData)(vlSelf->top__DOT___4774_) 
                                                              << 4U)) 
                                                          | ((0x400U 
                                                              & ((IData)(vlSelf->top__DOT___4774_) 
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
                                                                               | (IData)(vlSelf->top__DOT___0997_))))))))))))) 
                                             + (((IData)(vlSelf->top__DOT___3391_) 
                                                 << 0x11U) 
                                                | (((IData)(vlSelf->top__DOT___2945_) 
                                                    << 0x10U) 
                                                   | ((0xfffcU 
                                                       & ((vlSelf->top__DOT___4004_[1U] 
                                                           << 5U) 
                                                          | (0x1cU 
                                                             & (vlSelf->top__DOT___4004_[0U] 
                                                                >> 0x1bU)))) 
                                                      | (((IData)(vlSelf->top__DOT___1762_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___1460_))))))) 
                                | (((IData)(vlSelf->top__DOT___0911_) 
                                    << 0x10U) | ((0xfe00U 
                                                  & (((0x8000U 
                                                       & ((IData)(vlSelf->top__DOT___4774_) 
                                                          << 4U)) 
                                                      | ((0x6000U 
                                                          & (vlSelf->top__DOT___3841_[1U] 
                                                             >> 9U)) 
                                                         | ((0x1000U 
                                                             & ((IData)(vlSelf->top__DOT___4774_) 
                                                                << 4U)) 
                                                            | ((0x400U 
                                                                & ((IData)(vlSelf->top__DOT___4774_) 
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
                                                                                | (IData)(vlSelf->top__DOT___0997_))))))))))) 
                                                     + 
                                                     ((0xfffcU 
                                                       & ((vlSelf->top__DOT___4004_[1U] 
                                                           << 5U) 
                                                          | (0x1cU 
                                                             & (vlSelf->top__DOT___4004_[0U] 
                                                                >> 0x1bU)))) 
                                                      | (((IData)(vlSelf->top__DOT___1762_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___1460_))))) 
                                                 | (((IData)(vlSelf->top__DOT___3197_) 
                                                     << 8U) 
                                                    | ((0xf0U 
                                                        & (((0x400U 
                                                             & ((IData)(vlSelf->top__DOT___4774_) 
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
                                                           + 
                                                           ((0xfcU 
                                                             & ((vlSelf->top__DOT___4004_[1U] 
                                                                 << 5U) 
                                                                | (0x1cU 
                                                                   & (vlSelf->top__DOT___4004_[0U] 
                                                                      >> 0x1bU)))) 
                                                            | (((IData)(vlSelf->top__DOT___1762_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___1460_))))) 
                                                       | (((IData)(vlSelf->top__DOT___2446_) 
                                                           << 3U) 
                                                          | ((4U 
                                                              & (((0x400U 
                                                                   & ((IData)(vlSelf->top__DOT___4774_) 
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
                                                                 + 
                                                                 ((4U 
                                                                   & (vlSelf->top__DOT___4004_[0U] 
                                                                      >> 0x1bU)) 
                                                                  | (((IData)(vlSelf->top__DOT___1762_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___1460_))))) 
                                                             | (((IData)(vlSelf->top__DOT___1333_) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (((0x400U 
                                                                        & ((IData)(vlSelf->top__DOT___4774_) 
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
                                                                      + (IData)(vlSelf->top__DOT___1460_)))))))))));
    vlSelf->top__DOT___0497_ = (1U & (~ (((IData)(vlSelf->top__DOT___3197_) 
                                          & (IData)(vlSelf->top__DOT___0842_)) 
                                         | ((IData)(vlSelf->top__DOT___1620_) 
                                            & (IData)(vlSelf->top__DOT___2492_)))));
    vlSelf->top__DOT____VdfgTmp_h3d0e775f__0 = (((IData)(vlSelf->top__DOT___0642_) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top__DOT___1601_) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_habd1b636__0)));
    vlSelf->top__DOT____VdfgTmp_hc2682f65__0 = (((IData)(vlSelf->top__DOT___1060_) 
                                                 << 0xaU) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h77fb26b8__0));
    vlSelf->top__DOT____VdfgTmp_ha127de6c__0 = (((IData)(vlSelf->top__DOT___3197_) 
                                                 << 0xfU) 
                                                | ((0x7800U 
                                                    & (vlSelf->top__DOT___4331_ 
                                                       << 7U)) 
                                                   | (((IData)(vlSelf->top__DOT___2446_) 
                                                       << 0xaU) 
                                                      | ((0x200U 
                                                          & (vlSelf->top__DOT___4331_ 
                                                             << 7U)) 
                                                         | (((IData)(vlSelf->top__DOT___1333_) 
                                                             << 8U) 
                                                            | ((0x80U 
                                                                & (vlSelf->top__DOT___4331_ 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & ((IData)(vlSelf->top__DOT___7065_) 
                                                                      >> 1U)) 
                                                                  | (((IData)(vlSelf->top__DOT___1820_) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->top__DOT___0799_) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->top__DOT___0858_) 
                                                                            << 3U) 
                                                                           | (IData)(vlSelf->top__DOT____VdfgTmp_h90d698c0__0)))))))))));
    vlSelf->top__DOT___4335_ = ((0xffffffff8ffULL & vlSelf->top__DOT___4335_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0497_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___0942_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0038_))))) 
                                   << 8U));
    vlSelf->top__DOT____VdfgTmp_h302f01e6__0 = (((IData)(vlSelf->top__DOT___0310_) 
                                                 << 5U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h3d0e775f__0));
    vlSelf->top__DOT____VdfgTmp_hc904b9d7__0 = (((IData)(vlSelf->top__DOT___0911_) 
                                                 << 0x17U) 
                                                | ((0x7f0000U 
                                                    & (vlSelf->top__DOT___4331_ 
                                                       << 7U)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_ha127de6c__0)));
    vlSelf->top__DOT____VdfgTmp_h086a6259__0 = (((IData)(vlSelf->top__DOT___1688_) 
                                                 << 0x19U) 
                                                | ((0x1000000U 
                                                    & (vlSelf->top__DOT___4331_ 
                                                       << 7U)) 
                                                   | vlSelf->top__DOT____VdfgTmp_hc904b9d7__0));
    vlSelf->top__DOT____VdfgTmp_hac0f39fb__0 = (((IData)(vlSelf->top__DOT___0204_) 
                                                 << 0x1bU) 
                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                    << 0x1aU) 
                                                   | vlSelf->top__DOT____VdfgTmp_h086a6259__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1349(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1349\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___3311_)) 
                              << 0x3eU) | (((QData)((IData)(
                                                            (7U 
                                                             & (vlSelf->top__DOT___3891_ 
                                                                >> 0xeU)))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___1695_)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelf->top__DOT___3891_ 
                                                                      >> 5U)))) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___1379_)) 
                                                     << 0x31U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT___3891_ 
                                                                            >> 3U)))) 
                                                        << 0x30U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___2445_)) 
                                                           << 0x2fU) 
                                                          | (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h92f22a36__0)) 
                                                              << 0xfU) 
                                                             | (QData)((IData)(
                                                                               ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7087_ 
                                                                                >> 6U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1f00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4344_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & vlSelf->top__DOT___4489_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0318_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___1366_)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_head749ae__0)))))))))))))))))));
    __Vtemp_2[1U] = ((0x80000000U & (vlSelf->top__DOT___3891_ 
                                     << 0xdU)) | (IData)(
                                                         ((((QData)((IData)(vlSelf->top__DOT___3311_)) 
                                                            << 0x3eU) 
                                                           | (((QData)((IData)(
                                                                               (7U 
                                                                                & (vlSelf->top__DOT___3891_ 
                                                                                >> 0xeU)))) 
                                                               << 0x3bU) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___1695_)) 
                                                                  << 0x3aU) 
                                                                 | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (vlSelf->top__DOT___3891_ 
                                                                                >> 5U)))) 
                                                                     << 0x32U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___1379_)) 
                                                                        << 0x31U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3891_ 
                                                                                >> 3U)))) 
                                                                           << 0x30U) 
                                                                          | (((QData)((IData)(vlSelf->top__DOT___2445_)) 
                                                                              << 0x2fU) 
                                                                             | (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h92f22a36__0)) 
                                                                                << 0xfU) 
                                                                                | (QData)((IData)(
                                                                                ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7087_ 
                                                                                >> 6U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1f00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4344_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & vlSelf->top__DOT___4489_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0318_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___1366_)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_head749ae__0)))))))))))))))))) 
                                                          >> 0x20U)));
    __Vtemp_3[0U] = __Vtemp_2[0U];
    __Vtemp_3[1U] = __Vtemp_2[1U];
    __Vtemp_3[2U] = (((IData)(vlSelf->top__DOT___0311_) 
                      << 3U) | (7U & (vlSelf->top__DOT___3891_ 
                                      >> 0x13U)));
    __Vtemp_4[0U] = (IData)(vlSelf->top__DOT____VdfgTmp_hcccfd2e6__0);
    __Vtemp_4[1U] = ((0xfffff800U & ((vlSelf->top__DOT___4482_[2U] 
                                      << 0x1aU) | (0x3fff800U 
                                                   & (vlSelf->top__DOT___4482_[1U] 
                                                      >> 6U)))) 
                     | (IData)((vlSelf->top__DOT____VdfgTmp_hcccfd2e6__0 
                                >> 0x20U)));
    __Vtemp_4[2U] = (0xfU & (vlSelf->top__DOT___4482_[2U] 
                             >> 6U));
    VL_ADD_W(3, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    vlSelf->top__DOT____VdfgTmp_h06d72df0__0 = ((0x100U 
                                                 & ((~ 
                                                     (((~ 
                                                        (1U 
                                                         & ((__Vtemp_5[2U] 
                                                             >> 3U) 
                                                            & (IData)(vlSelf->top__DOT___2772_)))) 
                                                       & (IData)(vlSelf->top__DOT___0809_)) 
                                                      | ((IData)(vlSelf->top__DOT___2322_) 
                                                         & (IData)(vlSelf->top__DOT___0306_)))) 
                                                    << 8U)) 
                                                | (((IData)(vlSelf->top__DOT___0446_) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->top__DOT___1873_) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->top__DOT___1862_) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->top__DOT___0814_) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->top__DOT___0613_) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->top__DOT___3390_) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->top__DOT___0645_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___0629_)))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1350(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1350\n"); );
    // Body
    vlSelf->top__DOT___3446_ = (1U & ((((0x10U & (vlSelf->top__DOT___4240_[2U] 
                                                  >> 2U)) 
                                        | ((8U & ((IData)(vlSelf->top__DOT___7162_) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((~ (IData)(vlSelf->top__DOT___1366_)) 
                                                << 2U)) 
                                              | (((IData)(vlSelf->top__DOT___1166_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___1596_))))) 
                                       + (((IData)(vlSelf->top__DOT___1084_) 
                                           << 4U) | 
                                          ((8U & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                  << 2U)) 
                                           | (((IData)(vlSelf->top__DOT___1770_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___1521_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0764_)))))) 
                                      >> 4U));
    vlSelf->top__DOT____VdfgTmp_h7752a3e0__0 = (((QData)((IData)(
                                                                 (0x1fffffU 
                                                                  & ((vlSelf->top__DOT___4240_[2U] 
                                                                      << 4U) 
                                                                     | (vlSelf->top__DOT___4240_[1U] 
                                                                        >> 0x1cU))))) 
                                                 << 0x2bU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___2030_)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(
                                                                       (0xffffffU 
                                                                        & (vlSelf->top__DOT___4240_[1U] 
                                                                           >> 3U)))) 
                                                       << 0x12U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->top__DOT___3395_) 
                                                                          << 0x11U) 
                                                                         | (0x1ffffU 
                                                                            & ((vlSelf->top__DOT___4240_[1U] 
                                                                                << 0xfU) 
                                                                               | (vlSelf->top__DOT___4240_[0U] 
                                                                                >> 0x11U)))))))));
    vlSelf->top__DOT___3598_ = ((((0xfff80000U & (vlSelf->top__DOT___4240_[1U] 
                                                  << 0x10U)) 
                                  | (((IData)(vlSelf->top__DOT___3395_) 
                                      << 0x12U) | (
                                                   (0x3fffeU 
                                                    & ((vlSelf->top__DOT___4240_[1U] 
                                                        << 0x10U) 
                                                       | (0xfffeU 
                                                          & (vlSelf->top__DOT___4240_[0U] 
                                                             >> 0x10U)))) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->top__DOT___0876_)))))) 
                                 + (0x55d6a800U | (
                                                   (((IData)(vlSelf->top__DOT___0750_) 
                                                     << 0xaU) 
                                                    | (((IData)(vlSelf->top__DOT___1011_) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->top__DOT___0170_) 
                                                           << 8U) 
                                                          | (0x80U 
                                                             & ((IData)(vlSelf->top__DOT___7055_) 
                                                                << 7U))))) 
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
                                                                  | (IData)(vlSelf->top__DOT___1773_))))))))) 
                                >> 0x1fU);
    vlSelf->top__DOT___1942_ = ((IData)(vlSelf->top__DOT___0501_) 
                                ^ (IData)(vlSelf->top__DOT___3598_));
    vlSelf->top__DOT___1941_ = (1U & (~ ((~ (((IData)(vlSelf->top__DOT___1082_) 
                                              & ((IData)(vlSelf->top__DOT___1910_) 
                                                 ^ (IData)(vlSelf->top__DOT___3770_))) 
                                             | (IData)(vlSelf->top__DOT___0685_))) 
                                         | ((IData)(vlSelf->top__DOT___1942_) 
                                            & (IData)(vlSelf->top__DOT___1411_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1351(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1351\n"); );
    // Init
    SData/*11:0*/ top__DOT____VdfgTmp_h0131f3de__0;
    top__DOT____VdfgTmp_h0131f3de__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_16;
    // Body
    vlSelf->top__DOT___3886_ = ((0x3ffe0000U & ((IData)(
                                                        (0x1fffULL 
                                                         & (((((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->top__DOT___4240_[1U] 
                                                                                >> 0x1cU)))) 
                                                               << 0x2cU) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___2030_)) 
                                                                  << 0x2bU) 
                                                                 | (((QData)((IData)(
                                                                                (0xffffffU 
                                                                                & (vlSelf->top__DOT___4240_[1U] 
                                                                                >> 3U)))) 
                                                                     << 0x13U) 
                                                                    | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3395_) 
                                                                                << 0x12U) 
                                                                                | ((0x3fffeU 
                                                                                & ((vlSelf->top__DOT___4240_[1U] 
                                                                                << 0x10U) 
                                                                                | (0xfffeU 
                                                                                & (vlSelf->top__DOT___4240_[0U] 
                                                                                >> 0x10U)))) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))))))) 
                                                             + 
                                                             (0x1c5c55d6a800ULL 
                                                              | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0750_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1011_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7055_))))))) 
                                                                  << 7U) 
                                                                 | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0933_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1452_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0799_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0708_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1773_))))))))))) 
                                                            >> 0x20U))) 
                                                << 0x11U)) 
                                | (((IData)(vlSelf->top__DOT___3598_) 
                                    << 0x10U) | ((0xe000U 
                                                  & ((((0x7ff80000U 
                                                        & (vlSelf->top__DOT___4240_[1U] 
                                                           << 0x10U)) 
                                                       | (((IData)(vlSelf->top__DOT___3395_) 
                                                           << 0x12U) 
                                                          | ((0x3fffeU 
                                                              & ((vlSelf->top__DOT___4240_[1U] 
                                                                  << 0x10U) 
                                                                 | (0xfffeU 
                                                                    & (vlSelf->top__DOT___4240_[0U] 
                                                                       >> 0x10U)))) 
                                                             | (1U 
                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))) 
                                                      + 
                                                      (0x55d6a800U 
                                                       | ((((IData)(vlSelf->top__DOT___0750_) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->top__DOT___1011_) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->top__DOT___0170_) 
                                                                  << 8U) 
                                                                 | (0x80U 
                                                                    & ((IData)(vlSelf->top__DOT___7055_) 
                                                                       << 7U))))) 
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
                                                                         | (IData)(vlSelf->top__DOT___1773_))))))))) 
                                                     >> 0xfU)) 
                                                 | ((0x1000U 
                                                     & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                        << 0xbU)) 
                                                    | ((0x800U 
                                                        & ((IData)(vlSelf->top__DOT___6992_) 
                                                           << 5U)) 
                                                       | ((0x400U 
                                                           & ((IData)(vlSelf->top__DOT___6992_) 
                                                              << 5U)) 
                                                          | ((0x200U 
                                                              & ((IData)(vlSelf->top__DOT___6992_) 
                                                                 << 5U)) 
                                                             | ((0x100U 
                                                                 & ((IData)(vlSelf->top__DOT___6992_) 
                                                                    << 5U)) 
                                                                | ((0x80U 
                                                                    & ((IData)(vlSelf->top__DOT___6992_) 
                                                                       << 5U)) 
                                                                   | ((0x40U 
                                                                       & ((IData)(vlSelf->top__DOT___6992_) 
                                                                          << 5U)) 
                                                                      | ((0x20U 
                                                                          & ((IData)(vlSelf->top__DOT___6992_) 
                                                                             << 5U)) 
                                                                         | (((IData)(vlSelf->top__DOT___2020_) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->top__DOT___0582_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___1021_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1193_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1611_))))))))))))))));
    __Vtemp_8[0U] = (((IData)(vlSelf->top__DOT____VdfgTmp_h7752a3e0__0) 
                      << 1U) | (1U & (~ (IData)(vlSelf->top__DOT___0876_))));
    __Vtemp_8[1U] = (((IData)(vlSelf->top__DOT____VdfgTmp_h7752a3e0__0) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT____VdfgTmp_h7752a3e0__0 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp_8[2U] = (((IData)(vlSelf->top__DOT___1011_) 
                      << 6U) | (((IData)(vlSelf->top__DOT___0300_) 
                                 << 5U) | (((IData)(vlSelf->top__DOT___0425_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT___0396_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0417_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT____VdfgTmp_hc0bc0f68__0) 
                                                     << 1U) 
                                                    | ((IData)(
                                                               (vlSelf->top__DOT____VdfgTmp_h7752a3e0__0 
                                                                >> 0x20U)) 
                                                       >> 0x1fU)))))));
    __Vtemp_13[0U] = (IData)((0xfffc5c55d6a800ULL | 
                              (((QData)((IData)(vlSelf->top__DOT___2219_)) 
                                << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___2310_)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(vlSelf->top__DOT___0785_)) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___2121_)) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___2264_)) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0318_)) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___1611_)) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___1055_)) 
                                                                << 0x38U) 
                                                               | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h792f7b28__0))))))))))));
    __Vtemp_13[1U] = (IData)(((0xfffc5c55d6a800ULL 
                               | (((QData)((IData)(vlSelf->top__DOT___2219_)) 
                                   << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___2310_)) 
                                                 << 0x3eU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___0785_)) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___2121_)) 
                                                       << 0x3cU) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___2264_)) 
                                                          << 0x3bU) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___0318_)) 
                                                             << 0x3aU) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___1611_)) 
                                                                << 0x39U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___1055_)) 
                                                                   << 0x38U) 
                                                                  | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h792f7b28__0))))))))))) 
                              >> 0x20U));
    __Vtemp_13[2U] = ((0x70U & ((IData)((vlSelf->top__DOT___3952_ 
                                         >> 0xaU)) 
                                << 4U)) | (((IData)(vlSelf->top__DOT___2502_) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT___0428_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___2848_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___1842_)))));
    VL_ADD_W(3, __Vtemp_14, __Vtemp_8, __Vtemp_13);
    __Vtemp_16[1U] = ((0xffffe000U & __Vtemp_14[1U]) 
                      | (IData)(((((QData)((IData)(
                                                   (0x1fffU 
                                                    & (vlSelf->top__DOT___3886_ 
                                                       >> 0x11U)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___3598_) 
                                                                 << 0x1fU) 
                                                                | ((0x70000000U 
                                                                    & (vlSelf->top__DOT___3886_ 
                                                                       << 0xfU)) 
                                                                   | (0xfffffffU 
                                                                      & (((0xff80000U 
                                                                           & (vlSelf->top__DOT___4240_[1U] 
                                                                              << 0x10U)) 
                                                                          | (((IData)(vlSelf->top__DOT___3395_) 
                                                                              << 0x12U) 
                                                                             | ((0x3fffeU 
                                                                                & ((vlSelf->top__DOT___4240_[1U] 
                                                                                << 0x10U) 
                                                                                | (0xfffeU 
                                                                                & (vlSelf->top__DOT___4240_[0U] 
                                                                                >> 0x10U)))) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))) 
                                                                         + 
                                                                         (0x5d6a800U 
                                                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h792f7b28__0))))))))) 
                                 >> 0x20U)));
    vlSelf->top__DOT___4525_[0U] = (IData)((((QData)((IData)(
                                                             (0x1fffU 
                                                              & (vlSelf->top__DOT___3886_ 
                                                                 >> 0x11U)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___3598_) 
                                                                << 0x1fU) 
                                                               | ((0x70000000U 
                                                                   & (vlSelf->top__DOT___3886_ 
                                                                      << 0xfU)) 
                                                                  | (0xfffffffU 
                                                                     & (((0xff80000U 
                                                                          & (vlSelf->top__DOT___4240_[1U] 
                                                                             << 0x10U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3395_) 
                                                                             << 0x12U) 
                                                                            | ((0x3fffeU 
                                                                                & ((vlSelf->top__DOT___4240_[1U] 
                                                                                << 0x10U) 
                                                                                | (0xfffeU 
                                                                                & (vlSelf->top__DOT___4240_[0U] 
                                                                                >> 0x10U)))) 
                                                                               | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0876_)))))) 
                                                                        + 
                                                                        (0x5d6a800U 
                                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_h792f7b28__0))))))))));
    vlSelf->top__DOT___4525_[1U] = __Vtemp_16[1U];
    vlSelf->top__DOT___4525_[2U] = (0x7fU & __Vtemp_14[2U]);
    vlSelf->top__DOT____VdfgTmp_h5cfd5aed__0 = ((0x400U 
                                                 & ((IData)(vlSelf->top__DOT___6992_) 
                                                    << 4U)) 
                                                | ((0x200U 
                                                    & (vlSelf->top__DOT___3886_ 
                                                       >> 1U)) 
                                                   | ((0x1f0U 
                                                       & ((IData)(vlSelf->top__DOT___6992_) 
                                                          << 4U)) 
                                                      | (((IData)(vlSelf->top__DOT___1796_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___2555_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___0496_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0054_)))))));
    top__DOT____VdfgTmp_h0131f3de__0 = ((0x800U & (vlSelf->top__DOT___3886_ 
                                                   << 1U)) 
                                        | ((0x7c0U 
                                            & ((IData)(vlSelf->top__DOT___6992_) 
                                               << 6U)) 
                                           | (IData)(vlSelf->top__DOT____VdfgTmp_h269e006c__0)));
    vlSelf->top__DOT____VdfgTmp_h0fe8edf3__0 = ((0x40U 
                                                 & (IData)(vlSelf->top__DOT___6992_)) 
                                                | ((0x20U 
                                                    & (vlSelf->top__DOT___3886_ 
                                                       >> 5U)) 
                                                   | (0x1fU 
                                                      & (IData)(vlSelf->top__DOT___6992_))));
    vlSelf->top__DOT____VdfgTmp_h67701e00__0 = (((IData)(vlSelf->top__DOT___0272_) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h5cfd5aed__0));
    vlSelf->top__DOT____VdfgTmp_h0a91920a__0 = (0x1fU 
                                                & (((IData)(top__DOT____VdfgTmp_h0131f3de__0) 
                                                    + 
                                                    ((0xf80U 
                                                      & (vlSelf->top__DOT___3829_[1U] 
                                                         << 5U)) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_haf737623__0))) 
                                                   >> 7U));
    vlSelf->top__DOT___3730_ = (1U & ((((0x1000U & 
                                         ((IData)(vlSelf->top__DOT___6992_) 
                                          << 6U)) | (IData)(top__DOT____VdfgTmp_h0131f3de__0)) 
                                       + ((0x1f80U 
                                           & (vlSelf->top__DOT___3829_[1U] 
                                              << 5U)) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_haf737623__0))) 
                                      >> 0xcU));
    vlSelf->top__DOT____VdfgTmp_hb9140fe7__0 = (1U 
                                                & (((IData)(vlSelf->top__DOT____VdfgTmp_h9a5f53f1__0) 
                                                    + 
                                                    ((0xff80U 
                                                      & vlSelf->top__DOT___4397_) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_h0fe8edf3__0))) 
                                                   >> 0xfU));
    vlSelf->top__DOT___2326_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_haec0fdc9__0) 
                                       + ((0x380U & vlSelf->top__DOT___4397_) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h0fe8edf3__0))) 
                                      >> 9U));
    vlSelf->top__DOT___3189_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_hd1d6e9b6__0) 
                                       + ((0x7f80U 
                                           & vlSelf->top__DOT___4397_) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h0fe8edf3__0))) 
                                      >> 0xeU));
    vlSelf->top__DOT____VdfgTmp_h2bffb201__0 = (3U 
                                                & ((((0x2000U 
                                                      & (vlSelf->top__DOT___3863_[0U] 
                                                         >> 7U)) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_hd7803ba7__0)) 
                                                    + 
                                                    ((0x3f80U 
                                                      & vlSelf->top__DOT___4397_) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_h0fe8edf3__0))) 
                                                   >> 0xcU));
    vlSelf->top__DOT___4500_ = (((IData)(vlSelf->top__DOT___1797_) 
                                 << 0xdU) | (((IData)(vlSelf->top__DOT___3730_) 
                                              << 0xcU) 
                                             | (((IData)(vlSelf->top__DOT____VdfgTmp_h0a91920a__0) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->top__DOT___3147_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT____VdfgTmp_h9aa2636d__0) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___3556_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT____VdfgTmp_h63149758__0) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0591_))))))));
    vlSelf->top__DOT___4395_ = ((0x7e00007fffULL & vlSelf->top__DOT___4395_) 
                                | ((QData)((IData)(
                                                   ((0x30000U 
                                                     & ((((IData)(vlSelf->top__DOT___0613_) 
                                                          << 0x11U) 
                                                         | (((IData)(vlSelf->top__DOT___0038_) 
                                                             << 0x10U) 
                                                            | (IData)(vlSelf->top__DOT____VdfgTmp_h9a5f53f1__0))) 
                                                        + 
                                                        ((0x20000U 
                                                          & (vlSelf->top__DOT___4739_[2U] 
                                                             << 0xfU)) 
                                                         | ((0x1ff80U 
                                                             & vlSelf->top__DOT___4397_) 
                                                            | (IData)(vlSelf->top__DOT____VdfgTmp_h0fe8edf3__0))))) 
                                                    | (((IData)(vlSelf->top__DOT____VdfgTmp_hb9140fe7__0) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->top__DOT___3189_) 
                                                           << 0xeU) 
                                                          | (((IData)(vlSelf->top__DOT____VdfgTmp_h2bffb201__0) 
                                                              << 0xcU) 
                                                             | ((0xc00U 
                                                                 & (((0xc00U 
                                                                      & ((IData)(vlSelf->top__DOT___7188_) 
                                                                         << 1U)) 
                                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_haec0fdc9__0)) 
                                                                    + 
                                                                    ((0xf80U 
                                                                      & vlSelf->top__DOT___4397_) 
                                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_h0fe8edf3__0)))) 
                                                                | (((IData)(vlSelf->top__DOT___2326_) 
                                                                    << 9U) 
                                                                   | ((0x1f8U 
                                                                       & (((0x100U 
                                                                            & (vlSelf->top__DOT___3863_[0U] 
                                                                               >> 7U)) 
                                                                           | (IData)(vlSelf->top__DOT____VdfgTmp_ha29b76d3__0)) 
                                                                          + 
                                                                          ((0x180U 
                                                                            & vlSelf->top__DOT___4397_) 
                                                                           | (IData)(vlSelf->top__DOT____VdfgTmp_h0fe8edf3__0)))) 
                                                                      | (((IData)(vlSelf->top__DOT___3637_) 
                                                                          << 2U) 
                                                                         | (3U 
                                                                            & ((IData)(vlSelf->top__DOT____VdfgTmp_hefb6521d__0) 
                                                                               + (IData)(vlSelf->top__DOT___6992_))))))))))))) 
                                   << 0xfU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1352(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1352\n"); );
    // Body
    vlSelf->top__DOT___4275_ = ((3ULL & vlSelf->top__DOT___4275_) 
                                | (((QData)((IData)(
                                                    (0x7fffU 
                                                     & (vlSelf->top__DOT___6975_ 
                                                        >> 1U)))) 
                                    << 0x1aU) | ((QData)((IData)(
                                                                 ((0x800000U 
                                                                   & ((IData)(vlSelf->top__DOT___4009_) 
                                                                      << 0x15U)) 
                                                                  | (((IData)(vlSelf->top__DOT___1706_) 
                                                                      << 0x16U) 
                                                                     | ((0x200000U 
                                                                         & ((IData)(vlSelf->top__DOT___4009_) 
                                                                            << 0x15U)) 
                                                                        | (((IData)(vlSelf->top__DOT___2038_) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->top__DOT___1445_) 
                                                                               << 0x13U) 
                                                                              | ((0x40000U 
                                                                                & (vlSelf->top__DOT___4240_[0U] 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1421_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___2182_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0702_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___3030_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1647_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1677_) 
                                                                                << 0xcU) 
                                                                                | (IData)(vlSelf->top__DOT___7120_))))))))))))))) 
                                                 << 2U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1354(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1354\n"); );
    // Body
    vlSelf->top__DOT___1598_ = (1U & ((((2U & (vlSelf->top__DOT___4004_[0U] 
                                               >> 6U)) 
                                        | (IData)(vlSelf->top__DOT___0345_)) 
                                       + (IData)((vlSelf->top__DOT___4220_ 
                                                  >> 0x23U))) 
                                      >> 1U));
    vlSelf->top__DOT___3129_ = (1U & ((((6U & (vlSelf->top__DOT___4004_[0U] 
                                               >> 6U)) 
                                        | (IData)(vlSelf->top__DOT___0345_)) 
                                       + (IData)((vlSelf->top__DOT___4220_ 
                                                  >> 0x23U))) 
                                      >> 2U));
    vlSelf->top__DOT___1928_ = (1U & (((((IData)(vlSelf->top__DOT___0483_) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->top__DOT___3129_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___1598_) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->top__DOT___2372_) 
                                                         << 1U)))) 
                                       + (((IData)(vlSelf->top__DOT___1487_) 
                                           << 5U) | 
                                          ((0x10U & 
                                            ((IData)(vlSelf->top__DOT___6976_) 
                                             << 2U)) 
                                           | (((IData)(vlSelf->top__DOT___1820_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___2481_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___2219_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___1912_))))))) 
                                      >> 5U));
    vlSelf->top__DOT___3871_ = (0x3274U | ((0x4000000U 
                                            & (((((IData)(vlSelf->top__DOT___0483_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___3129_) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT___1598_) 
                                                        << 2U) 
                                                       | ((IData)(vlSelf->top__DOT___2372_) 
                                                          << 1U)))) 
                                                + (
                                                   ((IData)(vlSelf->top__DOT___1281_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___1487_) 
                                                       << 5U) 
                                                      | ((0x10U 
                                                          & ((IData)(vlSelf->top__DOT___6976_) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelf->top__DOT___1820_) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT___2481_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___2219_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___1912_)))))))) 
                                               << 0x14U)) 
                                           | (((IData)(vlSelf->top__DOT___1928_) 
                                               << 0x19U) 
                                              | ((0x1e00000U 
                                                  & (((((IData)(vlSelf->top__DOT___3129_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___1598_) 
                                                           << 2U) 
                                                          | ((IData)(vlSelf->top__DOT___2372_) 
                                                             << 1U))) 
                                                      + 
                                                      ((0x10U 
                                                        & ((IData)(vlSelf->top__DOT___6976_) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelf->top__DOT___1820_) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->top__DOT___2481_) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->top__DOT___2219_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___1912_)))))) 
                                                     << 0x14U)) 
                                                 | (((IData)(vlSelf->top__DOT___1912_) 
                                                     << 0x14U) 
                                                    | (((IData)(vlSelf->top__DOT___1731_) 
                                                        << 0x13U) 
                                                       | (IData)(vlSelf->top__DOT___1889_)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1356(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1356\n"); );
    // Body
    vlSelf->top__DOT___0136_ = ((~ (IData)(vlSelf->top__DOT___0137_)) 
                                & (IData)(vlSelf->top__DOT___0138_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1360(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1360\n"); );
    // Body
    vlSelf->top__DOT___3893_ = (((IData)(vlSelf->top__DOT___0409_) 
                                 << 0x18U) | ((0x800000U 
                                               & ((((0x100U 
                                                     & ((IData)(vlSelf->top__DOT____Vconcswap_1_hd7d138f3__0) 
                                                        << 1U)) 
                                                    | ((0x80U 
                                                        & ((IData)(vlSelf->top__DOT____Vconcswap_1_hd7d138f3__0) 
                                                           << 1U)) 
                                                       | ((0x78U 
                                                           & (vlSelf->top__DOT___3817_[0U] 
                                                              >> 4U)) 
                                                          | (((IData)(vlSelf->top__DOT___0760_) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->top__DOT___1780_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___0056_)))))) 
                                                   + 
                                                   (((IData)(vlSelf->top__DOT___1198_) 
                                                     << 8U) 
                                                    | (((IData)(vlSelf->top__DOT___0985_) 
                                                        << 7U) 
                                                       | (((IData)(vlSelf->top__DOT___1291_) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->top__DOT___0496_) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT___0381_) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->top__DOT___1007_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0995_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0603_)))))))))) 
                                                  << 0xfU)) 
                                              | (((IData)(vlSelf->top__DOT___3245_) 
                                                  << 0x16U) 
                                                 | ((0x200000U 
                                                     & ((((0x78U 
                                                           & (vlSelf->top__DOT___3817_[0U] 
                                                              >> 4U)) 
                                                          | (((IData)(vlSelf->top__DOT___0760_) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->top__DOT___1780_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___0056_)))) 
                                                         + 
                                                         (((IData)(vlSelf->top__DOT___1291_) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->top__DOT___0496_) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT___0381_) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->top__DOT___1007_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0995_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0603_)))))))) 
                                                        << 0xfU)) 
                                                    | (((IData)(vlSelf->top__DOT___3296_) 
                                                        << 0x14U) 
                                                       | (((IData)(vlSelf->top__DOT___2267_) 
                                                           << 0x13U) 
                                                          | ((0x78000U 
                                                              & ((((8U 
                                                                    & (vlSelf->top__DOT___3817_[0U] 
                                                                       >> 4U)) 
                                                                   | (((IData)(vlSelf->top__DOT___0760_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___1780_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0056_)))) 
                                                                  + 
                                                                  (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->top__DOT___1007_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0995_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0603_))))) 
                                                                 << 0xfU)) 
                                                             | (((IData)(vlSelf->top__DOT___3785_) 
                                                                 << 0xeU) 
                                                                | (((IData)(vlSelf->top__DOT___1901_) 
                                                                    << 0xdU) 
                                                                   | (((IData)(vlSelf->top__DOT___0512_) 
                                                                       << 0xcU) 
                                                                      | (((IData)(vlSelf->top__DOT___0497_) 
                                                                          << 0xbU) 
                                                                         | (((IData)(vlSelf->top__DOT___2753_) 
                                                                             << 0xaU) 
                                                                            | (((IData)(vlSelf->top__DOT___2808_) 
                                                                                << 9U) 
                                                                               | ((0x100U 
                                                                                & (vlSelf->top__DOT___3822_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2755_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3822_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2739_) 
                                                                                << 5U) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___3822_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0366_))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1361(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1361\n"); );
    // Body
    vlSelf->top__DOT___4336_ = ((0x300000U & ((IData)(
                                                      (vlSelf->top__DOT___4224_ 
                                                       >> 0x2bU)) 
                                              << 0x14U)) 
                                | ((0x80000U & (vlSelf->top__DOT___4765_[1U] 
                                                << 0xfU)) 
                                   | ((0x7fffcU & ((IData)(
                                                           (vlSelf->top__DOT___4224_ 
                                                            >> 0x19U)) 
                                                   << 2U)) 
                                      | ((2U & (vlSelf->top__DOT___4765_[0U] 
                                                >> 0x11U)) 
                                         | (IData)(vlSelf->top__DOT___0497_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1362(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1362\n"); );
    // Body
    vlSelf->top__DOT___3392_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_hc2682f65__0) 
                                       + (IData)(vlSelf->top__DOT____VdfgTmp_h3183c95a__0)) 
                                      >> 0xaU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1363(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1363\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hb4d0fe1b__0 = ((0xf800U 
                                                 & (vlSelf->top__DOT___7137_[1U] 
                                                    >> 9U)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_hc2682f65__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1364(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1364\n"); );
    // Body
    vlSelf->top__DOT___4135_ = ((0x7ffe00U & (vlSelf->top__DOT___7125_[0U] 
                                              << 2U)) 
                                | (IData)(vlSelf->top__DOT____VdfgTmp_h06d72df0__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1366(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1366\n"); );
    // Body
    vlSelf->__VdfgTmp_h1fad9cba__0 = (((QData)((IData)(
                                                       (0x7fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT___4193_ 
                                                                   >> 0x18U))))) 
                                       << 0x1aU) | (QData)((IData)(
                                                                   ((0x3fc0000U 
                                                                     & (vlSelf->top__DOT___3877_ 
                                                                        << 5U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT___7121_ 
                                                                           << 5U)) 
                                                                       | ((0x1f000U 
                                                                           & (vlSelf->top__DOT___3877_ 
                                                                              << 5U)) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->top__DOT___7121_ 
                                                                                << 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT____VdfgTmp_h0fe8edf3__0) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h8e5016a5__0)))))))));
    vlSelf->top__DOT____VdfgTmp_h4298afb8__0 = (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___7121_ 
                                                                     >> 0x1cU)))) 
                                                 << 0x21U) 
                                                | vlSelf->__VdfgTmp_h1fad9cba__0);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1367(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1367\n"); );
    // Body
    vlSelf->top__DOT___4552_ = (((QData)((IData)((0x7ffffffU 
                                                  & (IData)(
                                                            (0x7ffffffULL 
                                                             & (((((QData)((IData)(
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x2aU))))) 
                                                                   << 0x1aU) 
                                                                  | (QData)((IData)(
                                                                                ((0x2000000U 
                                                                                & (vlSelf->top__DOT____VdfgTmp_h5214cb79__0[1U] 
                                                                                << 0xcU)) 
                                                                                | ((0x1ffff80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U)) 
                                                                                << 7U)) 
                                                                                | (0x7fU 
                                                                                & (vlSelf->top__DOT___3849_[0U] 
                                                                                >> 0x14U))))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3885_ 
                                                                                >> 0x18U)))) 
                                                                   << 0x22U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7066_ 
                                                                                >> 0x17U)))) 
                                                                      << 0x21U) 
                                                                     | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT___3885_ 
                                                                                >> 0x12U)))) 
                                                                         << 0x1cU) 
                                                                        | (QData)((IData)(
                                                                                ((0x8000000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0169_)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1797_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___3730_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT____VdfgTmp_h0a91920a__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___3147_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT____VdfgTmp_h9aa2636d__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___3556_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT____VdfgTmp_h63149758__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0591_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1269_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2881_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___3799_) 
                                                                                << 0xaU) 
                                                                                | ((0x380U 
                                                                                & ((IData)(vlSelf->top__DOT___4208_) 
                                                                                << 7U)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h4ddf3231__0)))))))))))))))))))) 
                                                                >> 8U)))))) 
                                 << 8U) | (QData)((IData)(
                                                          (((IData)(vlSelf->top__DOT___2784_) 
                                                            << 7U) 
                                                           | (0x7fU 
                                                              & (((vlSelf->top__DOT___3849_[0U] 
                                                                   << 0xcU) 
                                                                  | (vlSelf->top__DOT___3849_[0U] 
                                                                     >> 0x14U)) 
                                                                 + (IData)(vlSelf->top__DOT____VdfgTmp_h4ddf3231__0)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1368(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1368\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h60cbdde6__0 = (((IData)(vlSelf->top__DOT___2528_) 
                                                 << 0x1bU) 
                                                | (((IData)(vlSelf->top__DOT____VdfgTmp_hab96423c__0) 
                                                    << 0x18U) 
                                                   | (((IData)(vlSelf->top__DOT___3761_) 
                                                       << 0x17U) 
                                                      | (((IData)(vlSelf->top__DOT____VdfgTmp_h23de504b__0) 
                                                          << 0x16U) 
                                                         | ((0x300000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___4395_ 
                                                                         >> 0x1fU)) 
                                                                << 0x14U)) 
                                                            | (((IData)(vlSelf->top__DOT____VdfgTmp_hb9140fe7__0) 
                                                                << 0x13U) 
                                                               | (((IData)(vlSelf->top__DOT___3189_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT____VdfgTmp_h2bffb201__0) 
                                                                      << 0x10U) 
                                                                     | ((0xc000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___4395_ 
                                                                                >> 0x19U)) 
                                                                            << 0xeU)) 
                                                                        | (((IData)(vlSelf->top__DOT___2326_) 
                                                                            << 0xdU) 
                                                                           | ((0x1f80U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___4395_ 
                                                                                >> 0x12U)) 
                                                                                << 7U)) 
                                                                              | (((IData)(vlSelf->top__DOT___3637_) 
                                                                                << 6U) 
                                                                                | ((0x30U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4395_ 
                                                                                >> 0xfU)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1070_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1611_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1360_))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1369(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1369\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h5a9711dc__0 = ((2U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___4275_ 
                                                             >> 3U)) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT___1695_));
    vlSelf->top__DOT___1992_ = (1U & ((((0x78U & ((IData)(
                                                          (vlSelf->top__DOT___4275_ 
                                                           >> 5U)) 
                                                  << 3U)) 
                                        | ((4U & (IData)(vlSelf->top__DOT___7120_)) 
                                           | ((2U & 
                                               ((IData)(
                                                        (vlSelf->top__DOT___4275_ 
                                                         >> 3U)) 
                                                << 1U)) 
                                              | (IData)(vlSelf->top__DOT___1695_)))) 
                                       + (((IData)(vlSelf->top__DOT___0532_) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT___0310_) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT___0642_) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT___1601_) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT___0014_) 
                                                     << 2U) 
                                                    | ((IData)(vlSelf->top__DOT___0137_) 
                                                       << 1U))))))) 
                                      >> 6U));
    vlSelf->top__DOT____VdfgTmp_h372d59b6__0 = ((4U 
                                                 & (IData)(vlSelf->top__DOT___7120_)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h5a9711dc__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1370(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1370\n"); );
    // Body
    vlSelf->top__DOT___2880_ = (1U & (~ (((IData)(vlSelf->top__DOT___3129_) 
                                          & (vlSelf->top__DOT___4749_[2U] 
                                             >> 0x11U)) 
                                         | ((IData)(vlSelf->top__DOT___3127_) 
                                            & (IData)(vlSelf->top__DOT___0201_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1371(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1371\n"); );
    // Init
    CData/*0:0*/ top__DOT___0540_;
    top__DOT___0540_ = 0;
    CData/*0:0*/ top__DOT___3114_;
    top__DOT___3114_ = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<5>/*159:0*/ __Vtemp_37;
    VlWide<5>/*159:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<6>/*191:0*/ __Vtemp_62;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<4>/*127:0*/ __Vtemp_65;
    VlWide<6>/*191:0*/ __Vtemp_67;
    VlWide<6>/*191:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_71;
    VlWide<6>/*191:0*/ __Vtemp_74;
    VlWide<3>/*95:0*/ __Vtemp_75;
    VlWide<4>/*127:0*/ __Vtemp_77;
    VlWide<6>/*191:0*/ __Vtemp_79;
    VlWide<6>/*191:0*/ __Vtemp_80;
    VlWide<3>/*95:0*/ __Vtemp_83;
    VlWide<6>/*191:0*/ __Vtemp_86;
    VlWide<3>/*95:0*/ __Vtemp_87;
    VlWide<4>/*127:0*/ __Vtemp_89;
    VlWide<6>/*191:0*/ __Vtemp_91;
    VlWide<6>/*191:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_94;
    VlWide<3>/*95:0*/ __Vtemp_95;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1436_)) 
                              << 0x3eU) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSelf->top__DOT___3829_[1U] 
                                                                >> 0x11U)))) 
                                            << 0x39U) 
                                           | (((QData)((IData)(vlSelf->top__DOT___2862_)) 
                                               << 0x38U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT___3829_[1U] 
                                                                      >> 0xfU)))) 
                                                  << 0x37U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___3447_)) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT___3829_[1U] 
                                                                            >> 0xdU)))) 
                                                        << 0x35U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1208_)) 
                                                           << 0x34U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___3129_)) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___1598_)) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___2372_)) 
                                                                    << 0x31U) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___0194_)) 
                                                                       << 0x30U) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___0038_)) 
                                                                          << 0x2fU) 
                                                                         | (((QData)((IData)(
                                                                                (0x448U 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 5U)) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | (IData)(vlSelf->top__DOT___0548_))))))))) 
                                                                             << 0x21U) 
                                                                            | (((QData)((IData)(vlSelf->top__DOT___2342_)) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___7057_ 
                                                                                << 3U)) 
                                                                                | ((0x1ff00000U 
                                                                                & ((IData)(vlSelf->top__DOT___4105_) 
                                                                                << 0xeU)) 
                                                                                | ((0xffff0U 
                                                                                & (vlSelf->top__DOT___7057_ 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7057_ 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0260_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1642_))))))))))))))))))))))));
    __Vtemp_1[1U] = ((0x80000000U & (vlSelf->top__DOT___3829_[1U] 
                                     << 8U)) | (IData)(
                                                       ((((QData)((IData)(vlSelf->top__DOT___1436_)) 
                                                          << 0x3eU) 
                                                         | (((QData)((IData)(
                                                                             (0x1fU 
                                                                              & (vlSelf->top__DOT___3829_[1U] 
                                                                                >> 0x11U)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___2862_)) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                                >> 0xfU)))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___3447_)) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                                >> 0xdU)))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___1208_)) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(vlSelf->top__DOT___3129_)) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(vlSelf->top__DOT___1598_)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2372_)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0194_)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0038_)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x448U 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 5U)) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | (IData)(vlSelf->top__DOT___0548_))))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2342_)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___7057_ 
                                                                                << 3U)) 
                                                                                | ((0x1ff00000U 
                                                                                & ((IData)(vlSelf->top__DOT___4105_) 
                                                                                << 0xeU)) 
                                                                                | ((0xffff0U 
                                                                                & (vlSelf->top__DOT___7057_ 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7057_ 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0260_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1642_))))))))))))))))))))))) 
                                                        >> 0x20U)));
    __Vtemp_17[3U] = (((IData)(vlSelf->top__DOT___3594_) 
                       << 0x15U) | (((IData)(vlSelf->top__DOT___1856_) 
                                     << 0x14U) | (((IData)(vlSelf->top__DOT___1036_) 
                                                   << 0x13U) 
                                                  | (((IData)(vlSelf->top__DOT___1919_) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->top__DOT___0526_) 
                                                         << 0x11U) 
                                                        | (((IData)(vlSelf->top__DOT___0880_) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->top__DOT___1281_) 
                                                               << 0xfU) 
                                                              | (((IData)(vlSelf->top__DOT___0069_) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->top__DOT___0785_) 
                                                                     << 0xdU) 
                                                                    | ((0x1f00U 
                                                                        & (vlSelf->top__DOT___4048_[1U] 
                                                                           << 4U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0675_) 
                                                                           << 7U) 
                                                                          | ((0x7eU 
                                                                              & ((vlSelf->top__DOT___4048_[1U] 
                                                                                << 4U) 
                                                                                | (0xeU 
                                                                                & (vlSelf->top__DOT___4048_[0U] 
                                                                                >> 0x1cU)))) 
                                                                             | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7072_ 
                                                                                >> 0x16U)))))))))))))));
    __Vtemp_37[4U] = ((0x400U & ((IData)((vlSelf->top__DOT___3920_ 
                                          >> 0xdU)) 
                                 << 0xaU)) | (((IData)(vlSelf->top__DOT___3325_) 
                                               << 9U) 
                                              | ((0x100U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3920_ 
                                                              >> 0xbU)) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelf->top__DOT___2449_) 
                                                     << 7U) 
                                                    | (((IData)(vlSelf->top__DOT___0979_) 
                                                        << 6U) 
                                                       | ((0x20U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3920_ 
                                                                       >> 8U)) 
                                                              << 5U)) 
                                                          | (((IData)(vlSelf->top__DOT___1288_) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT___1710_) 
                                                                 << 3U) 
                                                                | ((4U 
                                                                    & (vlSelf->top__DOT___3859_ 
                                                                       >> 0x18U)) 
                                                                   | ((2U 
                                                                       & ((IData)(vlSelf->top__DOT___7185_) 
                                                                          >> 1U)) 
                                                                      | (1U 
                                                                         & (vlSelf->top__DOT___3859_ 
                                                                            >> 0x18U))))))))))));
    __Vtemp_49[4U] = (((IData)(vlSelf->top__DOT___0483_) 
                       << 0x16U) | (((IData)(vlSelf->top__DOT___0191_) 
                                     << 0x15U) | (((IData)(vlSelf->top__DOT___0204_) 
                                                   << 0x14U) 
                                                  | ((0x80000U 
                                                      & ((IData)(vlSelf->top__DOT___7211_) 
                                                         << 0x11U)) 
                                                     | ((0x40000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3988_ 
                                                                     >> 0x12U)) 
                                                            << 0x12U)) 
                                                        | (((IData)(vlSelf->top__DOT___0529_) 
                                                            << 0x11U) 
                                                           | (((IData)(vlSelf->top__DOT___1060_) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->top__DOT___0067_) 
                                                                  << 0xfU) 
                                                                 | (((IData)(vlSelf->top__DOT___1188_) 
                                                                     << 0xeU) 
                                                                    | ((0x2000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                           << 0xdU)) 
                                                                       | (((IData)(vlSelf->top__DOT___3571_) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->top__DOT___2920_) 
                                                                              << 0xbU) 
                                                                             | __Vtemp_37[4U]))))))))))));
    vlSelf->top__DOT___4477_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4477_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4477_[2U] = ((0xfffff800U & 
                                     (vlSelf->top__DOT___4048_[0U] 
                                      << 4U)) | ((0x400U 
                                                  & ((IData)(vlSelf->top__DOT___7072_) 
                                                     << 0xaU)) 
                                                 | ((0xfffffffeU 
                                                     & ((0x1fcU 
                                                         & ((vlSelf->top__DOT___3829_[2U] 
                                                             << 8U) 
                                                            | (0xfcU 
                                                               & (vlSelf->top__DOT___3829_[1U] 
                                                                  >> 0x18U)))) 
                                                        | ((IData)(vlSelf->top__DOT___1139_) 
                                                           << 1U))) 
                                                    | (1U 
                                                       & (vlSelf->top__DOT___3829_[1U] 
                                                          >> 0x18U)))));
    vlSelf->top__DOT___4477_[3U] = (((IData)(vlSelf->top__DOT___3654_) 
                                     << 0x1fU) | (((IData)(vlSelf->top__DOT___0876_) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->top__DOT___0020_) 
                                                      << 0x1dU) 
                                                     | ((0x18000000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3951_ 
                                                                     >> 0x18U)) 
                                                            << 0x1bU)) 
                                                        | (((IData)(vlSelf->top__DOT___0982_) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSelf->top__DOT___0861_) 
                                                               << 0x19U) 
                                                              | (((IData)(vlSelf->top__DOT___3023_) 
                                                                  << 0x18U) 
                                                                 | ((0x800000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x14U)) 
                                                                        << 0x17U)) 
                                                                    | (((IData)(vlSelf->top__DOT___3192_) 
                                                                        << 0x16U) 
                                                                       | __Vtemp_17[3U])))))))));
    vlSelf->top__DOT___4477_[4U] = (((IData)(vlSelf->top__DOT___3839_) 
                                     << 0x1fU) | (((IData)(vlSelf->top__DOT___1116_) 
                                                   << 0x1eU) 
                                                  | ((0x20000000U 
                                                      & (vlSelf->top__DOT___4198_ 
                                                         << 0xeU)) 
                                                     | ((0x10000000U 
                                                         & ((IData)(vlSelf->top__DOT___7055_) 
                                                            << 0x17U)) 
                                                        | ((0xe000000U 
                                                            & ((IData)(vlSelf->top__DOT___4073_) 
                                                               << 0x16U)) 
                                                           | ((0x1000000U 
                                                               & ((IData)(vlSelf->top__DOT___7055_) 
                                                                  << 0x17U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(vlSelf->top__DOT___7055_) 
                                                                     << 0x17U)) 
                                                                 | __Vtemp_49[4U])))))));
    vlSelf->top__DOT___4477_[5U] = (((IData)(vlSelf->top__DOT___0530_) 
                                     << 6U) | (0x3fU 
                                               & ((IData)(vlSelf->top__DOT___3839_) 
                                                  >> 1U)));
    __Vtemp_59[1U] = (IData)((((QData)((IData)((((IData)(
                                                         (vlSelf->top__DOT___7072_ 
                                                          >> 0x16U)) 
                                                 << 0x1fU) 
                                                | ((0x7ffffc00U 
                                                    & (vlSelf->top__DOT___4048_[0U] 
                                                       << 3U)) 
                                                   | ((0x200U 
                                                       & ((IData)(vlSelf->top__DOT___7072_) 
                                                          << 9U)) 
                                                      | ((0xfeU 
                                                          & ((vlSelf->top__DOT___3829_[2U] 
                                                              << 7U) 
                                                             | (0x7eU 
                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                   >> 0x19U)))) 
                                                         | (IData)(vlSelf->top__DOT___1139_))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (0x448U 
                                                            | ((0xc0000000U 
                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                   << 7U)) 
                                                               | (((IData)(vlSelf->top__DOT___1436_) 
                                                                   << 0x1dU) 
                                                                  | ((0x1f000000U 
                                                                      & (vlSelf->top__DOT___3829_[1U] 
                                                                         << 7U)) 
                                                                     | (((IData)(vlSelf->top__DOT___2862_) 
                                                                         << 0x17U) 
                                                                        | ((0x400000U 
                                                                            & (vlSelf->top__DOT___3829_[1U] 
                                                                               << 7U)) 
                                                                           | (((IData)(vlSelf->top__DOT___3447_) 
                                                                               << 0x15U) 
                                                                              | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1208_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___3129_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___1598_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___2372_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0194_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 0xeU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 5U)) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | (IData)(vlSelf->top__DOT___0548_))))))))))))))))))))))));
    __Vtemp_59[2U] = (IData)(((((QData)((IData)((((IData)(
                                                          (vlSelf->top__DOT___7072_ 
                                                           >> 0x16U)) 
                                                  << 0x1fU) 
                                                 | ((0x7ffffc00U 
                                                     & (vlSelf->top__DOT___4048_[0U] 
                                                        << 3U)) 
                                                    | ((0x200U 
                                                        & ((IData)(vlSelf->top__DOT___7072_) 
                                                           << 9U)) 
                                                       | ((0xfeU 
                                                           & ((vlSelf->top__DOT___3829_[2U] 
                                                               << 7U) 
                                                              | (0x7eU 
                                                                 & (vlSelf->top__DOT___3829_[1U] 
                                                                    >> 0x19U)))) 
                                                          | (IData)(vlSelf->top__DOT___1139_))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0x448U 
                                                             | ((0xc0000000U 
                                                                 & (vlSelf->top__DOT___3829_[1U] 
                                                                    << 7U)) 
                                                                | (((IData)(vlSelf->top__DOT___1436_) 
                                                                    << 0x1dU) 
                                                                   | ((0x1f000000U 
                                                                       & (vlSelf->top__DOT___3829_[1U] 
                                                                          << 7U)) 
                                                                      | (((IData)(vlSelf->top__DOT___2862_) 
                                                                          << 0x17U) 
                                                                         | ((0x400000U 
                                                                             & (vlSelf->top__DOT___3829_[1U] 
                                                                                << 7U)) 
                                                                            | (((IData)(vlSelf->top__DOT___3447_) 
                                                                                << 0x15U) 
                                                                               | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1208_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___3129_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___1598_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___2372_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0194_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 0xeU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 5U)) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | (IData)(vlSelf->top__DOT___0548_))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_62[0U] = (((0xe0000000U & vlSelf->top__DOT___4477_[0U]) 
                       | ((0x1ff00000U & ((IData)(vlSelf->top__DOT___4105_) 
                                          << 0xeU)) 
                          | ((0xffff0U & vlSelf->top__DOT___4477_[0U]) 
                             | ((8U & (vlSelf->top__DOT___7057_ 
                                       << 3U)) | (((IData)(vlSelf->top__DOT___2596_) 
                                                   << 2U) 
                                                  | ((IData)(vlSelf->top__DOT___0260_) 
                                                     << 1U)))))) 
                      | (IData)(vlSelf->top__DOT___1642_));
    __Vtemp_62[1U] = (((1U & (IData)(vlSelf->top__DOT___2342_)) 
                       | ((1U & ((IData)(vlSelf->top__DOT___2596_) 
                                 >> 0x1eU)) | ((IData)(vlSelf->top__DOT___0260_) 
                                               >> 0x1fU))) 
                      | (__Vtemp_59[1U] << 1U));
    __Vtemp_62[2U] = ((__Vtemp_59[1U] >> 0x1fU) | (
                                                   __Vtemp_59[2U] 
                                                   << 1U));
    __Vtemp_62[3U] = (((IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___0530_) 
                                                   << 0x1fU) 
                                                  | ((0x7f000000U 
                                                      & ((IData)(vlSelf->top__DOT___3839_) 
                                                         << 0x18U)) 
                                                     | (((IData)(vlSelf->top__DOT___1116_) 
                                                         << 0x17U) 
                                                        | ((0x400000U 
                                                            & (vlSelf->top__DOT___4198_ 
                                                               << 7U)) 
                                                           | ((0x200000U 
                                                               & ((IData)(vlSelf->top__DOT___7055_) 
                                                                  << 0x10U)) 
                                                              | ((0x1c0000U 
                                                                  & ((IData)(vlSelf->top__DOT___4073_) 
                                                                     << 0xfU)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(vlSelf->top__DOT___7055_) 
                                                                        << 0x10U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(vlSelf->top__DOT___7055_) 
                                                                           << 0x10U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0483_) 
                                                                           << 0xfU) 
                                                                          | (((IData)(vlSelf->top__DOT___0191_) 
                                                                              << 0xeU) 
                                                                             | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2449_)))))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0979_) 
                                                               << 0x1fU) 
                                                              | ((0x40000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3920_ 
                                                                              >> 8U)) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->top__DOT___1288_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___1710_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3859_ 
                                                                              << 1U)) 
                                                                          | ((0x4000000U 
                                                                              & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0x18U)) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0020_) 
                                                                                << 0x16U) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0982_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___3023_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x14U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3192_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___3594_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1856_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1036_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1919_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1281_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4048_[1U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0675_))))))))))))))))))))))))))))))) 
                       << 7U) | ((0x7eU & ((vlSelf->top__DOT___4048_[1U] 
                                            << 4U) 
                                           | (0xeU 
                                              & (vlSelf->top__DOT___4048_[0U] 
                                                 >> 0x1cU)))) 
                                 | (__Vtemp_59[2U] 
                                    >> 0x1fU)));
    __Vtemp_62[4U] = (((IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___0530_) 
                                                   << 0x1fU) 
                                                  | ((0x7f000000U 
                                                      & ((IData)(vlSelf->top__DOT___3839_) 
                                                         << 0x18U)) 
                                                     | (((IData)(vlSelf->top__DOT___1116_) 
                                                         << 0x17U) 
                                                        | ((0x400000U 
                                                            & (vlSelf->top__DOT___4198_ 
                                                               << 7U)) 
                                                           | ((0x200000U 
                                                               & ((IData)(vlSelf->top__DOT___7055_) 
                                                                  << 0x10U)) 
                                                              | ((0x1c0000U 
                                                                  & ((IData)(vlSelf->top__DOT___4073_) 
                                                                     << 0xfU)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(vlSelf->top__DOT___7055_) 
                                                                        << 0x10U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(vlSelf->top__DOT___7055_) 
                                                                           << 0x10U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0483_) 
                                                                           << 0xfU) 
                                                                          | (((IData)(vlSelf->top__DOT___0191_) 
                                                                              << 0xeU) 
                                                                             | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2449_)))))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0979_) 
                                                               << 0x1fU) 
                                                              | ((0x40000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3920_ 
                                                                              >> 8U)) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->top__DOT___1288_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___1710_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3859_ 
                                                                              << 1U)) 
                                                                          | ((0x4000000U 
                                                                              & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0x18U)) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0020_) 
                                                                                << 0x16U) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0982_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___3023_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x14U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3192_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___3594_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1856_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1036_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1919_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1281_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4048_[1U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0675_))))))))))))))))))))))))))))))) 
                       >> 0x19U) | ((IData)(((((QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0530_) 
                                                                 << 0x1fU) 
                                                                | ((0x7f000000U 
                                                                    & ((IData)(vlSelf->top__DOT___3839_) 
                                                                       << 0x18U)) 
                                                                   | (((IData)(vlSelf->top__DOT___1116_) 
                                                                       << 0x17U) 
                                                                      | ((0x400000U 
                                                                          & (vlSelf->top__DOT___4198_ 
                                                                             << 7U)) 
                                                                         | ((0x200000U 
                                                                             & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 0x10U)) 
                                                                            | ((0x1c0000U 
                                                                                & ((IData)(vlSelf->top__DOT___4073_) 
                                                                                << 0xfU)) 
                                                                               | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0483_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0191_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2449_)))))))))))))))))))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___0979_) 
                                                                  << 0x1fU) 
                                                                 | ((0x40000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                        << 0x1eU)) 
                                                                    | (((IData)(vlSelf->top__DOT___1288_) 
                                                                        << 0x1dU) 
                                                                       | (((IData)(vlSelf->top__DOT___1710_) 
                                                                           << 0x1cU) 
                                                                          | ((0x8000000U 
                                                                              & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                             | ((0x4000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0x18U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0020_) 
                                                                                << 0x16U) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0982_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___3023_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x14U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3192_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___3594_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1856_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1036_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1919_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1281_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4048_[1U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0675_)))))))))))))))))))))))))))))) 
                                             >> 0x20U)) 
                                    << 7U));
    __Vtemp_62[5U] = ((IData)(((((QData)((IData)((((IData)(vlSelf->top__DOT___0530_) 
                                                   << 0x1fU) 
                                                  | ((0x7f000000U 
                                                      & ((IData)(vlSelf->top__DOT___3839_) 
                                                         << 0x18U)) 
                                                     | (((IData)(vlSelf->top__DOT___1116_) 
                                                         << 0x17U) 
                                                        | ((0x400000U 
                                                            & (vlSelf->top__DOT___4198_ 
                                                               << 7U)) 
                                                           | ((0x200000U 
                                                               & ((IData)(vlSelf->top__DOT___7055_) 
                                                                  << 0x10U)) 
                                                              | ((0x1c0000U 
                                                                  & ((IData)(vlSelf->top__DOT___4073_) 
                                                                     << 0xfU)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(vlSelf->top__DOT___7055_) 
                                                                        << 0x10U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(vlSelf->top__DOT___7055_) 
                                                                           << 0x10U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0483_) 
                                                                           << 0xfU) 
                                                                          | (((IData)(vlSelf->top__DOT___0191_) 
                                                                              << 0xeU) 
                                                                             | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2449_)))))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0979_) 
                                                               << 0x1fU) 
                                                              | ((0x40000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3920_ 
                                                                              >> 8U)) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->top__DOT___1288_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___1710_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3859_ 
                                                                              << 1U)) 
                                                                          | ((0x4000000U 
                                                                              & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0x18U)) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0020_) 
                                                                                << 0x16U) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0982_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___3023_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x14U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3192_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___3594_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1856_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1036_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1919_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1281_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4048_[1U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0675_)))))))))))))))))))))))))))))) 
                               >> 0x20U)) >> 0x19U);
    __Vtemp_63[0U] = (IData)((((QData)((IData)(((0x80000000U 
                                                 & (vlSelf->top__DOT___7084_[0U] 
                                                    << 0xbU)) 
                                                | ((0x7ffff800U 
                                                    & (vlSelf->top__DOT___4117_[0U] 
                                                       << 7U)) 
                                                   | (((IData)(vlSelf->top__DOT___0628_) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->top__DOT___0066_) 
                                                          << 9U) 
                                                         | ((0x100U 
                                                             & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                                << 7U)) 
                                                            | (((IData)(vlSelf->top__DOT___0182_) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->top__DOT___2502_) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->top__DOT___0942_) 
                                                                      << 5U) 
                                                                     | ((0x18U 
                                                                         & (vlSelf->top__DOT___4255_[1U] 
                                                                            >> 0xeU)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x2dU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & (vlSelf->top__DOT___4255_[1U] 
                                                                                >> 0xeU)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x2bU)))))))))))))))) 
                               << 0x13U) | (QData)((IData)(
                                                           ((0x7c000U 
                                                             & (vlSelf->top__DOT___4255_[1U] 
                                                                << 5U)) 
                                                            | ((0x2000U 
                                                                & (vlSelf->top__DOT___4030_ 
                                                                   >> 5U)) 
                                                               | ((0x1000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___4745_ 
                                                                               >> 0x24U)) 
                                                                      << 0xcU)) 
                                                                  | ((0xffeU 
                                                                      & (vlSelf->top__DOT___4030_ 
                                                                         >> 5U)) 
                                                                     | (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x18U)))))))))));
    __Vtemp_63[1U] = ((0xfff80000U & ((vlSelf->top__DOT___4117_[1U] 
                                       << 0x1aU) | 
                                      (0x3f80000U & 
                                       (vlSelf->top__DOT___4117_[0U] 
                                        >> 6U)))) | (IData)(
                                                            ((((QData)((IData)(
                                                                               ((0x80000000U 
                                                                                & (vlSelf->top__DOT___7084_[0U] 
                                                                                << 0xbU)) 
                                                                                | ((0x7ffff800U 
                                                                                & (vlSelf->top__DOT___4117_[0U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0628_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0066_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0182_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0942_) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___4255_[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x2dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4255_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x2bU)))))))))))))))) 
                                                               << 0x13U) 
                                                              | (QData)((IData)(
                                                                                ((0x7c000U 
                                                                                & (vlSelf->top__DOT___4255_[1U] 
                                                                                << 5U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___4030_ 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x24U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xffeU 
                                                                                & (vlSelf->top__DOT___4030_ 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x18U)))))))))) 
                                                             >> 0x20U)));
    __Vtemp_65[0U] = ((__Vtemp_63[0U] << 0x1fU) | (
                                                   (0x40000000U 
                                                    & (vlSelf->top__DOT___4030_ 
                                                       << 0x1aU)) 
                                                   | ((0x20000000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___4745_ 
                                                                   >> 0x16U)) 
                                                          << 0x1dU)) 
                                                      | ((0x18000000U 
                                                          & (vlSelf->top__DOT___4030_ 
                                                             << 0x1aU)) 
                                                         | ((0x7e00000U 
                                                             & (vlSelf->top__DOT___4255_[0U] 
                                                                << 4U)) 
                                                            | ((0x100000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___4745_ 
                                                                            >> 0xdU)) 
                                                                   << 0x14U)) 
                                                               | ((0xf8000U 
                                                                   & (vlSelf->top__DOT___4255_[0U] 
                                                                      << 4U)) 
                                                                  | ((0x3000U 
                                                                      & (vlSelf->top__DOT___4255_[0U] 
                                                                         << 4U)) 
                                                                     | ((0x800U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 5U)) 
                                                                            << 0xbU)) 
                                                                        | ((0x7c0U 
                                                                            & (vlSelf->top__DOT___4255_[0U] 
                                                                               << 4U)) 
                                                                           | (((IData)(vlSelf->top__DOT___1082_) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0148_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0293_))))))))))))));
    __Vtemp_67[0U] = __Vtemp_65[0U];
    __Vtemp_67[1U] = ((__Vtemp_63[0U] >> 1U) | (__Vtemp_63[1U] 
                                                << 0x1fU));
    __Vtemp_67[2U] = ((__Vtemp_63[1U] >> 1U) | (0x80000000U 
                                                & (vlSelf->top__DOT___4117_[1U] 
                                                   << 0x19U)));
    __Vtemp_67[3U] = ((0x80000000U & (vlSelf->top__DOT___4117_[2U] 
                                      << 0x19U)) | 
                      ((0x7fffffe0U & ((IData)((vlSelf->top__DOT___4071_ 
                                                >> 7U)) 
                                       << 5U)) | (0x1fU 
                                                  & (vlSelf->top__DOT___4117_[1U] 
                                                     >> 7U))));
    __Vtemp_67[4U] = ((0xffffff80U & (((IData)((vlSelf->top__DOT___4460_ 
                                                >> 0xcU)) 
                                       << 0x13U) | 
                                      (((IData)(vlSelf->top__DOT___1324_) 
                                        << 0x12U) | 
                                       ((0x30000U & 
                                         ((IData)((vlSelf->top__DOT___4460_ 
                                                   >> 9U)) 
                                          << 0x10U)) 
                                        | (((IData)(vlSelf->top__DOT___3109_) 
                                            << 0xfU) 
                                           | ((0x6000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___4460_ 
                                                           >> 6U)) 
                                                  << 0xdU)) 
                                              | (((IData)(vlSelf->top__DOT___1920_) 
                                                  << 0xcU) 
                                                 | ((0xf00U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___4460_ 
                                                                 >> 1U)) 
                                                        << 8U)) 
                                                    | ((IData)(vlSelf->top__DOT___1435_) 
                                                       << 7U))))))))) 
                      | (0x7fU & (vlSelf->top__DOT___4117_[2U] 
                                  >> 7U)));
    __Vtemp_67[5U] = (0x7fU & ((0x7fU & ((IData)((vlSelf->top__DOT___4460_ 
                                                  >> 0xcU)) 
                                         >> 0xdU)) 
                               | ((0x7fU & ((IData)(vlSelf->top__DOT___1324_) 
                                            >> 0xeU)) 
                                  | ((0x7fU & ((IData)(vlSelf->top__DOT___3109_) 
                                               >> 0x11U)) 
                                     | ((0x7fU & ((IData)(vlSelf->top__DOT___1920_) 
                                                  >> 0x14U)) 
                                        | ((IData)(vlSelf->top__DOT___1435_) 
                                           >> 0x19U))))));
    VL_ADD_W(6, __Vtemp_68, __Vtemp_62, __Vtemp_67);
    top__DOT___3114_ = (__Vtemp_68[3U] >> 0x1fU);
    __Vtemp_71[1U] = (IData)((((QData)((IData)((((IData)(
                                                         (vlSelf->top__DOT___7072_ 
                                                          >> 0x16U)) 
                                                 << 0x1fU) 
                                                | ((0x7ffffc00U 
                                                    & (vlSelf->top__DOT___4048_[0U] 
                                                       << 3U)) 
                                                   | ((0x200U 
                                                       & ((IData)(vlSelf->top__DOT___7072_) 
                                                          << 9U)) 
                                                      | ((0xfeU 
                                                          & ((vlSelf->top__DOT___3829_[2U] 
                                                              << 7U) 
                                                             | (0x7eU 
                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                   >> 0x19U)))) 
                                                         | (IData)(vlSelf->top__DOT___1139_))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (0x448U 
                                                            | ((0xc0000000U 
                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                   << 7U)) 
                                                               | (((IData)(vlSelf->top__DOT___1436_) 
                                                                   << 0x1dU) 
                                                                  | ((0x1f000000U 
                                                                      & (vlSelf->top__DOT___3829_[1U] 
                                                                         << 7U)) 
                                                                     | (((IData)(vlSelf->top__DOT___2862_) 
                                                                         << 0x17U) 
                                                                        | ((0x400000U 
                                                                            & (vlSelf->top__DOT___3829_[1U] 
                                                                               << 7U)) 
                                                                           | (((IData)(vlSelf->top__DOT___3447_) 
                                                                               << 0x15U) 
                                                                              | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1208_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___3129_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___1598_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___2372_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0194_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 0xeU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 5U)) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | (IData)(vlSelf->top__DOT___0548_))))))))))))))))))))))));
    __Vtemp_71[2U] = (IData)(((((QData)((IData)((((IData)(
                                                          (vlSelf->top__DOT___7072_ 
                                                           >> 0x16U)) 
                                                  << 0x1fU) 
                                                 | ((0x7ffffc00U 
                                                     & (vlSelf->top__DOT___4048_[0U] 
                                                        << 3U)) 
                                                    | ((0x200U 
                                                        & ((IData)(vlSelf->top__DOT___7072_) 
                                                           << 9U)) 
                                                       | ((0xfeU 
                                                           & ((vlSelf->top__DOT___3829_[2U] 
                                                               << 7U) 
                                                              | (0x7eU 
                                                                 & (vlSelf->top__DOT___3829_[1U] 
                                                                    >> 0x19U)))) 
                                                          | (IData)(vlSelf->top__DOT___1139_))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0x448U 
                                                             | ((0xc0000000U 
                                                                 & (vlSelf->top__DOT___3829_[1U] 
                                                                    << 7U)) 
                                                                | (((IData)(vlSelf->top__DOT___1436_) 
                                                                    << 0x1dU) 
                                                                   | ((0x1f000000U 
                                                                       & (vlSelf->top__DOT___3829_[1U] 
                                                                          << 7U)) 
                                                                      | (((IData)(vlSelf->top__DOT___2862_) 
                                                                          << 0x17U) 
                                                                         | ((0x400000U 
                                                                             & (vlSelf->top__DOT___3829_[1U] 
                                                                                << 7U)) 
                                                                            | (((IData)(vlSelf->top__DOT___3447_) 
                                                                                << 0x15U) 
                                                                               | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1208_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___3129_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___1598_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___2372_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0194_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 0xeU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 5U)) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | (IData)(vlSelf->top__DOT___0548_))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_74[0U] = (((0xe0000000U & vlSelf->top__DOT___4477_[0U]) 
                       | ((0x1ff00000U & ((IData)(vlSelf->top__DOT___4105_) 
                                          << 0xeU)) 
                          | ((0xffff0U & vlSelf->top__DOT___4477_[0U]) 
                             | ((8U & (vlSelf->top__DOT___7057_ 
                                       << 3U)) | (((IData)(vlSelf->top__DOT___2596_) 
                                                   << 2U) 
                                                  | ((IData)(vlSelf->top__DOT___0260_) 
                                                     << 1U)))))) 
                      | (IData)(vlSelf->top__DOT___1642_));
    __Vtemp_74[1U] = (((1U & (IData)(vlSelf->top__DOT___2342_)) 
                       | ((1U & ((IData)(vlSelf->top__DOT___2596_) 
                                 >> 0x1eU)) | ((IData)(vlSelf->top__DOT___0260_) 
                                               >> 0x1fU))) 
                      | (__Vtemp_71[1U] << 1U));
    __Vtemp_74[2U] = ((__Vtemp_71[1U] >> 0x1fU) | (
                                                   __Vtemp_71[2U] 
                                                   << 1U));
    __Vtemp_74[3U] = (((IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___0530_) 
                                                   << 0x1fU) 
                                                  | ((0x7f000000U 
                                                      & ((IData)(vlSelf->top__DOT___3839_) 
                                                         << 0x18U)) 
                                                     | (((IData)(vlSelf->top__DOT___1116_) 
                                                         << 0x17U) 
                                                        | ((0x400000U 
                                                            & (vlSelf->top__DOT___4198_ 
                                                               << 7U)) 
                                                           | ((0x200000U 
                                                               & ((IData)(vlSelf->top__DOT___7055_) 
                                                                  << 0x10U)) 
                                                              | ((0x1c0000U 
                                                                  & ((IData)(vlSelf->top__DOT___4073_) 
                                                                     << 0xfU)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(vlSelf->top__DOT___7055_) 
                                                                        << 0x10U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(vlSelf->top__DOT___7055_) 
                                                                           << 0x10U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0483_) 
                                                                           << 0xfU) 
                                                                          | (((IData)(vlSelf->top__DOT___0191_) 
                                                                              << 0xeU) 
                                                                             | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2449_)))))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0979_) 
                                                               << 0x1fU) 
                                                              | ((0x40000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3920_ 
                                                                              >> 8U)) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->top__DOT___1288_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___1710_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3859_ 
                                                                              << 1U)) 
                                                                          | ((0x4000000U 
                                                                              & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0x18U)) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0020_) 
                                                                                << 0x16U) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0982_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___3023_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x14U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3192_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___3594_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1856_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1036_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1919_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1281_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4048_[1U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0675_))))))))))))))))))))))))))))))) 
                       << 7U) | ((0x7eU & ((vlSelf->top__DOT___4048_[1U] 
                                            << 4U) 
                                           | (0xeU 
                                              & (vlSelf->top__DOT___4048_[0U] 
                                                 >> 0x1cU)))) 
                                 | (__Vtemp_71[2U] 
                                    >> 0x1fU)));
    __Vtemp_74[4U] = (((IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___0530_) 
                                                   << 0x1fU) 
                                                  | ((0x7f000000U 
                                                      & ((IData)(vlSelf->top__DOT___3839_) 
                                                         << 0x18U)) 
                                                     | (((IData)(vlSelf->top__DOT___1116_) 
                                                         << 0x17U) 
                                                        | ((0x400000U 
                                                            & (vlSelf->top__DOT___4198_ 
                                                               << 7U)) 
                                                           | ((0x200000U 
                                                               & ((IData)(vlSelf->top__DOT___7055_) 
                                                                  << 0x10U)) 
                                                              | ((0x1c0000U 
                                                                  & ((IData)(vlSelf->top__DOT___4073_) 
                                                                     << 0xfU)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(vlSelf->top__DOT___7055_) 
                                                                        << 0x10U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(vlSelf->top__DOT___7055_) 
                                                                           << 0x10U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0483_) 
                                                                           << 0xfU) 
                                                                          | (((IData)(vlSelf->top__DOT___0191_) 
                                                                              << 0xeU) 
                                                                             | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2449_)))))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0979_) 
                                                               << 0x1fU) 
                                                              | ((0x40000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3920_ 
                                                                              >> 8U)) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->top__DOT___1288_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___1710_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3859_ 
                                                                              << 1U)) 
                                                                          | ((0x4000000U 
                                                                              & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0x18U)) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0020_) 
                                                                                << 0x16U) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0982_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___3023_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x14U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3192_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___3594_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1856_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1036_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1919_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1281_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4048_[1U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0675_))))))))))))))))))))))))))))))) 
                       >> 0x19U) | ((IData)(((((QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0530_) 
                                                                 << 0x1fU) 
                                                                | ((0x7f000000U 
                                                                    & ((IData)(vlSelf->top__DOT___3839_) 
                                                                       << 0x18U)) 
                                                                   | (((IData)(vlSelf->top__DOT___1116_) 
                                                                       << 0x17U) 
                                                                      | ((0x400000U 
                                                                          & (vlSelf->top__DOT___4198_ 
                                                                             << 7U)) 
                                                                         | ((0x200000U 
                                                                             & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 0x10U)) 
                                                                            | ((0x1c0000U 
                                                                                & ((IData)(vlSelf->top__DOT___4073_) 
                                                                                << 0xfU)) 
                                                                               | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0483_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0191_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2449_)))))))))))))))))))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___0979_) 
                                                                  << 0x1fU) 
                                                                 | ((0x40000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                        << 0x1eU)) 
                                                                    | (((IData)(vlSelf->top__DOT___1288_) 
                                                                        << 0x1dU) 
                                                                       | (((IData)(vlSelf->top__DOT___1710_) 
                                                                           << 0x1cU) 
                                                                          | ((0x8000000U 
                                                                              & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                             | ((0x4000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0x18U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0020_) 
                                                                                << 0x16U) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0982_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___3023_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x14U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3192_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___3594_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1856_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1036_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1919_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1281_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4048_[1U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0675_)))))))))))))))))))))))))))))) 
                                             >> 0x20U)) 
                                    << 7U));
    __Vtemp_74[5U] = ((IData)(((((QData)((IData)((((IData)(vlSelf->top__DOT___0530_) 
                                                   << 0x1fU) 
                                                  | ((0x7f000000U 
                                                      & ((IData)(vlSelf->top__DOT___3839_) 
                                                         << 0x18U)) 
                                                     | (((IData)(vlSelf->top__DOT___1116_) 
                                                         << 0x17U) 
                                                        | ((0x400000U 
                                                            & (vlSelf->top__DOT___4198_ 
                                                               << 7U)) 
                                                           | ((0x200000U 
                                                               & ((IData)(vlSelf->top__DOT___7055_) 
                                                                  << 0x10U)) 
                                                              | ((0x1c0000U 
                                                                  & ((IData)(vlSelf->top__DOT___4073_) 
                                                                     << 0xfU)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(vlSelf->top__DOT___7055_) 
                                                                        << 0x10U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(vlSelf->top__DOT___7055_) 
                                                                           << 0x10U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0483_) 
                                                                           << 0xfU) 
                                                                          | (((IData)(vlSelf->top__DOT___0191_) 
                                                                              << 0xeU) 
                                                                             | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2449_)))))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0979_) 
                                                               << 0x1fU) 
                                                              | ((0x40000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3920_ 
                                                                              >> 8U)) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->top__DOT___1288_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___1710_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3859_ 
                                                                              << 1U)) 
                                                                          | ((0x4000000U 
                                                                              & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0x18U)) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0020_) 
                                                                                << 0x16U) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0982_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___3023_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x14U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3192_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___3594_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1856_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1036_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1919_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1281_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4048_[1U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0675_)))))))))))))))))))))))))))))) 
                               >> 0x20U)) >> 0x19U);
    __Vtemp_75[0U] = (IData)((((QData)((IData)(((0x80000000U 
                                                 & (vlSelf->top__DOT___7084_[0U] 
                                                    << 0xbU)) 
                                                | ((0x7ffff800U 
                                                    & (vlSelf->top__DOT___4117_[0U] 
                                                       << 7U)) 
                                                   | (((IData)(vlSelf->top__DOT___0628_) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->top__DOT___0066_) 
                                                          << 9U) 
                                                         | ((0x100U 
                                                             & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                                << 7U)) 
                                                            | (((IData)(vlSelf->top__DOT___0182_) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->top__DOT___2502_) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->top__DOT___0942_) 
                                                                      << 5U) 
                                                                     | ((0x18U 
                                                                         & (vlSelf->top__DOT___4255_[1U] 
                                                                            >> 0xeU)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x2dU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & (vlSelf->top__DOT___4255_[1U] 
                                                                                >> 0xeU)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x2bU)))))))))))))))) 
                               << 0x13U) | (QData)((IData)(
                                                           ((0x7c000U 
                                                             & (vlSelf->top__DOT___4255_[1U] 
                                                                << 5U)) 
                                                            | ((0x2000U 
                                                                & (vlSelf->top__DOT___4030_ 
                                                                   >> 5U)) 
                                                               | ((0x1000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___4745_ 
                                                                               >> 0x24U)) 
                                                                      << 0xcU)) 
                                                                  | ((0xffeU 
                                                                      & (vlSelf->top__DOT___4030_ 
                                                                         >> 5U)) 
                                                                     | (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x18U)))))))))));
    __Vtemp_75[1U] = ((0xfff80000U & ((vlSelf->top__DOT___4117_[1U] 
                                       << 0x1aU) | 
                                      (0x3f80000U & 
                                       (vlSelf->top__DOT___4117_[0U] 
                                        >> 6U)))) | (IData)(
                                                            ((((QData)((IData)(
                                                                               ((0x80000000U 
                                                                                & (vlSelf->top__DOT___7084_[0U] 
                                                                                << 0xbU)) 
                                                                                | ((0x7ffff800U 
                                                                                & (vlSelf->top__DOT___4117_[0U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0628_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0066_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0182_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0942_) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___4255_[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x2dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4255_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x2bU)))))))))))))))) 
                                                               << 0x13U) 
                                                              | (QData)((IData)(
                                                                                ((0x7c000U 
                                                                                & (vlSelf->top__DOT___4255_[1U] 
                                                                                << 5U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___4030_ 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x24U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xffeU 
                                                                                & (vlSelf->top__DOT___4030_ 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x18U)))))))))) 
                                                             >> 0x20U)));
    __Vtemp_77[0U] = ((__Vtemp_75[0U] << 0x1fU) | (
                                                   (0x40000000U 
                                                    & (vlSelf->top__DOT___4030_ 
                                                       << 0x1aU)) 
                                                   | ((0x20000000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___4745_ 
                                                                   >> 0x16U)) 
                                                          << 0x1dU)) 
                                                      | ((0x18000000U 
                                                          & (vlSelf->top__DOT___4030_ 
                                                             << 0x1aU)) 
                                                         | ((0x7e00000U 
                                                             & (vlSelf->top__DOT___4255_[0U] 
                                                                << 4U)) 
                                                            | ((0x100000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___4745_ 
                                                                            >> 0xdU)) 
                                                                   << 0x14U)) 
                                                               | ((0xf8000U 
                                                                   & (vlSelf->top__DOT___4255_[0U] 
                                                                      << 4U)) 
                                                                  | ((0x3000U 
                                                                      & (vlSelf->top__DOT___4255_[0U] 
                                                                         << 4U)) 
                                                                     | ((0x800U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 5U)) 
                                                                            << 0xbU)) 
                                                                        | ((0x7c0U 
                                                                            & (vlSelf->top__DOT___4255_[0U] 
                                                                               << 4U)) 
                                                                           | (((IData)(vlSelf->top__DOT___1082_) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0148_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0293_))))))))))))));
    __Vtemp_79[0U] = __Vtemp_77[0U];
    __Vtemp_79[1U] = ((__Vtemp_75[0U] >> 1U) | (__Vtemp_75[1U] 
                                                << 0x1fU));
    __Vtemp_79[2U] = ((__Vtemp_75[1U] >> 1U) | (0x80000000U 
                                                & (vlSelf->top__DOT___4117_[1U] 
                                                   << 0x19U)));
    __Vtemp_79[3U] = ((0x80000000U & (vlSelf->top__DOT___4117_[2U] 
                                      << 0x19U)) | 
                      ((0x7fffffe0U & ((IData)((vlSelf->top__DOT___4071_ 
                                                >> 7U)) 
                                       << 5U)) | (0x1fU 
                                                  & (vlSelf->top__DOT___4117_[1U] 
                                                     >> 7U))));
    __Vtemp_79[4U] = ((0xffffff80U & (((IData)((vlSelf->top__DOT___4460_ 
                                                >> 0xcU)) 
                                       << 0x13U) | 
                                      (((IData)(vlSelf->top__DOT___1324_) 
                                        << 0x12U) | 
                                       ((0x30000U & 
                                         ((IData)((vlSelf->top__DOT___4460_ 
                                                   >> 9U)) 
                                          << 0x10U)) 
                                        | (((IData)(vlSelf->top__DOT___3109_) 
                                            << 0xfU) 
                                           | ((0x6000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___4460_ 
                                                           >> 6U)) 
                                                  << 0xdU)) 
                                              | (((IData)(vlSelf->top__DOT___1920_) 
                                                  << 0xcU) 
                                                 | ((0xf00U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___4460_ 
                                                                 >> 1U)) 
                                                        << 8U)) 
                                                    | ((IData)(vlSelf->top__DOT___1435_) 
                                                       << 7U))))))))) 
                      | (0x7fU & (vlSelf->top__DOT___4117_[2U] 
                                  >> 7U)));
    __Vtemp_79[5U] = (0x7fU & ((0x7fU & ((IData)((vlSelf->top__DOT___4460_ 
                                                  >> 0xcU)) 
                                         >> 0xdU)) 
                               | ((0x7fU & ((IData)(vlSelf->top__DOT___1324_) 
                                            >> 0xeU)) 
                                  | ((0x7fU & ((IData)(vlSelf->top__DOT___3109_) 
                                               >> 0x11U)) 
                                     | ((0x7fU & ((IData)(vlSelf->top__DOT___1920_) 
                                                  >> 0x14U)) 
                                        | ((IData)(vlSelf->top__DOT___1435_) 
                                           >> 0x19U))))));
    VL_ADD_W(6, __Vtemp_80, __Vtemp_74, __Vtemp_79);
    vlSelf->top__DOT___3867_ = (((QData)((IData)((0x3ffffU 
                                                  & (__Vtemp_80[4U] 
                                                     >> 8U)))) 
                                 << 0x12U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0742_) 
                                                               << 0x11U) 
                                                              | ((0x10000U 
                                                                  & ((IData)(vlSelf->top__DOT___7011_) 
                                                                     << 0xbU)) 
                                                                 | (((IData)(vlSelf->top__DOT___0310_) 
                                                                     << 0xfU) 
                                                                    | (((IData)(vlSelf->top__DOT___0170_) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->top__DOT___0111_) 
                                                                           << 0xdU) 
                                                                          | ((0x1000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1aU)) 
                                                                                << 0xcU)) 
                                                                             | (((IData)(vlSelf->top__DOT___0037_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0603_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0868_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & (IData)(vlSelf->top__DOT___7095_)) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___7095_)) 
                                                                                | (((IData)(vlSelf->top__DOT___2405_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___7095_)) 
                                                                                | (((IData)(vlSelf->top__DOT___1122_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (IData)(vlSelf->top__DOT___7095_))))))))))))))))))));
    __Vtemp_83[1U] = (IData)((((QData)((IData)((((IData)(
                                                         (vlSelf->top__DOT___7072_ 
                                                          >> 0x16U)) 
                                                 << 0x1fU) 
                                                | ((0x7ffffc00U 
                                                    & (vlSelf->top__DOT___4048_[0U] 
                                                       << 3U)) 
                                                   | ((0x200U 
                                                       & ((IData)(vlSelf->top__DOT___7072_) 
                                                          << 9U)) 
                                                      | ((0xfeU 
                                                          & ((vlSelf->top__DOT___3829_[2U] 
                                                              << 7U) 
                                                             | (0x7eU 
                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                   >> 0x19U)))) 
                                                         | (IData)(vlSelf->top__DOT___1139_))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (0x448U 
                                                            | ((0xc0000000U 
                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                   << 7U)) 
                                                               | (((IData)(vlSelf->top__DOT___1436_) 
                                                                   << 0x1dU) 
                                                                  | ((0x1f000000U 
                                                                      & (vlSelf->top__DOT___3829_[1U] 
                                                                         << 7U)) 
                                                                     | (((IData)(vlSelf->top__DOT___2862_) 
                                                                         << 0x17U) 
                                                                        | ((0x400000U 
                                                                            & (vlSelf->top__DOT___3829_[1U] 
                                                                               << 7U)) 
                                                                           | (((IData)(vlSelf->top__DOT___3447_) 
                                                                               << 0x15U) 
                                                                              | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1208_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___3129_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___1598_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___2372_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0194_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 0xeU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 5U)) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | (IData)(vlSelf->top__DOT___0548_))))))))))))))))))))))));
    __Vtemp_83[2U] = (IData)(((((QData)((IData)((((IData)(
                                                          (vlSelf->top__DOT___7072_ 
                                                           >> 0x16U)) 
                                                  << 0x1fU) 
                                                 | ((0x7ffffc00U 
                                                     & (vlSelf->top__DOT___4048_[0U] 
                                                        << 3U)) 
                                                    | ((0x200U 
                                                        & ((IData)(vlSelf->top__DOT___7072_) 
                                                           << 9U)) 
                                                       | ((0xfeU 
                                                           & ((vlSelf->top__DOT___3829_[2U] 
                                                               << 7U) 
                                                              | (0x7eU 
                                                                 & (vlSelf->top__DOT___3829_[1U] 
                                                                    >> 0x19U)))) 
                                                          | (IData)(vlSelf->top__DOT___1139_))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0x448U 
                                                             | ((0xc0000000U 
                                                                 & (vlSelf->top__DOT___3829_[1U] 
                                                                    << 7U)) 
                                                                | (((IData)(vlSelf->top__DOT___1436_) 
                                                                    << 0x1dU) 
                                                                   | ((0x1f000000U 
                                                                       & (vlSelf->top__DOT___3829_[1U] 
                                                                          << 7U)) 
                                                                      | (((IData)(vlSelf->top__DOT___2862_) 
                                                                          << 0x17U) 
                                                                         | ((0x400000U 
                                                                             & (vlSelf->top__DOT___3829_[1U] 
                                                                                << 7U)) 
                                                                            | (((IData)(vlSelf->top__DOT___3447_) 
                                                                                << 0x15U) 
                                                                               | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3829_[1U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1208_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___3129_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___1598_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___2372_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0194_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 0xeU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 5U)) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4189_[0U] 
                                                                                >> 0x17U)) 
                                                                                | (IData)(vlSelf->top__DOT___0548_))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_86[0U] = (((0xe0000000U & vlSelf->top__DOT___4477_[0U]) 
                       | ((0x1ff00000U & ((IData)(vlSelf->top__DOT___4105_) 
                                          << 0xeU)) 
                          | ((0xffff0U & vlSelf->top__DOT___4477_[0U]) 
                             | ((8U & (vlSelf->top__DOT___7057_ 
                                       << 3U)) | (((IData)(vlSelf->top__DOT___2596_) 
                                                   << 2U) 
                                                  | ((IData)(vlSelf->top__DOT___0260_) 
                                                     << 1U)))))) 
                      | (IData)(vlSelf->top__DOT___1642_));
    __Vtemp_86[1U] = (((1U & (IData)(vlSelf->top__DOT___2342_)) 
                       | ((1U & ((IData)(vlSelf->top__DOT___2596_) 
                                 >> 0x1eU)) | ((IData)(vlSelf->top__DOT___0260_) 
                                               >> 0x1fU))) 
                      | (__Vtemp_83[1U] << 1U));
    __Vtemp_86[2U] = ((__Vtemp_83[1U] >> 0x1fU) | (
                                                   __Vtemp_83[2U] 
                                                   << 1U));
    __Vtemp_86[3U] = (((IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___0530_) 
                                                   << 0x1fU) 
                                                  | ((0x7f000000U 
                                                      & ((IData)(vlSelf->top__DOT___3839_) 
                                                         << 0x18U)) 
                                                     | (((IData)(vlSelf->top__DOT___1116_) 
                                                         << 0x17U) 
                                                        | ((0x400000U 
                                                            & (vlSelf->top__DOT___4198_ 
                                                               << 7U)) 
                                                           | ((0x200000U 
                                                               & ((IData)(vlSelf->top__DOT___7055_) 
                                                                  << 0x10U)) 
                                                              | ((0x1c0000U 
                                                                  & ((IData)(vlSelf->top__DOT___4073_) 
                                                                     << 0xfU)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(vlSelf->top__DOT___7055_) 
                                                                        << 0x10U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(vlSelf->top__DOT___7055_) 
                                                                           << 0x10U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0483_) 
                                                                           << 0xfU) 
                                                                          | (((IData)(vlSelf->top__DOT___0191_) 
                                                                              << 0xeU) 
                                                                             | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2449_)))))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0979_) 
                                                               << 0x1fU) 
                                                              | ((0x40000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3920_ 
                                                                              >> 8U)) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->top__DOT___1288_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___1710_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3859_ 
                                                                              << 1U)) 
                                                                          | ((0x4000000U 
                                                                              & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0x18U)) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0020_) 
                                                                                << 0x16U) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0982_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___3023_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x14U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3192_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___3594_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1856_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1036_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1919_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1281_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4048_[1U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0675_))))))))))))))))))))))))))))))) 
                       << 7U) | ((0x7eU & ((vlSelf->top__DOT___4048_[1U] 
                                            << 4U) 
                                           | (0xeU 
                                              & (vlSelf->top__DOT___4048_[0U] 
                                                 >> 0x1cU)))) 
                                 | (__Vtemp_83[2U] 
                                    >> 0x1fU)));
    __Vtemp_86[4U] = (((IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___0530_) 
                                                   << 0x1fU) 
                                                  | ((0x7f000000U 
                                                      & ((IData)(vlSelf->top__DOT___3839_) 
                                                         << 0x18U)) 
                                                     | (((IData)(vlSelf->top__DOT___1116_) 
                                                         << 0x17U) 
                                                        | ((0x400000U 
                                                            & (vlSelf->top__DOT___4198_ 
                                                               << 7U)) 
                                                           | ((0x200000U 
                                                               & ((IData)(vlSelf->top__DOT___7055_) 
                                                                  << 0x10U)) 
                                                              | ((0x1c0000U 
                                                                  & ((IData)(vlSelf->top__DOT___4073_) 
                                                                     << 0xfU)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(vlSelf->top__DOT___7055_) 
                                                                        << 0x10U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(vlSelf->top__DOT___7055_) 
                                                                           << 0x10U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0483_) 
                                                                           << 0xfU) 
                                                                          | (((IData)(vlSelf->top__DOT___0191_) 
                                                                              << 0xeU) 
                                                                             | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2449_)))))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0979_) 
                                                               << 0x1fU) 
                                                              | ((0x40000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3920_ 
                                                                              >> 8U)) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->top__DOT___1288_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___1710_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3859_ 
                                                                              << 1U)) 
                                                                          | ((0x4000000U 
                                                                              & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0x18U)) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0020_) 
                                                                                << 0x16U) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0982_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___3023_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x14U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3192_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___3594_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1856_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1036_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1919_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1281_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4048_[1U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0675_))))))))))))))))))))))))))))))) 
                       >> 0x19U) | ((IData)(((((QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0530_) 
                                                                 << 0x1fU) 
                                                                | ((0x7f000000U 
                                                                    & ((IData)(vlSelf->top__DOT___3839_) 
                                                                       << 0x18U)) 
                                                                   | (((IData)(vlSelf->top__DOT___1116_) 
                                                                       << 0x17U) 
                                                                      | ((0x400000U 
                                                                          & (vlSelf->top__DOT___4198_ 
                                                                             << 7U)) 
                                                                         | ((0x200000U 
                                                                             & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 0x10U)) 
                                                                            | ((0x1c0000U 
                                                                                & ((IData)(vlSelf->top__DOT___4073_) 
                                                                                << 0xfU)) 
                                                                               | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0483_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0191_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2449_)))))))))))))))))))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___0979_) 
                                                                  << 0x1fU) 
                                                                 | ((0x40000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                        << 0x1eU)) 
                                                                    | (((IData)(vlSelf->top__DOT___1288_) 
                                                                        << 0x1dU) 
                                                                       | (((IData)(vlSelf->top__DOT___1710_) 
                                                                           << 0x1cU) 
                                                                          | ((0x8000000U 
                                                                              & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                             | ((0x4000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0x18U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0020_) 
                                                                                << 0x16U) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0982_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___3023_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x14U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3192_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___3594_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1856_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1036_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1919_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1281_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4048_[1U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0675_)))))))))))))))))))))))))))))) 
                                             >> 0x20U)) 
                                    << 7U));
    __Vtemp_86[5U] = ((IData)(((((QData)((IData)((((IData)(vlSelf->top__DOT___0530_) 
                                                   << 0x1fU) 
                                                  | ((0x7f000000U 
                                                      & ((IData)(vlSelf->top__DOT___3839_) 
                                                         << 0x18U)) 
                                                     | (((IData)(vlSelf->top__DOT___1116_) 
                                                         << 0x17U) 
                                                        | ((0x400000U 
                                                            & (vlSelf->top__DOT___4198_ 
                                                               << 7U)) 
                                                           | ((0x200000U 
                                                               & ((IData)(vlSelf->top__DOT___7055_) 
                                                                  << 0x10U)) 
                                                              | ((0x1c0000U 
                                                                  & ((IData)(vlSelf->top__DOT___4073_) 
                                                                     << 0xfU)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(vlSelf->top__DOT___7055_) 
                                                                        << 0x10U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(vlSelf->top__DOT___7055_) 
                                                                           << 0x10U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0483_) 
                                                                           << 0xfU) 
                                                                          | (((IData)(vlSelf->top__DOT___0191_) 
                                                                              << 0xeU) 
                                                                             | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7211_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3988_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0529_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___2449_)))))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0979_) 
                                                               << 0x1fU) 
                                                              | ((0x40000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3920_ 
                                                                              >> 8U)) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->top__DOT___1288_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___1710_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3859_ 
                                                                              << 1U)) 
                                                                          | ((0x4000000U 
                                                                              & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0x18U)) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0020_) 
                                                                                << 0x16U) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0982_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___3023_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3951_ 
                                                                                >> 0x14U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3192_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___3594_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1856_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1036_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1919_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1281_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 6U) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4048_[1U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0675_)))))))))))))))))))))))))))))) 
                               >> 0x20U)) >> 0x19U);
    __Vtemp_87[0U] = (IData)((((QData)((IData)(((0x80000000U 
                                                 & (vlSelf->top__DOT___7084_[0U] 
                                                    << 0xbU)) 
                                                | ((0x7ffff800U 
                                                    & (vlSelf->top__DOT___4117_[0U] 
                                                       << 7U)) 
                                                   | (((IData)(vlSelf->top__DOT___0628_) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->top__DOT___0066_) 
                                                          << 9U) 
                                                         | ((0x100U 
                                                             & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                                << 7U)) 
                                                            | (((IData)(vlSelf->top__DOT___0182_) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->top__DOT___2502_) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->top__DOT___0942_) 
                                                                      << 5U) 
                                                                     | ((0x18U 
                                                                         & (vlSelf->top__DOT___4255_[1U] 
                                                                            >> 0xeU)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x2dU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & (vlSelf->top__DOT___4255_[1U] 
                                                                                >> 0xeU)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x2bU)))))))))))))))) 
                               << 0x13U) | (QData)((IData)(
                                                           ((0x7c000U 
                                                             & (vlSelf->top__DOT___4255_[1U] 
                                                                << 5U)) 
                                                            | ((0x2000U 
                                                                & (vlSelf->top__DOT___4030_ 
                                                                   >> 5U)) 
                                                               | ((0x1000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___4745_ 
                                                                               >> 0x24U)) 
                                                                      << 0xcU)) 
                                                                  | ((0xffeU 
                                                                      & (vlSelf->top__DOT___4030_ 
                                                                         >> 5U)) 
                                                                     | (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x18U)))))))))));
    __Vtemp_87[1U] = ((0xfff80000U & ((vlSelf->top__DOT___4117_[1U] 
                                       << 0x1aU) | 
                                      (0x3f80000U & 
                                       (vlSelf->top__DOT___4117_[0U] 
                                        >> 6U)))) | (IData)(
                                                            ((((QData)((IData)(
                                                                               ((0x80000000U 
                                                                                & (vlSelf->top__DOT___7084_[0U] 
                                                                                << 0xbU)) 
                                                                                | ((0x7ffff800U 
                                                                                & (vlSelf->top__DOT___4117_[0U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0628_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0066_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0182_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2502_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0942_) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___4255_[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x2dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4255_[1U] 
                                                                                >> 0xeU)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x2bU)))))))))))))))) 
                                                               << 0x13U) 
                                                              | (QData)((IData)(
                                                                                ((0x7c000U 
                                                                                & (vlSelf->top__DOT___4255_[1U] 
                                                                                << 5U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___4030_ 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x24U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xffeU 
                                                                                & (vlSelf->top__DOT___4030_ 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 0x18U)))))))))) 
                                                             >> 0x20U)));
    __Vtemp_89[0U] = ((__Vtemp_87[0U] << 0x1fU) | (
                                                   (0x40000000U 
                                                    & (vlSelf->top__DOT___4030_ 
                                                       << 0x1aU)) 
                                                   | ((0x20000000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___4745_ 
                                                                   >> 0x16U)) 
                                                          << 0x1dU)) 
                                                      | ((0x18000000U 
                                                          & (vlSelf->top__DOT___4030_ 
                                                             << 0x1aU)) 
                                                         | ((0x7e00000U 
                                                             & (vlSelf->top__DOT___4255_[0U] 
                                                                << 4U)) 
                                                            | ((0x100000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___4745_ 
                                                                            >> 0xdU)) 
                                                                   << 0x14U)) 
                                                               | ((0xf8000U 
                                                                   & (vlSelf->top__DOT___4255_[0U] 
                                                                      << 4U)) 
                                                                  | ((0x3000U 
                                                                      & (vlSelf->top__DOT___4255_[0U] 
                                                                         << 4U)) 
                                                                     | ((0x800U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___4745_ 
                                                                                >> 5U)) 
                                                                            << 0xbU)) 
                                                                        | ((0x7c0U 
                                                                            & (vlSelf->top__DOT___4255_[0U] 
                                                                               << 4U)) 
                                                                           | (((IData)(vlSelf->top__DOT___1082_) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0148_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0293_))))))))))))));
    __Vtemp_91[0U] = __Vtemp_89[0U];
    __Vtemp_91[1U] = ((__Vtemp_87[0U] >> 1U) | (__Vtemp_87[1U] 
                                                << 0x1fU));
    __Vtemp_91[2U] = ((__Vtemp_87[1U] >> 1U) | (0x80000000U 
                                                & (vlSelf->top__DOT___4117_[1U] 
                                                   << 0x19U)));
    __Vtemp_91[3U] = ((0x80000000U & (vlSelf->top__DOT___4117_[2U] 
                                      << 0x19U)) | 
                      ((0x7fffffe0U & ((IData)((vlSelf->top__DOT___4071_ 
                                                >> 7U)) 
                                       << 5U)) | (0x1fU 
                                                  & (vlSelf->top__DOT___4117_[1U] 
                                                     >> 7U))));
    __Vtemp_91[4U] = ((0xffffff80U & (((IData)((vlSelf->top__DOT___4460_ 
                                                >> 0xcU)) 
                                       << 0x13U) | 
                                      (((IData)(vlSelf->top__DOT___1324_) 
                                        << 0x12U) | 
                                       ((0x30000U & 
                                         ((IData)((vlSelf->top__DOT___4460_ 
                                                   >> 9U)) 
                                          << 0x10U)) 
                                        | (((IData)(vlSelf->top__DOT___3109_) 
                                            << 0xfU) 
                                           | ((0x6000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___4460_ 
                                                           >> 6U)) 
                                                  << 0xdU)) 
                                              | (((IData)(vlSelf->top__DOT___1920_) 
                                                  << 0xcU) 
                                                 | ((0xf00U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___4460_ 
                                                                 >> 1U)) 
                                                        << 8U)) 
                                                    | ((IData)(vlSelf->top__DOT___1435_) 
                                                       << 7U))))))))) 
                      | (0x7fU & (vlSelf->top__DOT___4117_[2U] 
                                  >> 7U)));
    __Vtemp_91[5U] = (0x7fU & ((0x7fU & ((IData)((vlSelf->top__DOT___4460_ 
                                                  >> 0xcU)) 
                                         >> 0xdU)) 
                               | ((0x7fU & ((IData)(vlSelf->top__DOT___1324_) 
                                            >> 0xeU)) 
                                  | ((0x7fU & ((IData)(vlSelf->top__DOT___3109_) 
                                               >> 0x11U)) 
                                     | ((0x7fU & ((IData)(vlSelf->top__DOT___1920_) 
                                                  >> 0x14U)) 
                                        | ((IData)(vlSelf->top__DOT___1435_) 
                                           >> 0x19U))))));
    VL_ADD_W(6, __Vtemp_92, __Vtemp_86, __Vtemp_91);
    top__DOT___0540_ = (1U & (__Vtemp_92[2U] >> 6U));
    vlSelf->top__DOT___0308_ = (1U & (~ (((IData)(vlSelf->top__DOT___7034_) 
                                          >> 5U) & (IData)(top__DOT___3114_))));
    vlSelf->top__DOT___3966_ = ((0x10000U & (vlSelf->top__DOT___7117_[0U] 
                                             >> 8U)) 
                                | (((IData)(vlSelf->top__DOT___0341_) 
                                    << 0xfU) | (((IData)(vlSelf->top__DOT___0372_) 
                                                 << 0xeU) 
                                                | ((0x2000U 
                                                    & ((IData)(vlSelf->top__DOT___7095_) 
                                                       << 6U)) 
                                                   | ((0x1000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___3867_ 
                                                                   >> 6U)) 
                                                          << 0xcU)) 
                                                      | (((IData)(vlSelf->top__DOT___2405_) 
                                                          << 0xbU) 
                                                         | ((0x400U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3867_ 
                                                                         >> 4U)) 
                                                                << 0xaU)) 
                                                            | (((IData)(vlSelf->top__DOT___1122_) 
                                                                << 9U) 
                                                               | ((0x100U 
                                                                   & ((IData)(vlSelf->top__DOT___7095_) 
                                                                      << 6U)) 
                                                                  | ((0xc0U 
                                                                      & ((IData)(vlSelf->top__DOT___3867_) 
                                                                         << 6U)) 
                                                                     | (((IData)(vlSelf->top__DOT___0348_) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->top__DOT___1303_) 
                                                                            << 4U) 
                                                                           | ((8U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___7209_ 
                                                                                >> 0x30U)) 
                                                                                << 3U)) 
                                                                              | (((IData)(vlSelf->top__DOT___1501_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1069_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1696_))))))))))))))));
    vlSelf->top__DOT____VdfgTmp_h6647c8d5__0 = ((0xcU 
                                                 & (IData)(vlSelf->top__DOT___7095_)) 
                                                | (3U 
                                                   & (IData)(vlSelf->top__DOT___3867_)));
    vlSelf->top__DOT____VdfgTmp_hfcde9399__0 = ((0x100U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___7096_ 
                                                             >> 0x1aU)) 
                                                    << 8U)) 
                                                | (((IData)(vlSelf->top__DOT___0037_) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->top__DOT___0067_) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->top__DOT___0603_) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->top__DOT___0868_) 
                                                             << 4U) 
                                                            | ((8U 
                                                                & ((IData)(vlSelf->top__DOT___7095_) 
                                                                   >> 4U)) 
                                                               | ((4U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3867_ 
                                                                               >> 6U)) 
                                                                      << 2U)) 
                                                                  | (((IData)(vlSelf->top__DOT___2405_) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___3867_ 
                                                                                >> 4U)))))))))));
    vlSelf->top__DOT___0539_ = ((IData)(top__DOT___0540_) 
                                & (~ ((IData)(vlSelf->top__DOT___7006_) 
                                      >> 4U)));
    vlSelf->top__DOT___0307_ = ((~ (IData)(vlSelf->top__DOT___0308_)) 
                                & (IData)(vlSelf->top__DOT___0309_));
    vlSelf->top__DOT____VdfgTmp_hc653a7f9__0 = (((IData)(vlSelf->top__DOT___3050_) 
                                                 << 8U) 
                                                | ((0xfeU 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4333_ 
                                                                >> 0x14U)) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->top__DOT___0308_)));
    vlSelf->top__DOT____VdfgTmp_h9e561154__0 = (((IData)(vlSelf->top__DOT___3018_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0308_));
    vlSelf->top__DOT____VdfgTmp_hb4069e2d__0 = (1U 
                                                | (((IData)(vlSelf->top__DOT___0148_) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->top__DOT___1068_) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->top__DOT___1164_) 
                                                          << 7U) 
                                                         | (((IData)(vlSelf->top__DOT___0178_) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->top__DOT___0147_) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->top__DOT___2570_) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->top__DOT___1714_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___0308_) 
                                                                         << 2U) 
                                                                        | ((IData)(vlSelf->top__DOT___0089_) 
                                                                           << 1U))))))))));
    __Vtemp_94[1U] = (((IData)((((QData)((IData)((0x7ffffffU 
                                                  & ((vlSelf->top__DOT___7117_[2U] 
                                                      << 2U) 
                                                     | (vlSelf->top__DOT___7117_[1U] 
                                                        >> 0x1eU))))) 
                                 << 0x25U) | (0x1fffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->top__DOT___4264_[2U])) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT___4264_[1U])) 
                                                     << 3U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT___4264_[0U])) 
                                                       >> 0x1dU)))))) 
                       >> 6U) | ((IData)(((((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & ((vlSelf->top__DOT___7117_[2U] 
                                                                 << 2U) 
                                                                | (vlSelf->top__DOT___7117_[1U] 
                                                                   >> 0x1eU))))) 
                                            << 0x25U) 
                                           | (0x1fffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->top__DOT___4264_[2U])) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT___4264_[1U])) 
                                                     << 3U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT___4264_[0U])) 
                                                       >> 0x1dU))))) 
                                          >> 0x20U)) 
                                 << 0x1aU));
    vlSelf->top__DOT___4459_[0U] = ((1U & vlSelf->top__DOT___4459_[0U]) 
                                    | (((IData)((((QData)((IData)(
                                                                  (0x7ffffffU 
                                                                   & ((vlSelf->top__DOT___7117_[2U] 
                                                                       << 2U) 
                                                                      | (vlSelf->top__DOT___7117_[1U] 
                                                                         >> 0x1eU))))) 
                                                  << 0x25U) 
                                                 | (0x1fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT___4264_[2U])) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->top__DOT___4264_[1U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->top__DOT___4264_[0U])) 
                                                             >> 0x1dU)))))) 
                                        << 0x1bU) | 
                                       ((0x4000000U 
                                         & (vlSelf->top__DOT___3966_ 
                                            << 0xaU)) 
                                        | ((0x3ffff80U 
                                            & (vlSelf->top__DOT___4264_[0U] 
                                               >> 2U)) 
                                           | ((0x7cU 
                                               & (vlSelf->top__DOT___7117_[0U] 
                                                  << 2U)) 
                                              | ((IData)(vlSelf->top__DOT___0683_) 
                                                 << 1U))))));
    vlSelf->top__DOT___4459_[1U] = (((1U & ((IData)(
                                                    (((QData)((IData)(
                                                                      (0x7ffffffU 
                                                                       & ((vlSelf->top__DOT___7117_[2U] 
                                                                           << 2U) 
                                                                          | (vlSelf->top__DOT___7117_[1U] 
                                                                             >> 0x1eU))))) 
                                                      << 0x25U) 
                                                     | (0x1fffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelf->top__DOT___4264_[2U])) 
                                                            << 0x23U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->top__DOT___4264_[1U])) 
                                                               << 3U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->top__DOT___4264_[0U])) 
                                                                 >> 0x1dU)))))) 
                                            >> 5U)) 
                                     | ((IData)(vlSelf->top__DOT___0683_) 
                                        >> 0x1fU)) 
                                    | (__Vtemp_94[1U] 
                                       << 1U));
    vlSelf->top__DOT___4459_[2U] = ((0x18000000U & 
                                     vlSelf->top__DOT___4459_[2U]) 
                                    | (0x1fffffffU 
                                       & ((__Vtemp_94[1U] 
                                           >> 0x1fU) 
                                          | (0x7fffffeU 
                                             & ((IData)(
                                                        ((((QData)((IData)(
                                                                           (0x7ffffffU 
                                                                            & ((vlSelf->top__DOT___7117_[2U] 
                                                                                << 2U) 
                                                                               | (vlSelf->top__DOT___7117_[1U] 
                                                                                >> 0x1eU))))) 
                                                           << 0x25U) 
                                                          | (0x1fffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4264_[2U])) 
                                                                 << 0x23U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->top__DOT___4264_[1U])) 
                                                                    << 3U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->top__DOT___4264_[0U])) 
                                                                      >> 0x1dU))))) 
                                                         >> 0x20U)) 
                                                >> 5U)))));
    vlSelf->__VdfgTmp_h3c4ede0c__0 = (((IData)(vlSelf->top__DOT___0111_) 
                                       << 0xdU) | (
                                                   ((IData)(vlSelf->top__DOT____VdfgTmp_hfcde9399__0) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h6647c8d5__0)));
    __Vtemp_95[0U] = (IData)((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT___7223_ 
                                                           >> 0xbU))))) 
                               << 0x3bU) | (((QData)((IData)(
                                                             (3U 
                                                              & (vlSelf->top__DOT___3817_[1U] 
                                                                 >> 0x19U)))) 
                                             << 0x39U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___7223_ 
                                                                            >> 8U))))) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   (0xfU 
                                                                    & (vlSelf->top__DOT___3817_[1U] 
                                                                       >> 0x14U)))) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT___7223_ 
                                                                                >> 3U))))) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & (vlSelf->top__DOT___3817_[1U] 
                                                                             >> 0xeU)))) 
                                                         << 0x2eU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->top__DOT___7228_) 
                                                                                >> 9U)))) 
                                                            << 0x2dU) 
                                                           | (((QData)((IData)(
                                                                               (3U 
                                                                                & (vlSelf->top__DOT___3817_[1U] 
                                                                                >> 0xbU)))) 
                                                               << 0x2bU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7228_) 
                                                                                >> 6U)))) 
                                                                  << 0x2aU) 
                                                                 | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___3817_[1U] 
                                                                                >> 7U)))) 
                                                                     << 0x27U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7228_) 
                                                                                >> 2U)))) 
                                                                        << 0x26U) 
                                                                       | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3817_[1U] 
                                                                                >> 4U)))) 
                                                                           << 0x24U) 
                                                                          | (((QData)((IData)(vlSelf->top__DOT___1682_)) 
                                                                              << 0x23U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3817_[1U] 
                                                                                >> 2U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3366_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((vlSelf->top__DOT___3817_[1U] 
                                                                                << 3U) 
                                                                                | (vlSelf->top__DOT___3817_[0U] 
                                                                                >> 0x1dU))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3771_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & vlSelf->top__DOT___3817_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___3553_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1601_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___1176_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___1011_) 
                                                                                << 0x16U) 
                                                                                | ((0x3c0000U 
                                                                                & vlSelf->top__DOT___3817_[0U]) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_hd7d138f3__0) 
                                                                                << 5U)) 
                                                                                | ((0x1e000U 
                                                                                & vlSelf->top__DOT___3817_[0U]) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_hd7d138f3__0) 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_hd7d138f3__0) 
                                                                                << 5U)) 
                                                                                | ((0x7e0U 
                                                                                & vlSelf->top__DOT___3817_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2037_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT___3817_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2256_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h9e561154__0)))))))))))))))))))))))))))))))))));
    __Vtemp_95[1U] = ((0xf0000000U & vlSelf->top__DOT___3817_[1U]) 
                      | (IData)(((((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT___7223_ 
                                                               >> 0xbU))))) 
                                   << 0x3bU) | (((QData)((IData)(
                                                                 (3U 
                                                                  & (vlSelf->top__DOT___3817_[1U] 
                                                                     >> 0x19U)))) 
                                                 << 0x39U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___7223_ 
                                                                                >> 8U))))) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       (0xfU 
                                                                        & (vlSelf->top__DOT___3817_[1U] 
                                                                           >> 0x14U)))) 
                                                       << 0x34U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___7223_ 
                                                                                >> 3U))))) 
                                                          << 0x33U) 
                                                         | (((QData)((IData)(
                                                                             (0x1fU 
                                                                              & (vlSelf->top__DOT___3817_[1U] 
                                                                                >> 0xeU)))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7228_) 
                                                                                >> 9U)))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3817_[1U] 
                                                                                >> 0xbU)))) 
                                                                   << 0x2bU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7228_) 
                                                                                >> 6U)))) 
                                                                      << 0x2aU) 
                                                                     | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___3817_[1U] 
                                                                                >> 7U)))) 
                                                                         << 0x27U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7228_) 
                                                                                >> 2U)))) 
                                                                            << 0x26U) 
                                                                           | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3817_[1U] 
                                                                                >> 4U)))) 
                                                                               << 0x24U) 
                                                                              | (((QData)((IData)(vlSelf->top__DOT___1682_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3817_[1U] 
                                                                                >> 2U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3366_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((vlSelf->top__DOT___3817_[1U] 
                                                                                << 3U) 
                                                                                | (vlSelf->top__DOT___3817_[0U] 
                                                                                >> 0x1dU))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3771_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & vlSelf->top__DOT___3817_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___3553_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1601_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___1176_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___1011_) 
                                                                                << 0x16U) 
                                                                                | ((0x3c0000U 
                                                                                & vlSelf->top__DOT___3817_[0U]) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_hd7d138f3__0) 
                                                                                << 5U)) 
                                                                                | ((0x1e000U 
                                                                                & vlSelf->top__DOT___3817_[0U]) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_hd7d138f3__0) 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_hd7d138f3__0) 
                                                                                << 5U)) 
                                                                                | ((0x7e0U 
                                                                                & vlSelf->top__DOT___3817_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2037_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT___3817_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2256_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h9e561154__0)))))))))))))))))))))))))))))))))) 
                                 >> 0x20U)));
    vlSelf->top__DOT____VdfgTmp_heea26351__0[0U] = 
        __Vtemp_95[0U];
    vlSelf->top__DOT____VdfgTmp_heea26351__0[1U] = 
        __Vtemp_95[1U];
    vlSelf->top__DOT____VdfgTmp_heea26351__0[2U] = 
        ((0x100U & ((IData)((vlSelf->top__DOT___7223_ 
                             >> 0x18U)) << 8U)) | (0xffU 
                                                   & vlSelf->top__DOT___3817_[2U]));
    vlSelf->top__DOT____VdfgTmp_hd117cc13__0 = (((IData)(vlSelf->top__DOT___0742_) 
                                                 << 0x11U) 
                                                | ((0x10000U 
                                                    & ((IData)(vlSelf->top__DOT___7011_) 
                                                       << 0xbU)) 
                                                   | (((IData)(vlSelf->top__DOT___0310_) 
                                                       << 0xfU) 
                                                      | (((IData)(vlSelf->top__DOT___0170_) 
                                                          << 0xeU) 
                                                         | (IData)(vlSelf->__VdfgTmp_h3c4ede0c__0)))));
}
