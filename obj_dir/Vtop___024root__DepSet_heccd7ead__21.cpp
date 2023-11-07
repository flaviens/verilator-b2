// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__121(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__121\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->top__DOT___2993_ = (1U & ((((0x7eU & (vlSelf->top__DOT___4248_[2U] 
                                                  >> 2U)) 
                                        | (IData)(vlSelf->top__DOT___0858_)) 
                                       + ((0x7eU & 
                                           (vlSelf->top__DOT___4081_ 
                                            >> 6U)) 
                                          | (IData)(vlSelf->top__DOT___0204_))) 
                                      >> 6U));
    vlSelf->top__DOT___2820_ = (1U & ((((0xeU & (vlSelf->top__DOT___4248_[2U] 
                                                 >> 2U)) 
                                        | (IData)(vlSelf->top__DOT___0858_)) 
                                       + ((0xeU & (vlSelf->top__DOT___4081_ 
                                                   >> 6U)) 
                                          | (IData)(vlSelf->top__DOT___0204_))) 
                                      >> 3U));
    vlSelf->top__DOT___3625_ = (1U & ((((0x7fffeU & 
                                         (vlSelf->top__DOT___4248_[2U] 
                                          >> 2U)) | (IData)(vlSelf->top__DOT___0858_)) 
                                       + (((IData)(vlSelf->top__DOT___1609_) 
                                           << 0x12U) 
                                          | (((IData)(vlSelf->top__DOT___0340_) 
                                              << 0x11U) 
                                             | ((0x1f000U 
                                                 & (vlSelf->top__DOT___4081_ 
                                                    >> 6U)) 
                                                | (((IData)(vlSelf->top__DOT___0986_) 
                                                    << 0xbU) 
                                                   | ((0x7feU 
                                                       & (vlSelf->top__DOT___4081_ 
                                                          >> 6U)) 
                                                      | (IData)(vlSelf->top__DOT___0204_))))))) 
                                      >> 0x12U));
    vlSelf->top__DOT___3726_ = (1U & ((((0x7feU & (
                                                   vlSelf->top__DOT___4248_[2U] 
                                                   >> 2U)) 
                                        | (IData)(vlSelf->top__DOT___0858_)) 
                                       + ((0x7feU & 
                                           (vlSelf->top__DOT___4081_ 
                                            >> 6U)) 
                                          | (IData)(vlSelf->top__DOT___0204_))) 
                                      >> 0xaU));
    vlSelf->top__DOT___0841_ = (1U & ((((0xffeU & (
                                                   vlSelf->top__DOT___4248_[2U] 
                                                   >> 2U)) 
                                        | (IData)(vlSelf->top__DOT___0858_)) 
                                       + (((IData)(vlSelf->top__DOT___0986_) 
                                           << 0xbU) 
                                          | ((0x7feU 
                                              & (vlSelf->top__DOT___4081_ 
                                                 >> 6U)) 
                                             | (IData)(vlSelf->top__DOT___0204_)))) 
                                      >> 0xbU));
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
    vlSelf->top__DOT___2597_ = ((IData)(vlSelf->top__DOT___3726_) 
                                ^ (IData)(vlSelf->top__DOT___1192_));
    vlSelf->top__DOT___0840_ = ((IData)(vlSelf->top__DOT___0841_) 
                                & (~ (IData)(vlSelf->top__DOT___0764_)));
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
    vlSelf->top__DOT___3187_ = (1U & (((IData)(0x25U) 
                                       + (((IData)(vlSelf->top__DOT___0191_) 
                                           << 5U) | 
                                          (((IData)(vlSelf->top__DOT___0880_) 
                                            << 4U) 
                                           | (IData)(vlSelf->top__DOT____VdfgTmp_h627e5219__0)))) 
                                      >> 5U));
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

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__123(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__123\n"); );
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

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__124(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__124\n"); );
    // Body
    vlSelf->top__DOT___1810_ = (1U & (~ (((IData)(vlSelf->top__DOT___0102_) 
                                          & (IData)(vlSelf->top__DOT___2460_)) 
                                         | (IData)(vlSelf->top__DOT___1598_))));
    vlSelf->top__DOT___0800_ = ((IData)(vlSelf->top__DOT___1599_) 
                                & (IData)(vlSelf->top__DOT___1598_));
    vlSelf->top__DOT___0929_ = (((IData)((vlSelf->top__DOT___7059_ 
                                          >> 9U)) & (IData)(vlSelf->top__DOT___1810_)) 
                                | ((IData)(vlSelf->top__DOT___1688_) 
                                   & (IData)(vlSelf->top__DOT___0876_)));
    vlSelf->top__DOT___0896_ = (1U & (~ (((IData)(vlSelf->top__DOT___1810_) 
                                          & (IData)(vlSelf->top__DOT___1366_)) 
                                         | ((IData)(vlSelf->top__DOT___0451_) 
                                            & (IData)(vlSelf->top__DOT___0948_)))));
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
    vlSelf->top__DOT___2389_ = (1U & (~ (((~ (((IData)(vlSelf->top__DOT___0599_) 
                                               & ((~ (IData)(vlSelf->top__DOT___0563_)) 
                                                  & (IData)(vlSelf->top__DOT___0564_))) 
                                              | ((IData)(vlSelf->top__DOT___1070_) 
                                                 & ((IData)(vlSelf->top__DOT___7085_) 
                                                    >> 0xcU)))) 
                                          & ((IData)(vlSelf->top__DOT___0854_) 
                                             | (IData)(vlSelf->top__DOT___1696_))) 
                                         | (IData)(vlSelf->top__DOT___1817_))));
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
    vlSelf->top__DOT___2363_ = (1U & (~ (((IData)(vlSelf->top__DOT___2681_) 
                                          & (vlSelf->top__DOT___7141_ 
                                             >> 0x16U)) 
                                         | ((IData)(vlSelf->top__DOT___1959_) 
                                            & (vlSelf->top__DOT___7222_ 
                                               >> 0x10U)))));
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
    vlSelf->out_data[0U] = ((0xfffffffeU & vlSelf->out_data[0U]) 
                            | ((~ (IData)(vlSelf->top__DOT___0976_)) 
                               & (IData)(vlSelf->top__DOT___0977_)));
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
    vlSelf->top__DOT___0245_ = (1U & (~ (((IData)(vlSelf->top__DOT___0352_) 
                                          & (IData)(vlSelf->top__DOT___2167_)) 
                                         | (IData)(vlSelf->top__DOT___0976_))));
    vlSelf->top__DOT___2049_ = (1U & (~ (((IData)(vlSelf->top__DOT___0976_) 
                                          & ((IData)(vlSelf->top__DOT___6981_) 
                                             >> 6U)) 
                                         | (IData)(vlSelf->top__DOT___4741_))));
    vlSelf->top__DOT___0958_ = (1U & (~ (((IData)(vlSelf->top__DOT___0791_) 
                                          & (IData)(vlSelf->top__DOT___0878_)) 
                                         | (IData)(vlSelf->top__DOT___0976_))));
    vlSelf->top__DOT___4433_[2U] = ((0xfffffff3U & 
                                     vlSelf->top__DOT___4433_[2U]) 
                                    | (0xfffffffcU 
                                       & (((IData)(vlSelf->top__DOT___1070_) 
                                           << 3U) | 
                                          ((IData)(vlSelf->top__DOT___2212_) 
                                           << 2U))));
    vlSelf->top__DOT___4679_ = ((1ULL & vlSelf->top__DOT___4679_) 
                                | ((0x1fffffffffcULL 
                                    & (vlSelf->top__DOT___7090_ 
                                       << 1U)) | ((QData)((IData)(vlSelf->top__DOT___0958_)) 
                                                  << 1U)));
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

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__137(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__137\n"); );
    // Body
    vlSelf->top__DOT___4071_ = ((0x1fffffff0ULL & vlSelf->top__DOT___4071_) 
                                | (IData)((IData)((
                                                   ((IData)(vlSelf->top__DOT___1541_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0720_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0311_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0735_)))))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__139(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__139\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_10;
    // Body
    vlSelf->top__DOT___2624_ = (1U & (~ (((IData)(vlSelf->top__DOT___2541_) 
                                          & (IData)(vlSelf->top__DOT___1955_)) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT___6971_ 
                                                     >> 4U)) 
                                            & (IData)(vlSelf->top__DOT___0116_)))));
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
    vlSelf->top__DOT___1146_ = (1U & (~ (((IData)(vlSelf->top__DOT___1906_) 
                                          & (IData)(vlSelf->top__DOT___0526_)) 
                                         | (((IData)(vlSelf->top__DOT___7150_) 
                                             >> 5U) 
                                            & (IData)(vlSelf->top__DOT___0638_)))));
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
    vlSelf->top__DOT___2487_ = (1U & (~ (((IData)(vlSelf->top__DOT___1146_) 
                                          & (IData)(vlSelf->top__DOT___1851_)) 
                                         | (IData)(vlSelf->top__DOT___0910_))));
    vlSelf->top__DOT____VdfgTmp_h8de2cd09__0 = ((((IData)(vlSelf->top__DOT___0735_) 
                                                  & (IData)(vlSelf->top__DOT___0637_)) 
                                                 << 2U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h50ad6309__0));
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
    vlSelf->top__DOT___1909_ = (1U & (((IData)(vlSelf->top__DOT___7086_) 
                                       >> 5U) ^ (IData)(vlSelf->top__DOT___0077_)));
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
    vlSelf->top__DOT____VdfgTmp_h60070cb3__0 = ((IData)(vlSelf->top__DOT___2487_) 
                                                | ((IData)(vlSelf->top__DOT___2487_) 
                                                   ^ (IData)(vlSelf->top__DOT___1012_)));
    vlSelf->top__DOT___1636_ = (1U & (~ ((((IData)(vlSelf->top__DOT___7100_) 
                                           >> 9U) & (IData)(vlSelf->top__DOT___0440_)) 
                                         | ((IData)(vlSelf->top__DOT___1452_) 
                                            & (IData)(vlSelf->top__DOT___1668_)))));
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
    vlSelf->top__DOT___1253_ = ((IData)(vlSelf->top__DOT____VdfgTmp_h60070cb3__0) 
                                & (IData)(vlSelf->top__DOT___1254_));
    vlSelf->top__DOT___1960_ = (1U & (~ (((IData)(vlSelf->top__DOT___0880_) 
                                          & (IData)(vlSelf->top__DOT___1636_)) 
                                         | (IData)(vlSelf->top__DOT___0485_))));
    vlSelf->top__DOT___4389_[0U] = ((0xfffffff7U & 
                                     vlSelf->top__DOT___4389_[0U]) 
                                    | ((IData)(vlSelf->top__DOT___1636_) 
                                       << 3U));
    __Vtemp_6[0U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_6[1U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_6[2U] = ((IData)(((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_7[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0552_)) 
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
    __Vtemp_7[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0552_)) 
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
    __Vtemp_7[2U] = ((IData)(((((QData)((IData)(vlSelf->top__DOT___0552_)) 
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
    VL_ADD_W(3, __Vtemp_8, __Vtemp_6, __Vtemp_7);
    __Vtemp_10[0U] = (IData)((((QData)((IData)(((0xfffff800U 
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
    __Vtemp_10[1U] = ((0xf0000000U & __Vtemp_8[1U]) 
                      | (IData)(((((QData)((IData)(
                                                   ((0xfffff800U 
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
    vlSelf->top__DOT___4280_[0U] = __Vtemp_10[0U];
    vlSelf->top__DOT___4280_[1U] = __Vtemp_10[1U];
    vlSelf->top__DOT___4280_[2U] = (0xfU & __Vtemp_8[2U]);
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__145(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__145\n"); );
    // Body
    vlSelf->top__DOT___0125_ = ((IData)(vlSelf->top__DOT___1541_) 
                                | (IData)(vlSelf->top__DOT___2597_));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__146(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__146\n"); );
    // Body
    vlSelf->top__DOT___4058_ = ((0x1fU & vlSelf->top__DOT___4058_) 
                                | ((0xffff000U & ((
                                                   (0x40U 
                                                    | ((((IData)(vlSelf->top__DOT___1188_) 
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
                                                                                << 4U))))))))))))))))))) 
                                                       | ((8U 
                                                           & ((IData)(vlSelf->top__DOT___4738_) 
                                                              << 3U)) 
                                                          | (((IData)(vlSelf->top__DOT___2596_) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->top__DOT___2054_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___0300_)))))) 
                                                   + 
                                                   ((((IData)(vlSelf->top__DOT___1463_) 
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
                                                                                << 5U)))))))))))))))))) 
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
                                                  << 2U)) 
                                   | (((IData)(vlSelf->top__DOT___0010_) 
                                       << 0xbU) | (
                                                   ((IData)(vlSelf->top__DOT___1040_) 
                                                    << 0xaU) 
                                                   | ((0x200U 
                                                       & ((IData)(vlSelf->top__DOT___7149_) 
                                                          << 7U)) 
                                                      | ((0x100U 
                                                          & ((IData)(vlSelf->top__DOT___7149_) 
                                                             << 7U)) 
                                                         | ((0x80U 
                                                             & ((IData)(vlSelf->top__DOT___7149_) 
                                                                << 7U)) 
                                                            | (((IData)(vlSelf->top__DOT___0170_) 
                                                                << 6U) 
                                                               | ((IData)(vlSelf->top__DOT___1205_) 
                                                                  << 5U)))))))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__150(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__150\n"); );
    // Body
    vlSelf->top__DOT___4014_ = ((0xffffff0U & ((IData)(
                                                       (vlSelf->top__DOT___7209_ 
                                                        >> 2U)) 
                                               << 4U)) 
                                | (((IData)(vlSelf->top__DOT___0958_) 
                                    << 3U) | (((IData)(vlSelf->top__DOT___2340_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___3330_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___2288_)))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__151(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__151\n"); );
    // Body
    vlSelf->top__DOT___0108_ = (1U & (~ (((IData)(vlSelf->top__DOT___0958_) 
                                          & (IData)(vlSelf->top__DOT___0322_)) 
                                         | (IData)(vlSelf->top__DOT___0041_))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__168(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__168\n"); );
    // Body
    vlSelf->top__DOT___0558_ = ((IData)(vlSelf->top__DOT___0986_) 
                                & (~ (IData)(vlSelf->top__DOT___0077_)));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__182(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__182\n"); );
    // Body
    vlSelf->top__DOT___2076_ = (1U & (~ (((IData)(vlSelf->top__DOT___2951_) 
                                          & (IData)(vlSelf->top__DOT___1955_)) 
                                         | ((IData)(vlSelf->top__DOT___3118_) 
                                            & (IData)(vlSelf->top__DOT___2699_)))));
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
    vlSelf->top__DOT___1050_ = (1U & (~ (((IData)(vlSelf->top__DOT___2951_) 
                                          & (IData)(vlSelf->top__DOT___0102_)) 
                                         | ((IData)(vlSelf->top__DOT___0963_) 
                                            & (IData)(vlSelf->top__DOT___0445_)))));
    vlSelf->top__DOT___3533_ = ((IData)(vlSelf->top__DOT___0582_) 
                                | (IData)(vlSelf->top__DOT___1050_));
    vlSelf->top__DOT___1049_ = ((IData)(vlSelf->top__DOT___1050_) 
                                & (~ (IData)(vlSelf->top__DOT___0560_)));
    vlSelf->top__DOT___1432_ = (1U & (~ ((IData)(vlSelf->top__DOT___2129_) 
                                         | ((IData)(vlSelf->top__DOT___1050_) 
                                            & (IData)(vlSelf->top__DOT___1442_)))));
    vlSelf->top__DOT___1509_ = (1U & (~ (((IData)(vlSelf->top__DOT___0493_) 
                                          & (IData)(vlSelf->top__DOT___0699_)) 
                                         | ((IData)(vlSelf->top__DOT___1050_) 
                                            & (IData)(vlSelf->top__DOT___0227_)))));
    vlSelf->top__DOT___1176_ = ((IData)(vlSelf->top__DOT___1813_) 
                                & (IData)(vlSelf->top__DOT___1049_));
    vlSelf->top__DOT___1231_ = (1U & ((IData)(vlSelf->top__DOT___0195_) 
                                      + (IData)(vlSelf->top__DOT___1509_)));
    vlSelf->top__DOT___2574_ = (1U & (~ (((IData)(vlSelf->top__DOT___0195_) 
                                          & (IData)(vlSelf->top__DOT___1011_)) 
                                         | (IData)(vlSelf->top__DOT___1176_))));
    vlSelf->top__DOT___4253_ = ((0x1fcU & (IData)(vlSelf->top__DOT___4253_)) 
                                | (((IData)(vlSelf->top__DOT___1857_) 
                                    << 1U) | (IData)(vlSelf->top__DOT___1176_)));
    vlSelf->top__DOT___1230_ = ((IData)(vlSelf->top__DOT___1231_) 
                                & (IData)(vlSelf->top__DOT___1232_));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__194(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__194\n"); );
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

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__203(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__203\n"); );
    // Body
    vlSelf->top__DOT___2448_ = (1U & (~ (((IData)(vlSelf->top__DOT___1435_) 
                                          & (IData)(vlSelf->top__DOT___1509_)) 
                                         | (IData)(vlSelf->top__DOT___0226_))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__213(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__213\n"); );
    // Body
    vlSelf->top__DOT___3690_ = (1U & ((((0x18U & (vlSelf->top__DOT___4014_ 
                                                  >> 6U)) 
                                        | (((IData)(vlSelf->top__DOT___0081_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___2615_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___3244_)))) 
                                       + ((0x10U & 
                                           ((IData)(vlSelf->top__DOT___7150_) 
                                            << 2U)) 
                                          | ((8U & 
                                              ((IData)(vlSelf->top__DOT___7150_) 
                                               << 2U)) 
                                             | ((4U 
                                                 & ((IData)(vlSelf->top__DOT___7150_) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->top__DOT___1865_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0577_)))))) 
                                      >> 4U));
    vlSelf->top__DOT___4033_ = (((QData)((IData)((0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___7209_ 
                                                             >> 0x1eU))))) 
                                 << 0x1aU) | (QData)((IData)(
                                                             ((0x2000000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___7209_ 
                                                                           >> 0x1dU)) 
                                                                  << 0x19U)) 
                                                              | ((0x1c00000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___7209_ 
                                                                              >> 0x1aU)) 
                                                                     << 0x16U)) 
                                                                 | ((0x3ffff8U 
                                                                     & (vlSelf->top__DOT___4014_ 
                                                                        >> 6U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0081_) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelf->top__DOT___2615_) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->top__DOT___3244_)))))))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__217(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__217\n"); );
    // Init
    CData/*0:0*/ top__DOT___3549_;
    top__DOT___3549_ = 0;
    CData/*2:0*/ top__DOT____VdfgTmp_h237a5df2__0;
    top__DOT____VdfgTmp_h237a5df2__0 = 0;
    // Body
    vlSelf->top__DOT___3814_ = (((QData)((IData)((0x1ffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___6995_ 
                                                             >> 0x1bU))))) 
                                 << 0x37U) | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___6995_ 
                                                                           >> 0x1aU))))) 
                                               << 0x36U) 
                                              | (((QData)((IData)(
                                                                  (0xfU 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___6995_ 
                                                                              >> 0x16U))))) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___6995_ 
                                                                                >> 0x15U))))) 
                                                     << 0x31U) 
                                                    | (((QData)((IData)(
                                                                        (0xfU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___6995_ 
                                                                                >> 0x11U))))) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___6995_ 
                                                                                >> 0x10U))))) 
                                                           << 0x2cU) 
                                                          | (((QData)((IData)(
                                                                              (7U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT___6995_ 
                                                                                >> 0xdU))))) 
                                                              << 0x29U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6995_ 
                                                                                >> 0xcU))))) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6995_ 
                                                                                >> 4U))))) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___6995_ 
                                                                                >> 3U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6995_ 
                                                                                >> 2U)) 
                                                                                << 0x1eU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1109_) 
                                                                                << 0x1dU) 
                                                                                | ((0x10000000U 
                                                                                & (((((IData)(vlSelf->top__DOT___0126_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2323_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0265_))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0323_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2232_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0012_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___1140_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___1844_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0643_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___3575_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0195_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & ((((0x400U 
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
                                                                                | (IData)(vlSelf->top__DOT___0304_))))))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0874_) 
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
                                                                                | (IData)(vlSelf->top__DOT___0534_))))))))) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3689_) 
                                                                                << 0x13U) 
                                                                                | ((0x7c000U 
                                                                                & ((((0x1c0U 
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
                                                                                | (IData)(vlSelf->top__DOT___0304_))))))) 
                                                                                + 
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
                                                                                | (IData)(vlSelf->top__DOT___0534_))))))) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2091_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___3242_) 
                                                                                << 0xcU) 
                                                                                | ((0xc00U 
                                                                                & (((((IData)(vlSelf->top__DOT___0330_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0304_)) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0534_))) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1490_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1038_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0527_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0391_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1637_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0360_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2527_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2422_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0592_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0183_))))))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT___4615_ = (((QData)((IData)((3U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___6995_ 
                                                             >> 0x24U))))) 
                                 << 0x24U) | (((QData)((IData)(
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3814_ 
                                                                           >> 0x37U))))) 
                                               << 0x1bU) 
                                              | (QData)((IData)(
                                                                ((0x4000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___6995_ 
                                                                              >> 0x1aU)) 
                                                                     << 0x1aU)) 
                                                                 | ((0x3c00000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x32U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___6995_ 
                                                                                >> 0x15U)) 
                                                                           << 0x15U)) 
                                                                       | ((0x1e0000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x2dU)) 
                                                                              << 0x11U)) 
                                                                          | ((0x10000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___6995_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                             | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x29U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6995_ 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0xff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x20U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6995_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x1eU)) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->top__DOT___6995_))))))))))))))));
    top__DOT____VdfgTmp_h237a5df2__0 = (((IData)(vlSelf->top__DOT___3242_) 
                                         << 2U) | (3U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT___3814_ 
                                                              >> 0xaU))));
    top__DOT___3549_ = (1U & ((((0x80U & ((IData)(vlSelf->top__DOT___6992_) 
                                          << 3U)) | 
                                ((0x40U & ((IData)(vlSelf->top__DOT___6992_) 
                                           << 3U)) 
                                 | ((0x20U & ((IData)(vlSelf->top__DOT___6992_) 
                                              << 3U)) 
                                    | ((0x10U & ((IData)(vlSelf->top__DOT___6992_) 
                                                 << 3U)) 
                                       | ((8U & ((IData)(vlSelf->top__DOT___6992_) 
                                                 << 3U)) 
                                          | (((IData)(vlSelf->top__DOT___0829_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0381_) 
                                                 << 1U) 
                                                | (1U 
                                                   & (~ (IData)(vlSelf->top__DOT___0195_)))))))))) 
                               + ((0xf0U & ((IData)(
                                                    (vlSelf->top__DOT___3814_ 
                                                     >> 0xeU)) 
                                            << 4U)) 
                                  | (((IData)(vlSelf->top__DOT___2091_) 
                                      << 3U) | (((IData)(vlSelf->top__DOT___3242_) 
                                                 << 2U) 
                                                | (3U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT___3814_ 
                                                              >> 0xaU))))))) 
                              >> 7U));
    vlSelf->top__DOT___1306_ = (1U & ((((8U & ((IData)(vlSelf->top__DOT___6992_) 
                                               << 3U)) 
                                        | (((IData)(vlSelf->top__DOT___0829_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0381_) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelf->top__DOT___0195_)))))) 
                                       + (((IData)(vlSelf->top__DOT___2091_) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT___3242_) 
                                            << 2U) 
                                           | (3U & (IData)(
                                                           (vlSelf->top__DOT___3814_ 
                                                            >> 0xaU)))))) 
                                      >> 3U));
    vlSelf->top__DOT____VdfgTmp_hc7042f23__0 = (((IData)(vlSelf->top__DOT___2091_) 
                                                 << 3U) 
                                                | (IData)(top__DOT____VdfgTmp_h237a5df2__0));
    vlSelf->top__DOT___0531_ = ((IData)(vlSelf->top__DOT___1639_) 
                                | (IData)(top__DOT___3549_));
    vlSelf->top__DOT___1930_ = (1U & ((IData)(vlSelf->top__DOT___1306_) 
                                      ^ (vlSelf->top__DOT___4749_[3U] 
                                         >> 4U)));
    vlSelf->top__DOT____VdfgTmp_h985380d7__0 = (3U 
                                                & ((((0x78U 
                                                      & ((IData)(vlSelf->top__DOT___6992_) 
                                                         << 3U)) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_he717392f__0)) 
                                                    + 
                                                    ((0x70U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___3814_ 
                                                                  >> 0xeU)) 
                                                         << 4U)) 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_hc7042f23__0))) 
                                                   >> 5U));
    vlSelf->top__DOT___4216_ = ((0x1fff87ffffULL & vlSelf->top__DOT___4216_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___1596_) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT___0531_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___1560_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0067_)))))) 
                                   << 0x13U));
    vlSelf->top__DOT___4343_[1U] = ((0xefffffffU & 
                                     vlSelf->top__DOT___4343_[1U]) 
                                    | ((IData)(vlSelf->top__DOT___1930_) 
                                       << 0x1cU));
    vlSelf->top__DOT____VdfgTmp_hee599229__0 = (((IData)(vlSelf->top__DOT____VdfgTmp_h985380d7__0) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1854_));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__221(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__221\n"); );
    // Body
    vlSelf->top__DOT___2567_ = (1U & (~ (((IData)(vlSelf->top__DOT___1317_) 
                                          & (IData)(vlSelf->top__DOT___0531_)) 
                                         | (IData)(vlSelf->top__DOT___1774_))));
    vlSelf->top__DOT___0928_ = ((IData)(vlSelf->top__DOT___2087_) 
                                ^ (IData)(vlSelf->top__DOT___2567_));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__233(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__233\n"); );
    // Body
    vlSelf->top__DOT___1914_ = (1U & (((0x40U | ((((IData)(vlSelf->top__DOT___1111_) 
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
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | (0x30U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 4U)) 
                                                                                << 4U)))))))))))))))))))))))) 
                                                 | ((8U 
                                                     & ((IData)(vlSelf->top__DOT___4738_) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelf->top__DOT___2596_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___2054_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0300_)))))) 
                                       + (((0x60000000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___4090_ 
                                                        >> 0xaU)) 
                                               << 0x1dU)) 
                                           | (((IData)(vlSelf->top__DOT___0520_) 
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
                                                                                << 5U))))))))))))))))))))) 
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
                                      >> 0x1eU));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__237(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__237\n"); );
    // Body
    vlSelf->top__DOT___4099_ = (((QData)((IData)((0x3fU 
                                                  & (IData)(
                                                            (0x3fULL 
                                                             & (((((QData)((IData)(vlSelf->top__DOT___2920_)) 
                                                                   << 0x24U) 
                                                                  | (((QData)((IData)(
                                                                                (4U 
                                                                                | (((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 0x1dU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2449_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___1111_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___1693_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2449_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0979_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1288_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0087_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1820_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2563_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 8U)) 
                                                                                << 4U)) 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 4U)))))))))))))))))))))))))))))))) 
                                                                      << 4U) 
                                                                     | (QData)((IData)(
                                                                                ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___4738_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2054_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0300_)))))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4090_ 
                                                                                >> 0xaU)) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0520_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0295_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1463_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0985_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3603_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2640_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1113_) 
                                                                                << 0xbU) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1782_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3272_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3413_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->top__DOT___2465_))))))))))))))))))))))) 
                                                                   << 5U) 
                                                                  | (QData)((IData)(
                                                                                ((0x10U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2876_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0381_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1309_))))))))) 
                                                                >> 0x1fU)))))) 
                                 << 0x1fU) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1914_) 
                                                               << 0x1eU) 
                                                              | ((0x20000000U 
                                                                  & ((0x40U 
                                                                      | ((((IData)(vlSelf->top__DOT___1693_) 
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
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | (0x30U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 4U)) 
                                                                                << 4U))))))))))))))))))))))) 
                                                                         | ((8U 
                                                                             & ((IData)(vlSelf->top__DOT___4738_) 
                                                                                << 3U)) 
                                                                            | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->top__DOT___2054_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0300_)))))) 
                                                                     + 
                                                                     (((0x20000000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___4090_ 
                                                                                >> 0xaU)) 
                                                                           << 0x1dU)) 
                                                                       | (((IData)(vlSelf->top__DOT___0520_) 
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
                                                                                << 5U))))))))))))))))))))) 
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
                                                                                | (IData)(vlSelf->top__DOT___1309_)))))))) 
                                                                 | (((IData)(vlSelf->top__DOT___3574_) 
                                                                     << 0x1cU) 
                                                                    | ((0xc000000U 
                                                                        & ((0x40U 
                                                                            | ((((IData)(vlSelf->top__DOT___0023_) 
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
                                                                                << 4U))))))))))))))))))))) 
                                                                               | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___4738_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2054_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0300_)))))) 
                                                                           + 
                                                                           ((((IData)(vlSelf->top__DOT___0520_) 
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
                                                                                | (IData)(vlSelf->top__DOT___1309_)))))))) 
                                                                       | ((0x3fffc00U 
                                                                           & (vlSelf->top__DOT___4058_ 
                                                                              >> 2U)) 
                                                                          | ((0x380U 
                                                                              & ((0x40U 
                                                                                | ((((IData)(vlSelf->top__DOT___2563_) 
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
                                                                                << 4U)))) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___4738_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2054_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0300_)))))) 
                                                                                + 
                                                                                (((0x200U 
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
                                                                                << 5U))))) 
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
                                                                                | (IData)(vlSelf->top__DOT___1309_)))))))) 
                                                                             | (((IData)(vlSelf->top__DOT___1455_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & (((0x30U 
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
                                                                                | (IData)(vlSelf->top__DOT___0300_))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___2465_) 
                                                                                << 5U) 
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
                                                                                | (IData)(vlSelf->top__DOT___1309_))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__269(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__269\n"); );
    // Init
    CData/*0:0*/ top__DOT___1035_;
    top__DOT___1035_ = 0;
    // Body
    vlSelf->top__DOT___4407_ = ((0xfULL & vlSelf->top__DOT___4407_) 
                                | (((QData)((IData)(
                                                    (0x3fU 
                                                     & (vlSelf->top__DOT___3824_[1U] 
                                                        >> 0x18U)))) 
                                    << 0x2fU) | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___7089_ 
                                                                              >> 0x15U))))) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     (7U 
                                                                      & (vlSelf->top__DOT___3824_[1U] 
                                                                         >> 0x14U)))) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___7089_ 
                                                                                >> 0x11U))))) 
                                                        << 0x2aU) 
                                                       | (((QData)((IData)(
                                                                           (3U 
                                                                            & (vlSelf->top__DOT___3824_[1U] 
                                                                               >> 0x11U)))) 
                                                           << 0x28U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT___7089_ 
                                                                                >> 0xeU))))) 
                                                              << 0x27U) 
                                                             | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3824_[1U] 
                                                                                >> 0xeU)))) 
                                                                 << 0x25U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7089_ 
                                                                                >> 0xbU))))) 
                                                                    << 0x24U) 
                                                                   | ((QData)((IData)(
                                                                                ((0xfe000000U 
                                                                                & (vlSelf->top__DOT___3824_[1U] 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0370_) 
                                                                                << 0x18U) 
                                                                                | vlSelf->top__DOT___7018_)))) 
                                                                      << 4U))))))))));
    vlSelf->top__DOT____VdfgTmp_h7fca931d__0 = ((0x80000U 
                                                 & (((0xffe00U 
                                                      & (vlSelf->top__DOT___3885_ 
                                                         << 2U)) 
                                                     | (((IData)(vlSelf->top__DOT____VdfgTmp_h13af565f__0) 
                                                         << 6U) 
                                                        | (IData)(vlSelf->top__DOT____VdfgTmp_hc785c9fb__0))) 
                                                    + 
                                                    ((0xc0000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___4509_ 
                                                                  >> 0x12U)) 
                                                         << 0x12U)) 
                                                     | vlSelf->top__DOT____VdfgTmp_h9213fb00__0))) 
                                                | ((0x7ff00U 
                                                    & ((vlSelf->top__DOT___3824_[3U] 
                                                        << 9U) 
                                                       | (0x100U 
                                                          & (vlSelf->top__DOT___3824_[2U] 
                                                             >> 0x17U)))) 
                                                   | (0xffU 
                                                      & (((0xc0U 
                                                           & (vlSelf->top__DOT___3885_ 
                                                              << 2U)) 
                                                          | (IData)(vlSelf->top__DOT____VdfgTmp_hc785c9fb__0)) 
                                                         + 
                                                         ((0x80U 
                                                           & ((IData)(vlSelf->top__DOT___4214_) 
                                                              << 3U)) 
                                                          | (IData)(vlSelf->top__DOT____VdfgTmp_ha007d041__0))))));
    vlSelf->top__DOT___2862_ = (1U & ((((0xcU & (vlSelf->top__DOT___3824_[1U] 
                                                 >> 6U)) 
                                        | (((IData)(vlSelf->top__DOT___0866_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0186_))) 
                                       + (((IData)(vlSelf->top__DOT___0779_) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT___1692_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0293_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0441_))))) 
                                      >> 3U));
    vlSelf->top__DOT___1139_ = (1U & ((((0x1800U & 
                                         (vlSelf->top__DOT___3824_[1U] 
                                          >> 6U)) | 
                                        ((0x400U & 
                                          ((IData)(
                                                   (vlSelf->top__DOT___7089_ 
                                                    >> 0xeU)) 
                                           << 0xaU)) 
                                         | ((0x300U 
                                             & (vlSelf->top__DOT___3824_[1U] 
                                                >> 6U)) 
                                            | ((0x80U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___7089_ 
                                                            >> 0xbU)) 
                                                   << 7U)) 
                                               | ((0x7cU 
                                                   & (vlSelf->top__DOT___3824_[1U] 
                                                      >> 6U)) 
                                                  | (((IData)(vlSelf->top__DOT___0866_) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT___0186_))))))) 
                                       + ((0x1ff0U 
                                           & vlSelf->top__DOT___4261_) 
                                          | (((IData)(vlSelf->top__DOT___0779_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___1692_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0293_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0441_)))))) 
                                      >> 0xcU));
    top__DOT___1035_ = (1U & ((((8U & ((IData)((vlSelf->top__DOT___7089_ 
                                                >> 0x11U)) 
                                       << 3U)) | ((6U 
                                                   & (vlSelf->top__DOT___3824_[1U] 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT___7089_ 
                                                                >> 0xeU))))) 
                               + (((IData)(vlSelf->top__DOT___0483_) 
                                   << 3U) | (IData)(vlSelf->top__DOT___6966_))) 
                              >> 3U));
    vlSelf->top__DOT___1436_ = (1U & ((((0x300U & (
                                                   vlSelf->top__DOT___3824_[1U] 
                                                   >> 6U)) 
                                        | ((0x80U & 
                                            ((IData)(
                                                     (vlSelf->top__DOT___7089_ 
                                                      >> 0xbU)) 
                                             << 7U)) 
                                           | ((0x7cU 
                                               & (vlSelf->top__DOT___3824_[1U] 
                                                  >> 6U)) 
                                              | (((IData)(vlSelf->top__DOT___0866_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0186_))))) 
                                       + ((0x3f0U & vlSelf->top__DOT___4261_) 
                                          | (((IData)(vlSelf->top__DOT___0779_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___1692_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0293_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0441_)))))) 
                                      >> 9U));
    vlSelf->top__DOT____VdfgTmp_h64ba03aa__0 = ((0x2000000U 
                                                 & (vlSelf->top__DOT____VdfgTmp_h76d6b53b__0 
                                                    + 
                                                    ((0x3fc0000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___4509_ 
                                                                  >> 0x12U)) 
                                                         << 0x12U)) 
                                                     | vlSelf->top__DOT____VdfgTmp_h9213fb00__0))) 
                                                | ((0x1f00000U 
                                                    & vlSelf->top__DOT____VdfgTmp_h8679a1ce__0) 
                                                   | vlSelf->top__DOT____VdfgTmp_h7fca931d__0));
    vlSelf->top__DOT___0630_ = ((IData)(vlSelf->top__DOT___0439_) 
                                & (~ (IData)(top__DOT___1035_)));
    vlSelf->top__DOT___2220_ = (1U & (((((IData)(vlSelf->top__DOT___1071_) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->top__DOT___0290_) 
                                          << 9U) | 
                                         (((IData)(vlSelf->top__DOT___0293_) 
                                           << 8U) | 
                                          (((IData)(vlSelf->top__DOT___0195_) 
                                            << 7U) 
                                           | (((IData)(vlSelf->top__DOT___0445_) 
                                               << 6U) 
                                              | (((IData)(vlSelf->top__DOT___1910_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___0582_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___0077_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___1436_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0585_))))))))))) 
                                       + ((0x400U & 
                                           (vlSelf->top__DOT___3900_[0U] 
                                            >> 3U)) 
                                          | (((IData)(vlSelf->top__DOT___1782_) 
                                              << 9U) 
                                             | (((IData)(vlSelf->top__DOT___3272_) 
                                                 << 8U) 
                                                | ((0x80U 
                                                    & (vlSelf->top__DOT___3900_[0U] 
                                                       >> 3U)) 
                                                   | (((IData)(vlSelf->top__DOT___3413_) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->top__DOT___2501_) 
                                                          << 5U) 
                                                         | ((0x10U 
                                                             & (vlSelf->top__DOT___3900_[0U] 
                                                                >> 3U)) 
                                                            | (((IData)(vlSelf->top__DOT___2465_) 
                                                                << 3U) 
                                                               | ((4U 
                                                                   & (vlSelf->top__DOT___3900_[0U] 
                                                                      >> 3U)) 
                                                                  | (((IData)(vlSelf->top__DOT___2876_) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        & (vlSelf->top__DOT___3900_[0U] 
                                                                           >> 3U))))))))))))) 
                                      >> 0xaU));
    vlSelf->top__DOT___2013_ = (1U & (~ ((IData)(vlSelf->top__DOT___2014_) 
                                         | (~ (IData)(vlSelf->top__DOT___1436_)))));
    vlSelf->top__DOT___4094_ = ((0x3fffc3U & vlSelf->top__DOT___4094_) 
                                | (((IData)(vlSelf->top__DOT___1436_) 
                                    << 5U) | (((IData)(vlSelf->top__DOT___0629_) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT___0216_) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->top__DOT___1312_) 
                                                    << 2U)))));
    vlSelf->top__DOT___0777_ = ((IData)(vlSelf->top__DOT___1796_) 
                                & (IData)(vlSelf->top__DOT___1436_));
    vlSelf->top__DOT___3121_ = (1U & (((((IData)(vlSelf->top__DOT___0077_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0830_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___1436_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0585_)))) 
                                       + (((IData)(vlSelf->top__DOT___2465_) 
                                           << 3U) | 
                                          ((4U & (vlSelf->top__DOT___3900_[0U] 
                                                  >> 3U)) 
                                           | (((IData)(vlSelf->top__DOT___2876_) 
                                               << 1U) 
                                              | (1U 
                                                 & (vlSelf->top__DOT___3900_[0U] 
                                                    >> 3U)))))) 
                                      >> 3U));
    vlSelf->top__DOT___0463_ = (1U & ((IData)(vlSelf->top__DOT___7181_) 
                                      & (~ (((IData)(vlSelf->top__DOT___0992_) 
                                             & (~ (IData)(vlSelf->top__DOT___1436_))) 
                                            | (IData)(vlSelf->top__DOT___0372_)))));
    vlSelf->top__DOT___1339_ = (1U & ((IData)(vlSelf->top__DOT___2460_) 
                                      | (~ (IData)(vlSelf->top__DOT___1436_))));
    vlSelf->top__DOT___0796_ = ((IData)(vlSelf->top__DOT___1436_) 
                                | (IData)(vlSelf->top__DOT___2359_));
    vlSelf->top__DOT___3829_[2U] = ((0xfffU & vlSelf->top__DOT___3829_[2U]) 
                                    | (0xfffff000U 
                                       & ((0xffffe000U 
                                           & vlSelf->top__DOT___7148_[0U]) 
                                          | ((IData)(vlSelf->top__DOT___0630_) 
                                             << 0xcU))));
    vlSelf->top__DOT___3829_[3U] = (0xfU & ((0xfU & 
                                             vlSelf->top__DOT___7148_[1U]) 
                                            | ((IData)(vlSelf->top__DOT___0630_) 
                                               >> 0x14U)));
    vlSelf->top__DOT___0825_ = ((IData)(vlSelf->top__DOT___0630_) 
                                & (vlSelf->top__DOT___7154_[0U] 
                                   >> 0xbU));
    vlSelf->top__DOT___2250_ = (1U & (~ (((IData)(vlSelf->top__DOT___1954_) 
                                          & ((~ (IData)(vlSelf->top__DOT___0206_)) 
                                             & (IData)(vlSelf->top__DOT___0207_))) 
                                         | ((IData)(vlSelf->top__DOT___2013_) 
                                            & (IData)(vlSelf->top__DOT___1672_)))));
    vlSelf->top__DOT___4233_[0U] = ((0xfffffff8U & 
                                     vlSelf->top__DOT___4233_[0U]) 
                                    | (((IData)(vlSelf->top__DOT___2013_) 
                                        << 2U) | (IData)(vlSelf->top__DOT___0880_)));
    vlSelf->top__DOT___4325_ = ((0x7ffffffffffULL & vlSelf->top__DOT___4325_) 
                                | ((QData)((IData)(
                                                   ((0xffc00U 
                                                     & (vlSelf->top__DOT___7112_ 
                                                        >> 9U)) 
                                                    | ((0x200U 
                                                        & (vlSelf->top__DOT___7112_ 
                                                           >> 9U)) 
                                                       | ((0x180U 
                                                           & (vlSelf->top__DOT___7112_ 
                                                              >> 9U)) 
                                                          | (((IData)(vlSelf->top__DOT___3141_) 
                                                              << 6U) 
                                                             | ((0x3eU 
                                                                 & (vlSelf->top__DOT___7112_ 
                                                                    >> 9U)) 
                                                                | (IData)(vlSelf->top__DOT___0777_)))))))) 
                                   << 0x2bU));
    vlSelf->top__DOT___0626_ = (1U & (~ (((IData)(vlSelf->top__DOT___0410_) 
                                          & (IData)(vlSelf->top__DOT___0177_)) 
                                         | ((IData)(vlSelf->top__DOT___3121_) 
                                            & (IData)(vlSelf->top__DOT___0992_)))));
    vlSelf->top__DOT___4631_[3U] = ((0xffffc7ffU & 
                                     vlSelf->top__DOT___4631_[3U]) 
                                    | (0xfffff800U 
                                       & (((IData)(vlSelf->top__DOT___1842_) 
                                           << 0xdU) 
                                          | (((IData)(vlSelf->top__DOT___1350_) 
                                              << 0xcU) 
                                             | ((IData)(vlSelf->top__DOT___0796_) 
                                                << 0xbU)))));
    vlSelf->top__DOT____VdfgTmp_h97f02410__0 = (((IData)(vlSelf->top__DOT___7072_) 
                                                 & (IData)(vlSelf->top__DOT___1726_)) 
                                                | ((IData)(vlSelf->top__DOT___0758_) 
                                                   & ((IData)(vlSelf->top__DOT___0230_) 
                                                      & (IData)(vlSelf->top__DOT___0825_))));
    vlSelf->top__DOT___0902_ = ((IData)(vlSelf->top__DOT___0825_) 
                                ^ (IData)(vlSelf->top__DOT___0741_));
    vlSelf->top__DOT___2106_ = ((IData)(vlSelf->top__DOT___2624_) 
                                | (IData)(vlSelf->top__DOT___0825_));
    vlSelf->top__DOT____VdfgTmp_hd24588aa__0 = ((0x100U 
                                                 & (vlSelf->top__DOT___7112_ 
                                                    >> 0xaU)) 
                                                | ((0xc0U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4325_ 
                                                                >> 0x32U)) 
                                                       << 6U)) 
                                                   | (((IData)(vlSelf->top__DOT___3141_) 
                                                       << 5U) 
                                                      | (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT___4325_ 
                                                                    >> 0x2cU))))));
    vlSelf->top__DOT___4374_ = ((1U & vlSelf->top__DOT___4374_) 
                                | ((0x7e0000U & ((IData)(
                                                         (vlSelf->top__DOT___4325_ 
                                                          >> 0x35U)) 
                                                 << 0x11U)) 
                                   | ((0x10000U & (vlSelf->top__DOT___7112_ 
                                                   >> 2U)) 
                                      | ((0xc000U & 
                                          ((IData)(
                                                   (vlSelf->top__DOT___4325_ 
                                                    >> 0x32U)) 
                                           << 0xeU)) 
                                         | (((IData)(vlSelf->top__DOT___3141_) 
                                             << 0xdU) 
                                            | ((0x1f00U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___4325_ 
                                                            >> 0x2cU)) 
                                                   << 8U)) 
                                               | (0xfeU 
                                                  & (vlSelf->top__DOT___7112_ 
                                                     >> 2U))))))));
    vlSelf->top__DOT___2789_ = (1U & (((((IData)(vlSelf->top__DOT___0300_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0001_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0495_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1762_)))) 
                                       + ((0x18U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT___4325_ 
                                                     >> 0x32U)) 
                                            << 3U)) 
                                          | (((IData)(vlSelf->top__DOT___3141_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___2314_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0280_))))) 
                                      >> 4U));
    vlSelf->top__DOT___3243_ = (1U & ((((0x3e00U & vlSelf->top__DOT___3857_) 
                                        | (((IData)(vlSelf->top__DOT___3473_) 
                                            << 8U) 
                                           | ((0xc0U 
                                               & vlSelf->top__DOT___3857_) 
                                              | (((IData)(vlSelf->top__DOT___3515_) 
                                                  << 5U) 
                                                 | (0x1fU 
                                                    & vlSelf->top__DOT___3857_))))) 
                                       + ((0x3e00U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT___4325_ 
                                                       >> 0x35U)) 
                                              << 9U)) 
                                          | ((0x100U 
                                              & (vlSelf->top__DOT___7112_ 
                                                 >> 0xaU)) 
                                             | ((0xc0U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___4325_ 
                                                             >> 0x32U)) 
                                                    << 6U)) 
                                                | (((IData)(vlSelf->top__DOT___3141_) 
                                                    << 5U) 
                                                   | ((0x1cU 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___4325_ 
                                                                   >> 0x2eU)) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelf->top__DOT___1611_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0527_)))))))) 
                                      >> 0xdU));
    vlSelf->top__DOT___3055_ = (1U & (((((IData)(vlSelf->top__DOT___3515_) 
                                         << 5U) | (0x1fU 
                                                   & vlSelf->top__DOT___3857_)) 
                                       + (((IData)(vlSelf->top__DOT___3141_) 
                                           << 5U) | 
                                          ((0x1cU & 
                                            ((IData)(
                                                     (vlSelf->top__DOT___4325_ 
                                                      >> 0x2eU)) 
                                             << 2U)) 
                                           | (((IData)(vlSelf->top__DOT___1611_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0527_))))) 
                                      >> 5U));
    vlSelf->top__DOT___4324_ = ((0x7ffffffffffffffcULL 
                                 & vlSelf->top__DOT___4324_) 
                                | (IData)((IData)((
                                                   ((IData)(vlSelf->top__DOT___0626_) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSelf->top__DOT___7184_ 
                                                         >> 0xfU))))));
    vlSelf->top__DOT___0813_ = ((IData)(vlSelf->top__DOT___0626_) 
                                | (IData)(vlSelf->top__DOT___0102_));
    vlSelf->top__DOT___1008_ = ((~ (IData)(vlSelf->top__DOT___0626_)) 
                                & (IData)(vlSelf->top__DOT___1009_));
    vlSelf->top__DOT___4343_[2U] = ((0x7fffff83U & 
                                     vlSelf->top__DOT___4343_[2U]) 
                                    | (0x7ffffffcU 
                                       & (((IData)(vlSelf->top__DOT___0359_) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT___0080_) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT___0923_) 
                                               << 4U) 
                                              | ((IData)(vlSelf->top__DOT___0626_) 
                                                 << 2U))))));
    vlSelf->top__DOT___4450_ = ((0x7fffffff9fULL & vlSelf->top__DOT___4450_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0183_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0626_)))) 
                                   << 5U));
    vlSelf->top__DOT____VdfgTmp_h28f671c1__0 = ((2U 
                                                 & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_h97f02410__0)) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT___0547_));
    vlSelf->top__DOT___4332_ = ((0x40U & (((0x40U & vlSelf->top__DOT___3857_) 
                                           | (((IData)(vlSelf->top__DOT___3515_) 
                                               << 5U) 
                                              | (0x1fU 
                                                 & vlSelf->top__DOT___3857_))) 
                                          + ((0x40U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___4325_ 
                                                          >> 0x32U)) 
                                                 << 6U)) 
                                             | (((IData)(vlSelf->top__DOT___3141_) 
                                                 << 5U) 
                                                | ((0x1cU 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4325_ 
                                                                >> 0x2eU)) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->top__DOT___1611_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0527_))))))) 
                                | (((IData)(vlSelf->top__DOT___3055_) 
                                    << 5U) | ((0x1cU 
                                               & (vlSelf->top__DOT___3857_ 
                                                  + 
                                                  ((0x1cU 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4325_ 
                                                                >> 0x2eU)) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->top__DOT___1611_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0527_))))) 
                                              | (((IData)(vlSelf->top__DOT___2001_) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (vlSelf->top__DOT___3857_ 
                                                       + (IData)(vlSelf->top__DOT___0527_)))))));
    vlSelf->top__DOT___1644_ = ((IData)(vlSelf->top__DOT___1097_) 
                                & (IData)(vlSelf->top__DOT___1008_));
    vlSelf->top__DOT___1443_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_h28f671c1__0) 
                                       + ((2U & ((IData)(
                                                         (vlSelf->top__DOT___4754_ 
                                                          >> 0x27U)) 
                                                 << 1U)) 
                                          | (IData)(vlSelf->top__DOT___2230_))) 
                                      >> 1U));
    vlSelf->top__DOT____VdfgTmp_h090c5c0e__0 = (((IData)(vlSelf->top__DOT___0438_) 
                                                 << 2U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h28f671c1__0));
    vlSelf->top__DOT___4382_[0U] = ((0x8000001fU & 
                                     vlSelf->top__DOT___4382_[0U]) 
                                    | (0xffffffe0U 
                                       & ((0x40000000U 
                                           & ((IData)(vlSelf->top__DOT___7091_) 
                                              << 0x16U)) 
                                          | ((0x20000000U 
                                              & ((((0x7e00U 
                                                    & vlSelf->top__DOT___3857_) 
                                                   | (((IData)(vlSelf->top__DOT___3473_) 
                                                       << 8U) 
                                                      | ((0xc0U 
                                                          & vlSelf->top__DOT___3857_) 
                                                         | (((IData)(vlSelf->top__DOT___3515_) 
                                                             << 5U) 
                                                            | (0x1fU 
                                                               & vlSelf->top__DOT___3857_))))) 
                                                  + 
                                                  ((0x7e00U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4325_ 
                                                                >> 0x35U)) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (vlSelf->top__DOT___7112_ 
                                                          >> 0xaU)) 
                                                      | ((0xc0U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___4325_ 
                                                                      >> 0x32U)) 
                                                             << 6U)) 
                                                         | (((IData)(vlSelf->top__DOT___3141_) 
                                                             << 5U) 
                                                            | ((0x1cU 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___4325_ 
                                                                            >> 0x2eU)) 
                                                                   << 2U)) 
                                                               | (((IData)(vlSelf->top__DOT___1611_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___0527_)))))))) 
                                                 << 0xfU)) 
                                             | (((IData)(vlSelf->top__DOT___3243_) 
                                                 << 0x1cU) 
                                                | ((0xfc00000U 
                                                    & ((((0x1e00U 
                                                          & vlSelf->top__DOT___3857_) 
                                                         | (((IData)(vlSelf->top__DOT___3473_) 
                                                             << 8U) 
                                                            | ((0xc0U 
                                                                & vlSelf->top__DOT___3857_) 
                                                               | (((IData)(vlSelf->top__DOT___3515_) 
                                                                   << 5U) 
                                                                  | (0x1fU 
                                                                     & vlSelf->top__DOT___3857_))))) 
                                                        + 
                                                        ((0x1e00U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___4325_ 
                                                                      >> 0x35U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (vlSelf->top__DOT___7112_ 
                                                                >> 0xaU)) 
                                                            | ((0xc0U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___4325_ 
                                                                            >> 0x32U)) 
                                                                   << 6U)) 
                                                               | (((IData)(vlSelf->top__DOT___3141_) 
                                                                   << 5U) 
                                                                  | ((0x1cU 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___4325_ 
                                                                                >> 0x2eU)) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1611_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___0527_)))))))) 
                                                       << 0xfU)) 
                                                   | ((0x200000U 
                                                       & ((IData)(vlSelf->top__DOT___4332_) 
                                                          << 0xfU)) 
                                                      | (((IData)(vlSelf->top__DOT___3055_) 
                                                          << 0x14U) 
                                                         | ((0xe0000U 
                                                             & ((IData)(vlSelf->top__DOT___4332_) 
                                                                << 0xfU)) 
                                                            | (((IData)(vlSelf->top__DOT___2001_) 
                                                                << 0x10U) 
                                                               | ((0x8000U 
                                                                   & ((IData)(vlSelf->top__DOT___4332_) 
                                                                      << 0xfU)) 
                                                                  | ((0x7c00U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___4221_ 
                                                                                >> 5U)) 
                                                                         << 0xaU)) 
                                                                     | (((IData)(vlSelf->top__DOT___2930_) 
                                                                         << 9U) 
                                                                        | (0x1e0U 
                                                                           & ((IData)(vlSelf->top__DOT___4221_) 
                                                                              << 5U)))))))))))))));
    vlSelf->top__DOT____VdfgTmp_h71761298__0 = (1U 
                                                & (((IData)(vlSelf->top__DOT____VdfgTmp_h090c5c0e__0) 
                                                    + 
                                                    ((6U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___4754_ 
                                                                  >> 0x27U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->top__DOT___2230_))) 
                                                   >> 2U));
    vlSelf->top__DOT____VdfgTmp_h148e9adf__0 = (((IData)(vlSelf->top__DOT___0102_) 
                                                 << 3U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h090c5c0e__0));
    vlSelf->top__DOT___1542_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_h148e9adf__0) 
                                       + ((0xeU & ((IData)(
                                                           (vlSelf->top__DOT___4754_ 
                                                            >> 0x27U)) 
                                                   << 1U)) 
                                          | (IData)(vlSelf->top__DOT___2230_))) 
                                      >> 3U));
    vlSelf->top__DOT____VdfgTmp_hf406bdac__0 = (3U 
                                                & (((((IData)(vlSelf->top__DOT___3537_) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->top__DOT___1933_) 
                                                         << 4U) 
                                                        | (IData)(vlSelf->top__DOT____VdfgTmp_h148e9adf__0))) 
                                                    + 
                                                    ((0x3eU 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___4754_ 
                                                                  >> 0x27U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->top__DOT___2230_))) 
                                                   >> 4U));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__275(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__275\n"); );
    // Body
    vlSelf->top__DOT___2134_ = ((IData)(vlSelf->top__DOT___1436_) 
                                | (IData)(vlSelf->top__DOT___0840_));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__283(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__283\n"); );
    // Body
    vlSelf->top__DOT___1425_ = (1U & ((((0x200U & ((IData)(
                                                           (vlSelf->top__DOT___3969_ 
                                                            >> 0x11U)) 
                                                   << 9U)) 
                                        | (((IData)(vlSelf->top__DOT___1252_) 
                                            << 8U) 
                                           | (((IData)(vlSelf->top__DOT___1783_) 
                                               << 7U) 
                                              | (((IData)(vlSelf->top__DOT___0899_) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->top__DOT___0571_) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->top__DOT___0038_) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT___1343_) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->top__DOT___1060_) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->top__DOT___0781_) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (vlSelf->top__DOT___4749_[2U] 
                                                                      >> 0x16U))))))))))) 
                                       + ((0x3f8U & 
                                           ((IData)(vlSelf->top__DOT___3862_) 
                                            << 3U)) 
                                          | (((IData)(vlSelf->top__DOT___1322_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0997_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0226_))))) 
                                      >> 9U));
    vlSelf->top__DOT___3263_ = (1U & ((((0x400000U 
                                         & ((IData)(
                                                    (vlSelf->top__DOT___3969_ 
                                                     >> 0x1eU)) 
                                            << 0x16U)) 
                                        | ((0x200000U 
                                            & ((IData)(vlSelf->top__DOT___7024_) 
                                               << 9U)) 
                                           | ((0x100000U 
                                               & ((IData)(vlSelf->top__DOT___7024_) 
                                                  << 9U)) 
                                              | ((0x80000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3969_ 
                                                              >> 0x1bU)) 
                                                     << 0x13U)) 
                                                 | ((0x40000U 
                                                     & ((IData)(vlSelf->top__DOT___7024_) 
                                                        << 9U)) 
                                                    | ((0x30000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___3969_ 
                                                                    >> 0x18U)) 
                                                           << 0x10U)) 
                                                       | ((0x8000U 
                                                           & ((IData)(vlSelf->top__DOT___7024_) 
                                                              << 9U)) 
                                                          | ((0x4000U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___3969_ 
                                                                          >> 0x16U)) 
                                                                 << 0xeU)) 
                                                             | ((0x2000U 
                                                                 & ((IData)(vlSelf->top__DOT___7024_) 
                                                                    << 9U)) 
                                                                | ((0x1000U 
                                                                    & ((IData)(vlSelf->top__DOT___7024_) 
                                                                       << 9U)) 
                                                                   | ((0x800U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3969_ 
                                                                                >> 0x13U)) 
                                                                          << 0xbU)) 
                                                                      | (((IData)(vlSelf->top__DOT___3759_) 
                                                                          << 0xaU) 
                                                                         | ((0x200U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3969_ 
                                                                                >> 0x11U)) 
                                                                                << 9U)) 
                                                                            | (((IData)(vlSelf->top__DOT___1252_) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->top__DOT___1783_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0899_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1343_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0781_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U))))))))))))))))))))))) 
                                       + (((IData)(vlSelf->top__DOT___0629_) 
                                           << 0x16U) 
                                          | (((IData)(vlSelf->top__DOT___0132_) 
                                              << 0x15U) 
                                             | (((IData)(vlSelf->top__DOT___0727_) 
                                                 << 0x14U) 
                                                | ((0xc0000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3862_ 
                                                                >> 0xfU)) 
                                                       << 0x12U)) 
                                                   | (((IData)(vlSelf->top__DOT___0421_) 
                                                       << 0x11U) 
                                                      | (((IData)(vlSelf->top__DOT___1641_) 
                                                          << 0x10U) 
                                                         | ((0xc000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3862_ 
                                                                         >> 0xbU)) 
                                                                << 0xeU)) 
                                                            | (((IData)(vlSelf->top__DOT___0143_) 
                                                                << 0xdU) 
                                                               | ((0x1800U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3862_ 
                                                                               >> 8U)) 
                                                                      << 0xbU)) 
                                                                  | (((IData)(vlSelf->top__DOT___2252_) 
                                                                      << 0xaU) 
                                                                     | ((0x3f8U 
                                                                         & ((IData)(vlSelf->top__DOT___3862_) 
                                                                            << 3U)) 
                                                                        | (((IData)(vlSelf->top__DOT___1322_) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelf->top__DOT___0997_) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->top__DOT___0226_))))))))))))))) 
                                      >> 0x16U));
    vlSelf->top__DOT___1029_ = ((IData)(vlSelf->top__DOT___1425_) 
                                & (IData)(vlSelf->top__DOT___0141_));
    vlSelf->top__DOT___4044_[2U] = ((0xfffeffffU & 
                                     vlSelf->top__DOT___4044_[2U]) 
                                    | ((IData)(vlSelf->top__DOT___3263_) 
                                       << 0x10U));
    vlSelf->top__DOT____VdfgTmp_h118dffa7__0 = (((IData)(vlSelf->top__DOT___2230_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1029_));
    vlSelf->top__DOT___1174_ = (1U & (~ (((IData)(vlSelf->top__DOT___1762_) 
                                          & (IData)(vlSelf->top__DOT___0452_)) 
                                         | (IData)(vlSelf->top__DOT___1029_))));
    vlSelf->top__DOT____VdfgTmp_ha384a116__0 = ((0x20U 
                                                 & (vlSelf->top__DOT___4786_[1U] 
                                                    >> 0x10U)) 
                                                | (((IData)(vlSelf->top__DOT___2539_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___1770_) 
                                                       << 3U) 
                                                      | ((4U 
                                                          & (vlSelf->top__DOT___4749_[2U] 
                                                             >> 0x14U)) 
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_h118dffa7__0)))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__287(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__287\n"); );
    // Body
    vlSelf->top__DOT___1920_ = (1U & ((((0xf0U & (vlSelf->top__DOT___4048_[0U] 
                                                  >> 3U)) 
                                        | ((8U & ((IData)(vlSelf->top__DOT___7072_) 
                                                  << 3U)) 
                                           | (((IData)(vlSelf->top__DOT___0144_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___0861_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___2158_))))) 
                                       + ((0xf8U & 
                                           (vlSelf->top__DOT___4280_[0U] 
                                            >> 1U)) 
                                          | (((IData)(vlSelf->top__DOT___0934_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___1343_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1796_))))) 
                                      >> 7U));
    vlSelf->top__DOT___3109_ = (1U & ((((0x7f0U & (
                                                   vlSelf->top__DOT___4048_[0U] 
                                                   >> 3U)) 
                                        | ((8U & ((IData)(vlSelf->top__DOT___7072_) 
                                                  << 3U)) 
                                           | (((IData)(vlSelf->top__DOT___0144_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___0861_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___2158_))))) 
                                       + (((IData)(vlSelf->top__DOT___1525_) 
                                           << 0xaU) 
                                          | ((0x3f8U 
                                              & (vlSelf->top__DOT___4280_[0U] 
                                                 >> 1U)) 
                                             | (((IData)(vlSelf->top__DOT___0934_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1343_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___1796_)))))) 
                                      >> 0xaU));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__288(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__288\n"); );
    // Body
    vlSelf->top__DOT___3042_ = (1U & ((((0xf00000U 
                                         & vlSelf->top__DOT___4396_) 
                                        | ((0x80000U 
                                            & (vlSelf->top__DOT___6979_[2U] 
                                               << 0x13U)) 
                                           | ((0x70000U 
                                               & vlSelf->top__DOT___4396_) 
                                              | (((IData)(vlSelf->top__DOT___1887_) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->top__DOT___0445_) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->top__DOT___1182_) 
                                                        << 0xdU) 
                                                       | (((IData)(vlSelf->top__DOT___0866_) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->top__DOT___0234_) 
                                                              << 0xbU) 
                                                             | ((0x400U 
                                                                 & ((~ (IData)(
                                                                               (vlSelf->top__DOT___7059_ 
                                                                                >> 0x17U))) 
                                                                    << 0xaU)) 
                                                                | (((IData)(vlSelf->top__DOT___1084_) 
                                                                    << 9U) 
                                                                   | (((IData)(vlSelf->top__DOT___0842_) 
                                                                       << 8U) 
                                                                      | (((IData)(vlSelf->top__DOT___0723_) 
                                                                          << 7U) 
                                                                         | (((IData)(vlSelf->top__DOT___0621_) 
                                                                             << 6U) 
                                                                            | (((IData)(vlSelf->top__DOT___0100_) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->top__DOT___2420_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1610_)))))))))))))))))) 
                                       + ((0xfffff0U 
                                           & ((vlSelf->top__DOT___4048_[2U] 
                                               << 5U) 
                                              | (0x10U 
                                                 & (vlSelf->top__DOT___4048_[1U] 
                                                    >> 0x1bU)))) 
                                          | (((IData)(vlSelf->top__DOT___0840_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___2287_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1663_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0476_)))))) 
                                      >> 0x17U));
    vlSelf->top__DOT___3280_ = (1U & (((((IData)(vlSelf->top__DOT___1887_) 
                                         << 0xfU) | 
                                        (((IData)(vlSelf->top__DOT___0445_) 
                                          << 0xeU) 
                                         | (((IData)(vlSelf->top__DOT___1182_) 
                                             << 0xdU) 
                                            | (((IData)(vlSelf->top__DOT___0866_) 
                                                << 0xcU) 
                                               | (((IData)(vlSelf->top__DOT___0234_) 
                                                   << 0xbU) 
                                                  | ((0x400U 
                                                      & ((~ (IData)(
                                                                    (vlSelf->top__DOT___7059_ 
                                                                     >> 0x17U))) 
                                                         << 0xaU)) 
                                                     | (((IData)(vlSelf->top__DOT___1084_) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->top__DOT___0842_) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->top__DOT___0723_) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->top__DOT___0621_) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->top__DOT___0100_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___2420_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___4749_[2U] 
                                                                              >> 0x14U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0154_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___1610_))))))))))))))) 
                                       + ((0xfff0U 
                                           & ((vlSelf->top__DOT___4048_[2U] 
                                               << 5U) 
                                              | (0x10U 
                                                 & (vlSelf->top__DOT___4048_[1U] 
                                                    >> 0x1bU)))) 
                                          | (((IData)(vlSelf->top__DOT___0840_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___2287_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1663_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0476_)))))) 
                                      >> 0xfU));
    vlSelf->top__DOT___3107_ = (1U & ((((0x80000U & 
                                         (vlSelf->top__DOT___6979_[2U] 
                                          << 0x13U)) 
                                        | ((0x70000U 
                                            & vlSelf->top__DOT___4396_) 
                                           | (((IData)(vlSelf->top__DOT___1887_) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->top__DOT___0445_) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->top__DOT___1182_) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->top__DOT___0866_) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->top__DOT___0234_) 
                                                           << 0xbU) 
                                                          | ((0x400U 
                                                              & ((~ (IData)(
                                                                            (vlSelf->top__DOT___7059_ 
                                                                             >> 0x17U))) 
                                                                 << 0xaU)) 
                                                             | (((IData)(vlSelf->top__DOT___1084_) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->top__DOT___0842_) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->top__DOT___0723_) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->top__DOT___0621_) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT___0100_) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->top__DOT___2420_) 
                                                                                << 3U) 
                                                                               | ((4U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1610_))))))))))))))))) 
                                       + ((0xffff0U 
                                           & ((vlSelf->top__DOT___4048_[2U] 
                                               << 5U) 
                                              | (0x10U 
                                                 & (vlSelf->top__DOT___4048_[1U] 
                                                    >> 0x1bU)))) 
                                          | (((IData)(vlSelf->top__DOT___0840_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___2287_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1663_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0476_)))))) 
                                      >> 0x13U));
    vlSelf->top__DOT___3541_ = (1U & ((((0x1ff00000U 
                                         & vlSelf->top__DOT___4396_) 
                                        | ((0x80000U 
                                            & (vlSelf->top__DOT___6979_[2U] 
                                               << 0x13U)) 
                                           | ((0x70000U 
                                               & vlSelf->top__DOT___4396_) 
                                              | (((IData)(vlSelf->top__DOT___1887_) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->top__DOT___0445_) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->top__DOT___1182_) 
                                                        << 0xdU) 
                                                       | (((IData)(vlSelf->top__DOT___0866_) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->top__DOT___0234_) 
                                                              << 0xbU) 
                                                             | ((0x400U 
                                                                 & ((~ (IData)(
                                                                               (vlSelf->top__DOT___7059_ 
                                                                                >> 0x17U))) 
                                                                    << 0xaU)) 
                                                                | (((IData)(vlSelf->top__DOT___1084_) 
                                                                    << 9U) 
                                                                   | (((IData)(vlSelf->top__DOT___0842_) 
                                                                       << 8U) 
                                                                      | (((IData)(vlSelf->top__DOT___0723_) 
                                                                          << 7U) 
                                                                         | (((IData)(vlSelf->top__DOT___0621_) 
                                                                             << 6U) 
                                                                            | (((IData)(vlSelf->top__DOT___0100_) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->top__DOT___2420_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1610_)))))))))))))))))) 
                                       + ((0x1ffffff0U 
                                           & ((vlSelf->top__DOT___4048_[2U] 
                                               << 5U) 
                                              | (0x10U 
                                                 & (vlSelf->top__DOT___4048_[1U] 
                                                    >> 0x1bU)))) 
                                          | (((IData)(vlSelf->top__DOT___0840_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___2287_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1663_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0476_)))))) 
                                      >> 0x1cU));
    vlSelf->top__DOT___1565_ = ((IData)(vlSelf->top__DOT___3541_) 
                                | (IData)(vlSelf->top__DOT___0816_));
    vlSelf->top__DOT___1904_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0x1ffffU 
                                                                     & (vlSelf->top__DOT___3857_ 
                                                                        >> 9U)))) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___3473_) 
                                                                       << 0x1eU) 
                                                                      | ((0x30000000U 
                                                                          & (vlSelf->top__DOT___3857_ 
                                                                             << 0x16U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3515_) 
                                                                             << 0x1bU) 
                                                                            | ((0x7000000U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 0x16U)) 
                                                                               | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7123_) 
                                                                                << 0xbU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7123_) 
                                                                                << 0xbU)) 
                                                                                | ((0x7f800U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0398_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x100U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x80U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x1cU)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)))))))))))))))))))))))) 
                                                  + (QData)((IData)(vlSelf->top__DOT___1565_))) 
                                                 >> 0x2fU))));
    vlSelf->top__DOT___1816_ = (1U & ((((2U & (vlSelf->top__DOT___3883_[1U] 
                                               >> 0x1cU)) 
                                        | (1U & (IData)(vlSelf->top__DOT___7092_))) 
                                       + (IData)((QData)((IData)(vlSelf->top__DOT___1565_)))) 
                                      >> 1U));
    vlSelf->top__DOT___3901_[2U] = ((0xfU & vlSelf->top__DOT___3901_[2U]) 
                                    | ((IData)((0x7ffffffffffULL 
                                                & ((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                   >> 1U))) 
                                       << 4U));
    vlSelf->top__DOT___3901_[3U] = (0x7fffU & (((IData)(
                                                        (0x7ffffffffffULL 
                                                         & ((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                            >> 1U))) 
                                                >> 0x1cU) 
                                               | ((IData)(
                                                          ((0x7ffffffffffULL 
                                                            & ((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                               >> 1U)) 
                                                           >> 0x20U)) 
                                                  << 4U)));
    vlSelf->top__DOT___3901_[0U] = (IData)((((QData)((IData)(
                                                             (3U 
                                                              & (IData)(
                                                                        (3ULL 
                                                                         & (((((QData)((IData)(
                                                                                (0x7ffffU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 9U)))) 
                                                                               << 0x1fU) 
                                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3473_) 
                                                                                << 0x1eU) 
                                                                                | ((0x30000000U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7000000U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 0x16U)) 
                                                                                | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7123_) 
                                                                                << 0xbU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7123_) 
                                                                                << 0xbU)) 
                                                                                | ((0x7f800U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0398_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x100U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x80U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x1cU)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)))))))))))))))))))))))) 
                                                                             + (QData)((IData)(vlSelf->top__DOT___1565_))) 
                                                                            >> 0x30U)))))) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                << 0x3bU) 
                                               | ((0x7ffffffffffc000ULL 
                                                   & (((((QData)((IData)(
                                                                         (0xffffU 
                                                                          & (vlSelf->top__DOT___3857_ 
                                                                             >> 9U)))) 
                                                         << 0x1fU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->top__DOT___3473_) 
                                                                            << 0x1eU) 
                                                                           | ((0x30000000U 
                                                                               & (vlSelf->top__DOT___3857_ 
                                                                                << 0x16U)) 
                                                                              | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7000000U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 0x16U)) 
                                                                                | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7123_) 
                                                                                << 0xbU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7123_) 
                                                                                << 0xbU)) 
                                                                                | ((0x7f800U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0398_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x100U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x80U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x1cU)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)))))))))))))))))))))))) 
                                                       + (QData)((IData)(vlSelf->top__DOT___1565_))) 
                                                      << 0xcU)) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___1816_) 
                                                                      << 0xdU) 
                                                                     | ((0x1000U 
                                                                         & (((IData)(vlSelf->top__DOT___7092_) 
                                                                             + (IData)(vlSelf->top__DOT___1565_)) 
                                                                            << 0xcU)) 
                                                                        | (((IData)(vlSelf->top__DOT___0809_) 
                                                                            << 0xbU) 
                                                                           | (((IData)(vlSelf->top__DOT___0428_) 
                                                                               << 0xaU) 
                                                                              | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 9U) 
                                                                                | (IData)(vlSelf->top__DOT___6967_))))))))))));
    vlSelf->top__DOT___3901_[1U] = ((0xc0000000U & 
                                     vlSelf->top__DOT___3901_[1U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 (3U 
                                                                  & (IData)(
                                                                            (3ULL 
                                                                             & (((((QData)((IData)(
                                                                                (0x7ffffU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 9U)))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3473_) 
                                                                                << 0x1eU) 
                                                                                | ((0x30000000U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7000000U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 0x16U)) 
                                                                                | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7123_) 
                                                                                << 0xbU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7123_) 
                                                                                << 0xbU)) 
                                                                                | ((0x7f800U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0398_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x100U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x80U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x1cU)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)))))))))))))))))))))))) 
                                                                                + (QData)((IData)(vlSelf->top__DOT___1565_))) 
                                                                                >> 0x30U)))))) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                    << 0x3bU) 
                                                   | ((0x7ffffffffffc000ULL 
                                                       & (((((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (vlSelf->top__DOT___3857_ 
                                                                                >> 9U)))) 
                                                             << 0x1fU) 
                                                            | (QData)((IData)(
                                                                              (((IData)(vlSelf->top__DOT___3473_) 
                                                                                << 0x1eU) 
                                                                               | ((0x30000000U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7000000U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 0x16U)) 
                                                                                | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7123_) 
                                                                                << 0xbU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7123_) 
                                                                                << 0xbU)) 
                                                                                | ((0x7f800U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0398_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x100U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x80U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x1cU)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)))))))))))))))))))))))) 
                                                           + (QData)((IData)(vlSelf->top__DOT___1565_))) 
                                                          << 0xcU)) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->top__DOT___1816_) 
                                                                          << 0xdU) 
                                                                         | ((0x1000U 
                                                                             & (((IData)(vlSelf->top__DOT___7092_) 
                                                                                + (IData)(vlSelf->top__DOT___1565_)) 
                                                                                << 0xcU)) 
                                                                            | (((IData)(vlSelf->top__DOT___0809_) 
                                                                                << 0xbU) 
                                                                               | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 9U) 
                                                                                | (IData)(vlSelf->top__DOT___6967_))))))))))) 
                                               >> 0x20U)));
    vlSelf->top__DOT___1815_ = ((IData)(vlSelf->top__DOT___1816_) 
                                & (IData)(vlSelf->top__DOT___1693_));
    vlSelf->top__DOT___2339_ = (1U & ((IData)(vlSelf->top__DOT___0885_) 
                                      + (IData)(vlSelf->top__DOT___1815_)));
    vlSelf->top__DOT___2590_ = ((IData)(vlSelf->top__DOT___1074_) 
                                ^ (IData)(vlSelf->top__DOT___1815_));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__315(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__315\n"); );
    // Init
    CData/*3:0*/ top__DOT____VdfgTmp_h774b1fa4__0;
    top__DOT____VdfgTmp_h774b1fa4__0 = 0;
    SData/*15:0*/ __VdfgTmp_h3c3cdf81__0;
    __VdfgTmp_h3c3cdf81__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_21;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0806_)) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (7U 
                                                             & ((((0x10U 
                                                                   & (vlSelf->top__DOT___3905_[0U] 
                                                                      >> 9U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0056_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___1452_) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSelf->top__DOT___0842_) 
                                                                            << 1U) 
                                                                           | (1U 
                                                                              & (~ 
                                                                                (vlSelf->top__DOT___7141_ 
                                                                                >> 0x16U))))))) 
                                                                 + 
                                                                 ((0x1eU 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3991_ 
                                                                               >> 0x24U)) 
                                                                      << 1U)) 
                                                                  | (IData)(vlSelf->top__DOT___2410_))) 
                                                                >> 2U)))) 
                                            << 0x3cU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___3580_)) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___3457_)) 
                                                  << 0x3aU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((((0xc000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x16U)) 
                                                                               << 0xeU)) 
                                                                           | ((0x2000U 
                                                                               & (vlSelf->top__DOT___7135_ 
                                                                                >> 4U)) 
                                                                              | ((0x1ffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1023_)))) 
                                                                          + 
                                                                          ((0xff80U 
                                                                            & (vlSelf->top__DOT___4268_ 
                                                                               >> 8U)) 
                                                                           | ((0x40U 
                                                                               & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                              | ((0x30U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | (IData)(vlSelf->top__DOT___1268_)))))))) 
                                                                         >> 0xfU)))) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___2368_)) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           (0xfU 
                                                                            & ((((0x2000U 
                                                                                & (vlSelf->top__DOT___7135_ 
                                                                                >> 4U)) 
                                                                                | ((0x1ffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1023_))) 
                                                                                + 
                                                                                ((0x3f80U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | (IData)(vlSelf->top__DOT___1268_)))))))) 
                                                                               >> 0xaU)))) 
                                                           << 0x34U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___3740_)) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((((0x1feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1023_)) 
                                                                                + 
                                                                                ((0x180U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | (IData)(vlSelf->top__DOT___1268_)))))))) 
                                                                                >> 7U)))) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___3766_)) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & ((((0x3eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1023_)) 
                                                                                + 
                                                                                ((0x30U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | (IData)(vlSelf->top__DOT___1268_)))))) 
                                                                                >> 1U)))) 
                                                                       << 0x2bU) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___0309_)) 
                                                                          << 0x2aU) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & (((((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4079_ 
                                                                                << 0x10U)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x23U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x22U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x7f80000U 
                                                                                & (vlSelf->top__DOT___4079_ 
                                                                                << 0x10U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x19U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x3c000U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x14U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1c00U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x10U)) 
                                                                                << 9U)) 
                                                                                | ((0x1e0U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 0xaU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4410_ 
                                                                                >> 0xaU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4450_ 
                                                                                >> 0x14U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                >> 2U)))))))))))))))) 
                                                                                << 2U) 
                                                                                | (QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(vlSelf->top__DOT___7006_))))) 
                                                                                + 
                                                                                (((QData)((IData)(vlSelf->top__DOT___0676_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___2342_) 
                                                                                << 0x1dU) 
                                                                                | ((0x18000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x1cU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3630_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0742_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1876_) 
                                                                                << 0x18U) 
                                                                                | ((0xfc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x13U)) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2903_) 
                                                                                << 0x11U) 
                                                                                | ((0x1f000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0xdU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___4027_) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1864_) 
                                                                                << 0xaU) 
                                                                                | (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 1U)))))))))))))))) 
                                                                                << 1U) 
                                                                                | (QData)((IData)(vlSelf->top__DOT___1979_))))) 
                                                                                >> 0x21U)))))) 
                                                                             << 0x29U) 
                                                                            | (((QData)((IData)(vlSelf->top__DOT___3661_)) 
                                                                                << 0x28U) 
                                                                               | (((QData)((IData)(
                                                                                ((((0x80000000U 
                                                                                & (vlSelf->top__DOT___4079_ 
                                                                                << 0x12U)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x23U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x22U)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x1fe00000U 
                                                                                & (vlSelf->top__DOT___4079_ 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x19U)) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x14U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x10U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___4410_ 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4450_ 
                                                                                >> 0x14U)) 
                                                                                << 5U)) 
                                                                                | (IData)(vlSelf->top__DOT___7006_))))))))))))) 
                                                                                + 
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___2342_) 
                                                                                << 0x1eU) 
                                                                                | ((0x30000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3630_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0742_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___1876_) 
                                                                                << 0x19U) 
                                                                                | ((0x1f80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2903_) 
                                                                                << 0x12U) 
                                                                                | ((0x3e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___4027_) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1864_) 
                                                                                << 0xbU) 
                                                                                | ((0x7feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1979_)))))))))))))) 
                                                                                >> 0x17U))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3496_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & ((((0x200000U 
                                                                                & (vlSelf->top__DOT___4079_ 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x19U)) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x14U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x10U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___4410_ 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4450_ 
                                                                                >> 0x14U)) 
                                                                                << 5U)) 
                                                                                | (IData)(vlSelf->top__DOT___7006_)))))))))) 
                                                                                + 
                                                                                ((0x380000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2903_) 
                                                                                << 0x12U) 
                                                                                | ((0x3e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___4027_) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1864_) 
                                                                                << 0xbU) 
                                                                                | ((0x7feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1979_)))))))) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2620_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((((0x780U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___4410_ 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4450_ 
                                                                                >> 0x14U)) 
                                                                                << 5U)) 
                                                                                | (IData)(vlSelf->top__DOT___7006_)))) 
                                                                                + 
                                                                                ((0x7feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1979_))) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1900_) 
                                                                                << 0x11U) 
                                                                                | ((0x1ff00U 
                                                                                & ((((0x180U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___4410_ 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4450_ 
                                                                                >> 0x14U)) 
                                                                                << 5U)) 
                                                                                | (IData)(vlSelf->top__DOT___7006_)))) 
                                                                                + 
                                                                                ((0x1feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1979_))) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0586_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0949_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0176_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2310_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1293_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___3824_[2U] 
                                                                                >> 0x16U))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelf->top__DOT___0806_)) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (7U 
                                                              & ((((0x10U 
                                                                    & (vlSelf->top__DOT___3905_[0U] 
                                                                       >> 9U)) 
                                                                   | (((IData)(vlSelf->top__DOT___0056_) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelf->top__DOT___1452_) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelf->top__DOT___0842_) 
                                                                             << 1U) 
                                                                            | (1U 
                                                                               & (~ 
                                                                                (vlSelf->top__DOT___7141_ 
                                                                                >> 0x16U))))))) 
                                                                  + 
                                                                  ((0x1eU 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3991_ 
                                                                                >> 0x24U)) 
                                                                       << 1U)) 
                                                                   | (IData)(vlSelf->top__DOT___2410_))) 
                                                                 >> 2U)))) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(vlSelf->top__DOT___3580_)) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___3457_)) 
                                                   << 0x3aU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((((0xc000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x16U)) 
                                                                                << 0xeU)) 
                                                                            | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7135_ 
                                                                                >> 4U)) 
                                                                               | ((0x1ffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1023_)))) 
                                                                           + 
                                                                           ((0xff80U 
                                                                             & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                            | ((0x40U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                               | ((0x30U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | (IData)(vlSelf->top__DOT___1268_)))))))) 
                                                                          >> 0xfU)))) 
                                                      << 0x39U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___2368_)) 
                                                         << 0x38U) 
                                                        | (((QData)((IData)(
                                                                            (0xfU 
                                                                             & ((((0x2000U 
                                                                                & (vlSelf->top__DOT___7135_ 
                                                                                >> 4U)) 
                                                                                | ((0x1ffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1023_))) 
                                                                                + 
                                                                                ((0x3f80U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | (IData)(vlSelf->top__DOT___1268_)))))))) 
                                                                                >> 0xaU)))) 
                                                            << 0x34U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___3740_)) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((((0x1feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1023_)) 
                                                                                + 
                                                                                ((0x180U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | (IData)(vlSelf->top__DOT___1268_)))))))) 
                                                                                >> 7U)))) 
                                                                  << 0x31U) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___3766_)) 
                                                                     << 0x30U) 
                                                                    | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & ((((0x3eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1023_)) 
                                                                                + 
                                                                                ((0x30U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___4268_ 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x10U)) 
                                                                                | (IData)(vlSelf->top__DOT___1268_)))))) 
                                                                                >> 1U)))) 
                                                                        << 0x2bU) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___0309_)) 
                                                                           << 0x2aU) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & (((((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___4079_ 
                                                                                << 0x10U)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x23U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x22U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x7f80000U 
                                                                                & (vlSelf->top__DOT___4079_ 
                                                                                << 0x10U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x19U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x3c000U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x14U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1c00U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x10U)) 
                                                                                << 9U)) 
                                                                                | ((0x1e0U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 0xaU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___4410_ 
                                                                                >> 0xaU)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4450_ 
                                                                                >> 0x14U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                >> 2U)))))))))))))))) 
                                                                                << 2U) 
                                                                                | (QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(vlSelf->top__DOT___7006_))))) 
                                                                                + 
                                                                                (((QData)((IData)(vlSelf->top__DOT___0676_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___2342_) 
                                                                                << 0x1dU) 
                                                                                | ((0x18000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x1cU)) 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3630_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0742_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1876_) 
                                                                                << 0x18U) 
                                                                                | ((0xfc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x13U)) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2903_) 
                                                                                << 0x11U) 
                                                                                | ((0x1f000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0xdU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___4027_) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1864_) 
                                                                                << 0xaU) 
                                                                                | (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 1U)))))))))))))))) 
                                                                                << 1U) 
                                                                                | (QData)((IData)(vlSelf->top__DOT___1979_))))) 
                                                                                >> 0x21U)))))) 
                                                                              << 0x29U) 
                                                                             | (((QData)((IData)(vlSelf->top__DOT___3661_)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                ((((0x80000000U 
                                                                                & (vlSelf->top__DOT___4079_ 
                                                                                << 0x12U)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x23U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x22U)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x1fe00000U 
                                                                                & (vlSelf->top__DOT___4079_ 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x19U)) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x14U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x10U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___4410_ 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4450_ 
                                                                                >> 0x14U)) 
                                                                                << 5U)) 
                                                                                | (IData)(vlSelf->top__DOT___7006_))))))))))))) 
                                                                                + 
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___2342_) 
                                                                                << 0x1eU) 
                                                                                | ((0x30000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3630_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0742_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___1876_) 
                                                                                << 0x19U) 
                                                                                | ((0x1f80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2903_) 
                                                                                << 0x12U) 
                                                                                | ((0x3e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___4027_) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1864_) 
                                                                                << 0xbU) 
                                                                                | ((0x7feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1979_)))))))))))))) 
                                                                                >> 0x17U))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3496_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & ((((0x200000U 
                                                                                & (vlSelf->top__DOT___4079_ 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x19U)) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x14U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7182_ 
                                                                                >> 0x10U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___4410_ 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4450_ 
                                                                                >> 0x14U)) 
                                                                                << 5U)) 
                                                                                | (IData)(vlSelf->top__DOT___7006_)))))))))) 
                                                                                + 
                                                                                ((0x380000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2903_) 
                                                                                << 0x12U) 
                                                                                | ((0x3e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___4027_) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1864_) 
                                                                                << 0xbU) 
                                                                                | ((0x7feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1979_)))))))) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2620_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((((0x780U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___4410_ 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4450_ 
                                                                                >> 0x14U)) 
                                                                                << 5U)) 
                                                                                | (IData)(vlSelf->top__DOT___7006_)))) 
                                                                                + 
                                                                                ((0x7feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1979_))) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1900_) 
                                                                                << 0x11U) 
                                                                                | ((0x1ff00U 
                                                                                & ((((0x180U 
                                                                                & (vlSelf->top__DOT___4371_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___4410_ 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4450_ 
                                                                                >> 0x14U)) 
                                                                                << 5U)) 
                                                                                | (IData)(vlSelf->top__DOT___7006_)))) 
                                                                                + 
                                                                                ((0x1feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4557_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1979_))) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0586_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0949_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0176_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2310_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1293_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___3824_[2U] 
                                                                                >> 0x16U))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_6[2U] = ((0x20U & ((IData)(vlSelf->top__DOT___4783_) 
                               << 2U)) | ((0x10U & 
                                           ((IData)(vlSelf->top__DOT___4783_) 
                                            << 2U)) 
                                          | (((IData)(vlSelf->top__DOT___0882_) 
                                              << 3U) 
                                             | ((4U 
                                                 & ((IData)(vlSelf->top__DOT___4783_) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->top__DOT___3491_) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((((0x70U 
                                                            & (vlSelf->top__DOT___3905_[0U] 
                                                               >> 9U)) 
                                                           | (((IData)(vlSelf->top__DOT___0056_) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->top__DOT___1452_) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelf->top__DOT___0842_) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ 
                                                                          (vlSelf->top__DOT___7141_ 
                                                                           >> 0x16U))))))) 
                                                          + 
                                                          ((0x7eU 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT___3991_ 
                                                                        >> 0x24U)) 
                                                               << 1U)) 
                                                           | (IData)(vlSelf->top__DOT___2410_))) 
                                                         >> 6U)))))));
    __Vtemp_21[2U] = (0x40U | ((0x20000000U & ((IData)(vlSelf->top__DOT___7077_) 
                                               << 0x14U)) 
                               | ((0x18000000U & vlSelf->top__DOT___3816_[0U]) 
                                  | ((0x4000000U & 
                                      ((IData)(vlSelf->top__DOT___7077_) 
                                       << 0x14U)) | 
                                     ((0x2000000U & 
                                       ((IData)(vlSelf->top__DOT___7077_) 
                                        << 0x14U)) 
                                      | ((0x1c00000U 
                                          & vlSelf->top__DOT___3816_[0U]) 
                                         | ((0x200000U 
                                             & ((IData)(vlSelf->top__DOT___7077_) 
                                                << 0x14U)) 
                                            | ((0x100000U 
                                                & vlSelf->top__DOT___3816_[0U]) 
                                               | (((IData)(vlSelf->top__DOT___1836_) 
                                                   << 0x13U) 
                                                  | ((0x40000U 
                                                      & ((IData)(vlSelf->top__DOT___4783_) 
                                                         << 5U)) 
                                                     | (((IData)(vlSelf->top__DOT___2414_) 
                                                         << 0x11U) 
                                                        | ((0xfe00U 
                                                            & ((IData)(vlSelf->top__DOT___4783_) 
                                                               << 4U)) 
                                                           | ((0x80U 
                                                               & ((IData)(vlSelf->top__DOT___4783_) 
                                                                  << 3U)) 
                                                              | __Vtemp_6[2U])))))))))))));
    vlSelf->top__DOT___3825_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___3825_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___3825_[2U] = ((0xc0000000U & 
                                     vlSelf->top__DOT___3816_[0U]) 
                                    | __Vtemp_21[2U]);
    vlSelf->top__DOT___3825_[3U] = ((0x3feU & vlSelf->top__DOT___3825_[3U]) 
                                    | (1U & vlSelf->top__DOT___3816_[1U]));
    __VdfgTmp_h3c3cdf81__0 = (((0xf000U & (vlSelf->top__DOT___3825_[1U] 
                                           >> 8U)) 
                               | (((IData)(vlSelf->top__DOT___3740_) 
                                   << 0xbU) | (0x600U 
                                               & (vlSelf->top__DOT___3825_[1U] 
                                                  >> 8U)))) 
                              | (((IData)(vlSelf->top__DOT___3766_) 
                                  << 8U) | ((0xf8U 
                                             & (vlSelf->top__DOT___3825_[1U] 
                                                >> 8U)) 
                                            | (((IData)(vlSelf->top__DOT___0309_) 
                                                << 2U) 
                                               | (((IData)(vlSelf->top__DOT___2539_) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT___1881_))))));
    vlSelf->top__DOT___0668_ = (1U & (((((IData)(vlSelf->top__DOT___0806_) 
                                         << 6U) | (
                                                   (0x38U 
                                                    & (vlSelf->top__DOT___3825_[1U] 
                                                       >> 0x19U)) 
                                                   | (((IData)(vlSelf->top__DOT___3580_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___3457_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___1590_))))) 
                                       + ((0x78U & vlSelf->top__DOT___3945_) 
                                          | (((IData)(vlSelf->top__DOT___2841_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___2000_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1252_))))) 
                                      >> 6U));
    vlSelf->top__DOT___2376_ = (1U & (((((IData)(vlSelf->top__DOT___3491_) 
                                         << 8U) | (
                                                   (0x80U 
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
                                                               | (IData)(vlSelf->top__DOT___1590_))))))) 
                                       + ((0x1f8U & vlSelf->top__DOT___3945_) 
                                          | (((IData)(vlSelf->top__DOT___2841_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___2000_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1252_))))) 
                                      >> 8U));
    vlSelf->top__DOT___3946_ = ((0x10000U & ((IData)(vlSelf->top__DOT___7034_) 
                                             << 9U)) 
                                | ((0x8000U & ((IData)(vlSelf->top__DOT___7034_) 
                                               << 9U)) 
                                   | ((0x4000U & ((IData)(vlSelf->top__DOT___7034_) 
                                                  << 9U)) 
                                      | ((0x2000U & 
                                          ((IData)(vlSelf->top__DOT___7034_) 
                                           << 9U)) 
                                         | ((0x1000U 
                                             & ((IData)(vlSelf->top__DOT___7034_) 
                                                << 9U)) 
                                            | ((0xe00U 
                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                   << 9U)) 
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
                                                                 | (IData)(vlSelf->top__DOT___1590_)))))))))))));
    vlSelf->top__DOT____VdfgTmp_he9253338__0 = (((IData)(vlSelf->top__DOT___2368_) 
                                                 << 0x10U) 
                                                | (IData)(__VdfgTmp_h3c3cdf81__0));
    vlSelf->top__DOT___3228_ = (1U & ((((0x1000U & 
                                         ((IData)(vlSelf->top__DOT___7034_) 
                                          << 9U)) | 
                                        ((0xe00U & vlSelf->top__DOT___3946_) 
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
                                                           | (IData)(vlSelf->top__DOT___1590_))))))))) 
                                       + ((0x1ff8U 
                                           & vlSelf->top__DOT___3945_) 
                                          | (((IData)(vlSelf->top__DOT___2841_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___2000_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1252_))))) 
                                      >> 0xcU));
    vlSelf->top__DOT___1682_ = (1U & ((((0x400U & (vlSelf->top__DOT___3946_ 
                                                   << 1U)) 
                                        | (((IData)(vlSelf->top__DOT___1304_) 
                                            << 9U) 
                                           | (((IData)(vlSelf->top__DOT___1796_) 
                                               << 8U) 
                                              | (((IData)(vlSelf->top__DOT___0023_) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->top__DOT___0604_) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->top__DOT___0293_) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->top__DOT___0186_) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT___1672_) 
                                                              << 2U) 
                                                             | (IData)(vlSelf->top__DOT___0148_))))))))) 
                                       + ((0x400U & 
                                           ((IData)(vlSelf->top__DOT___7172_) 
                                            << 2U)) 
                                          | (((IData)(vlSelf->top__DOT___0571_) 
                                              << 9U) 
                                             | (((IData)(vlSelf->top__DOT___0699_) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->top__DOT___1783_) 
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
                                                                     | (IData)(vlSelf->top__DOT___0119_)))))))))))) 
                                      >> 0xaU));
    vlSelf->top__DOT___2084_ = (1U & (((((IData)(vlSelf->top__DOT___0020_) 
                                         << 0xbU) | 
                                        (((IData)(vlSelf->top__DOT___1792_) 
                                          << 0xaU) 
                                         | (((IData)(vlSelf->top__DOT___1343_) 
                                             << 9U) 
                                            | ((0x100U 
                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                   << 1U)) 
                                               | ((0x80U 
                                                   & (vlSelf->top__DOT___3946_ 
                                                      >> 8U)) 
                                                  | ((0x40U 
                                                      & ((IData)(vlSelf->top__DOT___7034_) 
                                                         << 1U)) 
                                                     | ((0x20U 
                                                         & (vlSelf->top__DOT___3946_ 
                                                            >> 8U)) 
                                                        | ((0x10U 
                                                            & ((IData)(vlSelf->top__DOT___7034_) 
                                                               << 1U)) 
                                                           | ((0xeU 
                                                               & (vlSelf->top__DOT___3946_ 
                                                                  >> 8U)) 
                                                              | (IData)(vlSelf->top__DOT___0122_)))))))))) 
                                       + (((IData)(vlSelf->top__DOT___0198_) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->top__DOT___1322_) 
                                              << 0xbU) 
                                             | ((0x700U 
                                                 & ((IData)(
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
                                                               | (IData)(vlSelf->top__DOT___3354_)))))))))) 
                                      >> 0xbU));
    vlSelf->top__DOT___3944_ = ((0x1e000U & (((0x10000U 
                                               & ((IData)(vlSelf->top__DOT___7034_) 
                                                  << 9U)) 
                                              | ((0x8000U 
                                                  & vlSelf->top__DOT___3946_) 
                                                 | ((0x4000U 
                                                     & ((IData)(vlSelf->top__DOT___7034_) 
                                                        << 9U)) 
                                                    | ((0x2000U 
                                                        & vlSelf->top__DOT___3946_) 
                                                       | ((0x1000U 
                                                           & ((IData)(vlSelf->top__DOT___7034_) 
                                                              << 9U)) 
                                                          | ((0xe00U 
                                                              & vlSelf->top__DOT___3946_) 
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
                                                                               | (IData)(vlSelf->top__DOT___1590_))))))))))))) 
                                             + ((0x1fff8U 
                                                 & vlSelf->top__DOT___3945_) 
                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___2000_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1252_)))))) 
                                | (((IData)(vlSelf->top__DOT___3228_) 
                                    << 0xcU) | ((0xe00U 
                                                 & (((0xe00U 
                                                      & vlSelf->top__DOT___3946_) 
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
                                                                       | (IData)(vlSelf->top__DOT___1590_)))))))) 
                                                    + 
                                                    ((0xff8U 
                                                      & vlSelf->top__DOT___3945_) 
                                                     | (((IData)(vlSelf->top__DOT___2841_) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->top__DOT___2000_) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top__DOT___1252_)))))) 
                                                | (((IData)(vlSelf->top__DOT___2376_) 
                                                    << 8U) 
                                                   | ((0x80U 
                                                       & (((0x80U 
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
                                                                       | (IData)(vlSelf->top__DOT___1590_)))))) 
                                                          + 
                                                          ((0xf8U 
                                                            & vlSelf->top__DOT___3945_) 
                                                           | (((IData)(vlSelf->top__DOT___2841_) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->top__DOT___2000_) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->top__DOT___1252_)))))) 
                                                      | (((IData)(vlSelf->top__DOT___0668_) 
                                                          << 6U) 
                                                         | ((0x3eU 
                                                             & (((0x38U 
                                                                  & (vlSelf->top__DOT___3825_[1U] 
                                                                     >> 0x19U)) 
                                                                 | (((IData)(vlSelf->top__DOT___3580_) 
                                                                     << 2U) 
                                                                    | (((IData)(vlSelf->top__DOT___3457_) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->top__DOT___1590_)))) 
                                                                + 
                                                                ((0x38U 
                                                                  & vlSelf->top__DOT___3945_) 
                                                                 | (((IData)(vlSelf->top__DOT___2841_) 
                                                                     << 2U) 
                                                                    | (((IData)(vlSelf->top__DOT___2000_) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->top__DOT___1252_)))))) 
                                                            | (IData)(vlSelf->top__DOT___2726_))))))));
    vlSelf->top__DOT___1037_ = (1U & (~ (((IData)(vlSelf->top__DOT___2007_) 
                                          & (IData)(vlSelf->top__DOT___0056_)) 
                                         | ((IData)(vlSelf->top__DOT___0406_) 
                                            & (IData)(vlSelf->top__DOT___1682_)))));
    vlSelf->top__DOT___2083_ = (1U & (~ (((((IData)(vlSelf->top__DOT___7199_) 
                                            >> 1U) 
                                           | (IData)(vlSelf->top__DOT___0807_)) 
                                          & (IData)(vlSelf->top__DOT___2085_)) 
                                         | (IData)(vlSelf->top__DOT___2084_))));
    top__DOT____VdfgTmp_h774b1fa4__0 = (((IData)(vlSelf->top__DOT___2005_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___1037_) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_hf6eb1abe__0)));
    vlSelf->top__DOT____VdfgTmp_h5c725b48__0 = (3U 
                                                & (((IData)(top__DOT____VdfgTmp_h774b1fa4__0) 
                                                    + (IData)(vlSelf->top__DOT____VdfgTmp_ha0fff7f8__0)) 
                                                   >> 2U));
    vlSelf->top__DOT____VdfgTmp_h152e4ad9__0 = (0x3fU 
                                                & ((((0x7e0U 
                                                      & (vlSelf->top__DOT___3840_[1U] 
                                                         >> 1U)) 
                                                     | (((IData)(vlSelf->top__DOT___1042_) 
                                                         << 4U) 
                                                        | (IData)(top__DOT____VdfgTmp_h774b1fa4__0))) 
                                                    + 
                                                    (0x3d0U 
                                                     | (IData)(vlSelf->top__DOT____VdfgTmp_ha0fff7f8__0))) 
                                                   >> 5U));
    vlSelf->top__DOT___3961_ = (((IData)(vlSelf->top__DOT____VdfgTmp_h152e4ad9__0) 
                                 << 5U) | (((IData)(vlSelf->top__DOT___2023_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT____VdfgTmp_h5c725b48__0) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___2269_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT____VdfgTmp_h75a7dafe__0)))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__319(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__319\n"); );
    // Body
    vlSelf->top__DOT___4290_ = ((0x1ffff00000ULL & vlSelf->top__DOT___4290_) 
                                | (IData)((IData)((
                                                   ((IData)(vlSelf->top__DOT___0474_) 
                                                    << 0x13U) 
                                                   | (((IData)(vlSelf->top__DOT___0500_) 
                                                       << 0x12U) 
                                                      | ((0x3c000U 
                                                          & (vlSelf->top__DOT___3944_ 
                                                             << 1U)) 
                                                         | (((IData)(vlSelf->top__DOT___3228_) 
                                                             << 0xdU) 
                                                            | ((0x1c00U 
                                                                & (vlSelf->top__DOT___3944_ 
                                                                   << 1U)) 
                                                               | (((IData)(vlSelf->top__DOT___2376_) 
                                                                   << 9U) 
                                                                  | ((0x100U 
                                                                      & (vlSelf->top__DOT___3944_ 
                                                                         << 1U)) 
                                                                     | (((IData)(vlSelf->top__DOT___0668_) 
                                                                         << 7U) 
                                                                        | ((0x7cU 
                                                                            & (vlSelf->top__DOT___3944_ 
                                                                               << 1U)) 
                                                                           | (((IData)(vlSelf->top__DOT___2726_) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->top__DOT___1973_))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__378(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__378\n"); );
    // Init
    CData/*0:0*/ top__DOT___1794_;
    top__DOT___1794_ = 0;
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
    vlSelf->top__DOT___3251_ = (1U & (((((IData)(vlSelf->top__DOT___2288_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___0191_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0719_))) 
                                       + ((6U & (vlSelf->top__DOT___4057_[1U] 
                                                 >> 0x15U)) 
                                          | (IData)(vlSelf->top__DOT___0107_))) 
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
    vlSelf->top__DOT___0350_ = (1U & (~ (((IData)(vlSelf->top__DOT___2618_) 
                                          & (IData)(vlSelf->top__DOT___0931_)) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT___7165_ 
                                                     >> 1U)) 
                                            & (IData)(vlSelf->top__DOT___2616_)))));
    vlSelf->top__DOT___1858_ = ((IData)(vlSelf->top__DOT___1860_) 
                                & (IData)(vlSelf->top__DOT___1859_));
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
    vlSelf->top__DOT___4264_[0U] = ((0xfffffffbU & 
                                     vlSelf->top__DOT___4264_[0U]) 
                                    | ((IData)(vlSelf->top__DOT___3251_) 
                                       << 2U));
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
    vlSelf->top__DOT___0847_ = (1U & (~ (((vlSelf->top__DOT___7042_ 
                                           >> 4U) & 
                                          ((vlSelf->top__DOT___6998_[0U] 
                                            >> 5U) 
                                           & (vlSelf->top__DOT___7027_ 
                                              >> 3U))) 
                                         | (IData)(vlSelf->top__DOT___0405_))));
}
