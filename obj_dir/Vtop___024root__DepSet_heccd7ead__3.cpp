// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__216(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__216\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_26;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)(((0xfc000000U 
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
    __Vtemp_2[1U] = (((IData)(((0x7ffffffffc00ULL & 
                                (((QData)((IData)(vlSelf->in_data[0x42U])) 
                                  << 0x26U) | (0xfffffffffffffc00ULL 
                                               & ((QData)((IData)(
                                                                  vlSelf->in_data[0x41U])) 
                                                  << 6U)))) 
                               | (QData)((IData)(((0x3e0U 
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
    __Vtemp_2[2U] = (((IData)(((0x7ffffffffc00ULL & 
                                (((QData)((IData)(vlSelf->in_data[0x42U])) 
                                  << 0x26U) | (0xfffffffffffffc00ULL 
                                               & ((QData)((IData)(
                                                                  vlSelf->in_data[0x41U])) 
                                                  << 6U)))) 
                               | (QData)((IData)(((0x3e0U 
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
                      >> 0x1eU) | ((IData)((((0x7ffffffffc00ULL 
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
    __Vtemp_3[0U] = (((IData)((0x1fffffffffffffffULL 
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
    __Vtemp_3[1U] = (((IData)((0x1fffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->in_data[0x35U])) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 vlSelf->in_data[0x34U])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->in_data[0x33U])) 
                                                   >> 0x1cU))))) 
                      >> 0xcU) | ((IData)(((0x1fffffffffffffffULL 
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
    __Vtemp_3[2U] = ((IData)(((0x1fffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->in_data[0x35U])) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 vlSelf->in_data[0x34U])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->in_data[0x33U])) 
                                                   >> 0x1cU)))) 
                              >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    __Vtemp_7[0U] = (IData)((((QData)((IData)(((0xfc000000U 
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
    __Vtemp_7[1U] = (((IData)((((QData)((IData)((0x1ffffffU 
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
    __Vtemp_7[2U] = (((IData)((((QData)((IData)((0x1ffffffU 
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
    __Vtemp_8[0U] = (((IData)((0x1ffffffffffffULL & 
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
    __Vtemp_8[1U] = (((IData)((0x1ffffffffffffULL & 
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
    __Vtemp_8[2U] = ((IData)(((0x1ffffffffffffULL & 
                               (((QData)((IData)(vlSelf->in_data[0x35U])) 
                                 << 0x24U) | (((QData)((IData)(
                                                               vlSelf->in_data[0x34U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->in_data[0x33U])) 
                                                 >> 0x1cU)))) 
                              >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    __Vtemp_11[0U] = (IData)((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT___3734_ 
                                                           >> 0xdU))))) 
                               << 0x27U) | (((QData)((IData)(
                                                             (0x1fffU 
                                                              & (IData)(vlSelf->top__DOT___3734_)))) 
                                             << 0x1aU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___1352_) 
                                                                << 0x19U) 
                                                               | ((0x1000000U 
                                                                   & ((IData)(vlSelf->top__DOT___3697_) 
                                                                      << 0xaU)) 
                                                                  | ((0x800000U 
                                                                      & ((IData)(vlSelf->top__DOT___3697_) 
                                                                         << 0xaU)) 
                                                                     | ((0x400000U 
                                                                         & ((IData)(vlSelf->top__DOT___3697_) 
                                                                            << 0xaU)) 
                                                                        | ((0x200000U 
                                                                            & ((IData)(vlSelf->top__DOT___3697_) 
                                                                               << 0xaU)) 
                                                                           | ((0x100000U 
                                                                               & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 0xaU)) 
                                                                              | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 0xaU)) 
                                                                                | ((0x7f000U 
                                                                                & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0466_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0784_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0946_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0703_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1225_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0619_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0907_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0419_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0678_)))))))))))))))))))))))));
    __Vtemp_11[1U] = (((IData)((0x7fffffffffffULL & 
                                (vlSelf->top__DOT___3734_ 
                                 >> 0xeU))) << 8U) 
                      | (IData)(((((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT___3734_ 
                                                               >> 0xdU))))) 
                                   << 0x27U) | (((QData)((IData)(
                                                                 (0x1fffU 
                                                                  & (IData)(vlSelf->top__DOT___3734_)))) 
                                                 << 0x1aU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->top__DOT___1352_) 
                                                                    << 0x19U) 
                                                                   | ((0x1000000U 
                                                                       & ((IData)(vlSelf->top__DOT___3697_) 
                                                                          << 0xaU)) 
                                                                      | ((0x800000U 
                                                                          & ((IData)(vlSelf->top__DOT___3697_) 
                                                                             << 0xaU)) 
                                                                         | ((0x400000U 
                                                                             & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 0xaU)) 
                                                                            | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 0xaU)) 
                                                                               | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 0xaU)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 0xaU)) 
                                                                                | ((0x7f000U 
                                                                                & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0466_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0784_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0946_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0703_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1225_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0619_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0907_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0419_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0678_)))))))))))))))))))))))) 
                                 >> 0x20U)));
    __Vtemp_26[3U] = ((0x7f800000U & ((IData)(vlSelf->top__DOT___2007_) 
                                      << 0x16U)) | 
                      (((IData)(vlSelf->top__DOT___1441_) 
                        << 0x16U) | ((0x3ff000U & (
                                                   (0x7c0000U 
                                                    & (__Vtemp_9[2U] 
                                                       << 0x12U)) 
                                                   | (0x3f000U 
                                                      & (__Vtemp_9[1U] 
                                                         >> 0xeU)))) 
                                     | ((0xe00U & (vlSelf->top__DOT___1972_ 
                                                   >> 0xeU)) 
                                        | (((IData)(vlSelf->top__DOT___1686_) 
                                            << 8U) 
                                           | (((IData)(vlSelf->top__DOT___0335_) 
                                               << 7U) 
                                              | (((IData)(vlSelf->top__DOT___0076_) 
                                                  << 6U) 
                                                 | ((0x38U 
                                                     & (vlSelf->top__DOT___1981_ 
                                                        >> 6U)) 
                                                    | ((4U 
                                                        & ((IData)(vlSelf->top__DOT___3775_) 
                                                           >> 5U)) 
                                                       | ((2U 
                                                           & ((IData)(vlSelf->top__DOT___3775_) 
                                                              >> 5U)) 
                                                          | (1U 
                                                             & (vlSelf->top__DOT___1981_ 
                                                                >> 6U))))))))))));
    vlSelf->top__DOT___2095_[0U] = __Vtemp_11[0U];
    vlSelf->top__DOT___2095_[1U] = __Vtemp_11[1U];
    vlSelf->top__DOT___2095_[2U] = ((0xf0000000U & 
                                     (vlSelf->top__DOT___1981_ 
                                      << 0x1aU)) | 
                                    ((0x8000000U & 
                                      ((IData)(vlSelf->top__DOT___3775_) 
                                       << 0x1bU)) | 
                                     (((IData)(vlSelf->top__DOT___0225_) 
                                       << 0x18U) | 
                                      (((IData)(vlSelf->top__DOT___0127_) 
                                        << 0x17U) | 
                                       (((IData)((0x7fffffffffffULL 
                                                  & (vlSelf->top__DOT___3734_ 
                                                     >> 0xeU))) 
                                         >> 0x18U) 
                                        | ((IData)(
                                                   ((0x7fffffffffffULL 
                                                     & (vlSelf->top__DOT___3734_ 
                                                        >> 0xeU)) 
                                                    >> 0x20U)) 
                                           << 8U))))));
    vlSelf->top__DOT___2095_[3U] = ((0x80000000U & 
                                     (__Vtemp_4[2U] 
                                      << 0x12U)) | 
                                    __Vtemp_26[3U]);
    vlSelf->top__DOT___2095_[4U] = (7U & (__Vtemp_4[2U] 
                                          >> 0xeU));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__217(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__217\n"); );
    // Body
    vlSelf->top__DOT___1123_ = (1U & (~ ((IData)(vlSelf->top__DOT___0731_) 
                                         & (IData)(vlSelf->top__DOT___1112_))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__218(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__218\n"); );
    // Body
    vlSelf->top__DOT___0859_ = (1U & (~ (((IData)(vlSelf->top__DOT___3656_) 
                                          & (IData)(vlSelf->top__DOT___1130_)) 
                                         | (IData)(vlSelf->top__DOT___0866_))));
    vlSelf->top__DOT___0858_ = ((IData)(vlSelf->top__DOT___0860_) 
                                & (IData)(vlSelf->top__DOT___0859_));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__219(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__219\n"); );
    // Body
    vlSelf->top__DOT___1303_ = (((((IData)(vlSelf->top__DOT___1968_) 
                                   << 0x13U) | (((IData)(vlSelf->top__DOT___0287_) 
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
                                 + (((0x80000000U & 
                                      vlSelf->top__DOT___2000_[0U]) 
                                     | ((0x40000000U 
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
                                                                                << 2U)))))))))))))))))) 
                                    | (((IData)(vlSelf->top__DOT___1373_) 
                                        << 1U) | (1U 
                                                  & vlSelf->top__DOT___2000_[0U])))) 
                                >> 0x1fU);
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__220(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__220\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & 
                                               ((IData)(vlSelf->top__DOT___3618_) 
                                                >> 6U)))) 
                              << 0x3bU) | (((QData)((IData)(
                                                            (7U 
                                                             & ((IData)(vlSelf->top__DOT___3618_) 
                                                                >> 3U)))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT___3618_) 
                                                                   >> 2U)))) 
                                               << 0x37U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT___3618_) 
                                                                      >> 1U)))) 
                                                  << 0x36U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___3618_)))) 
                                                     << 0x35U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0023_)) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1449_)) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___0191_)) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___1265_)) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___0589_)) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___0907_)) 
                                                                       << 0x2fU) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___0620_)) 
                                                                          << 0x2eU) 
                                                                         | (((QData)((IData)(vlSelf->top__DOT___0206_)) 
                                                                             << 0x2dU) 
                                                                            | (((QData)((IData)(vlSelf->top__DOT___0311_)) 
                                                                                << 0x2cU) 
                                                                               | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0564_)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0925_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 8U)))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1373_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0795_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0854_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___3620_) 
                                                                                << 0xaU)) 
                                                                                | ((0x30000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 0xdU)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1564_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 0xaU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___3620_) 
                                                                                << 0xaU)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 7U)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0984_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1329_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3732_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0600_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0856_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0692_)))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = ((0xf0000000U & ((IData)(vlSelf->top__DOT___2004_) 
                                     << 0x16U)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->top__DOT___3618_) 
                                                                                >> 6U)))) 
                                                             << 0x3bU) 
                                                            | (((QData)((IData)(
                                                                                (7U 
                                                                                & ((IData)(vlSelf->top__DOT___3618_) 
                                                                                >> 3U)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3618_) 
                                                                                >> 2U)))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3618_) 
                                                                                >> 1U)))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___3618_)))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___0023_)) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(vlSelf->top__DOT___1449_)) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(vlSelf->top__DOT___0191_)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1265_)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0589_)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0907_)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0620_)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0206_)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0311_)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0564_)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0925_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 8U)))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 0x1cU) 
                                                                                | ((0xc000000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1632_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1373_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0795_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0854_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___3620_) 
                                                                                << 0xaU)) 
                                                                                | ((0x30000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 0xdU)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1564_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 0xaU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___3620_) 
                                                                                << 0xaU)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1908_ 
                                                                                >> 7U)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0984_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1329_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3732_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0600_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0146_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0856_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0692_)))))))))))))))))))))))))))))))))))))))))))))) 
                                                           >> 0x20U)));
    vlSelf->top__DOT___2018_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___2018_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2018_[2U] = ((2U & ((IData)(vlSelf->top__DOT___3618_) 
                                           >> 0xbU)) 
                                    | (1U & ((IData)(vlSelf->top__DOT___2004_) 
                                             >> 0xaU)));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__221(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__221\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___0142_) 
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
    __Vtemp_2[1U] = (((IData)((0x3ffffffffULL & (vlSelf->top__DOT___1968_ 
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
    __Vtemp_2[2U] = (((IData)((0x3ffffffffULL & (vlSelf->top__DOT___1968_ 
                                                 >> 0xeU))) 
                      >> 0x1fU) | ((IData)(((0x3ffffffffULL 
                                             & (vlSelf->top__DOT___1968_ 
                                                >> 0xeU)) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp_3[0U] = (((IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___1225_) 
                                                  << 0x1fU) 
                                                 | ((0x40000000U 
                                                     & ((IData)(vlSelf->top__DOT___3820_) 
                                                        << 0x1cU)) 
                                                    | ((0x20000000U 
                                                        & ((IData)(vlSelf->top__DOT___3820_) 
                                                           << 0x1cU)) 
                                                       | ((0x10000000U 
                                                           & ((IData)(vlSelf->top__DOT___1986_) 
                                                              << 0x1bU)) 
                                                          | (((IData)(vlSelf->top__DOT___0095_) 
                                                              << 0x1bU) 
                                                             | ((0x4000000U 
                                                                 & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                                    << 0x1aU)) 
                                                                | (((IData)(vlSelf->top__DOT___0241_) 
                                                                    << 0x19U) 
                                                                   | ((0x1ff8000U 
                                                                       & (vlSelf->top__DOT___2000_[1U] 
                                                                          >> 3U)) 
                                                                      | ((0x4000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U)) 
                                                                             << 0xeU)) 
                                                                         | ((0x3800U 
                                                                             & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 3U)) 
                                                                            | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x13U)) 
                                                                                << 0xaU)) 
                                                                               | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0391_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 3U))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
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
                                                                                >> 3U))))))))))))))))))))))) 
                      << 3U) | (((IData)(vlSelf->top__DOT___1632_) 
                                 << 2U) | (((IData)(vlSelf->top__DOT___1373_) 
                                            << 1U) 
                                           | (1U & 
                                              vlSelf->top__DOT___2000_[0U]))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___1225_) 
                                                  << 0x1fU) 
                                                 | ((0x40000000U 
                                                     & ((IData)(vlSelf->top__DOT___3820_) 
                                                        << 0x1cU)) 
                                                    | ((0x20000000U 
                                                        & ((IData)(vlSelf->top__DOT___3820_) 
                                                           << 0x1cU)) 
                                                       | ((0x10000000U 
                                                           & ((IData)(vlSelf->top__DOT___1986_) 
                                                              << 0x1bU)) 
                                                          | (((IData)(vlSelf->top__DOT___0095_) 
                                                              << 0x1bU) 
                                                             | ((0x4000000U 
                                                                 & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                                    << 0x1aU)) 
                                                                | (((IData)(vlSelf->top__DOT___0241_) 
                                                                    << 0x19U) 
                                                                   | ((0x1ff8000U 
                                                                       & (vlSelf->top__DOT___2000_[1U] 
                                                                          >> 3U)) 
                                                                      | ((0x4000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U)) 
                                                                             << 0xeU)) 
                                                                         | ((0x3800U 
                                                                             & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 3U)) 
                                                                            | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x13U)) 
                                                                                << 0xaU)) 
                                                                               | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0391_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 3U))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
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
                                                                                >> 3U))))))))))))))))))))))) 
                      >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___1225_) 
                                                                << 0x1fU) 
                                                               | ((0x40000000U 
                                                                   & ((IData)(vlSelf->top__DOT___3820_) 
                                                                      << 0x1cU)) 
                                                                  | ((0x20000000U 
                                                                      & ((IData)(vlSelf->top__DOT___3820_) 
                                                                         << 0x1cU)) 
                                                                     | ((0x10000000U 
                                                                         & ((IData)(vlSelf->top__DOT___1986_) 
                                                                            << 0x1bU)) 
                                                                        | (((IData)(vlSelf->top__DOT___0095_) 
                                                                            << 0x1bU) 
                                                                           | ((0x4000000U 
                                                                               & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                                                << 0x1aU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0241_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ff8000U 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x3800U 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x13U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0391_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 3U))))))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
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
                                                                                >> 3U)))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 3U));
    __Vtemp_3[2U] = ((IData)(((((QData)((IData)((((IData)(vlSelf->top__DOT___1225_) 
                                                  << 0x1fU) 
                                                 | ((0x40000000U 
                                                     & ((IData)(vlSelf->top__DOT___3820_) 
                                                        << 0x1cU)) 
                                                    | ((0x20000000U 
                                                        & ((IData)(vlSelf->top__DOT___3820_) 
                                                           << 0x1cU)) 
                                                       | ((0x10000000U 
                                                           & ((IData)(vlSelf->top__DOT___1986_) 
                                                              << 0x1bU)) 
                                                          | (((IData)(vlSelf->top__DOT___0095_) 
                                                              << 0x1bU) 
                                                             | ((0x4000000U 
                                                                 & ((~ (IData)(vlSelf->top__DOT___0106_)) 
                                                                    << 0x1aU)) 
                                                                | (((IData)(vlSelf->top__DOT___0241_) 
                                                                    << 0x19U) 
                                                                   | ((0x1ff8000U 
                                                                       & (vlSelf->top__DOT___2000_[1U] 
                                                                          >> 3U)) 
                                                                      | ((0x4000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U)) 
                                                                             << 0xeU)) 
                                                                         | ((0x3800U 
                                                                             & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 3U)) 
                                                                            | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x13U)) 
                                                                                << 0xaU)) 
                                                                               | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0391_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 3U))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
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
                                                                                >> 3U)))))))))))))))))))))) 
                              >> 0x20U)) >> 0x1dU);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelf->top__DOT___0574_ = (1U & (__Vtemp_4[2U] 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__222(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__222\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
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
    __Vtemp_6[0U] = (IData)((((QData)((IData)((((IData)(vlSelf->top__DOT___0142_) 
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
    __Vtemp_6[1U] = __Vtemp_2[1U];
    __Vtemp_6[2U] = ((0xffffff80U & ((0xe00U & vlSelf->top__DOT___2001_[2U]) 
                                     | ((0x100U & (vlSelf->top__DOT___3637_ 
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
    __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0391_)) 
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
    __Vtemp_7[1U] = ((0xfffff000U & ((0x80000000U & 
                                      ((IData)(vlSelf->top__DOT___1986_) 
                                       << 0x1eU)) | 
                                     (((IData)(vlSelf->top__DOT___0095_) 
                                       << 0x1eU) | 
                                      ((0x20000000U 
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
                                                   | (0x3000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___3769_ 
                                                                  >> 0x12U)) 
                                                         << 0xcU)))))))))) 
                     | (IData)(((((QData)((IData)(vlSelf->top__DOT___0391_)) 
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
                                                                           & vlSelf->top__DOT___2000_[0U])))))))) 
                                >> 0x20U)));
    __Vtemp_7[2U] = (0xfffU & ((0x800U & ((IData)(vlSelf->top__DOT___0477_) 
                                          << 0xbU)) 
                               | ((0x100U & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                             << 8U)) 
                                  | ((0xf80U & ((IData)(vlSelf->top__DOT___0057_) 
                                                << 7U)) 
                                     | ((0x40U & (vlSelf->top__DOT___1951_[1U] 
                                                  << 5U)) 
                                        | ((0x20U & 
                                            ((IData)(vlSelf->top__DOT___3642_) 
                                             << 3U)) 
                                           | ((0x10U 
                                               & (vlSelf->top__DOT___1951_[0U] 
                                                  >> 0x1bU)) 
                                              | ((8U 
                                                  & ((IData)(vlSelf->top__DOT___3642_) 
                                                     << 3U)) 
                                                 | ((0xffcU 
                                                     & ((IData)(vlSelf->top__DOT___1225_) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSelf->top__DOT___3820_) 
                                                           >> 1U)) 
                                                       | ((1U 
                                                           & ((IData)(vlSelf->top__DOT___3820_) 
                                                              >> 1U)) 
                                                          | (0xfffU 
                                                             & (((IData)(vlSelf->top__DOT___0095_) 
                                                                 >> 2U) 
                                                                | ((IData)(vlSelf->top__DOT___0241_) 
                                                                   >> 4U))))))))))))));
    VL_ADD_W(3, __Vtemp_8, __Vtemp_6, __Vtemp_7);
    vlSelf->top__DOT___1817_ = (1U & (__Vtemp_8[2U] 
                                      >> 0xbU));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__223(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__223\n"); );
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
    vlSelf->top__DOT___1109_ = (1U & (__Vtemp_12[3U] 
                                      >> 0x17U));
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
    vlSelf->top__DOT___1030_ = (1U & (__Vtemp_25[3U] 
                                      >> 3U));
    vlSelf->top__DOT___0865_ = (1U & (~ (((IData)(vlSelf->top__DOT___1030_) 
                                          & (IData)(
                                                    (vlSelf->top__DOT___3628_ 
                                                     >> 0x19U))) 
                                         | (IData)(vlSelf->top__DOT___0936_))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__224(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__224\n"); );
    // Body
    vlSelf->top__DOT___2075_ = ((0x7f00U & (((0x6000U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___1988_ 
                                                          >> 0x28U)) 
                                                 << 0xdU)) 
                                             | (((IData)(vlSelf->top__DOT___1632_) 
                                                 << 0xcU) 
                                                | ((0xc00U 
                                                    & ((IData)(vlSelf->top__DOT___2027_) 
                                                       << 1U)) 
                                                   | (((IData)(vlSelf->top__DOT___0889_) 
                                                       << 9U) 
                                                      | ((0x1c0U 
                                                          & ((IData)(vlSelf->top__DOT___2027_) 
                                                             << 1U)) 
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_h8d6d6eb8__0)))))) 
                                            + ((0x7fc0U 
                                                & (vlSelf->top__DOT___2001_[2U] 
                                                   >> 0x11U)) 
                                               | (IData)(vlSelf->top__DOT____VdfgTmp_h2062fe9e__0)))) 
                                | (((IData)(vlSelf->top__DOT___0832_) 
                                    << 7U) | ((0x40U 
                                               & (((0x40U 
                                                    & ((IData)(vlSelf->top__DOT___2027_) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h8d6d6eb8__0)) 
                                                  + 
                                                  ((0x40U 
                                                    & (vlSelf->top__DOT___2001_[2U] 
                                                       >> 0x11U)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h2062fe9e__0)))) 
                                              | ((0x20U 
                                                  & ((IData)(vlSelf->top__DOT____VdfgTmp_h8d6d6eb8__0) 
                                                     + (IData)(vlSelf->top__DOT____VdfgTmp_h2062fe9e__0))) 
                                                 | (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT____VdfgTmp_h53246cde__0) 
                                                       + (IData)(vlSelf->top__DOT____VdfgTmp_h45230cc7__0)))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__225(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__225\n"); );
    // Init
    QData/*46:0*/ __VdfgTmp_h0af3345e__0;
    __VdfgTmp_h0af3345e__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_39;
    // Body
    __Vtemp_2[0U] = ((0xfc000000U & ((vlSelf->top__DOT___2121_[1U] 
                                      << 0x1eU) | (0x3c000000U 
                                                   & (vlSelf->top__DOT___2121_[0U] 
                                                      >> 2U)))) 
                     | ((0x2000000U & ((IData)((vlSelf->top__DOT___3747_ 
                                                >> 0x1bU)) 
                                       << 0x19U)) | 
                        ((0x1f00000U & (vlSelf->top__DOT___2121_[0U] 
                                        >> 2U)) | (
                                                   (0x80000U 
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
                                                                                >> 0xfU))))))))))))))));
    __Vtemp_3[0U] = ((__Vtemp_2[0U] << 2U) | (3U & 
                                              vlSelf->top__DOT___2121_[0U]));
    __Vtemp_3[1U] = ((__Vtemp_2[0U] >> 0x1eU) | ((IData)(
                                                         ((0xfffffffffffffc00ULL 
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
                                                                                >> 0x22U))))))))))) 
                                                 << 2U));
    __Vtemp_3[2U] = (((IData)(((0xfffffffffffffc00ULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x42U])) 
                                    << 0x26U) | (0xfffffffffffffc00ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->in_data[0x41U])) 
                                                    << 6U)))) 
                               | (QData)((IData)(((0x3e0U 
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
                      >> 0x1eU) | ((IData)((((0xfffffffffffffc00ULL 
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
    __Vtemp_3[3U] = ((IData)((((0xfffffffffffffc00ULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x42U])) 
                                    << 0x26U) | (0xfffffffffffffc00ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->in_data[0x41U])) 
                                                    << 6U)))) 
                               | (QData)((IData)(((0x3e0U 
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
                              >> 0x20U)) >> 0x1eU);
    __Vtemp_8[0U] = (((vlSelf->in_data[0x34U] << 0x18U) 
                      | (0xf00000U & (vlSelf->in_data[0x33U] 
                                      >> 8U))) | (((IData)(vlSelf->top__DOT___0241_) 
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
    __Vtemp_8[1U] = (((3U & (vlSelf->in_data[0x34U] 
                             >> 8U)) | ((3U & ((IData)(vlSelf->top__DOT___0241_) 
                                               >> 0x12U)) 
                                        | ((3U & ((IData)(vlSelf->top__DOT___1716_) 
                                                  >> 0x15U)) 
                                           | ((3U & 
                                               ((IData)(vlSelf->top__DOT___1365_) 
                                                >> 0x17U)) 
                                              | ((3U 
                                                  & ((IData)(vlSelf->top__DOT___0154_) 
                                                     >> 0x18U)) 
                                                 | ((3U 
                                                     & ((IData)(vlSelf->top__DOT___1716_) 
                                                        >> 0x1bU)) 
                                                    | ((3U 
                                                        & ((IData)(vlSelf->top__DOT___1365_) 
                                                           >> 0x1dU)) 
                                                       | ((IData)(vlSelf->top__DOT___0154_) 
                                                          >> 0x1eU)))))))) 
                     | ((0xffffcU & (vlSelf->in_data[0x34U] 
                                     >> 8U)) | ((vlSelf->in_data[0x35U] 
                                                 << 0x18U) 
                                                | (0xf00000U 
                                                   & (vlSelf->in_data[0x34U] 
                                                      >> 8U)))));
    __Vtemp_8[2U] = ((3U & (vlSelf->in_data[0x35U] 
                            >> 8U)) | ((0xffffcU & 
                                        (vlSelf->in_data[0x35U] 
                                         >> 8U)) | 
                                       (0xfff00000U 
                                        & ((vlSelf->in_data[0x36U] 
                                            << 0x18U) 
                                           | (0xf00000U 
                                              & (vlSelf->in_data[0x35U] 
                                                 >> 8U))))));
    __Vtemp_8[3U] = (3U & (vlSelf->in_data[0x36U] >> 8U));
    VL_ADD_W(4, __Vtemp_9, __Vtemp_3, __Vtemp_8);
    __Vtemp_12[0U] = (IData)((((QData)((IData)(((0xfc000000U 
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
    __Vtemp_12[1U] = (((IData)(((0xffffffffffffc00ULL 
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
    __Vtemp_12[2U] = (((IData)(((0xffffffffffffc00ULL 
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
                       >> 0x1eU) | ((IData)((((0xffffffffffffc00ULL 
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
    __Vtemp_16[0U] = (((vlSelf->in_data[0x34U] << 0x18U) 
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
    __Vtemp_16[1U] = ((0xfffffU & (vlSelf->in_data[0x34U] 
                                   >> 8U)) | ((vlSelf->in_data[0x35U] 
                                               << 0x18U) 
                                              | (0xf00000U 
                                                 & (vlSelf->in_data[0x34U] 
                                                    >> 8U))));
    __Vtemp_16[2U] = ((0xfffffU & (vlSelf->in_data[0x35U] 
                                   >> 8U)) | (0x3ff00000U 
                                              & ((vlSelf->in_data[0x36U] 
                                                  << 0x18U) 
                                                 | (0xf00000U 
                                                    & (vlSelf->in_data[0x35U] 
                                                       >> 8U)))));
    VL_ADD_W(3, __Vtemp_17, __Vtemp_12, __Vtemp_16);
    __Vtemp_20[0U] = (IData)((((QData)((IData)(((0xfc000000U 
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
    __Vtemp_20[1U] = (((IData)((((QData)((IData)((0x1ffffffU 
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
    __Vtemp_20[2U] = (((IData)((((QData)((IData)((0x1ffffffU 
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
    __Vtemp_21[0U] = (((IData)((0x1ffffffffffffULL 
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
    __Vtemp_21[1U] = (((IData)((0x1ffffffffffffULL 
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
    __Vtemp_21[2U] = ((IData)(((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU)))) 
                               >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_22, __Vtemp_20, __Vtemp_21);
    __Vtemp_25[0U] = (IData)((((QData)((IData)(((0xfc000000U 
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
    __Vtemp_25[1U] = (((IData)((((QData)((IData)((0x1ffffffU 
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
    __Vtemp_25[2U] = (((IData)((((QData)((IData)((0x1ffffffU 
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
    __Vtemp_26[0U] = (((IData)((0x1ffffffffffffULL 
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
    __Vtemp_26[1U] = (((IData)((0x1ffffffffffffULL 
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
    __Vtemp_26[2U] = ((IData)(((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU)))) 
                               >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_27, __Vtemp_25, __Vtemp_26);
    __Vtemp_30[0U] = (IData)((((QData)((IData)(((0xfc000000U 
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
    __Vtemp_30[1U] = (((IData)((((QData)((IData)((0x1ffffffU 
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
    __Vtemp_30[2U] = (((IData)((((QData)((IData)((0x1ffffffU 
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
    __Vtemp_31[0U] = (((IData)((0x1ffffffffffffULL 
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
    __Vtemp_31[1U] = (((IData)((0x1ffffffffffffULL 
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
    __Vtemp_31[2U] = ((IData)(((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU)))) 
                               >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_32, __Vtemp_30, __Vtemp_31);
    __Vtemp_35[0U] = (IData)((((QData)((IData)(((0xfc000000U 
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
    __Vtemp_35[1U] = (((IData)((((QData)((IData)((0x1ffffffU 
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
    __Vtemp_35[2U] = (((IData)((((QData)((IData)((0x1ffffffU 
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
    __Vtemp_36[0U] = (((IData)((0x1ffffffffffffULL 
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
    __Vtemp_36[1U] = (((IData)((0x1ffffffffffffULL 
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
    __Vtemp_36[2U] = ((IData)(((0x1ffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[0x35U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->in_data[0x34U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->in_data[0x33U])) 
                                                    >> 0x1cU)))) 
                               >> 0x20U)) >> 0xcU);
    VL_ADD_W(3, __Vtemp_37, __Vtemp_35, __Vtemp_36);
    __Vtemp_39[0U] = (IData)((((QData)((IData)((0xfU 
                                                & (vlSelf->top__DOT___1972_ 
                                                   >> 0x16U)))) 
                               << 0x36U) | (((QData)((IData)(vlSelf->top__DOT___1687_)) 
                                             << 0x35U) 
                                            | (((QData)((IData)(
                                                                (0x3ffU 
                                                                 & (vlSelf->top__DOT___1972_ 
                                                                    >> 0xbU)))) 
                                                << 0x2bU) 
                                               | (((QData)((IData)(
                                                                   (0x7fffU 
                                                                    & ((__Vtemp_22[1U] 
                                                                        << 4U) 
                                                                       | (__Vtemp_22[0U] 
                                                                          >> 0x1cU))))) 
                                                   << 0x1cU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___1666_) 
                                                                      << 0x1bU) 
                                                                     | ((0x7ff8000U 
                                                                         & __Vtemp_27[0U]) 
                                                                        | (((IData)(vlSelf->top__DOT___0262_) 
                                                                            << 0xeU) 
                                                                           | ((0x3000U 
                                                                               & __Vtemp_32[0U]) 
                                                                              | (((IData)(vlSelf->top__DOT___1604_) 
                                                                                << 0xbU) 
                                                                                | ((0x7c0U 
                                                                                & __Vtemp_37[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (((0x1cU 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xdU)) 
                                                                                | (3U 
                                                                                & vlSelf->top__DOT___2121_[0U])) 
                                                                                + 
                                                                                ((0x10U 
                                                                                & vlSelf->top__DOT___1996_) 
                                                                                | (((IData)(vlSelf->top__DOT___1365_) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U)))))))))))))))))));
    __Vtemp_39[1U] = ((0xfc000000U & (vlSelf->top__DOT___2095_[3U] 
                                      << 0xeU)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (0xfU 
                                                                              & (vlSelf->top__DOT___1972_ 
                                                                                >> 0x16U)))) 
                                                             << 0x36U) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___1687_)) 
                                                                << 0x35U) 
                                                               | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->top__DOT___1972_ 
                                                                                >> 0xbU)))) 
                                                                   << 0x2bU) 
                                                                  | (((QData)((IData)(
                                                                                (0x7fffU 
                                                                                & ((__Vtemp_22[1U] 
                                                                                << 4U) 
                                                                                | (__Vtemp_22[0U] 
                                                                                >> 0x1cU))))) 
                                                                      << 0x1cU) 
                                                                     | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1666_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7ff8000U 
                                                                                & __Vtemp_27[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0262_) 
                                                                                << 0xeU) 
                                                                                | ((0x3000U 
                                                                                & __Vtemp_32[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1604_) 
                                                                                << 0xbU) 
                                                                                | ((0x7c0U 
                                                                                & __Vtemp_37[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (((0x1cU 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xdU)) 
                                                                                | (3U 
                                                                                & vlSelf->top__DOT___2121_[0U])) 
                                                                                + 
                                                                                ((0x10U 
                                                                                & vlSelf->top__DOT___1996_) 
                                                                                | (((IData)(vlSelf->top__DOT___1365_) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U)))))))))))))))))) 
                                                           >> 0x20U)));
    vlSelf->top__DOT___2112_[0U] = __Vtemp_39[0U];
    vlSelf->top__DOT___2112_[1U] = __Vtemp_39[1U];
    vlSelf->top__DOT___2112_[2U] = ((0x80000000U & 
                                     __Vtemp_9[2U]) 
                                    | (((IData)(vlSelf->top__DOT___1803_) 
                                        << 0x1eU) | 
                                       ((0x3ffe0000U 
                                         & __Vtemp_17[2U]) 
                                        | ((0x1e000U 
                                            & ((vlSelf->top__DOT___2095_[4U] 
                                                << 0xeU) 
                                               | (0x2000U 
                                                  & (vlSelf->top__DOT___2095_[3U] 
                                                     >> 0x12U)))) 
                                           | ((0x1fe0U 
                                               & ((IData)(vlSelf->top__DOT___2007_) 
                                                  << 4U)) 
                                              | (((IData)(vlSelf->top__DOT___1441_) 
                                                  << 4U) 
                                                 | (0xfU 
                                                    & (vlSelf->top__DOT___2095_[3U] 
                                                       >> 0x12U))))))));
    vlSelf->top__DOT___2112_[3U] = (3U & __Vtemp_9[3U]);
    __VdfgTmp_h0af3345e__0 = (((QData)((IData)((((IData)(vlSelf->top__DOT___1441_) 
                                                 << 0xeU) 
                                                | ((0x3ff0U 
                                                    & (vlSelf->top__DOT___2095_[3U] 
                                                       >> 8U)) 
                                                   | (0xfU 
                                                      & (vlSelf->top__DOT___1972_ 
                                                         >> 0x16U)))))) 
                               << 0x20U) | (QData)((IData)(
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
                                                                           >> 0x16U)))))))));
    vlSelf->top__DOT____VdfgTmp_hb9b8ffe0__0 = (((IData)(vlSelf->top__DOT___1666_) 
                                                 << 3U) 
                                                | ((6U 
                                                    & (vlSelf->top__DOT___2112_[0U] 
                                                       >> 0x18U)) 
                                                   | (IData)(vlSelf->top__DOT___0058_)));
    vlSelf->top__DOT___2010_ = ((0xeU & ((4U | (((IData)(vlSelf->top__DOT___0334_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___0408_) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT___3747_ 
                                                                 >> 0x14U)))))) 
                                         + ((0xcU & 
                                             (vlSelf->top__DOT___2112_[1U] 
                                              >> 7U)) 
                                            | (((IData)(vlSelf->top__DOT___0206_) 
                                                << 1U) 
                                               | (IData)(vlSelf->top__DOT___0311_))))) 
                                | (IData)(vlSelf->top__DOT___0240_));
    vlSelf->top__DOT___0996_ = (1U & (((0x84U | (((IData)(vlSelf->top__DOT___0438_) 
                                                  << 8U) 
                                                 | (((IData)(vlSelf->top__DOT___0134_) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->top__DOT___0893_) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->top__DOT___0095_) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT___0334_) 
                                                              << 3U) 
                                                             | (((IData)(vlSelf->top__DOT___0408_) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___3747_ 
                                                                              >> 0x14U)))))))))) 
                                       + ((0x1f0U & 
                                           (vlSelf->top__DOT___1972_ 
                                            >> 7U)) 
                                          | ((0xcU 
                                              & (vlSelf->top__DOT___2112_[1U] 
                                                 >> 7U)) 
                                             | (((IData)(vlSelf->top__DOT___0206_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0311_))))) 
                                      >> 8U));
    vlSelf->top__DOT____VdfgTmp_h8b760261__0 = (((QData)((IData)(
                                                                 (0xffU 
                                                                  & ((IData)(vlSelf->top__DOT___2007_) 
                                                                     >> 1U)))) 
                                                 << 0x2fU) 
                                                | __VdfgTmp_h0af3345e__0);
    vlSelf->top__DOT____VdfgTmp_hdf764016__0 = (((QData)((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_hb9b8ffe0__0))))))))));
    vlSelf->top__DOT___0249_ = (1U & (~ ((((IData)(vlSelf->top__DOT___3638_) 
                                           >> 5U) & (IData)(vlSelf->top__DOT___0000_)) 
                                         | (IData)(vlSelf->top__DOT___0996_))));
    vlSelf->top__DOT___1250_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (3U 
                                                                     & ((vlSelf->top__DOT___2095_[4U] 
                                                                         << 1U) 
                                                                        | (vlSelf->top__DOT___2095_[3U] 
                                                                           >> 0x1fU))))) 
                                                    << 0x35U) 
                                                   | vlSelf->top__DOT____VdfgTmp_hdf764016__0) 
                                                  + vlSelf->top__DOT____VdfgTmp_h8b760261__0) 
                                                 >> 0x36U))));
    vlSelf->top__DOT____VdfgTmp_h078e94ca__0 = (1U 
                                                & (IData)(
                                                          (1ULL 
                                                           & (((((QData)((IData)(
                                                                                (vlSelf->top__DOT___2095_[3U] 
                                                                                >> 0x1fU))) 
                                                                 << 0x35U) 
                                                                | vlSelf->top__DOT____VdfgTmp_hdf764016__0) 
                                                               + 
                                                               (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelf->top__DOT___2007_) 
                                                                                >> 1U)))) 
                                                                 << 0x2fU) 
                                                                | __VdfgTmp_h0af3345e__0)) 
                                                              >> 0x35U))));
    vlSelf->top__DOT___1177_ = (1U & (~ (((IData)(vlSelf->top__DOT___0249_) 
                                          & (IData)(vlSelf->top__DOT___0343_)) 
                                         | (IData)(vlSelf->top__DOT___0443_))));
    vlSelf->top__DOT___0247_ = ((IData)(vlSelf->top__DOT___0249_) 
                                & (~ ((IData)(vlSelf->top__DOT___3823_) 
                                      >> 4U)));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__226(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__226\n"); );
    // Body
    vlSelf->top__DOT___1898_ = (((QData)((IData)(vlSelf->top__DOT___0405_)) 
                                 << 0x35U) | (((QData)((IData)(vlSelf->top__DOT___0922_)) 
                                               << 0x34U) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0062_)) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___1036_)) 
                                                     << 0x32U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0381_)) 
                                                        << 0x31U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___0289_)) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___0636_)) 
                                                              << 0x2fU) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___0565_)) 
                                                                 << 0x2eU) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___0398_)) 
                                                                    << 0x2dU) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___0680_)) 
                                                                       << 0x2cU) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___0884_)) 
                                                                          << 0x2bU) 
                                                                         | (((QData)((IData)(vlSelf->top__DOT___0526_)) 
                                                                             << 0x2aU) 
                                                                            | (((QData)((IData)(vlSelf->top__DOT___0599_)) 
                                                                                << 0x29U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3650_ 
                                                                                >> 0xaU))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0858_)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSelf->top__DOT___3682_ 
                                                                                >> 7U)))) 
                                                                                << 0x17U) 
                                                                                | (QData)((IData)(
                                                                                ((0x400000U 
                                                                                & (vlSelf->top__DOT___3682_ 
                                                                                << 0x10U)) 
                                                                                | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___3682_ 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3682_ 
                                                                                << 0x10U)) 
                                                                                | (IData)(vlSelf->top__DOT___3765_))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__227(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__227\n"); );
    // Body
    vlSelf->top__DOT___1098_ = (1U & (~ ((((IData)(vlSelf->top__DOT___3741_) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->top__DOT___0578_)) 
                                         | ((IData)(vlSelf->top__DOT___0041_) 
                                            ^ (IData)(vlSelf->top__DOT___1817_)))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__228(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__228\n"); );
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
    VlWide<3>/*95:0*/ __Vtemp_66;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_70;
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
    __Vtemp_66[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1030_)) 
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
    __Vtemp_66[1U] = ((0xf0000000U & (vlSelf->top__DOT___1999_[3U] 
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
    __Vtemp_66[2U] = ((0x10000U & (vlSelf->top__DOT___1999_[3U] 
                                   >> 8U)) | (((IData)(vlSelf->top__DOT___1109_) 
                                               << 0xfU) 
                                              | (0x7fffU 
                                                 & (vlSelf->top__DOT___1999_[3U] 
                                                    >> 8U))));
    __Vtemp_67[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___3668_[0U] 
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
    __Vtemp_67[1U] = (((IData)((0x1ffffffffULL & (((QData)((IData)(
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
    __Vtemp_67[2U] = (((IData)((0x1ffffffffULL & (((QData)((IData)(
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
    VL_ADD_W(3, __Vtemp_68, __Vtemp_66, __Vtemp_67);
    __Vtemp_70[0U] = (((IData)((0x7fffffffffffffULL 
                                & (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & __Vtemp_68[2U]))) 
                                    << 0x26U) | (((QData)((IData)(
                                                                  __Vtemp_68[1U])) 
                                                  << 6U) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp_68[0U])) 
                                                    >> 0x1aU))))) 
                       << 0x1aU) | ((0x2000000U & (
                                                   ((vlSelf->top__DOT___1999_[2U] 
                                                     << 0x18U) 
                                                    | (vlSelf->top__DOT___1999_[1U] 
                                                       >> 8U)) 
                                                   + 
                                                   ((0x2000000U 
                                                     & vlSelf->top__DOT___2038_[0U]) 
                                                    | vlSelf->top__DOT____VdfgTmp_he6287f76__0))) 
                                    | ((0x1e00000U 
                                        & (((vlSelf->top__DOT___1999_[2U] 
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
                                                + (
                                                   (0xff800U 
                                                    & vlSelf->top__DOT___2038_[0U]) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h8491c9fc__0))))))));
    vlSelf->top__DOT___2037_[0U] = __Vtemp_70[0U];
    vlSelf->top__DOT___2037_[1U] = (((IData)((0x7fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & __Vtemp_68[2U]))) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(
                                                                     __Vtemp_68[1U])) 
                                                     << 6U) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_68[0U])) 
                                                       >> 0x1aU))))) 
                                     >> 6U) | ((IData)(
                                                       ((0x7fffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             (0x1ffffU 
                                                                              & __Vtemp_68[2U]))) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(
                                                                                __Vtemp_68[1U])) 
                                                                << 6U) 
                                                               | ((QData)((IData)(
                                                                                __Vtemp_68[0U])) 
                                                                  >> 0x1aU)))) 
                                                        >> 0x20U)) 
                                               << 0x1aU));
    vlSelf->top__DOT___2037_[2U] = ((IData)(((0x7fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & __Vtemp_68[2U]))) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(
                                                                     __Vtemp_68[1U])) 
                                                     << 6U) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_68[0U])) 
                                                       >> 0x1aU)))) 
                                             >> 0x20U)) 
                                    >> 6U);
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__229(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__229\n"); );
    // Body
    vlSelf->top__DOT___0280_ = (1U & (((((IData)(vlSelf->top__DOT___0865_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___0354_) 
                                                    << 1U) 
                                                   | (1U 
                                                      & vlSelf->out_data[0x3cU]))) 
                                       + (((IData)(vlSelf->top__DOT___0651_) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT___0241_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0905_)))) 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__230(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__230\n"); );
    // Body
    vlSelf->top__DOT___1253_ = (1U & ((((0x3ff0U & 
                                         ((vlSelf->top__DOT___2112_[1U] 
                                           << 8U) | 
                                          (0xf0U & 
                                           (vlSelf->top__DOT___2112_[0U] 
                                            >> 0x18U)))) 
                                        | (((IData)(vlSelf->top__DOT___1666_) 
                                            << 3U) 
                                           | ((6U & 
                                               (vlSelf->top__DOT___2112_[0U] 
                                                >> 0x18U)) 
                                              | (IData)(vlSelf->top__DOT___0058_)))) 
                                       + ((0x3fc0U 
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
                                      >> 0xdU));
    vlSelf->top__DOT___1210_ = (1U & ((((0x3f0U & (
                                                   (vlSelf->top__DOT___2112_[1U] 
                                                    << 8U) 
                                                   | (0xf0U 
                                                      & (vlSelf->top__DOT___2112_[0U] 
                                                         >> 0x18U)))) 
                                        | (((IData)(vlSelf->top__DOT___1666_) 
                                            << 3U) 
                                           | ((6U & 
                                               (vlSelf->top__DOT___2112_[0U] 
                                                >> 0x18U)) 
                                              | (IData)(vlSelf->top__DOT___0058_)))) 
                                       + ((0x3c0U & 
                                           (vlSelf->top__DOT___2112_[0U] 
                                            >> 0x16U)) 
                                          | (((IData)(vlSelf->top__DOT___1666_) 
                                              << 5U) 
                                             | (0x1fU 
                                                & (vlSelf->top__DOT___2112_[0U] 
                                                   >> 0x16U))))) 
                                      >> 9U));
    vlSelf->top__DOT___1682_ = (1U & ((((0x1f0U & (
                                                   (vlSelf->top__DOT___2112_[1U] 
                                                    << 8U) 
                                                   | (0xf0U 
                                                      & (vlSelf->top__DOT___2112_[0U] 
                                                         >> 0x18U)))) 
                                        | (((IData)(vlSelf->top__DOT___1666_) 
                                            << 3U) 
                                           | ((6U & 
                                               (vlSelf->top__DOT___2112_[0U] 
                                                >> 0x18U)) 
                                              | (IData)(vlSelf->top__DOT___0058_)))) 
                                       + ((0x1c0U & 
                                           (vlSelf->top__DOT___2112_[0U] 
                                            >> 0x16U)) 
                                          | (((IData)(vlSelf->top__DOT___1666_) 
                                              << 5U) 
                                             | (0x1fU 
                                                & (vlSelf->top__DOT___2112_[0U] 
                                                   >> 0x16U))))) 
                                      >> 8U));
    vlSelf->top__DOT___0504_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0x3fU 
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
                                                                    ((0x78000U 
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
                                                 >> 0x32U))));
    vlSelf->top__DOT___1597_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0x1fU 
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
                                                                    ((0x38000U 
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
                                                 >> 0x31U))));
    vlSelf->top__DOT___0684_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0xfU 
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
                                                                    ((0x18000U 
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
                                                 >> 0x30U))));
    vlSelf->top__DOT___0307_ = ((IData)(vlSelf->top__DOT___0684_) 
                                & (IData)(vlSelf->top__DOT___0683_));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__231(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__231\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
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
    vlSelf->top__DOT____VdfgTmp_ha9176dab__0 = (((IData)(vlSelf->top__DOT___1527_) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->top__DOT___0084_) 
                                                    << 6U) 
                                                   | ((0x3cU 
                                                       & ((IData)(vlSelf->top__DOT___3749_) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->top__DOT____VdfgTmp_h8da83138__0))));
    vlSelf->top__DOT___0542_ = ((~ (((IData)(vlSelf->top__DOT___0043_) 
                                     & (IData)(vlSelf->top__DOT___0922_)) 
                                    | (IData)(vlSelf->top__DOT___0921_))) 
                                & ((IData)(vlSelf->top__DOT___1869_) 
                                   ^ ((IData)(vlSelf->top__DOT___1089_) 
                                      ^ (IData)(vlSelf->top__DOT___1799_))));
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
