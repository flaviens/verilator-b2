// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__232(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__232\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_24;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & 
                                               (vlSelf->top__DOT___3651_[0U] 
                                                >> 0x19U)))) 
                              << 0x3cU) | (((QData)((IData)(
                                                            (7U 
                                                             & (vlSelf->top__DOT___2082_ 
                                                                >> 0xfU)))) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               (3U 
                                                                & (vlSelf->top__DOT___3651_[0U] 
                                                                   >> 0x14U)))) 
                                               << 0x37U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT___3651_[0U] 
                                                                      >> 0x13U)))) 
                                                  << 0x36U) 
                                                 | (((QData)((IData)(
                                                                     (0x1ffU 
                                                                      & (vlSelf->top__DOT___3651_[0U] 
                                                                         >> 0xaU)))) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT___3651_[0U] 
                                                                            >> 9U)))) 
                                                        << 0x2cU) 
                                                       | (((QData)((IData)(
                                                                           (0xfU 
                                                                            & (vlSelf->top__DOT___3651_[0U] 
                                                                               >> 5U)))) 
                                                           << 0x28U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->top__DOT___3651_[0U] 
                                                                                >> 4U)))) 
                                                              << 0x27U) 
                                                             | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & vlSelf->top__DOT___3651_[0U]))) 
                                                                 << 0x23U) 
                                                                | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 0x12U)))) 
                                                                    << 0x19U) 
                                                                   | (QData)((IData)(
                                                                                ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U)) 
                                                                                << 0x18U)) 
                                                                                | ((0xe00000U 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                << 7U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0391_) 
                                                                                << 0x12U) 
                                                                                | ((0x3fc00U 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 8U)) 
                                                                                << 9U)) 
                                                                                | ((0x1c0U 
                                                                                & ((vlSelf->top__DOT___2000_[1U] 
                                                                                << 7U) 
                                                                                | (0x40U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 0x19U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 0x19U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___3769_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0106_)))))))))))))))))))))))));
    __Vtemp_1[1U] = ((0xe0000000U & (vlSelf->top__DOT___2082_ 
                                     << 0xaU)) | (IData)(
                                                         ((((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->top__DOT___3651_[0U] 
                                                                                >> 0x19U)))) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               (7U 
                                                                                & (vlSelf->top__DOT___2082_ 
                                                                                >> 0xfU)))) 
                                                               << 0x39U) 
                                                              | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3651_[0U] 
                                                                                >> 0x14U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3651_[0U] 
                                                                                >> 0x13U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0x1ffU 
                                                                                & (vlSelf->top__DOT___3651_[0U] 
                                                                                >> 0xaU)))) 
                                                                        << 0x2dU) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3651_[0U] 
                                                                                >> 9U)))) 
                                                                           << 0x2cU) 
                                                                          | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT___3651_[0U] 
                                                                                >> 5U)))) 
                                                                              << 0x28U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3651_[0U] 
                                                                                >> 4U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & vlSelf->top__DOT___3651_[0U]))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x19U) 
                                                                                | (QData)((IData)(
                                                                                ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x17U)) 
                                                                                << 0x18U)) 
                                                                                | ((0xe00000U 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                << 7U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 0x12U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0391_) 
                                                                                << 0x12U) 
                                                                                | ((0x3fc00U 
                                                                                & (vlSelf->top__DOT___2000_[1U] 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 8U)) 
                                                                                << 9U)) 
                                                                                | ((0x1c0U 
                                                                                & ((vlSelf->top__DOT___2000_[1U] 
                                                                                << 7U) 
                                                                                | (0x40U 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 0x19U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3769_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___2000_[0U] 
                                                                                >> 0x19U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___3769_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0106_)))))))))))))))))))))))) 
                                                          >> 0x20U)));
    __Vtemp_11[2U] = ((0x7c000000U & (vlSelf->top__DOT___2035_ 
                                      << 7U)) | ((0x2000000U 
                                                  & (vlSelf->top__DOT___3651_[1U] 
                                                     << 3U)) 
                                                 | ((0x1000000U 
                                                     & (vlSelf->top__DOT___3651_[1U] 
                                                        << 3U)) 
                                                    | ((0x800000U 
                                                        & (vlSelf->top__DOT___2035_ 
                                                           << 7U)) 
                                                       | ((0x400000U 
                                                           & (vlSelf->top__DOT___3651_[1U] 
                                                              << 3U)) 
                                                          | ((0x3ffe00U 
                                                              & (vlSelf->top__DOT___2035_ 
                                                                 << 7U)) 
                                                             | ((0x1e0U 
                                                                 & (vlSelf->top__DOT___2082_ 
                                                                    >> 0x16U)) 
                                                                | ((0x10U 
                                                                    & (vlSelf->top__DOT___3651_[1U] 
                                                                       << 3U)) 
                                                                   | ((0xcU 
                                                                       & (vlSelf->top__DOT___2082_ 
                                                                          >> 0x16U)) 
                                                                      | ((2U 
                                                                          & (vlSelf->top__DOT___3651_[0U] 
                                                                             >> 0x1dU)) 
                                                                         | (1U 
                                                                            & (vlSelf->top__DOT___2082_ 
                                                                               >> 0x16U))))))))))));
    __Vtemp_24[3U] = ((0x60000U & ((IData)((vlSelf->top__DOT___1893_ 
                                            >> 4U)) 
                                   << 0x11U)) | ((0x10000U 
                                                  & ((IData)(vlSelf->top__DOT___3647_) 
                                                     << 0xdU)) 
                                                 | ((0x8000U 
                                                     & ((IData)(vlSelf->top__DOT___3647_) 
                                                        << 0xdU)) 
                                                    | ((0x4000U 
                                                        & ((IData)(vlSelf->top__DOT___3647_) 
                                                           << 0xdU)) 
                                                       | ((0x2000U 
                                                           & ((IData)(vlSelf->top__DOT___3647_) 
                                                              << 0xdU)) 
                                                          | (((IData)(vlSelf->top__DOT___0287_) 
                                                              << 0xcU) 
                                                             | (((IData)(vlSelf->top__DOT___0226_) 
                                                                 << 0xbU) 
                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                    << 0xaU) 
                                                                   | (((IData)(vlSelf->top__DOT___0304_) 
                                                                       << 9U) 
                                                                      | (((IData)(vlSelf->top__DOT___0205_) 
                                                                          << 8U) 
                                                                         | ((0x20U 
                                                                             & (vlSelf->top__DOT___3651_[2U] 
                                                                                << 3U)) 
                                                                            | (0x1fU 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___2105_ 
                                                                                >> 0x26U)) 
                                                                                >> 1U)))))))))))));
    vlSelf->top__DOT___2169_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___2169_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2169_[2U] = (((IData)((vlSelf->top__DOT___2105_ 
                                              >> 0x26U)) 
                                     << 0x1fU) | __Vtemp_11[2U]);
    vlSelf->top__DOT___2169_[3U] = (0x4000000U | ((0xe0000000U 
                                                   & (vlSelf->top__DOT___2112_[0U] 
                                                      << 0x1cU)) 
                                                  | (((IData)(vlSelf->top__DOT___1203_) 
                                                      << 0x1cU) 
                                                     | ((0x1000000U 
                                                         & ((IData)(vlSelf->top__DOT___3647_) 
                                                            << 0xdU)) 
                                                        | ((0xf00000U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT___1893_ 
                                                                        >> 7U)) 
                                                               << 0x14U)) 
                                                           | ((0x80000U 
                                                               & ((IData)(vlSelf->top__DOT___3647_) 
                                                                  << 0xdU)) 
                                                              | __Vtemp_24[3U]))))));
    vlSelf->top__DOT___2169_[4U] = ((0xff000000U & 
                                     ((vlSelf->top__DOT___2112_[1U] 
                                       << 0x1cU) | 
                                      (0xf000000U & 
                                       (vlSelf->top__DOT___2112_[0U] 
                                        >> 4U)))) | 
                                    (((IData)(vlSelf->top__DOT___1666_) 
                                      << 0x17U) | (
                                                   (0x7ff800U 
                                                    & (vlSelf->top__DOT___2112_[0U] 
                                                       >> 4U)) 
                                                   | (((IData)(vlSelf->top__DOT___0262_) 
                                                       << 0xaU) 
                                                      | ((0x300U 
                                                          & (vlSelf->top__DOT___2112_[0U] 
                                                             >> 4U)) 
                                                         | (((IData)(vlSelf->top__DOT___1604_) 
                                                             << 7U) 
                                                            | ((0x7cU 
                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                   >> 4U)) 
                                                               | (((IData)(vlSelf->top__DOT___0410_) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & (vlSelf->top__DOT___2112_[0U] 
                                                                        >> 4U))))))))));
    vlSelf->top__DOT___2169_[5U] = ((0x380U & (vlSelf->top__DOT___1972_ 
                                               >> 4U)) 
                                    | (0x7fU & (vlSelf->top__DOT___2112_[1U] 
                                                >> 4U)));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__233(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__233\n"); );
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__234(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__234\n"); );
    // Body
    vlSelf->top__DOT___2221_[1U] = ((0xffff000fU & 
                                     vlSelf->top__DOT___2221_[1U]) 
                                    | (0xfffffff0U 
                                       & (((IData)(vlSelf->top__DOT___0221_) 
                                           << 0xfU) 
                                          | (((IData)(vlSelf->top__DOT___1233_) 
                                              << 0xdU) 
                                             | (((IData)(vlSelf->top__DOT___1031_) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->top__DOT___0265_) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->top__DOT___1436_) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->top__DOT___0562_) 
                                                          << 9U) 
                                                         | (((IData)(vlSelf->top__DOT___0369_) 
                                                             << 8U) 
                                                            | (((IData)(vlSelf->top__DOT___1805_) 
                                                                << 7U) 
                                                               | ((0x40U 
                                                                   & (((((IData)(vlSelf->top__DOT___0135_) 
                                                                         << 2U) 
                                                                        | (IData)(vlSelf->top__DOT____VdfgTmp_h6e09a4df__0)) 
                                                                       + 
                                                                       ((6U 
                                                                         & (IData)(vlSelf->top__DOT___2010_)) 
                                                                        | (IData)(vlSelf->top__DOT___0240_))) 
                                                                      << 4U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSelf->top__DOT____VdfgTmp_h6e09a4df__0) 
                                                                          + 
                                                                          ((2U 
                                                                            & (IData)(vlSelf->top__DOT___2010_)) 
                                                                           | (IData)(vlSelf->top__DOT___0240_))) 
                                                                         << 4U)) 
                                                                     | ((IData)(vlSelf->top__DOT___1807_) 
                                                                        << 4U)))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__235(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__235\n"); );
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
    vlSelf->top__DOT___1095_ = (1U & (~ (((IData)(vlSelf->top__DOT___0692_) 
                                          & (vlSelf->top__DOT___3653_[1U] 
                                             >> 2U)) 
                                         | (IData)(vlSelf->top__DOT___1096_))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__236(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__236\n"); );
    // Body
    vlSelf->top__DOT___0342_ = (1U & (~ (((IData)(vlSelf->top__DOT___0052_) 
                                          & (IData)(vlSelf->top__DOT___1339_)) 
                                         | ((IData)(vlSelf->top__DOT___0247_) 
                                            & ((IData)(vlSelf->top__DOT___0650_) 
                                               + (IData)(vlSelf->top__DOT___0354_))))));
    vlSelf->top__DOT___0341_ = ((IData)(vlSelf->top__DOT___0342_) 
                                & (~ (IData)(vlSelf->top__DOT___0214_)));
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
    vlSelf->top__DOT___0969_ = (1U & (((((IData)(vlSelf->top__DOT___0995_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0342_)) 
                                       + (((IData)(vlSelf->top__DOT___0348_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0149_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__237(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__237\n"); );
    // Body
    vlSelf->top__DOT___1801_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0x3ffffffU 
                                                                     & vlSelf->top__DOT___1999_[1U]))) 
                                                    << 0x12U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1303_) 
                                                                       << 0x11U) 
                                                                      | ((0x1fff0U 
                                                                          & (vlSelf->top__DOT___1999_[0U] 
                                                                             >> 0xeU)) 
                                                                         | (((IData)(vlSelf->top__DOT___0620_) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 2U) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0217_))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xfff00000U 
                                                                      & (vlSelf->top__DOT___1952_[1U] 
                                                                         << 7U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1232_) 
                                                                         << 0x13U) 
                                                                        | (((IData)(vlSelf->top__DOT___1494_) 
                                                                            << 0x12U) 
                                                                           | ((0x20000U 
                                                                               & (vlSelf->top__DOT___1952_[1U] 
                                                                                << 7U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0803_) 
                                                                                << 0x10U) 
                                                                                | (0xffffU 
                                                                                & ((vlSelf->top__DOT___1952_[1U] 
                                                                                << 7U) 
                                                                                | (vlSelf->top__DOT___1952_[0U] 
                                                                                >> 0x19U)))))))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
                                                                       & (vlSelf->top__DOT___1966_[0U] 
                                                                          << 7U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0818_) 
                                                                          << 0xaU) 
                                                                         | ((0x200U 
                                                                             & (vlSelf->top__DOT___1966_[0U] 
                                                                                << 7U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0357_) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->top__DOT___0988_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 1U))))))))))))))) 
                                                 >> 0x2bU))));
    vlSelf->top__DOT___1440_ = (1U & (IData)((0x7ffffffULL 
                                              & (((((QData)((IData)(
                                                                    (0x1ffffffU 
                                                                     & vlSelf->top__DOT___1999_[1U]))) 
                                                    << 0x12U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1303_) 
                                                                       << 0x11U) 
                                                                      | ((0x1fff0U 
                                                                          & (vlSelf->top__DOT___1999_[0U] 
                                                                             >> 0xeU)) 
                                                                         | (((IData)(vlSelf->top__DOT___0620_) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 2U) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0217_))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xffe00000U 
                                                                      & (vlSelf->top__DOT___1952_[1U] 
                                                                         << 8U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1232_) 
                                                                         << 0x14U) 
                                                                        | (((IData)(vlSelf->top__DOT___1494_) 
                                                                            << 0x13U) 
                                                                           | ((0x40000U 
                                                                               & (vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0803_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fffeU 
                                                                                & ((vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U) 
                                                                                | (0xfeU 
                                                                                & (vlSelf->top__DOT___1952_[0U] 
                                                                                >> 0x18U)))) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___1966_[0U] 
                                                                                >> 4U)))))))))) 
                                                    << 0xbU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0818_) 
                                                                       << 0xaU) 
                                                                      | ((0x200U 
                                                                          & (vlSelf->top__DOT___1966_[0U] 
                                                                             << 7U)) 
                                                                         | (((IData)(vlSelf->top__DOT___0357_) 
                                                                             << 8U) 
                                                                            | (((IData)(vlSelf->top__DOT___0988_) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 1U)))))))))))))) 
                                                 >> 0x10U))));
    vlSelf->top__DOT___1012_ = (1U & (IData)((0x3fffULL 
                                              & (((((QData)((IData)(
                                                                    (0x1ffffffU 
                                                                     & vlSelf->top__DOT___1999_[1U]))) 
                                                    << 0x12U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1303_) 
                                                                       << 0x11U) 
                                                                      | ((0x1fff0U 
                                                                          & (vlSelf->top__DOT___1999_[0U] 
                                                                             >> 0xeU)) 
                                                                         | (((IData)(vlSelf->top__DOT___0620_) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 2U) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0217_))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xffe00000U 
                                                                      & (vlSelf->top__DOT___1952_[1U] 
                                                                         << 8U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1232_) 
                                                                         << 0x14U) 
                                                                        | (((IData)(vlSelf->top__DOT___1494_) 
                                                                            << 0x13U) 
                                                                           | ((0x40000U 
                                                                               & (vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0803_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fffeU 
                                                                                & ((vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U) 
                                                                                | (0xfeU 
                                                                                & (vlSelf->top__DOT___1952_[0U] 
                                                                                >> 0x18U)))) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___1966_[0U] 
                                                                                >> 4U)))))))))) 
                                                    << 0xbU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0818_) 
                                                                       << 0xaU) 
                                                                      | ((0x200U 
                                                                          & (vlSelf->top__DOT___1966_[0U] 
                                                                             << 7U)) 
                                                                         | (((IData)(vlSelf->top__DOT___0357_) 
                                                                             << 8U) 
                                                                            | (((IData)(vlSelf->top__DOT___0988_) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 1U)))))))))))))) 
                                                 >> 0x1dU))));
    vlSelf->top__DOT___1357_ = (1U & (IData)((0x1ffffffULL 
                                              & (((((QData)((IData)(
                                                                    (0x1ffffffU 
                                                                     & vlSelf->top__DOT___1999_[1U]))) 
                                                    << 0x12U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1303_) 
                                                                       << 0x11U) 
                                                                      | ((0x1fff0U 
                                                                          & (vlSelf->top__DOT___1999_[0U] 
                                                                             >> 0xeU)) 
                                                                         | (((IData)(vlSelf->top__DOT___0620_) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 2U) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0217_))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xffe00000U 
                                                                      & (vlSelf->top__DOT___1952_[1U] 
                                                                         << 8U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1232_) 
                                                                         << 0x14U) 
                                                                        | (((IData)(vlSelf->top__DOT___1494_) 
                                                                            << 0x13U) 
                                                                           | ((0x40000U 
                                                                               & (vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0803_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fffeU 
                                                                                & ((vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U) 
                                                                                | (0xfeU 
                                                                                & (vlSelf->top__DOT___1952_[0U] 
                                                                                >> 0x18U)))) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___1966_[0U] 
                                                                                >> 4U)))))))))) 
                                                    << 0xbU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0818_) 
                                                                       << 0xaU) 
                                                                      | ((0x200U 
                                                                          & (vlSelf->top__DOT___1966_[0U] 
                                                                             << 7U)) 
                                                                         | (((IData)(vlSelf->top__DOT___0357_) 
                                                                             << 8U) 
                                                                            | (((IData)(vlSelf->top__DOT___0988_) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 1U)))))))))))))) 
                                                 >> 0x12U))));
    vlSelf->top__DOT___1439_ = (1U & (~ (((IData)(vlSelf->top__DOT___1345_) 
                                          & (IData)(vlSelf->top__DOT___0287_)) 
                                         | (((IData)(vlSelf->top__DOT___0730_) 
                                             & (IData)(vlSelf->top__DOT___0565_)) 
                                            & (IData)(vlSelf->top__DOT___1440_)))));
    vlSelf->top__DOT___0503_ = (1U & (~ (((IData)(vlSelf->top__DOT___0801_) 
                                          & (IData)(vlSelf->top__DOT___1012_)) 
                                         | (IData)(vlSelf->top__DOT___0057_))));
    vlSelf->top__DOT___1356_ = (1U & (~ ((IData)(vlSelf->top__DOT___0175_) 
                                         | ((IData)(vlSelf->top__DOT___1357_) 
                                            & (IData)(vlSelf->top__DOT___0032_)))));
    vlSelf->top__DOT___0083_ = (1U & (~ (((IData)(vlSelf->top__DOT___0503_) 
                                          & (IData)(vlSelf->top__DOT___0565_)) 
                                         | (IData)(vlSelf->top__DOT___0434_))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__238(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__238\n"); );
    // Body
    vlSelf->top__DOT___2136_ = (0x1ffU & (((0x1c0U 
                                            & (vlSelf->top__DOT___1999_[3U] 
                                               << 1U)) 
                                           | (((IData)(vlSelf->top__DOT___0024_) 
                                               << 5U) 
                                              | (((IData)(vlSelf->top__DOT___0745_) 
                                                  << 4U) 
                                                 | ((8U 
                                                     & (((~ (IData)(vlSelf->top__DOT___0599_)) 
                                                         | (IData)(vlSelf->top__DOT___0059_)) 
                                                        << 3U)) 
                                                    | ((4U 
                                                        & ((~ (IData)(vlSelf->top__DOT___0309_)) 
                                                           << 2U)) 
                                                       | (IData)(vlSelf->top__DOT___1342_)))))) 
                                          + ((0x100U 
                                              & vlSelf->top__DOT___2101_[1U]) 
                                             | ((0x80U 
                                                 & (vlSelf->top__DOT___3684_ 
                                                    >> 6U)) 
                                                | ((0x7cU 
                                                    & vlSelf->top__DOT___2101_[1U]) 
                                                   | ((2U 
                                                       & (vlSelf->top__DOT___3684_ 
                                                          >> 6U)) 
                                                      | (1U 
                                                         & vlSelf->top__DOT___2101_[1U])))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__239(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__239\n"); );
    // Body
    vlSelf->top__DOT___1901_[1U] = ((0xfffffffU & vlSelf->top__DOT___1901_[1U]) 
                                    | (0xf0000000U 
                                       & ((0x80000000U 
                                           & ((((0x20U 
                                                 & ((IData)(vlSelf->top__DOT___2023_) 
                                                    >> 2U)) 
                                                | (((IData)(vlSelf->top__DOT___0327_) 
                                                    << 4U) 
                                                   | (0xfU 
                                                      & ((IData)(vlSelf->top__DOT___2023_) 
                                                         >> 2U)))) 
                                               + ((0x30U 
                                                   & (vlSelf->top__DOT___1999_[2U] 
                                                      >> 0xeU)) 
                                                  | (((IData)(vlSelf->top__DOT___0166_) 
                                                      << 3U) 
                                                     | ((4U 
                                                         & ((~ (IData)(vlSelf->top__DOT___0162_)) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & (vlSelf->top__DOT___3751_ 
                                                               >> 0xdU)) 
                                                           | (IData)(vlSelf->top__DOT___0134_)))))) 
                                              << 0x1dU)) 
                                          | (((IData)(vlSelf->top__DOT___1575_) 
                                              << 0x1eU) 
                                             | ((0x20000000U 
                                                 & ((((IData)(vlSelf->top__DOT___2023_) 
                                                      >> 2U) 
                                                     + (IData)(vlSelf->top__DOT___0134_)) 
                                                    << 0x1dU)) 
                                                | ((IData)(vlSelf->top__DOT___1370_) 
                                                   << 0x1cU))))));
    vlSelf->top__DOT___1901_[2U] = (0x7fffffU & ((0x7ffc00U 
                                                  & ((IData)(
                                                             (0x7fffffffULL 
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
                                                                 >> 0x12U))) 
                                                     << 0xaU)) 
                                                 | ((0xffffe00U 
                                                     & ((IData)(vlSelf->top__DOT___0107_) 
                                                        << 9U)) 
                                                    | ((0x1c0U 
                                                        & ((((0x10000U 
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
                                                                                << 1U))))))))))) 
                                                            + 
                                                            ((0x1f800U 
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
                                                                                | (IData)(vlSelf->top__DOT___0609_)))))))))) 
                                                           >> 8U)) 
                                                       | ((0xfffffe0U 
                                                           & ((IData)(vlSelf->top__DOT___0465_) 
                                                              << 5U)) 
                                                          | ((0xffffff0U 
                                                              & ((IData)(vlSelf->top__DOT___0082_) 
                                                                 << 4U)) 
                                                             | ((0xffffff8U 
                                                                 & ((IData)(vlSelf->top__DOT___0092_) 
                                                                    << 3U)) 
                                                                | ((7U 
                                                                    & ((((0x20U 
                                                                          & ((IData)(vlSelf->top__DOT___2023_) 
                                                                             >> 2U)) 
                                                                         | (((IData)(vlSelf->top__DOT___0327_) 
                                                                             << 4U) 
                                                                            | (0xfU 
                                                                               & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                >> 2U)))) 
                                                                        + 
                                                                        ((0x30U 
                                                                          & (vlSelf->top__DOT___1999_[2U] 
                                                                             >> 0xeU)) 
                                                                         | (((IData)(vlSelf->top__DOT___0166_) 
                                                                             << 3U) 
                                                                            | ((4U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0162_)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & (vlSelf->top__DOT___3751_ 
                                                                                >> 0xdU)) 
                                                                                | (IData)(vlSelf->top__DOT___0134_)))))) 
                                                                       >> 3U)) 
                                                                   | ((0xfffffffU 
                                                                       & ((IData)(vlSelf->top__DOT___1575_) 
                                                                          >> 2U)) 
                                                                      | ((IData)(vlSelf->top__DOT___1370_) 
                                                                         >> 4U))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__240(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__240\n"); );
    // Body
    vlSelf->top__DOT___1115_ = (1U & ((((0x7f0U & (
                                                   vlSelf->top__DOT___1999_[0U] 
                                                   >> 0xeU)) 
                                        | (((IData)(vlSelf->top__DOT___0620_) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT___0134_) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->top__DOT___0217_))))) 
                                       + (((IData)(vlSelf->top__DOT___0818_) 
                                           << 0xaU) 
                                          | ((0x200U 
                                              & (vlSelf->top__DOT___1966_[0U] 
                                                 << 7U)) 
                                             | (((IData)(vlSelf->top__DOT___0357_) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->top__DOT___0988_) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->top__DOT___1322_) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->top__DOT___0152_) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->top__DOT___1655_) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->top__DOT___0226_) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->top__DOT___0043_) 
                                                                   << 2U) 
                                                                  | ((IData)(vlSelf->top__DOT___0043_) 
                                                                     << 1U))))))))))) 
                                      >> 0xaU));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__241(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__241\n"); );
    // Body
    vlSelf->top__DOT___1022_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    ((0x7ffffffeU 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 0x14U)) 
                                                                         << 1U)) 
                                                                     | (IData)(vlSelf->top__DOT___1253_)))) 
                                                    << 0x13U) 
                                                   | (QData)((IData)(
                                                                     ((0x70000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 0x10U)) 
                                                                          << 0x10U)) 
                                                                      | (((IData)(vlSelf->top__DOT___1210_) 
                                                                          << 0xfU) 
                                                                         | (((IData)(vlSelf->top__DOT___1682_) 
                                                                             << 0xeU) 
                                                                            | ((0x3800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
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
                                                                                | (IData)(vlSelf->top__DOT___0071_))))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0x3fffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___1969_ 
                                                                                >> 0x24U))))) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       ((vlSelf->top__DOT___3633_[1U] 
                                                                         << 0x1fU) 
                                                                        | ((0x7e000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___1969_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x19U)) 
                                                                           | ((0x1000000U 
                                                                               & (vlSelf->top__DOT___3633_[0U] 
                                                                                >> 1U)) 
                                                                              | ((0xfffff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1969_ 
                                                                                >> 8U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0453_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1266_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0438_))))))))) 
                                                       << 4U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->top__DOT___0752_) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->top__DOT___1283_) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->top__DOT___0625_) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT___0065_))))))))) 
                                                 >> 0x31U))));
    vlSelf->top__DOT___0719_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (vlSelf->top__DOT___1970_ 
                                                                     >> 0x14U))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1253_) 
                                                                       << 0x13U) 
                                                                      | ((0x70000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 0x10U)) 
                                                                             << 0x10U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1210_) 
                                                                             << 0xfU) 
                                                                            | (((IData)(vlSelf->top__DOT___1682_) 
                                                                                << 0xeU) 
                                                                               | ((0x3800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
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
                                                                                | (IData)(vlSelf->top__DOT___0071_)))))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___1969_ 
                                                                                >> 0x24U))))) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       ((vlSelf->top__DOT___3633_[1U] 
                                                                         << 0x1fU) 
                                                                        | ((0x7e000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___1969_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x19U)) 
                                                                           | ((0x1000000U 
                                                                               & (vlSelf->top__DOT___3633_[0U] 
                                                                                >> 1U)) 
                                                                              | ((0xfffff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1969_ 
                                                                                >> 8U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0453_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1266_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0438_))))))))) 
                                                       << 4U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->top__DOT___0752_) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->top__DOT___1283_) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->top__DOT___0625_) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT___0065_))))))))) 
                                                 >> 0x33U))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__242(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__242\n"); );
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
    vlSelf->top__DOT___0582_ = (1U & (~ (((IData)(vlSelf->top__DOT___0772_) 
                                          & (IData)(vlSelf->top__DOT___1571_)) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT___3769_ 
                                                     >> 0x17U)) 
                                            & (IData)(vlSelf->top__DOT___0431_)))));
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__243(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__243\n"); );
    // Body
    vlSelf->top__DOT___1968_ = (((QData)((IData)(vlSelf->top__DOT___0719_)) 
                                 << 0x33U) | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (1ULL 
                                                                           & (((((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 0x14U)) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1253_)))) 
                                                                                << 0x13U) 
                                                                                | (QData)((IData)(
                                                                                ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1210_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___1682_) 
                                                                                << 0xeU) 
                                                                                | ((0x3800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
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
                                                                                | (IData)(vlSelf->top__DOT___0071_))))))))))))))))) 
                                                                               + 
                                                                               (((QData)((IData)(
                                                                                (0x7fffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1969_ 
                                                                                >> 0x24U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->top__DOT___3633_[1U] 
                                                                                << 0x1fU) 
                                                                                | ((0x7e000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1969_ 
                                                                                >> 0x1dU)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___3633_[0U] 
                                                                                >> 1U)) 
                                                                                | ((0xfffff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1969_ 
                                                                                >> 8U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0453_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1266_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0438_))))))))) 
                                                                                << 4U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0625_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0065_))))))))) 
                                                                              >> 0x32U)))))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(vlSelf->top__DOT___1022_)) 
                                                  << 0x31U) 
                                                 | ((0x1ffffffffc000ULL 
                                                     & ((((QData)((IData)(
                                                                          ((0x3ffffffeU 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 0x14U)) 
                                                                               << 1U)) 
                                                                           | (IData)(vlSelf->top__DOT___1253_)))) 
                                                          << 0x13U) 
                                                         | (QData)((IData)(
                                                                           ((0x70000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSelf->top__DOT___1210_) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->top__DOT___1682_) 
                                                                                << 0xeU) 
                                                                                | ((0x3800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
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
                                                                                | (IData)(vlSelf->top__DOT___0071_))))))))))))))))) 
                                                        + 
                                                        (((QData)((IData)(
                                                                          (0x1fffU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___1969_ 
                                                                                >> 0x24U))))) 
                                                          << 0x24U) 
                                                         | (((QData)((IData)(
                                                                             ((vlSelf->top__DOT___3633_[1U] 
                                                                               << 0x1fU) 
                                                                              | ((0x7e000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1969_ 
                                                                                >> 0x1dU)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___3633_[0U] 
                                                                                >> 1U)) 
                                                                                | ((0xfffff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1969_ 
                                                                                >> 8U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0453_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1266_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0438_))))))))) 
                                                             << 4U) 
                                                            | (QData)((IData)(
                                                                              (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0625_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0065_)))))))))) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->top__DOT___0142_) 
                                                                        << 0xdU) 
                                                                       | (0x1fffU 
                                                                          & (((0x1800U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
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
                                                                             + 
                                                                             (((0x1f00U 
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
                                                                                | (IData)(vlSelf->top__DOT___0065_))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__244(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__244\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hde49bd90__0 = (((QData)((IData)(
                                                                 (0x3ffU 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT___1970_ 
                                                                             >> 0x2aU))))) 
                                                 << 0x1bU) 
                                                | (QData)((IData)(
                                                                  (8U 
                                                                   | (((IData)(vlSelf->top__DOT___1013_) 
                                                                       << 0x1aU) 
                                                                      | (((IData)(vlSelf->top__DOT___0662_) 
                                                                          << 0x19U) 
                                                                         | (((IData)(vlSelf->top__DOT___0505_) 
                                                                             << 0x18U) 
                                                                            | (((IData)(vlSelf->top__DOT___0277_) 
                                                                                << 0x17U) 
                                                                               | ((vlSelf->top__DOT___3660_ 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 4U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1035_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0175_)))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__245(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__245\n"); );
    // Body
    vlSelf->top__DOT___1985_ = ((0xffcU & (((0x800U 
                                             & ((IData)(vlSelf->top__DOT___3732_) 
                                                << 6U)) 
                                            | ((0x400U 
                                                & ((IData)(vlSelf->top__DOT___3732_) 
                                                   << 6U)) 
                                               | (((IData)(vlSelf->top__DOT___0565_) 
                                                   << 9U) 
                                                  | ((0x80U 
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
                                                                        & (IData)(vlSelf->top__DOT___1986_)) 
                                                                       | (IData)(vlSelf->top__DOT___0154_))))))))))) 
                                           + ((0x800U 
                                               & ((IData)(vlSelf->top__DOT___3749_) 
                                                  << 7U)) 
                                              | ((0x400U 
                                                  & ((IData)(vlSelf->top__DOT___3749_) 
                                                     << 7U)) 
                                                 | ((0x200U 
                                                     & ((IData)(vlSelf->top__DOT___3749_) 
                                                        << 7U)) 
                                                    | ((0x100U 
                                                        & ((IData)(vlSelf->top__DOT___3749_) 
                                                           << 7U)) 
                                                       | ((0x80U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___1970_ 
                                                                       >> 5U)) 
                                                              << 7U)) 
                                                          | (((IData)(vlSelf->top__DOT___0206_) 
                                                              << 6U) 
                                                             | ((0x20U 
                                                                 & ((~ (IData)(vlSelf->top__DOT___0438_)) 
                                                                    << 5U)) 
                                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSelf->top__DOT___0936_) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelf->top__DOT___0287_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0265_))))))))))))) 
                                | (((IData)(vlSelf->top__DOT___1692_) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSelf->top__DOT___0154_) 
                                               + (IData)(vlSelf->top__DOT___0265_)))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__246(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__246\n"); );
    // Body
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__247(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__247\n"); );
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
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__248(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__248\n"); );
    // Body
    vlSelf->top__DOT___0129_ = ((IData)(vlSelf->top__DOT___0131_) 
                                & (~ (IData)(vlSelf->top__DOT___0130_)));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__249(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__249\n"); );
    // Body
    vlSelf->top__DOT___1442_ = (1U & ((((0x3fc0U & 
                                         (vlSelf->top__DOT___1920_ 
                                          << 4U)) | 
                                        ((0x20U & vlSelf->top__DOT___2019_[0U]) 
                                         | (((IData)(vlSelf->top__DOT___1655_) 
                                             << 4U) 
                                            | ((8U 
                                                & ((~ (IData)(vlSelf->top__DOT___0185_)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->top__DOT___0095_) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->top__DOT___0318_) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT___0873_))))))) 
                                       + ((0x2000U 
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
                                                                        | (IData)(vlSelf->top__DOT___0692_))))))))))))) 
                                      >> 0xdU));
    vlSelf->top__DOT___1224_ = (1U & (~ (((IData)(vlSelf->top__DOT___1442_) 
                                          & (IData)(vlSelf->top__DOT___0755_)) 
                                         | ((IData)(vlSelf->top__DOT___0537_) 
                                            & (IData)(vlSelf->top__DOT___0890_)))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__250(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__250\n"); );
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
    vlSelf->top__DOT___0413_ = ((IData)(vlSelf->top__DOT___0414_) 
                                & (~ (IData)(vlSelf->top__DOT___0229_)));
    vlSelf->top__DOT___1409_ = (1U & (~ (((~ (IData)(vlSelf->top__DOT___0438_)) 
                                          & (IData)(vlSelf->top__DOT___1410_)) 
                                         | ((IData)(vlSelf->top__DOT___0071_) 
                                            & (IData)(vlSelf->top__DOT___0455_)))));
    vlSelf->top__DOT___1443_ = (1U & (~ (((IData)(vlSelf->top__DOT___1053_) 
                                          & (IData)(vlSelf->top__DOT___1434_)) 
                                         | ((vlSelf->top__DOT___3711_[0U] 
                                             >> 0xaU) 
                                            & (IData)(vlSelf->top__DOT___1409_)))));
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__251(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__251\n"); );
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
    vlSelf->top__DOT___2149_ = ((0x1ffffffffff00000ULL 
                                 & (((QData)((IData)(
                                                     vlSelf->top__DOT___3711_[1U])) 
                                     << 0x21U) | (0xfffffffffff00000ULL 
                                                  & ((QData)((IData)(
                                                                     vlSelf->top__DOT___3711_[0U])) 
                                                     << 1U)))) 
                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hbd7d4dc4__0)));
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__252(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__252\n"); );
    // Body
    vlSelf->top__DOT___2155_ = ((0xffcU & (((0x800U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT___2025_ 
                                                         >> 0x1fU)) 
                                                << 0xbU)) 
                                            | (((IData)(vlSelf->top__DOT___3669_) 
                                                << 9U) 
                                               | ((0x100U 
                                                   & ((~ (IData)(vlSelf->top__DOT___0272_)) 
                                                      << 8U)) 
                                                  | (((IData)(vlSelf->top__DOT___0127_) 
                                                      << 7U) 
                                                     | (((IData)(vlSelf->top__DOT___0995_) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->top__DOT___0241_) 
                                                            << 5U) 
                                                           | (((IData)(vlSelf->top__DOT___0466_) 
                                                               << 4U) 
                                                              | (((IData)(vlSelf->top__DOT___0321_) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelf->top__DOT___1043_) 
                                                                     << 2U) 
                                                                    | (IData)(vlSelf->top__DOT____VdfgTmp_h250083de__0)))))))))) 
                                           + (vlSelf->top__DOT____VdfgTmp_h1b9402e5__0 
                                              >> 0x12U))) 
                                | (((IData)(vlSelf->top__DOT___1871_) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSelf->top__DOT___0116_) 
                                               + (vlSelf->top__DOT____VdfgTmp_h1b9402e5__0 
                                                  >> 0x12U)))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__253(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__253\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->top__DOT___1889_ = (((IData)(vlSelf->top__DOT___0596_) 
                                 << 0xcU) | (((IData)(vlSelf->top__DOT___1753_) 
                                              << 0xbU) 
                                             | ((0x700U 
                                                 & (((0x7e0U 
                                                      & (IData)(vlSelf->top__DOT___1891_)) 
                                                     | (((IData)(vlSelf->top__DOT___0639_) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->top__DOT___0226_) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->top__DOT___0404_) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->top__DOT___1283_) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->top__DOT___0219_)))))) 
                                                    + 
                                                    (0x20U 
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
                                                | (((IData)(vlSelf->top__DOT___1624_) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->top__DOT___1312_) 
                                                       << 6U) 
                                                      | (0x3fU 
                                                         & (((0x20U 
                                                              & (IData)(vlSelf->top__DOT___1891_)) 
                                                             | (((IData)(vlSelf->top__DOT___0639_) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->top__DOT___0404_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___1283_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0219_)))))) 
                                                            + 
                                                            (0x20U 
                                                             | (((IData)(vlSelf->top__DOT___0226_) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->top__DOT___0404_) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->top__DOT___0306_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0116_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0226_)))))))))))));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & (IData)(
                                                            (vlSelf->top__DOT___3636_ 
                                                             >> 0x22U))))) 
                              << 0x3cU) | (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (vlSelf->top__DOT___1976_[1U] 
                                                                >> 2U)))) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3636_ 
                                                                           >> 0xaU))))) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & ((vlSelf->top__DOT___1976_[1U] 
                                                                       << 6U) 
                                                                      | (vlSelf->top__DOT___1976_[0U] 
                                                                         >> 0x1aU))))) 
                                                  << 0x1dU) 
                                                 | (QData)((IData)(
                                                                   ((0x10000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 2U)) 
                                                                        << 0x1cU)) 
                                                                    | ((0xc000000U 
                                                                        & (vlSelf->top__DOT___1976_[0U] 
                                                                           << 3U)) 
                                                                       | ((0x3000000U 
                                                                           & ((IData)(vlSelf->top__DOT___3704_) 
                                                                              << 0x14U)) 
                                                                          | ((0x800000U 
                                                                              & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x14U)) 
                                                                             | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x14U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0983_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___1046_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0019_) 
                                                                                << 0xeU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0155_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___1974_) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1527_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0217_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0046_))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = ((0xe0000000U & (vlSelf->top__DOT___1976_[1U] 
                                     << 3U)) | (IData)(
                                                       ((((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 0x22U))))) 
                                                          << 0x3cU) 
                                                         | (((QData)((IData)(
                                                                             (0x7fffffU 
                                                                              & (vlSelf->top__DOT___1976_[1U] 
                                                                                >> 2U)))) 
                                                             << 0x25U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 0xaU))))) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & ((vlSelf->top__DOT___1976_[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->top__DOT___1976_[0U] 
                                                                                >> 0x1aU))))) 
                                                                   << 0x1dU) 
                                                                  | (QData)((IData)(
                                                                                ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 2U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0xc000000U 
                                                                                & (vlSelf->top__DOT___1976_[0U] 
                                                                                << 3U)) 
                                                                                | ((0x3000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x14U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x14U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x14U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0983_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___1046_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0019_) 
                                                                                << 0xeU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0155_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___1974_) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1527_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0217_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0046_))))))))))))))))))))))))))))))) 
                                                        >> 0x20U)));
    vlSelf->top__DOT___1977_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___1977_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___1977_[2U] = ((0x400U & ((IData)(vlSelf->top__DOT___1889_) 
                                               << 8U)) 
                                    | (0x3ffU & ((0x1ffffff8U 
                                                  & (vlSelf->top__DOT___1976_[2U] 
                                                     << 3U)) 
                                                 | (vlSelf->top__DOT___1976_[1U] 
                                                    >> 0x1dU))));
    vlSelf->top__DOT___1790_ = (1U & (IData)((1ULL 
                                              & ((((((QData)((IData)(
                                                                     ((0x1ffff00U 
                                                                       & (vlSelf->top__DOT___1976_[1U] 
                                                                          << 6U)) 
                                                                      | ((0x80U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 0xaU)) 
                                                                             << 7U)) 
                                                                         | (0x7fU 
                                                                            & ((vlSelf->top__DOT___1976_[1U] 
                                                                                << 6U) 
                                                                               | (vlSelf->top__DOT___1976_[0U] 
                                                                                >> 0x1aU))))))) 
                                                     << 0x1dU) 
                                                    | ((QData)((IData)(
                                                                       ((0x20000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 2U)) 
                                                                            << 0x11U)) 
                                                                        | ((0x18000U 
                                                                            & (vlSelf->top__DOT___1976_[0U] 
                                                                               >> 8U)) 
                                                                           | ((0x6000U 
                                                                               & (vlSelf->top__DOT___1977_[0U] 
                                                                                >> 0xbU)) 
                                                                              | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0983_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1046_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0019_) 
                                                                                << 3U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                >> 3U))))))))))))))))) 
                                                       << 0xbU)) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0155_) 
                                                                       << 0xaU) 
                                                                      | ((0x200U 
                                                                          & ((IData)(vlSelf->top__DOT___1974_) 
                                                                             << 9U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1527_) 
                                                                             << 8U) 
                                                                            | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                << 4U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0217_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0046_)))))))))))))) 
                                                  + 
                                                  ((((QData)((IData)(
                                                                     ((0xfffff00U 
                                                                       & (vlSelf->top__DOT___1976_[1U] 
                                                                          << 6U)) 
                                                                      | ((0x80U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 0xaU)) 
                                                                             << 7U)) 
                                                                         | (0x7fU 
                                                                            & ((vlSelf->top__DOT___1976_[1U] 
                                                                                << 6U) 
                                                                               | (vlSelf->top__DOT___1976_[0U] 
                                                                                >> 0x1aU))))))) 
                                                     << 0x1aU) 
                                                    | ((QData)((IData)(
                                                                       ((0x4000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 2U)) 
                                                                            << 0xeU)) 
                                                                        | ((0x3000U 
                                                                            & (vlSelf->top__DOT___1976_[0U] 
                                                                               >> 0xbU)) 
                                                                           | ((0x800U 
                                                                               & ((~ (IData)(vlSelf->top__DOT___0205_)) 
                                                                                << 0xbU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0563_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0591_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & (vlSelf->top__DOT___1976_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1335_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___1976_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0172_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0120_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1568_))))))))))))) 
                                                       << 0xbU)) 
                                                   | (QData)((IData)(
                                                                     ((0x600U 
                                                                       & vlSelf->top__DOT___1976_[0U]) 
                                                                      | (((IData)(vlSelf->top__DOT___0604_) 
                                                                          << 8U) 
                                                                         | ((0x80U 
                                                                             & vlSelf->top__DOT___1976_[0U]) 
                                                                            | (((IData)(vlSelf->top__DOT___0945_) 
                                                                                << 6U) 
                                                                               | ((0x20U 
                                                                                & vlSelf->top__DOT___1976_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0602_) 
                                                                                << 4U) 
                                                                                | (0xfU 
                                                                                & vlSelf->top__DOT___1976_[0U]))))))))))) 
                                                 >> 0x35U))));
    vlSelf->top__DOT___0614_ = (1U & (((((0x3000000U 
                                          & vlSelf->top__DOT___1977_[0U]) 
                                         | ((0x800000U 
                                             & ((IData)(vlSelf->top__DOT___3704_) 
                                                << 0x14U)) 
                                            | ((0x400000U 
                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                   << 0x14U)) 
                                               | ((0x200000U 
                                                   & ((IData)(vlSelf->top__DOT___3704_) 
                                                      << 0x14U)) 
                                                  | ((0x100000U 
                                                      & ((IData)(vlSelf->top__DOT___3704_) 
                                                         << 0x14U)) 
                                                     | (((IData)(vlSelf->top__DOT___0116_) 
                                                         << 0x13U) 
                                                        | (((IData)(vlSelf->top__DOT___1203_) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->top__DOT___0983_) 
                                                               << 0x11U) 
                                                              | (((IData)(vlSelf->top__DOT___1046_) 
                                                                  << 0x10U) 
                                                                 | ((0x8000U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                        << 0xfU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0019_) 
                                                                        << 0xeU) 
                                                                       | (0x800U 
                                                                          & ((IData)(vlSelf->top__DOT___3794_) 
                                                                             << 8U))))))))))))) 
                                        | (((IData)(vlSelf->top__DOT___0155_) 
                                            << 0xaU) 
                                           | ((0x200U 
                                               & ((IData)(vlSelf->top__DOT___1974_) 
                                                  << 9U)) 
                                              | (((IData)(vlSelf->top__DOT___1527_) 
                                                  << 8U) 
                                                 | ((0x80U 
                                                     & ((IData)(vlSelf->top__DOT___3647_) 
                                                        << 4U)) 
                                                    | (((IData)(vlSelf->top__DOT___0217_) 
                                                        << 6U) 
                                                       | (((IData)(vlSelf->top__DOT___0043_) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->top__DOT___0134_) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT___0069_) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->top__DOT___0134_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0046_)))))))))))) 
                                       + (((0x2000000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___3636_ 
                                                        >> 2U)) 
                                               << 0x19U)) 
                                           | ((0x1800000U 
                                               & vlSelf->top__DOT___1976_[0U]) 
                                              | ((0x400000U 
                                                  & ((~ (IData)(vlSelf->top__DOT___0205_)) 
                                                     << 0x16U)) 
                                                 | (((IData)(vlSelf->top__DOT___0563_) 
                                                     << 0x15U) 
                                                    | (((IData)(vlSelf->top__DOT___0591_) 
                                                        << 0x14U) 
                                                       | ((0xf0000U 
                                                           & vlSelf->top__DOT___1976_[0U]) 
                                                          | (((IData)(vlSelf->top__DOT___1335_) 
                                                              << 0xfU) 
                                                             | ((0x4000U 
                                                                 & vlSelf->top__DOT___1976_[0U]) 
                                                                | (((IData)(vlSelf->top__DOT___0172_) 
                                                                    << 0xdU) 
                                                                   | (((IData)(vlSelf->top__DOT___0120_) 
                                                                       << 0xcU) 
                                                                      | ((IData)(vlSelf->top__DOT___1568_) 
                                                                         << 0xbU))))))))))) 
                                          | ((0x600U 
                                              & vlSelf->top__DOT___1976_[0U]) 
                                             | (((IData)(vlSelf->top__DOT___0604_) 
                                                 << 8U) 
                                                | ((0x80U 
                                                    & vlSelf->top__DOT___1976_[0U]) 
                                                   | (((IData)(vlSelf->top__DOT___0945_) 
                                                       << 6U) 
                                                      | ((0x20U 
                                                          & vlSelf->top__DOT___1976_[0U]) 
                                                         | (((IData)(vlSelf->top__DOT___0602_) 
                                                             << 4U) 
                                                            | (0xfU 
                                                               & vlSelf->top__DOT___1976_[0U]))))))))) 
                                      >> 0x19U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__254(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__254\n"); );
    // Body
    vlSelf->top__DOT___1942_[1U] = ((0xffffffU & vlSelf->top__DOT___1942_[1U]) 
                                    | (0xff000000U 
                                       & (((((0x1fc00000U 
                                              & (vlSelf->top__DOT___2000_[1U] 
                                                 << 0x13U)) 
                                             | ((0x200000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___3769_ 
                                                             >> 8U)) 
                                                    << 0x15U)) 
                                                | ((0x1c0000U 
                                                    & ((vlSelf->top__DOT___2000_[1U] 
                                                        << 0x13U) 
                                                       | (0x40000U 
                                                          & (vlSelf->top__DOT___2000_[0U] 
                                                             >> 0xdU)))) 
                                                   | ((0x20000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___3769_ 
                                                                   >> 4U)) 
                                                          << 0x11U)) 
                                                      | ((0x18000U 
                                                          & (vlSelf->top__DOT___2000_[0U] 
                                                             >> 0xdU)) 
                                                         | (((IData)(vlSelf->top__DOT___0303_) 
                                                             << 0xeU) 
                                                            | (((IData)(vlSelf->top__DOT___0205_) 
                                                                << 0xdU) 
                                                               | (((IData)(vlSelf->top__DOT___0939_) 
                                                                   << 0xcU) 
                                                                  | (((IData)(vlSelf->top__DOT___0144_) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSelf->top__DOT___0283_) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSelf->top__DOT___1345_) 
                                                                            << 6U) 
                                                                           | (((IData)(vlSelf->top__DOT___1358_) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->top__DOT___0135_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0163_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0278_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0678_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0180_))))))))))))))))) 
                                            + (2U | 
                                               ((0x18000000U 
                                                 & (vlSelf->top__DOT___1982_ 
                                                    << 0x15U)) 
                                                | (((IData)(vlSelf->top__DOT___1287_) 
                                                    << 0x1aU) 
                                                   | ((0x3f00000U 
                                                       & (vlSelf->top__DOT___2002_ 
                                                          << 0x13U)) 
                                                      | (((IData)(vlSelf->top__DOT___0241_) 
                                                          << 0x13U) 
                                                         | (((IData)(vlSelf->top__DOT___0214_) 
                                                             << 0x12U) 
                                                            | (((IData)(vlSelf->top__DOT___0243_) 
                                                                << 0x11U) 
                                                               | (((IData)(vlSelf->top__DOT___0325_) 
                                                                   << 0x10U) 
                                                                  | (((IData)(vlSelf->top__DOT___0157_) 
                                                                      << 0xfU) 
                                                                     | (((IData)(vlSelf->top__DOT___0206_) 
                                                                         << 0xeU) 
                                                                        | (((IData)(vlSelf->top__DOT___0012_) 
                                                                            << 0xdU) 
                                                                           | (((IData)(vlSelf->top__DOT___0656_) 
                                                                               << 0xcU) 
                                                                              | (((IData)(vlSelf->top__DOT___0332_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0408_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1311_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0165_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->out_data[0xdU] 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0018_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0608_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1225_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0043_))))))))))))))))))))))) 
                                           << 0x1aU) 
                                          | (((IData)(vlSelf->top__DOT___0111_) 
                                              << 0x19U) 
                                             | ((IData)(vlSelf->top__DOT___0454_) 
                                                << 0x18U)))));
    vlSelf->top__DOT___1942_[2U] = ((0xff800000U & 
                                     vlSelf->top__DOT___1942_[2U]) 
                                    | (0xffffffU & 
                                       ((0x7fffffU 
                                         & ((((0x1fc00000U 
                                               & (vlSelf->top__DOT___2000_[1U] 
                                                  << 0x13U)) 
                                              | ((0x200000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3769_ 
                                                              >> 8U)) 
                                                     << 0x15U)) 
                                                 | ((0x1c0000U 
                                                     & ((vlSelf->top__DOT___2000_[1U] 
                                                         << 0x13U) 
                                                        | (0x40000U 
                                                           & (vlSelf->top__DOT___2000_[0U] 
                                                              >> 0xdU)))) 
                                                    | ((0x20000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___3769_ 
                                                                    >> 4U)) 
                                                           << 0x11U)) 
                                                       | ((0x18000U 
                                                           & (vlSelf->top__DOT___2000_[0U] 
                                                              >> 0xdU)) 
                                                          | (((IData)(vlSelf->top__DOT___0303_) 
                                                              << 0xeU) 
                                                             | (((IData)(vlSelf->top__DOT___0205_) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlSelf->top__DOT___0939_) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlSelf->top__DOT___0144_) 
                                                                       << 8U) 
                                                                      | (((IData)(vlSelf->top__DOT___0283_) 
                                                                          << 7U) 
                                                                         | (((IData)(vlSelf->top__DOT___1345_) 
                                                                             << 6U) 
                                                                            | (((IData)(vlSelf->top__DOT___1358_) 
                                                                                << 5U) 
                                                                               | (((IData)(vlSelf->top__DOT___0135_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0163_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0278_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0678_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0180_))))))))))))))))) 
                                             + (2U 
                                                | ((0x18000000U 
                                                    & (vlSelf->top__DOT___1982_ 
                                                       << 0x15U)) 
                                                   | (((IData)(vlSelf->top__DOT___1287_) 
                                                       << 0x1aU) 
                                                      | ((0x3f00000U 
                                                          & (vlSelf->top__DOT___2002_ 
                                                             << 0x13U)) 
                                                         | (((IData)(vlSelf->top__DOT___0241_) 
                                                             << 0x13U) 
                                                            | (((IData)(vlSelf->top__DOT___0214_) 
                                                                << 0x12U) 
                                                               | (((IData)(vlSelf->top__DOT___0243_) 
                                                                   << 0x11U) 
                                                                  | (((IData)(vlSelf->top__DOT___0325_) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSelf->top__DOT___0157_) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->top__DOT___0206_) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->top__DOT___0012_) 
                                                                               << 0xdU) 
                                                                              | (((IData)(vlSelf->top__DOT___0656_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0332_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0408_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1311_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0165_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->out_data[0xdU] 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0018_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0608_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1225_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0043_))))))))))))))))))))))) 
                                            >> 6U)) 
                                        | ((0xffffffU 
                                            & ((IData)(vlSelf->top__DOT___0111_) 
                                               >> 7U)) 
                                           | ((IData)(vlSelf->top__DOT___0454_) 
                                              >> 8U)))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__255(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__255\n"); );
    // Body
    vlSelf->top__DOT___1909_ = ((0xffffcfffffULL & vlSelf->top__DOT___1909_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___1290_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___1096_)))) 
                                   << 0x14U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__256(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__256\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->top__DOT____VdfgTmp_h3b4b3613__0 = (((IData)(vlSelf->top__DOT___0144_) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->top__DOT___0034_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___0813_) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT___0718_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___0342_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___1206_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___1614_)))))));
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__257(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__257\n"); );
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__258(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__258\n"); );
    // Body
    vlSelf->top__DOT___2029_ = (((QData)((IData)(vlSelf->top__DOT___1801_)) 
                                 << 0x2bU) | (((QData)((IData)(
                                                               (0x1fffU 
                                                                & (IData)(
                                                                          (0x1fffULL 
                                                                           & (((((QData)((IData)(
                                                                                (0x1ffffffU 
                                                                                & vlSelf->top__DOT___1999_[1U]))) 
                                                                                << 0x12U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1303_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fff0U 
                                                                                & (vlSelf->top__DOT___1999_[0U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0620_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0217_))))))))) 
                                                                               + 
                                                                               (((QData)((IData)(
                                                                                ((0xffe00000U 
                                                                                & (vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1232_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___1494_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0803_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fffeU 
                                                                                & ((vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U) 
                                                                                | (0xfeU 
                                                                                & (vlSelf->top__DOT___1952_[0U] 
                                                                                >> 0x18U)))) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___1966_[0U] 
                                                                                >> 4U)))))))))) 
                                                                                << 0xbU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0818_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___1966_[0U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0357_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0988_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 1U)))))))))))))) 
                                                                              >> 0x1eU)))))) 
                                               << 0x1eU) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___1012_) 
                                                                  << 0x1dU) 
                                                                 | ((0x1ff80000U 
                                                                     & ((IData)(
                                                                                (0xffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                (0x1ffffffU 
                                                                                & vlSelf->top__DOT___1999_[1U]))) 
                                                                                << 0x12U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1303_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fff0U 
                                                                                & (vlSelf->top__DOT___1999_[0U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0620_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0217_))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xffe00000U 
                                                                                & (vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1232_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___1494_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0803_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fffeU 
                                                                                & ((vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U) 
                                                                                | (0xfeU 
                                                                                & (vlSelf->top__DOT___1952_[0U] 
                                                                                >> 0x18U)))) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___1966_[0U] 
                                                                                >> 4U)))))))))) 
                                                                                << 0xbU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0818_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___1966_[0U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0357_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0988_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 1U)))))))))))))) 
                                                                                >> 0x13U))) 
                                                                        << 0x13U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1357_) 
                                                                        << 0x12U) 
                                                                       | ((0x20000U 
                                                                           & ((IData)(
                                                                                (0x3ffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                (0x1ffffffU 
                                                                                & vlSelf->top__DOT___1999_[1U]))) 
                                                                                << 0x12U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1303_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fff0U 
                                                                                & (vlSelf->top__DOT___1999_[0U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0620_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0217_))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xffe00000U 
                                                                                & (vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1232_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___1494_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0803_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fffeU 
                                                                                & ((vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U) 
                                                                                | (0xfeU 
                                                                                & (vlSelf->top__DOT___1952_[0U] 
                                                                                >> 0x18U)))) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___1966_[0U] 
                                                                                >> 4U)))))))))) 
                                                                                << 0xbU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0818_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___1966_[0U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0357_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0988_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 1U)))))))))))))) 
                                                                                >> 0x11U))) 
                                                                              << 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1440_) 
                                                                              << 0x10U) 
                                                                             | ((0xf800U 
                                                                                & ((IData)(
                                                                                (0xffffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                (0x1ffffffU 
                                                                                & vlSelf->top__DOT___1999_[1U]))) 
                                                                                << 0x12U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1303_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fff0U 
                                                                                & (vlSelf->top__DOT___1999_[0U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0620_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0217_))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xffe00000U 
                                                                                & (vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1232_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___1494_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0803_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fffeU 
                                                                                & ((vlSelf->top__DOT___1952_[1U] 
                                                                                << 8U) 
                                                                                | (0xfeU 
                                                                                & (vlSelf->top__DOT___1952_[0U] 
                                                                                >> 0x18U)))) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___1966_[0U] 
                                                                                >> 4U)))))))))) 
                                                                                << 0xbU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0818_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___1966_[0U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0357_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0988_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 1U)))))))))))))) 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1115_) 
                                                                                << 0xaU) 
                                                                                | (0x3ffU 
                                                                                & (((0x3f0U 
                                                                                & (vlSelf->top__DOT___1999_[0U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0620_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0217_))))) 
                                                                                + 
                                                                                ((0x200U 
                                                                                & (vlSelf->top__DOT___1966_[0U] 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0357_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0988_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 1U))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__259(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__259\n"); );
    // Body
    vlSelf->top__DOT___2144_ = (((QData)((IData)((0xffU 
                                                  & ((IData)(vlSelf->top__DOT___1891_) 
                                                     >> 5U)))) 
                                 << 0x38U) | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (1ULL 
                                                                           & (((((QData)((IData)(
                                                                                (7U 
                                                                                & ((vlSelf->top__DOT___2095_[4U] 
                                                                                << 1U) 
                                                                                | (vlSelf->top__DOT___2095_[3U] 
                                                                                >> 0x1fU))))) 
                                                                                << 0x35U) 
                                                                                | vlSelf->top__DOT____VdfgTmp_hdf764016__0) 
                                                                               + 
                                                                               (((QData)((IData)(
                                                                                (vlSelf->top__DOT___2095_[3U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x37U) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h8b760261__0)) 
                                                                              >> 0x37U)))))) 
                                               << 0x37U) 
                                              | (((QData)((IData)(vlSelf->top__DOT___1250_)) 
                                                  << 0x36U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h078e94ca__0)) 
                                                     << 0x35U) 
                                                    | (((QData)((IData)(
                                                                        (3U 
                                                                         & (vlSelf->top__DOT___1973_ 
                                                                            >> 0x18U)))) 
                                                        << 0x33U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___0504_)) 
                                                           << 0x32U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___1597_)) 
                                                              << 0x31U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___0684_)) 
                                                                 << 0x30U) 
                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___1973_ 
                                                                                >> 0x13U)))) 
                                                                    << 0x2eU) 
                                                                   | (((QData)((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 0x14U))) 
                                                                       << 0xeU) 
                                                                      | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1253_) 
                                                                                << 0xdU) 
                                                                                | ((0x1c00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 0x10U)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1210_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1682_) 
                                                                                << 8U) 
                                                                                | ((0xe0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 0xbU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (((0x10U 
                                                                                & (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x18U)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_hb9b8ffe0__0)) 
                                                                                + 
                                                                                ((vlSelf->top__DOT___2112_[0U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->top__DOT___2112_[0U] 
                                                                                >> 0x16U)))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__260(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__260\n"); );
    // Body
    vlSelf->top__DOT___2072_ = (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h078e94ca__0)) 
                                 << 0x2cU) | (((QData)((IData)(
                                                               (3U 
                                                                & (vlSelf->top__DOT___1973_ 
                                                                   >> 0x18U)))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0504_)) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___1597_)) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0684_)) 
                                                        << 0x27U) 
                                                       | (((QData)((IData)(
                                                                           (3U 
                                                                            & (vlSelf->top__DOT___1973_ 
                                                                               >> 0x13U)))) 
                                                           << 0x25U) 
                                                          | vlSelf->top__DOT____VdfgTmp_hde49bd90__0))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__261(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__261\n"); );
    // Body
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__262(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__262\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vtemp_2[0U] = (((IData)((((QData)((IData)((0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT___1970_ 
                                                            >> 0x26U))))) 
                                << 0x3bU) | (((QData)((IData)(vlSelf->top__DOT___0117_)) 
                                              << 0x3aU) 
                                             | (((QData)((IData)(vlSelf->top__DOT___0272_)) 
                                                 << 0x39U) 
                                                | (((QData)((IData)(
                                                                    (3U 
                                                                     & (vlSelf->top__DOT___2019_[1U] 
                                                                        >> 0x19U)))) 
                                                    << 0x37U) 
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
                                                       << 0x17U) 
                                                      | (QData)((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___0095_))))))))))))))))) 
                      << 2U) | (((IData)(vlSelf->top__DOT___0318_) 
                                 << 1U) | (IData)(vlSelf->top__DOT___0873_)));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)((0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT___1970_ 
                                                            >> 0x26U))))) 
                                << 0x3bU) | (((QData)((IData)(vlSelf->top__DOT___0117_)) 
                                              << 0x3aU) 
                                             | (((QData)((IData)(vlSelf->top__DOT___0272_)) 
                                                 << 0x39U) 
                                                | (((QData)((IData)(
                                                                    (3U 
                                                                     & (vlSelf->top__DOT___2019_[1U] 
                                                                        >> 0x19U)))) 
                                                    << 0x37U) 
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
                                                       << 0x17U) 
                                                      | (QData)((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___0095_))))))))))))))))) 
                      >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT___1970_ 
                                                                          >> 0x26U))))) 
                                              << 0x3bU) 
                                             | (((QData)((IData)(vlSelf->top__DOT___0117_)) 
                                                 << 0x3aU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___0272_)) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(
                                                                       (3U 
                                                                        & (vlSelf->top__DOT___2019_[1U] 
                                                                           >> 0x19U)))) 
                                                       << 0x37U) 
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
                                                          << 0x17U) 
                                                         | (QData)((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___0095_)))))))))))))))) 
                                            >> 0x20U)) 
                                   << 2U));
    __Vtemp_2[2U] = ((IData)(((((QData)((IData)((0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT___1970_ 
                                                            >> 0x26U))))) 
                                << 0x3bU) | (((QData)((IData)(vlSelf->top__DOT___0117_)) 
                                              << 0x3aU) 
                                             | (((QData)((IData)(vlSelf->top__DOT___0272_)) 
                                                 << 0x39U) 
                                                | (((QData)((IData)(
                                                                    (3U 
                                                                     & (vlSelf->top__DOT___2019_[1U] 
                                                                        >> 0x19U)))) 
                                                    << 0x37U) 
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
                                                       << 0x17U) 
                                                      | (QData)((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___0095_)))))))))))))))) 
                              >> 0x20U)) >> 0x1eU);
    __Vtemp_3[0U] = (((IData)((((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->top__DOT___3618_) 
                                                    >> 0xcU)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->top__DOT___2004_) 
                                                                  >> 6U)))) 
                                              << 0x3aU) 
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
                                                 << 0x1aU) 
                                                | (QData)((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___0856_)))))))))))))))))))))))))) 
                      << 2U) | (((IData)(vlSelf->top__DOT___0134_) 
                                 << 1U) | (IData)(vlSelf->top__DOT___0692_)));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->top__DOT___3618_) 
                                                    >> 0xcU)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->top__DOT___2004_) 
                                                                  >> 6U)))) 
                                              << 0x3aU) 
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
                                                 << 0x1aU) 
                                                | (QData)((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___0856_)))))))))))))))))))))))))) 
                      >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->top__DOT___3618_) 
                                                                  >> 0xcU)))) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->top__DOT___2004_) 
                                                                     >> 6U)))) 
                                                 << 0x3aU) 
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
                                                    << 0x1aU) 
                                                   | (QData)((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___0856_))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 2U));
    __Vtemp_3[2U] = ((IData)(((((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->top__DOT___3618_) 
                                                    >> 0xcU)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->top__DOT___2004_) 
                                                                  >> 6U)))) 
                                              << 0x3aU) 
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
                                                 << 0x1aU) 
                                                | (QData)((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___0856_))))))))))))))))))))))))) 
                              >> 0x20U)) >> 0x1eU);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    __Vtemp_6[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1364_)) 
                              << 0x3cU) | (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (0x7fffffULL 
                                                                        & ((((((QData)((IData)(vlSelf->top__DOT___0272_)) 
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
                                                                                << 2U)))) 
                                                                             | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0318_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0873_))))) 
                                                                            + 
                                                                            ((((QData)((IData)(
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
                                                                                << 2U)) 
                                                                             | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0692_)))))) 
                                                                           >> 0x25U)))))) 
                                            << 0x25U) 
                                           | (((QData)((IData)(vlSelf->top__DOT___1410_)) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  (7U 
                                                                   & (IData)(
                                                                             (7ULL 
                                                                              & ((((((QData)((IData)(
                                                                                ((0x7feU 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                >> 0x15U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x14U)))))) 
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
                                                                                ((0xf8U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 5U)) 
                                                                                | (IData)(vlSelf->top__DOT___1306_)))))) 
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
                                                                                >> 0x21U)))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0414_)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((0xffffc000U 
                                                                        & ((((0xfc000000U 
                                                                              & (vlSelf->top__DOT___1920_ 
                                                                                << 4U)) 
                                                                             | (0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x14U)) 
                                                                                << 0x19U))) 
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
                                                                                & vlSelf->top__DOT___2019_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0185_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0318_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0873_)))))))))))) 
                                                                           + 
                                                                           (((0x80000000U 
                                                                              & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                << 0x17U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                << 0x17U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 0x1cU)))) 
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
                                                                                | (IData)(vlSelf->top__DOT___0692_))))))))))))))))))))))))) 
                                                                       | (((IData)(vlSelf->top__DOT___1442_) 
                                                                           << 0xdU) 
                                                                          | (0x1fffU 
                                                                             & (((0x1fc0U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___2019_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0185_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0318_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0873_))))))) 
                                                                                + 
                                                                                ((0x1000U 
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
                                                                                | (IData)(vlSelf->top__DOT___0692_)))))))))))))))))))))));
    __Vtemp_6[1U] = ((0xe0000000U & __Vtemp_4[1U]) 
                     | (IData)(((((QData)((IData)(vlSelf->top__DOT___1364_)) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (0x7fffffULL 
                                                                            & ((((((QData)((IData)(vlSelf->top__DOT___0272_)) 
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
                                                                                << 2U)))) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0318_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0873_))))) 
                                                                                + 
                                                                                ((((QData)((IData)(
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
                                                                                << 2U)) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0692_)))))) 
                                                                               >> 0x25U)))))) 
                                                << 0x25U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___1410_)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (7ULL 
                                                                                & ((((((QData)((IData)(
                                                                                ((0x7feU 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                >> 0x15U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x14U)))))) 
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
                                                                                ((0xf8U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                >> 5U)) 
                                                                                | (IData)(vlSelf->top__DOT___1306_)))))) 
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
                                                                                >> 0x21U)))))) 
                                                      << 0x21U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0414_)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((0xffffc000U 
                                                                            & ((((0xfc000000U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 4U)) 
                                                                                | (0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3643_ 
                                                                                >> 0x14U)) 
                                                                                << 0x19U))) 
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
                                                                                & vlSelf->top__DOT___2019_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0185_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0318_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0873_)))))))))))) 
                                                                               + 
                                                                               (((0x80000000U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0501_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->top__DOT___1939_) 
                                                                                << 0x17U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1306_) 
                                                                                << 0x1cU)))) 
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
                                                                                | (IData)(vlSelf->top__DOT___0692_))))))))))))))))))))))))) 
                                                                           | (((IData)(vlSelf->top__DOT___1442_) 
                                                                               << 0xdU) 
                                                                              | (0x1fffU 
                                                                                & (((0x1fc0U 
                                                                                & (vlSelf->top__DOT___1920_ 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___2019_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0185_)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0095_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0318_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0873_))))))) 
                                                                                + 
                                                                                ((0x1000U 
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
                                                                                | (IData)(vlSelf->top__DOT___0692_)))))))))))))))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___2017_[0U] = __Vtemp_6[0U];
    vlSelf->top__DOT___2017_[1U] = __Vtemp_6[1U];
    vlSelf->top__DOT___2017_[2U] = (3U & __Vtemp_4[2U]);
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__263(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__263\n"); );
    // Body
    vlSelf->top__DOT___1900_[0U] = ((0xfff00001U & 
                                     vlSelf->top__DOT___1900_[0U]) 
                                    | (0xfffffffeU 
                                       & (((IData)(vlSelf->top__DOT___0804_) 
                                           << 0x13U) 
                                          | (((IData)(vlSelf->top__DOT___0080_) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->top__DOT___0510_) 
                                                 << 0x11U) 
                                                | (((IData)(vlSelf->top__DOT___0596_) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelf->top__DOT___1753_) 
                                                       << 0xfU) 
                                                      | ((0x7000U 
                                                          & ((IData)(vlSelf->top__DOT___1889_) 
                                                             << 4U)) 
                                                         | (((IData)(vlSelf->top__DOT___1624_) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSelf->top__DOT___1312_) 
                                                                << 0xaU) 
                                                               | ((0x3f0U 
                                                                   & ((IData)(vlSelf->top__DOT___1889_) 
                                                                      << 4U)) 
                                                                  | (((IData)(vlSelf->top__DOT___1018_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___0287_) 
                                                                         << 2U) 
                                                                        | ((IData)(vlSelf->top__DOT___1820_) 
                                                                           << 1U))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__264(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__264\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & 
                                               (vlSelf->top__DOT___3664_[1U] 
                                                >> 0xaU)))) 
                              << 0x31U) | (((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((vlSelf->top__DOT___3664_[1U] 
                                                                 << 0xaU) 
                                                                | (vlSelf->top__DOT___3664_[0U] 
                                                                   >> 0x16U))))) 
                                            << 0x1dU) 
                                           | (QData)((IData)(
                                                             ((0x1f800000U 
                                                               & (vlSelf->top__DOT___2079_ 
                                                                  << 7U)) 
                                                              | (((IData)(vlSelf->top__DOT___0571_) 
                                                                  << 0x16U) 
                                                                 | ((0x300000U 
                                                                     & (vlSelf->top__DOT___1977_[0U] 
                                                                        >> 4U)) 
                                                                    | ((0x80000U 
                                                                        & ((IData)(vlSelf->top__DOT___3704_) 
                                                                           << 0x10U)) 
                                                                       | ((0x40000U 
                                                                           & ((IData)(vlSelf->top__DOT___3704_) 
                                                                              << 0x10U)) 
                                                                          | ((0x20000U 
                                                                              & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x10U)) 
                                                                             | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0041_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___1720_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0656_) 
                                                                                << 0xdU) 
                                                                                | ((0x1e00U 
                                                                                & ((IData)(vlSelf->top__DOT___3778_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3778_) 
                                                                                << 3U)) 
                                                                                | ((0xf8U 
                                                                                & ((IData)(vlSelf->top__DOT___3778_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0044_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0888_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0367_)))))))))))))))))))));
    __Vtemp_1[1U] = (((IData)((0x1fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->top__DOT___3664_[2U])) 
                                   << 0x15U) | ((QData)((IData)(
                                                                vlSelf->top__DOT___3664_[1U])) 
                                                >> 0xbU)))) 
                      << 0x12U) | (IData)(((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT___3664_[1U] 
                                                                 >> 0xaU)))) 
                                             << 0x31U) 
                                            | (((QData)((IData)(
                                                                (0xfffffU 
                                                                 & ((vlSelf->top__DOT___3664_[1U] 
                                                                     << 0xaU) 
                                                                    | (vlSelf->top__DOT___3664_[0U] 
                                                                       >> 0x16U))))) 
                                                << 0x1dU) 
                                               | (QData)((IData)(
                                                                 ((0x1f800000U 
                                                                   & (vlSelf->top__DOT___2079_ 
                                                                      << 7U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0571_) 
                                                                      << 0x16U) 
                                                                     | ((0x300000U 
                                                                         & (vlSelf->top__DOT___1977_[0U] 
                                                                            >> 4U)) 
                                                                        | ((0x80000U 
                                                                            & ((IData)(vlSelf->top__DOT___3704_) 
                                                                               << 0x10U)) 
                                                                           | ((0x40000U 
                                                                               & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x10U)) 
                                                                              | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0041_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___1720_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0656_) 
                                                                                << 0xdU) 
                                                                                | ((0x1e00U 
                                                                                & ((IData)(vlSelf->top__DOT___3778_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3778_) 
                                                                                << 3U)) 
                                                                                | ((0xf8U 
                                                                                & ((IData)(vlSelf->top__DOT___3778_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0044_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0888_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0367_)))))))))))))))))))) 
                                           >> 0x20U)));
    vlSelf->top__DOT___2183_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___2183_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2183_[2U] = (((IData)((0x1fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->top__DOT___3664_[2U])) 
                                                  << 0x15U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT___3664_[1U])) 
                                                    >> 0xbU)))) 
                                     >> 0xeU) | ((IData)(
                                                         ((0x1fffffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->top__DOT___3664_[2U])) 
                                                               << 0x15U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->top__DOT___3664_[1U])) 
                                                                 >> 0xbU))) 
                                                          >> 0x20U)) 
                                                 << 0x12U));
    vlSelf->top__DOT___2183_[3U] = ((IData)(((0x1fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->top__DOT___3664_[2U])) 
                                                  << 0x15U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT___3664_[1U])) 
                                                    >> 0xbU))) 
                                             >> 0x20U)) 
                                    >> 0xeU);
    vlSelf->top__DOT___2266_[0U] = (IData)((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT___3664_[1U] 
                                                                 >> 0xaU)))) 
                                             << 0x2aU) 
                                            | (((QData)((IData)(
                                                                (0xfffffU 
                                                                 & ((vlSelf->top__DOT___2183_[1U] 
                                                                     << 3U) 
                                                                    | (vlSelf->top__DOT___2183_[0U] 
                                                                       >> 0x1dU))))) 
                                                << 0x16U) 
                                               | (QData)((IData)(
                                                                 ((0x3ffff0U 
                                                                   & vlSelf->top__DOT___2079_) 
                                                                  | (0xfU 
                                                                     & vlSelf->top__DOT___3664_[0U])))))));
    vlSelf->top__DOT___2266_[1U] = (((IData)((0x1fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->top__DOT___2183_[3U])) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT___2183_[2U])) 
                                                     << 0xeU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT___2183_[1U])) 
                                                       >> 0x12U))))) 
                                     << 0xbU) | (IData)(
                                                        ((((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->top__DOT___3664_[1U] 
                                                                               >> 0xaU)))) 
                                                           << 0x2aU) 
                                                          | (((QData)((IData)(
                                                                              (0xfffffU 
                                                                               & ((vlSelf->top__DOT___2183_[1U] 
                                                                                << 3U) 
                                                                                | (vlSelf->top__DOT___2183_[0U] 
                                                                                >> 0x1dU))))) 
                                                              << 0x16U) 
                                                             | (QData)((IData)(
                                                                               ((0x3ffff0U 
                                                                                & vlSelf->top__DOT___2079_) 
                                                                                | (0xfU 
                                                                                & vlSelf->top__DOT___3664_[0U])))))) 
                                                         >> 0x20U)));
    vlSelf->top__DOT___2266_[2U] = (((IData)((0x1fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->top__DOT___2183_[3U])) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT___2183_[2U])) 
                                                     << 0xeU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT___2183_[1U])) 
                                                       >> 0x12U))))) 
                                     >> 0x15U) | ((IData)(
                                                          ((0x1fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->top__DOT___2183_[3U])) 
                                                                << 0x2eU) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->top__DOT___2183_[2U])) 
                                                                   << 0xeU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->top__DOT___2183_[1U])) 
                                                                     >> 0x12U)))) 
                                                           >> 0x20U)) 
                                                  << 0xbU));
    vlSelf->top__DOT___2266_[3U] = (0x1ffU & vlSelf->top__DOT___3664_[3U]);
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__265(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__265\n"); );
    // Body
    vlSelf->top__DOT___1849_ = (1U & (((((0x1fc000U 
                                          & ((IData)(
                                                     (vlSelf->top__DOT___2064_ 
                                                      >> 0xeU)) 
                                             << 0xeU)) 
                                         | ((0x2000U 
                                             & (vlSelf->top__DOT___3648_ 
                                                << 0xcU)) 
                                            | (0x1800U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___2064_ 
                                                           >> 0xbU)) 
                                                  << 0xbU)))) 
                                        | ((0x400U 
                                            & ((IData)(vlSelf->top__DOT___3693_) 
                                               << 7U)) 
                                           | ((0x200U 
                                               & ((IData)(vlSelf->top__DOT___3693_) 
                                                  << 7U)) 
                                              | ((0x180U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___2064_ 
                                                              >> 7U)) 
                                                     << 7U)) 
                                                 | (((IData)(vlSelf->top__DOT___0408_) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->top__DOT___0343_) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->top__DOT___0627_) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT___1064_) 
                                                              << 3U) 
                                                             | (((IData)(vlSelf->top__DOT___0730_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___0505_)))))))))) 
                                       + (((0x1fc000U 
                                            & ((IData)(vlSelf->top__DOT___2042_) 
                                               << 0xdU)) 
                                           | (((IData)(vlSelf->top__DOT___1532_) 
                                               << 0xdU) 
                                              | ((IData)(vlSelf->top__DOT___0419_) 
                                                 << 0xcU))) 
                                          | (((IData)(vlSelf->top__DOT___0217_) 
                                              << 0xbU) 
                                             | (((IData)(vlSelf->top__DOT___0220_) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->top__DOT___0166_) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->top__DOT___1343_) 
                                                       << 8U) 
                                                      | ((0xc0U 
                                                          & (vlSelf->top__DOT___1977_[0U] 
                                                             >> 0x12U)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->top__DOT___3704_) 
                                                                << 2U)) 
                                                            | ((0x10U 
                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                   << 2U)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT___3704_) 
                                                                      << 2U)) 
                                                                  | ((4U 
                                                                      & ((IData)(vlSelf->top__DOT___3704_) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelf->top__DOT___0617_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___0129_))))))))))))) 
                                      >> 0x14U));
    vlSelf->top__DOT___1644_ = (1U & (((((0x3c000U 
                                          & ((IData)(
                                                     (vlSelf->top__DOT___2064_ 
                                                      >> 0xeU)) 
                                             << 0xeU)) 
                                         | ((0x2000U 
                                             & (vlSelf->top__DOT___3648_ 
                                                << 0xcU)) 
                                            | (0x1800U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___2064_ 
                                                           >> 0xbU)) 
                                                  << 0xbU)))) 
                                        | ((0x400U 
                                            & ((IData)(vlSelf->top__DOT___3693_) 
                                               << 7U)) 
                                           | ((0x200U 
                                               & ((IData)(vlSelf->top__DOT___3693_) 
                                                  << 7U)) 
                                              | ((0x180U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___2064_ 
                                                              >> 7U)) 
                                                     << 7U)) 
                                                 | (((IData)(vlSelf->top__DOT___0408_) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->top__DOT___0343_) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->top__DOT___0627_) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT___1064_) 
                                                              << 3U) 
                                                             | (((IData)(vlSelf->top__DOT___0730_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___0505_)))))))))) 
                                       + (((0x3c000U 
                                            & ((IData)(vlSelf->top__DOT___2042_) 
                                               << 0xdU)) 
                                           | (((IData)(vlSelf->top__DOT___1532_) 
                                               << 0xdU) 
                                              | ((IData)(vlSelf->top__DOT___0419_) 
                                                 << 0xcU))) 
                                          | (((IData)(vlSelf->top__DOT___0217_) 
                                              << 0xbU) 
                                             | (((IData)(vlSelf->top__DOT___0220_) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->top__DOT___0166_) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->top__DOT___1343_) 
                                                       << 8U) 
                                                      | ((0xc0U 
                                                          & (vlSelf->top__DOT___1977_[0U] 
                                                             >> 0x12U)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->top__DOT___3704_) 
                                                                << 2U)) 
                                                            | ((0x10U 
                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                   << 2U)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT___3704_) 
                                                                      << 2U)) 
                                                                  | ((4U 
                                                                      & ((IData)(vlSelf->top__DOT___3704_) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelf->top__DOT___0617_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___0129_))))))))))))) 
                                      >> 0x11U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__266(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__266\n"); );
    // Body
    vlSelf->top__DOT___1926_ = ((1U & vlSelf->top__DOT___1926_) 
                                | ((0x7fffffe0U & ((IData)(
                                                           (0x3ffffffULL 
                                                            & ((((((QData)((IData)(
                                                                                ((0x7fff00U 
                                                                                & (vlSelf->top__DOT___1976_[1U] 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 0xaU)) 
                                                                                << 7U)) 
                                                                                | (0x7fU 
                                                                                & ((vlSelf->top__DOT___1976_[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->top__DOT___1976_[0U] 
                                                                                >> 0x1aU))))))) 
                                                                   << 0x1dU) 
                                                                  | ((QData)((IData)(
                                                                                ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 2U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x18000U 
                                                                                & (vlSelf->top__DOT___1976_[0U] 
                                                                                >> 8U)) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___1977_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1203_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0983_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1046_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0019_) 
                                                                                << 3U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                >> 3U))))))))))))))))) 
                                                                     << 0xbU)) 
                                                                 | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0155_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___1974_) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1527_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0217_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0046_)))))))))))))) 
                                                                + 
                                                                ((((QData)((IData)(
                                                                                ((0x3ffff00U 
                                                                                & (vlSelf->top__DOT___1976_[1U] 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 0xaU)) 
                                                                                << 7U)) 
                                                                                | (0x7fU 
                                                                                & ((vlSelf->top__DOT___1976_[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->top__DOT___1976_[0U] 
                                                                                >> 0x1aU))))))) 
                                                                   << 0x1aU) 
                                                                  | ((QData)((IData)(
                                                                                ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 2U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x3000U 
                                                                                & (vlSelf->top__DOT___1976_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0205_)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0563_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0591_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & (vlSelf->top__DOT___1976_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1335_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___1976_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0172_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0120_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1568_))))))))))))) 
                                                                     << 0xbU)) 
                                                                 | (QData)((IData)(
                                                                                ((0x600U 
                                                                                & vlSelf->top__DOT___1976_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0604_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & vlSelf->top__DOT___1976_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0945_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___1976_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0602_) 
                                                                                << 4U) 
                                                                                | (0xfU 
                                                                                & vlSelf->top__DOT___1976_[0U]))))))))))) 
                                                               >> 0x1aU))) 
                                                   << 5U)) 
                                   | (((IData)(vlSelf->top__DOT___0614_) 
                                       << 4U) | ((0xcU 
                                                  & (((((0x1000000U 
                                                         & vlSelf->top__DOT___1977_[0U]) 
                                                        | ((0x800000U 
                                                            & ((IData)(vlSelf->top__DOT___3704_) 
                                                               << 0x14U)) 
                                                           | ((0x400000U 
                                                               & ((IData)(vlSelf->top__DOT___3704_) 
                                                                  << 0x14U)) 
                                                              | ((0x200000U 
                                                                  & ((IData)(vlSelf->top__DOT___3704_) 
                                                                     << 0x14U)) 
                                                                 | ((0x100000U 
                                                                     & ((IData)(vlSelf->top__DOT___3704_) 
                                                                        << 0x14U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0116_) 
                                                                        << 0x13U) 
                                                                       | (((IData)(vlSelf->top__DOT___1203_) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->top__DOT___0983_) 
                                                                              << 0x11U) 
                                                                             | (((IData)(vlSelf->top__DOT___1046_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0019_) 
                                                                                << 0xeU) 
                                                                                | (0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 8U))))))))))))) 
                                                       | (((IData)(vlSelf->top__DOT___0155_) 
                                                           << 0xaU) 
                                                          | ((0x200U 
                                                              & ((IData)(vlSelf->top__DOT___1974_) 
                                                                 << 9U)) 
                                                             | (((IData)(vlSelf->top__DOT___1527_) 
                                                                 << 8U) 
                                                                | ((0x80U 
                                                                    & ((IData)(vlSelf->top__DOT___3647_) 
                                                                       << 4U)) 
                                                                   | (((IData)(vlSelf->top__DOT___0217_) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT___0043_) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0046_)))))))))))) 
                                                      + 
                                                      (((0x1800000U 
                                                         & vlSelf->top__DOT___1976_[0U]) 
                                                        | ((0x400000U 
                                                            & ((~ (IData)(vlSelf->top__DOT___0205_)) 
                                                               << 0x16U)) 
                                                           | (((IData)(vlSelf->top__DOT___0563_) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->top__DOT___0591_) 
                                                                  << 0x14U) 
                                                                 | ((0xf0000U 
                                                                     & vlSelf->top__DOT___1976_[0U]) 
                                                                    | (((IData)(vlSelf->top__DOT___1335_) 
                                                                        << 0xfU) 
                                                                       | ((0x4000U 
                                                                           & vlSelf->top__DOT___1976_[0U]) 
                                                                          | (((IData)(vlSelf->top__DOT___0172_) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->top__DOT___0120_) 
                                                                                << 0xcU) 
                                                                                | ((IData)(vlSelf->top__DOT___1568_) 
                                                                                << 0xbU)))))))))) 
                                                       | ((0x600U 
                                                           & vlSelf->top__DOT___1976_[0U]) 
                                                          | (((IData)(vlSelf->top__DOT___0604_) 
                                                              << 8U) 
                                                             | ((0x80U 
                                                                 & vlSelf->top__DOT___1976_[0U]) 
                                                                | (((IData)(vlSelf->top__DOT___0945_) 
                                                                    << 6U) 
                                                                   | ((0x20U 
                                                                       & vlSelf->top__DOT___1976_[0U]) 
                                                                      | (((IData)(vlSelf->top__DOT___0602_) 
                                                                          << 4U) 
                                                                         | (0xfU 
                                                                            & vlSelf->top__DOT___1976_[0U]))))))))) 
                                                     >> 0x15U)) 
                                                 | ((IData)(vlSelf->top__DOT___0532_) 
                                                    << 1U)))));
}
