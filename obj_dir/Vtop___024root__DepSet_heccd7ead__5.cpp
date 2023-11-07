// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__267(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__267\n"); );
    // Body
    vlSelf->top__DOT___1524_ = (1U & ((((((IData)(vlSelf->top__DOT___1304_) 
                                          | (IData)(vlSelf->top__DOT___0345_)) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->top__DOT___0825_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___0225_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0300_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___0678_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0041_)))))) 
                                       + ((vlSelf->top__DOT___2032_[0U] 
                                           << 0x11U) 
                                          | (vlSelf->top__DOT___2032_[0U] 
                                             >> 0xfU))) 
                                      >> 5U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__268(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__268\n"); );
    // Body
    vlSelf->top__DOT___1598_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    ((0x7eU 
                                                                      & ((IData)(vlSelf->top__DOT___2008_) 
                                                                         >> 2U)) 
                                                                     | (IData)(vlSelf->top__DOT___1531_)))) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___1068_)) 
                                                       << 0x22U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(vlSelf->top__DOT___2008_)))) 
                                                          << 0x21U) 
                                                         | (((QData)((IData)(
                                                                             (((IData)(vlSelf->top__DOT___1028_) 
                                                                               << 0x1fU) 
                                                                              | ((0x7e000000U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1826_) 
                                                                                << 0x18U) 
                                                                                | ((0xfff000U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0606_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1754_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U))))))))))) 
                                                             << 1U) 
                                                            | (QData)((IData)(vlSelf->top__DOT___0617_)))))) 
                                                  + 
                                                  ((((QData)((IData)(
                                                                     ((0xf0U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                          << 4U)) 
                                                                      | (((IData)(vlSelf->top__DOT___1193_) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->top__DOT___1553_) 
                                                                             << 2U) 
                                                                            | (3U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU)))))))) 
                                                     << 0x22U) 
                                                    | ((QData)((IData)(
                                                                       ((0x70000000U 
                                                                         & ((vlSelf->top__DOT___2031_[1U] 
                                                                             << 0x1dU) 
                                                                            | (0x10000000U 
                                                                               & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)))) 
                                                                        | (((IData)(vlSelf->top__DOT___1788_) 
                                                                            << 0x1bU) 
                                                                           | ((0x7f00000U 
                                                                               & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0514_) 
                                                                                << 0x13U) 
                                                                                | ((0x70000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U))))))))))))) 
                                                       << 3U)) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0272_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0401_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0235_))))))) 
                                                 >> 0x29U))));
    vlSelf->top__DOT___0705_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    ((0x7feU 
                                                                      & ((IData)(vlSelf->top__DOT___2008_) 
                                                                         >> 2U)) 
                                                                     | (IData)(vlSelf->top__DOT___1531_)))) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___1068_)) 
                                                       << 0x22U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(vlSelf->top__DOT___2008_)))) 
                                                          << 0x21U) 
                                                         | (((QData)((IData)(
                                                                             (((IData)(vlSelf->top__DOT___1028_) 
                                                                               << 0x1fU) 
                                                                              | ((0x7e000000U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1826_) 
                                                                                << 0x18U) 
                                                                                | ((0xfff000U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0606_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1754_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U))))))))))) 
                                                             << 1U) 
                                                            | (QData)((IData)(vlSelf->top__DOT___0617_)))))) 
                                                  + 
                                                  ((((QData)((IData)(
                                                                     ((0xff0U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                          << 4U)) 
                                                                      | (((IData)(vlSelf->top__DOT___1193_) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->top__DOT___1553_) 
                                                                             << 2U) 
                                                                            | (3U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU)))))))) 
                                                     << 0x22U) 
                                                    | ((QData)((IData)(
                                                                       ((0x70000000U 
                                                                         & ((vlSelf->top__DOT___2031_[1U] 
                                                                             << 0x1dU) 
                                                                            | (0x10000000U 
                                                                               & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)))) 
                                                                        | (((IData)(vlSelf->top__DOT___1788_) 
                                                                            << 0x1bU) 
                                                                           | ((0x7f00000U 
                                                                               & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0514_) 
                                                                                << 0x13U) 
                                                                                | ((0x70000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U))))))))))))) 
                                                       << 3U)) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0272_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0401_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0235_))))))) 
                                                 >> 0x2dU))));
    vlSelf->top__DOT___0944_ = ((IData)(vlSelf->top__DOT___0595_) 
                                ^ (IData)(vlSelf->top__DOT___1598_));
    vlSelf->top__DOT___0704_ = (((IData)(vlSelf->top__DOT___3707_) 
                                 >> 9U) & (IData)(vlSelf->top__DOT___0705_));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__269(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__269\n"); );
    // Body
    vlSelf->top__DOT___1400_ = (1U & (IData)((0x7ffffULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___2029_ 
                                                                               >> 0x1eU)) 
                                                                      << 0x1eU) 
                                                                     | (((IData)(vlSelf->top__DOT___1012_) 
                                                                         << 0x1dU) 
                                                                        | ((0x1ff80000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0x13U)) 
                                                                               << 0x13U)) 
                                                                           | (((IData)(vlSelf->top__DOT___1357_) 
                                                                               << 0x12U) 
                                                                              | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1440_) 
                                                                                << 0x10U) 
                                                                                | ((0xf800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1115_) 
                                                                                << 0xaU) 
                                                                                | ((0x3feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                >> 5U))))))))))))) 
                                                    << 0x1aU) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      | ((0x2000000U 
                                                                          & ((IData)(vlSelf->top__DOT___3823_) 
                                                                             << 0x15U)) 
                                                                         | ((0x1000000U 
                                                                             & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                << 0x15U)) 
                                                                            | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___2028_) 
                                                                                << 0x14U)) 
                                                                               | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___2028_) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1415_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(vlSelf->top__DOT___2055_) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0175_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1311_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0046_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1415_) 
                                                                                << 0xdU) 
                                                                                | ((0x1c00U 
                                                                                & ((IData)(vlSelf->top__DOT___2055_) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0092_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1336_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0012_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0158_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0841_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1015_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___1391_) 
                                                                                << 1U))))))))))))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(vlSelf->top__DOT___0540_)) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0666_)) 
                                                       << 0x38U) 
                                                      | (((QData)((IData)(
                                                                          (((IData)(vlSelf->top__DOT___0122_) 
                                                                            << 0x1fU) 
                                                                           | (((IData)(vlSelf->top__DOT___0127_) 
                                                                               << 0x1eU) 
                                                                              | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2064_ 
                                                                                >> 0xbU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3693_) 
                                                                                << 0x19U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3693_) 
                                                                                << 0x19U)) 
                                                                                | ((0x6000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2064_ 
                                                                                >> 7U)) 
                                                                                << 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0683_) 
                                                                                << 0x18U) 
                                                                                | ((0xff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1193_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1553_) 
                                                                                << 0xdU) 
                                                                                | ((0x1800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x700U 
                                                                                & ((vlSelf->top__DOT___2031_[1U] 
                                                                                << 9U) 
                                                                                | (0x100U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 0x17U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1788_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 0x17U))))))))))))))))) 
                                                          << 0x18U) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->top__DOT___0514_) 
                                                                             << 0x17U) 
                                                                            | ((0x700000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                               | ((0x80000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                << 3U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0x10U) 
                                                                                | ((0xfff0U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1072_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1206_))))))))))))))))) 
                                                 >> 0x27U))));
    vlSelf->top__DOT___1430_ = (1U & (IData)((0xffffffffULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___2029_ 
                                                                               >> 0x1eU)) 
                                                                      << 0x1eU) 
                                                                     | (((IData)(vlSelf->top__DOT___1012_) 
                                                                         << 0x1dU) 
                                                                        | ((0x1ff80000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0x13U)) 
                                                                               << 0x13U)) 
                                                                           | (((IData)(vlSelf->top__DOT___1357_) 
                                                                               << 0x12U) 
                                                                              | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1440_) 
                                                                                << 0x10U) 
                                                                                | ((0xf800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1115_) 
                                                                                << 0xaU) 
                                                                                | ((0x3feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                >> 5U))))))))))))) 
                                                    << 0x1aU) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      | ((0x2000000U 
                                                                          & ((IData)(vlSelf->top__DOT___3823_) 
                                                                             << 0x15U)) 
                                                                         | ((0x1000000U 
                                                                             & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                << 0x15U)) 
                                                                            | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___2028_) 
                                                                                << 0x14U)) 
                                                                               | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___2028_) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1415_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(vlSelf->top__DOT___2055_) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0175_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1311_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0046_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1415_) 
                                                                                << 0xdU) 
                                                                                | ((0x1c00U 
                                                                                & ((IData)(vlSelf->top__DOT___2055_) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0092_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1336_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0012_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0158_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0841_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1015_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___1391_) 
                                                                                << 1U))))))))))))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(vlSelf->top__DOT___0540_)) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0666_)) 
                                                       << 0x38U) 
                                                      | (((QData)((IData)(
                                                                          (((IData)(vlSelf->top__DOT___0122_) 
                                                                            << 0x1fU) 
                                                                           | (((IData)(vlSelf->top__DOT___0127_) 
                                                                               << 0x1eU) 
                                                                              | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2064_ 
                                                                                >> 0xbU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3693_) 
                                                                                << 0x19U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3693_) 
                                                                                << 0x19U)) 
                                                                                | ((0x6000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2064_ 
                                                                                >> 7U)) 
                                                                                << 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0683_) 
                                                                                << 0x18U) 
                                                                                | ((0xff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1193_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1553_) 
                                                                                << 0xdU) 
                                                                                | ((0x1800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x700U 
                                                                                & ((vlSelf->top__DOT___2031_[1U] 
                                                                                << 9U) 
                                                                                | (0x100U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 0x17U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1788_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 0x17U))))))))))))))))) 
                                                          << 0x18U) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->top__DOT___0514_) 
                                                                             << 0x17U) 
                                                                            | ((0x700000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                               | ((0x80000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                << 3U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0x10U) 
                                                                                | ((0xfff0U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1072_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1206_))))))))))))))))) 
                                                 >> 0x1aU))));
    vlSelf->top__DOT___2065_ = (((QData)((IData)((0x3ffffU 
                                                  & (IData)(
                                                            (0x3ffffULL 
                                                             & (((((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1012_) 
                                                                                << 0x1dU) 
                                                                                | ((0x1ff80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1357_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1440_) 
                                                                                << 0x10U) 
                                                                                | ((0xf800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1115_) 
                                                                                << 0xaU) 
                                                                                | ((0x3feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                >> 5U))))))))))))) 
                                                                   << 0x1aU) 
                                                                  | (QData)((IData)(
                                                                                (1U 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                << 0x15U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                << 0x15U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___2028_) 
                                                                                << 0x14U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___2028_) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1415_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(vlSelf->top__DOT___2055_) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0175_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1311_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0046_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1415_) 
                                                                                << 0xdU) 
                                                                                | ((0x1c00U 
                                                                                & ((IData)(vlSelf->top__DOT___2055_) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0092_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1336_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0012_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0158_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0841_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1015_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___1391_) 
                                                                                << 1U))))))))))))))))))))))))) 
                                                                 + 
                                                                 (((QData)((IData)(vlSelf->top__DOT___0540_)) 
                                                                   << 0x39U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___0666_)) 
                                                                      << 0x38U) 
                                                                     | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0122_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0127_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2064_ 
                                                                                >> 0xbU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3693_) 
                                                                                << 0x19U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3693_) 
                                                                                << 0x19U)) 
                                                                                | ((0x6000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2064_ 
                                                                                >> 7U)) 
                                                                                << 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0683_) 
                                                                                << 0x18U) 
                                                                                | ((0xff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1193_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1553_) 
                                                                                << 0xdU) 
                                                                                | ((0x1800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x700U 
                                                                                & ((vlSelf->top__DOT___2031_[1U] 
                                                                                << 9U) 
                                                                                | (0x100U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 0x17U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1788_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 0x17U))))))))))))))))) 
                                                                         << 0x18U) 
                                                                        | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0514_) 
                                                                                << 0x17U) 
                                                                                | ((0x700000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                << 3U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0x10U) 
                                                                                | ((0xfff0U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1072_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1206_))))))))))))))))) 
                                                                >> 0x28U)))))) 
                                 << 0x28U) | (((QData)((IData)(vlSelf->top__DOT___1400_)) 
                                               << 0x27U) 
                                              | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(
                                                                             (0x7fffffffULL 
                                                                              & (((((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1012_) 
                                                                                << 0x1dU) 
                                                                                | ((0x1ff80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1357_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1440_) 
                                                                                << 0x10U) 
                                                                                | ((0xf800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1115_) 
                                                                                << 0xaU) 
                                                                                | ((0x3feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2029_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                >> 5U))))))))))))) 
                                                                                << 0x1aU) 
                                                                                | (QData)((IData)(
                                                                                (1U 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                << 0x15U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                << 0x15U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___2028_) 
                                                                                << 0x14U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___2028_) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1415_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(vlSelf->top__DOT___2055_) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0175_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1311_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0046_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1415_) 
                                                                                << 0xdU) 
                                                                                | ((0x1c00U 
                                                                                & ((IData)(vlSelf->top__DOT___2055_) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0092_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1336_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0012_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0158_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0841_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1015_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___1391_) 
                                                                                << 1U))))))))))))))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(vlSelf->top__DOT___0540_)) 
                                                                                << 0x39U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0666_)) 
                                                                                << 0x38U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0122_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0127_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2064_ 
                                                                                >> 0xbU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3693_) 
                                                                                << 0x19U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3693_) 
                                                                                << 0x19U)) 
                                                                                | ((0x6000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2064_ 
                                                                                >> 7U)) 
                                                                                << 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0683_) 
                                                                                << 0x18U) 
                                                                                | ((0xff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1193_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1553_) 
                                                                                << 0xdU) 
                                                                                | ((0x1800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x700U 
                                                                                & ((vlSelf->top__DOT___2031_[1U] 
                                                                                << 9U) 
                                                                                | (0x100U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 0x17U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1788_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 0x17U))))))))))))))))) 
                                                                                << 0x18U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0514_) 
                                                                                << 0x17U) 
                                                                                | ((0x700000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                << 3U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0x10U) 
                                                                                | ((0xfff0U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1072_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1206_))))))))))))))))) 
                                                                                >> 0x1bU)))))) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT___1430_) 
                                                                     << 0x1aU) 
                                                                    | (0x3ffffffU 
                                                                       & ((1U 
                                                                           | ((0x2000000U 
                                                                               & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                << 0x15U)) 
                                                                              | ((0x1000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                << 0x15U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___2028_) 
                                                                                << 0x14U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___3823_) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___2028_) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1415_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(vlSelf->top__DOT___2055_) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0175_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1311_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0046_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1415_) 
                                                                                << 0xdU) 
                                                                                | ((0x1c00U 
                                                                                & ((IData)(vlSelf->top__DOT___2055_) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1170_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0092_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1336_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0012_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0158_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0841_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1015_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___1391_) 
                                                                                << 1U)))))))))))))))))))))) 
                                                                          + 
                                                                          ((0x3000000U 
                                                                            & (vlSelf->top__DOT___2031_[0U] 
                                                                               << 1U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0514_) 
                                                                               << 0x17U) 
                                                                              | ((0x700000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                << 3U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0x10U) 
                                                                                | ((0xfff0U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1235_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1072_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1206_))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__270(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__270\n"); );
    // Body
    vlSelf->top__DOT___2152_ = (0xfU & (((8U & ((IData)(
                                                        (vlSelf->top__DOT___2029_ 
                                                         >> 1U)) 
                                                << 3U)) 
                                         | (((IData)(vlSelf->top__DOT___0663_) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT___0532_))) 
                                        + ((0xcU & 
                                            ((IData)(
                                                     (vlSelf->top__DOT___2126_ 
                                                      >> 0x2bU)) 
                                             << 2U)) 
                                           | (((IData)(vlSelf->top__DOT___0710_) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelf->top__DOT___0320_)))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__271(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__271\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vtemp_2[0U] = (((IData)((((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->top__DOT___1889_) 
                                                    >> 2U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1fffU 
                                                               & ((vlSelf->top__DOT___1976_[2U] 
                                                                   << 6U) 
                                                                  | (vlSelf->top__DOT___1976_[1U] 
                                                                     >> 0x1aU))))) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 (((IData)(
                                                                           (vlSelf->top__DOT___3636_ 
                                                                            >> 0x22U)) 
                                                                   << 0x1fU) 
                                                                  | ((0x7fffff00U 
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
                                                                                >> 0x1aU)))))))) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
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
                                                                                >> 3U))))))))))))))))))))) 
                      << 0xbU) | (((IData)(vlSelf->top__DOT___0155_) 
                                   << 0xaU) | ((0x200U 
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
                                                                       | (IData)(vlSelf->top__DOT___0046_))))))))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->top__DOT___1889_) 
                                                    >> 2U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1fffU 
                                                               & ((vlSelf->top__DOT___1976_[2U] 
                                                                   << 6U) 
                                                                  | (vlSelf->top__DOT___1976_[1U] 
                                                                     >> 0x1aU))))) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 (((IData)(
                                                                           (vlSelf->top__DOT___3636_ 
                                                                            >> 0x22U)) 
                                                                   << 0x1fU) 
                                                                  | ((0x7fffff00U 
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
                                                                                >> 0x1aU)))))))) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
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
                                                                                >> 3U))))))))))))))))))))) 
                      >> 0x15U) | ((IData)(((((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->top__DOT___1889_) 
                                                                  >> 2U)))) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 (0x1fffU 
                                                                  & ((vlSelf->top__DOT___1976_[2U] 
                                                                      << 6U) 
                                                                     | (vlSelf->top__DOT___1976_[1U] 
                                                                        >> 0x1aU))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3636_ 
                                                                               >> 0x22U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x7fffff00U 
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
                                                                                >> 0x1aU)))))))) 
                                                    << 0x12U) 
                                                   | (QData)((IData)(
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
                                                                                >> 3U)))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0xbU));
    __Vtemp_2[2U] = ((IData)(((((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->top__DOT___1889_) 
                                                    >> 2U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1fffU 
                                                               & ((vlSelf->top__DOT___1976_[2U] 
                                                                   << 6U) 
                                                                  | (vlSelf->top__DOT___1976_[1U] 
                                                                     >> 0x1aU))))) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 (((IData)(
                                                                           (vlSelf->top__DOT___3636_ 
                                                                            >> 0x22U)) 
                                                                   << 0x1fU) 
                                                                  | ((0x7fffff00U 
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
                                                                                >> 0x1aU)))))))) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
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
                                                                                >> 3U)))))))))))))))))))) 
                              >> 0x20U)) >> 0x15U);
    __Vtemp_3[0U] = (((IData)((0x4000000000000000ULL 
                               | (((QData)((IData)(vlSelf->top__DOT___0065_)) 
                                   << 0x3dU) | (((QData)((IData)(vlSelf->top__DOT___0018_)) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    (0x1fffU 
                                                                     & ((vlSelf->top__DOT___1976_[2U] 
                                                                         << 6U) 
                                                                        | (vlSelf->top__DOT___1976_[1U] 
                                                                           >> 0x1aU))))) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       (((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 0x22U)) 
                                                                         << 0x1fU) 
                                                                        | ((0x7fffff00U 
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
                                                                                >> 0x1aU)))))))) 
                                                       << 0xfU) 
                                                      | (QData)((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___1568_))))))))))))))))))) 
                      << 0xbU) | ((0x600U & vlSelf->top__DOT___1976_[0U]) 
                                  | (((IData)(vlSelf->top__DOT___0604_) 
                                      << 8U) | ((0x80U 
                                                 & vlSelf->top__DOT___1976_[0U]) 
                                                | (((IData)(vlSelf->top__DOT___0945_) 
                                                    << 6U) 
                                                   | ((0x20U 
                                                       & vlSelf->top__DOT___1976_[0U]) 
                                                      | (((IData)(vlSelf->top__DOT___0602_) 
                                                          << 4U) 
                                                         | (0xfU 
                                                            & vlSelf->top__DOT___1976_[0U]))))))));
    __Vtemp_3[1U] = (((IData)((0x4000000000000000ULL 
                               | (((QData)((IData)(vlSelf->top__DOT___0065_)) 
                                   << 0x3dU) | (((QData)((IData)(vlSelf->top__DOT___0018_)) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    (0x1fffU 
                                                                     & ((vlSelf->top__DOT___1976_[2U] 
                                                                         << 6U) 
                                                                        | (vlSelf->top__DOT___1976_[1U] 
                                                                           >> 0x1aU))))) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       (((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 0x22U)) 
                                                                         << 0x1fU) 
                                                                        | ((0x7fffff00U 
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
                                                                                >> 0x1aU)))))))) 
                                                       << 0xfU) 
                                                      | (QData)((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___1568_))))))))))))))))))) 
                      >> 0x15U) | ((IData)(((0x4000000000000000ULL 
                                             | (((QData)((IData)(vlSelf->top__DOT___0065_)) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___0018_)) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (0x1fffU 
                                                                        & ((vlSelf->top__DOT___1976_[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->top__DOT___1976_[1U] 
                                                                              >> 0x1aU))))) 
                                                       << 0x2fU) 
                                                      | (((QData)((IData)(
                                                                          (((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 0x22U)) 
                                                                            << 0x1fU) 
                                                                           | ((0x7fffff00U 
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
                                                                                >> 0x1aU)))))))) 
                                                          << 0xfU) 
                                                         | (QData)((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___1568_)))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0xbU));
    __Vtemp_3[2U] = ((IData)(((0x4000000000000000ULL 
                               | (((QData)((IData)(vlSelf->top__DOT___0065_)) 
                                   << 0x3dU) | (((QData)((IData)(vlSelf->top__DOT___0018_)) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    (0x1fffU 
                                                                     & ((vlSelf->top__DOT___1976_[2U] 
                                                                         << 6U) 
                                                                        | (vlSelf->top__DOT___1976_[1U] 
                                                                           >> 0x1aU))))) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       (((IData)(
                                                                                (vlSelf->top__DOT___3636_ 
                                                                                >> 0x22U)) 
                                                                         << 0x1fU) 
                                                                        | ((0x7fffff00U 
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
                                                                                >> 0x1aU)))))))) 
                                                       << 0xfU) 
                                                      | (QData)((IData)(
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
                                                                                | (IData)(vlSelf->top__DOT___1568_)))))))))))))))))) 
                              >> 0x20U)) >> 0x15U);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    __Vtemp_6[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1790_)) 
                              << 0x35U) | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (1ULL 
                                                                        & ((((((QData)((IData)(
                                                                                ((0xffff00U 
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
                                                                                ((0x7ffff00U 
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
                                                                           >> 0x34U)))))) 
                                            << 0x34U) 
                                           | (((QData)((IData)(
                                                               (0x3ffffffU 
                                                                & (vlSelf->top__DOT___1926_ 
                                                                   >> 5U)))) 
                                               << 0x1aU) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___0614_) 
                                                                  << 0x19U) 
                                                                 | ((0x1800000U 
                                                                     & (vlSelf->top__DOT___1926_ 
                                                                        << 0x15U)) 
                                                                    | (0x7fffffU 
                                                                       & ((((0x400000U 
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
                                                                                << 8U))))))))))) 
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
                                                                          (((0x400000U 
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
                                                                                << 0xbU))))))))) 
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
                                                                                & vlSelf->top__DOT___1976_[0U]))))))))))))))))));
    __Vtemp_6[1U] = ((0xffc00000U & __Vtemp_4[1U]) 
                     | (IData)(((((QData)((IData)(vlSelf->top__DOT___1790_)) 
                                  << 0x35U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (1ULL 
                                                                            & ((((((QData)((IData)(
                                                                                ((0xffff00U 
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
                                                                                ((0x7ffff00U 
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
                                                                               >> 0x34U)))))) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   (0x3ffffffU 
                                                                    & (vlSelf->top__DOT___1926_ 
                                                                       >> 5U)))) 
                                                   << 0x1aU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___0614_) 
                                                                      << 0x19U) 
                                                                     | ((0x1800000U 
                                                                         & (vlSelf->top__DOT___1926_ 
                                                                            << 0x15U)) 
                                                                        | (0x7fffffU 
                                                                           & ((((0x400000U 
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
                                                                                << 8U))))))))))) 
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
                                                                              (((0x400000U 
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
                                                                                << 0xbU))))))))) 
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
                                                                                & vlSelf->top__DOT___1976_[0U]))))))))))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___1975_[0U] = __Vtemp_6[0U];
    vlSelf->top__DOT___1975_[1U] = __Vtemp_6[1U];
    vlSelf->top__DOT___1975_[2U] = (0x7ffU & __Vtemp_4[2U]);
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__272(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__272\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1068_)) 
                              << 0x22U) | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->top__DOT___2008_)))) 
                                            << 0x21U) 
                                           | (((QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___1028_) 
                                                                 << 0x1fU) 
                                                                | ((0x7e000000U 
                                                                    & (vlSelf->top__DOT___2032_[0U] 
                                                                       >> 1U)) 
                                                                   | (((IData)(vlSelf->top__DOT___1826_) 
                                                                       << 0x18U) 
                                                                      | ((0xfff000U 
                                                                          & (vlSelf->top__DOT___2032_[0U] 
                                                                             >> 1U)) 
                                                                         | (((IData)(vlSelf->top__DOT___0606_) 
                                                                             << 0xbU) 
                                                                            | ((0x600U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                               | (((IData)(vlSelf->top__DOT___1754_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U))))))))))) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelf->top__DOT___0617_))))));
    __Vtemp_2[1U] = ((0xfffffff8U & (0x100000U | ((0xffc00000U 
                                                   & vlSelf->top__DOT___2032_[1U]) 
                                                  | (((IData)(vlSelf->top__DOT___1527_) 
                                                      << 0x15U) 
                                                     | (((IData)(vlSelf->top__DOT___0149_) 
                                                         << 0x13U) 
                                                        | (((IData)(vlSelf->top__DOT___1265_) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->top__DOT___0272_) 
                                                               << 0x11U) 
                                                              | ((0x10000U 
                                                                  & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                     << 0x10U)) 
                                                                 | ((0xfff0U 
                                                                     & ((IData)(vlSelf->top__DOT___2008_) 
                                                                        << 1U)) 
                                                                    | ((IData)(vlSelf->top__DOT___1531_) 
                                                                       << 3U)))))))))) 
                     | (IData)(((((QData)((IData)(vlSelf->top__DOT___1068_)) 
                                  << 0x22U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->top__DOT___2008_)))) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT___1028_) 
                                                                     << 0x1fU) 
                                                                    | ((0x7e000000U 
                                                                        & (vlSelf->top__DOT___2032_[0U] 
                                                                           >> 1U)) 
                                                                       | (((IData)(vlSelf->top__DOT___1826_) 
                                                                           << 0x18U) 
                                                                          | ((0xfff000U 
                                                                              & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0606_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1754_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U))))))))))) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelf->top__DOT___0617_))))) 
                                >> 0x20U)));
    __Vtemp_2[2U] = (7U & ((7U & vlSelf->top__DOT___2032_[2U]) 
                           | ((7U & ((IData)(vlSelf->top__DOT___1527_) 
                                     >> 0xbU)) | ((7U 
                                                   & ((IData)(vlSelf->top__DOT___0149_) 
                                                      >> 0xdU)) 
                                                  | ((7U 
                                                      & ((IData)(vlSelf->top__DOT___1265_) 
                                                         >> 0xeU)) 
                                                     | ((7U 
                                                         & ((IData)(vlSelf->top__DOT___0272_) 
                                                            >> 0xfU)) 
                                                        | ((IData)(vlSelf->top__DOT___1531_) 
                                                           >> 0x1dU)))))));
    __Vtemp_3[0U] = (((IData)((((QData)((IData)((1U 
                                                 & (vlSelf->top__DOT___2031_[2U] 
                                                    >> 2U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (((IData)(
                                                                        (vlSelf->top__DOT___3747_ 
                                                                         >> 0x14U)) 
                                                                << 0x1fU) 
                                                               | ((0x40000000U 
                                                                   & (vlSelf->top__DOT___2031_[2U] 
                                                                      << 0x1eU)) 
                                                                  | ((0x20000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                         << 0x1dU)) 
                                                                     | ((0x10000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                            << 0x1cU)) 
                                                                        | ((0xfe00000U 
                                                                            & (vlSelf->top__DOT___2031_[1U] 
                                                                               >> 2U)) 
                                                                           | ((0x100000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 0x10U)) 
                                                                                | ((0xe000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x1ff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1193_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1553_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU))))))))))))))))))) 
                                              << 0x1fU) 
                                             | (QData)((IData)(
                                                               ((0x70000000U 
                                                                 & ((vlSelf->top__DOT___2031_[1U] 
                                                                     << 0x1dU) 
                                                                    | (0x10000000U 
                                                                       & (vlSelf->top__DOT___2031_[0U] 
                                                                          >> 3U)))) 
                                                                | (((IData)(vlSelf->top__DOT___1788_) 
                                                                    << 0x1bU) 
                                                                   | ((0x7f00000U 
                                                                       & (vlSelf->top__DOT___2031_[0U] 
                                                                          >> 3U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0514_) 
                                                                          << 0x13U) 
                                                                         | ((0x70000U 
                                                                             & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                            | ((0x8000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                >> 1U)) 
                                                                               | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)))))))))))))))) 
                      << 3U) | (((IData)(vlSelf->top__DOT___0272_) 
                                 << 2U) | (((IData)(vlSelf->top__DOT___0401_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0235_))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)((1U 
                                                 & (vlSelf->top__DOT___2031_[2U] 
                                                    >> 2U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (((IData)(
                                                                        (vlSelf->top__DOT___3747_ 
                                                                         >> 0x14U)) 
                                                                << 0x1fU) 
                                                               | ((0x40000000U 
                                                                   & (vlSelf->top__DOT___2031_[2U] 
                                                                      << 0x1eU)) 
                                                                  | ((0x20000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                         << 0x1dU)) 
                                                                     | ((0x10000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                            << 0x1cU)) 
                                                                        | ((0xfe00000U 
                                                                            & (vlSelf->top__DOT___2031_[1U] 
                                                                               >> 2U)) 
                                                                           | ((0x100000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 0x10U)) 
                                                                                | ((0xe000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x1ff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1193_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1553_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU))))))))))))))))))) 
                                              << 0x1fU) 
                                             | (QData)((IData)(
                                                               ((0x70000000U 
                                                                 & ((vlSelf->top__DOT___2031_[1U] 
                                                                     << 0x1dU) 
                                                                    | (0x10000000U 
                                                                       & (vlSelf->top__DOT___2031_[0U] 
                                                                          >> 3U)))) 
                                                                | (((IData)(vlSelf->top__DOT___1788_) 
                                                                    << 0x1bU) 
                                                                   | ((0x7f00000U 
                                                                       & (vlSelf->top__DOT___2031_[0U] 
                                                                          >> 3U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0514_) 
                                                                          << 0x13U) 
                                                                         | ((0x70000U 
                                                                             & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                            | ((0x8000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                >> 1U)) 
                                                                               | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)))))))))))))))) 
                      >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT___2031_[2U] 
                                                                  >> 2U)))) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 (((IData)(
                                                                           (vlSelf->top__DOT___3747_ 
                                                                            >> 0x14U)) 
                                                                   << 0x1fU) 
                                                                  | ((0x40000000U 
                                                                      & (vlSelf->top__DOT___2031_[2U] 
                                                                         << 0x1eU)) 
                                                                     | ((0x20000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                            << 0x1dU)) 
                                                                        | ((0x10000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                               << 0x1cU)) 
                                                                           | ((0xfe00000U 
                                                                               & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 2U)) 
                                                                              | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 0x10U)) 
                                                                                | ((0xe000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x1ff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1193_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1553_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU))))))))))))))))))) 
                                                 << 0x1fU) 
                                                | (QData)((IData)(
                                                                  ((0x70000000U 
                                                                    & ((vlSelf->top__DOT___2031_[1U] 
                                                                        << 0x1dU) 
                                                                       | (0x10000000U 
                                                                          & (vlSelf->top__DOT___2031_[0U] 
                                                                             >> 3U)))) 
                                                                   | (((IData)(vlSelf->top__DOT___1788_) 
                                                                       << 0x1bU) 
                                                                      | ((0x7f00000U 
                                                                          & (vlSelf->top__DOT___2031_[0U] 
                                                                             >> 3U)) 
                                                                         | (((IData)(vlSelf->top__DOT___0514_) 
                                                                             << 0x13U) 
                                                                            | ((0x70000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                               | ((0x8000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U))))))))))))))) 
                                            >> 0x20U)) 
                                   << 3U));
    __Vtemp_3[2U] = ((IData)(((((QData)((IData)((1U 
                                                 & (vlSelf->top__DOT___2031_[2U] 
                                                    >> 2U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (((IData)(
                                                                        (vlSelf->top__DOT___3747_ 
                                                                         >> 0x14U)) 
                                                                << 0x1fU) 
                                                               | ((0x40000000U 
                                                                   & (vlSelf->top__DOT___2031_[2U] 
                                                                      << 0x1eU)) 
                                                                  | ((0x20000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                         << 0x1dU)) 
                                                                     | ((0x10000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                            << 0x1cU)) 
                                                                        | ((0xfe00000U 
                                                                            & (vlSelf->top__DOT___2031_[1U] 
                                                                               >> 2U)) 
                                                                           | ((0x100000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 0x10U)) 
                                                                                | ((0xe000U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x1ff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1193_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1553_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU))))))))))))))))))) 
                                              << 0x1fU) 
                                             | (QData)((IData)(
                                                               ((0x70000000U 
                                                                 & ((vlSelf->top__DOT___2031_[1U] 
                                                                     << 0x1dU) 
                                                                    | (0x10000000U 
                                                                       & (vlSelf->top__DOT___2031_[0U] 
                                                                          >> 3U)))) 
                                                                | (((IData)(vlSelf->top__DOT___1788_) 
                                                                    << 0x1bU) 
                                                                   | ((0x7f00000U 
                                                                       & (vlSelf->top__DOT___2031_[0U] 
                                                                          >> 3U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0514_) 
                                                                          << 0x13U) 
                                                                         | ((0x70000U 
                                                                             & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                            | ((0x8000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                >> 1U)) 
                                                                               | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U))))))))))))))) 
                              >> 0x20U)) >> 0x1dU);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    __Vtemp_6[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0705_)) 
                              << 0x2dU) | (((QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (7ULL 
                                                                        & (((((QData)((IData)(
                                                                                ((0x3feU 
                                                                                & ((IData)(vlSelf->top__DOT___2008_) 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT___1531_)))) 
                                                                              << 0x23U) 
                                                                             | (((QData)((IData)(vlSelf->top__DOT___1068_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___2008_)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1028_) 
                                                                                << 0x1fU) 
                                                                                | ((0x7e000000U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1826_) 
                                                                                << 0x18U) 
                                                                                | ((0xfff000U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0606_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1754_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U))))))))))) 
                                                                                << 1U) 
                                                                                | (QData)((IData)(vlSelf->top__DOT___0617_)))))) 
                                                                            + 
                                                                            ((((QData)((IData)(
                                                                                ((0x7f0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1193_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1553_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU)))))))) 
                                                                               << 0x22U) 
                                                                              | ((QData)((IData)(
                                                                                ((0x70000000U 
                                                                                & ((vlSelf->top__DOT___2031_[1U] 
                                                                                << 0x1dU) 
                                                                                | (0x10000000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1788_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7f00000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0514_) 
                                                                                << 0x13U) 
                                                                                | ((0x70000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U))))))))))))) 
                                                                                << 3U)) 
                                                                             | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0235_))))))) 
                                                                           >> 0x2aU)))))) 
                                            << 0x2aU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___1598_)) 
                                               << 0x29U) 
                                              | (((QData)((IData)(
                                                                  (0x1ffffffU 
                                                                   & (IData)(
                                                                             (0x1ffffffULL 
                                                                              & (((((QData)((IData)(
                                                                                ((0x3eU 
                                                                                & ((IData)(vlSelf->top__DOT___2008_) 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT___1531_)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1068_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___2008_)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1028_) 
                                                                                << 0x1fU) 
                                                                                | ((0x7e000000U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1826_) 
                                                                                << 0x18U) 
                                                                                | ((0xfff000U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0606_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1754_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U))))))))))) 
                                                                                << 1U) 
                                                                                | (QData)((IData)(vlSelf->top__DOT___0617_)))))) 
                                                                                + 
                                                                                ((((QData)((IData)(
                                                                                ((0x70U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1193_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1553_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU)))))))) 
                                                                                << 0x22U) 
                                                                                | ((QData)((IData)(
                                                                                ((0x70000000U 
                                                                                & ((vlSelf->top__DOT___2031_[1U] 
                                                                                << 0x1dU) 
                                                                                | (0x10000000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1788_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7f00000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0514_) 
                                                                                << 0x13U) 
                                                                                | ((0x70000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U))))))))))))) 
                                                                                << 3U)) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0235_))))))) 
                                                                                >> 0x10U)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT___1685_) 
                                                                     << 0xfU) 
                                                                    | (0x7fffU 
                                                                       & (((0x6000U 
                                                                            & vlSelf->top__DOT___2032_[0U]) 
                                                                           | (((IData)(vlSelf->top__DOT___0606_) 
                                                                               << 0xcU) 
                                                                              | ((0xc00U 
                                                                                & vlSelf->top__DOT___2032_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1754_) 
                                                                                << 9U) 
                                                                                | ((0x1feU 
                                                                                & vlSelf->top__DOT___2032_[0U]) 
                                                                                | (IData)(vlSelf->top__DOT___0617_)))))) 
                                                                          + 
                                                                          ((0x7ff8U 
                                                                            & vlSelf->top__DOT___2031_[0U]) 
                                                                           | (((IData)(vlSelf->top__DOT___0272_) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0235_))))))))))))));
    __Vtemp_6[1U] = ((0xffffc000U & __Vtemp_4[1U]) 
                     | (IData)(((((QData)((IData)(vlSelf->top__DOT___0705_)) 
                                  << 0x2dU) | (((QData)((IData)(
                                                                (7U 
                                                                 & (IData)(
                                                                           (7ULL 
                                                                            & (((((QData)((IData)(
                                                                                ((0x3feU 
                                                                                & ((IData)(vlSelf->top__DOT___2008_) 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT___1531_)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1068_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___2008_)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1028_) 
                                                                                << 0x1fU) 
                                                                                | ((0x7e000000U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1826_) 
                                                                                << 0x18U) 
                                                                                | ((0xfff000U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0606_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1754_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U))))))))))) 
                                                                                << 1U) 
                                                                                | (QData)((IData)(vlSelf->top__DOT___0617_)))))) 
                                                                                + 
                                                                                ((((QData)((IData)(
                                                                                ((0x7f0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1193_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1553_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU)))))))) 
                                                                                << 0x22U) 
                                                                                | ((QData)((IData)(
                                                                                ((0x70000000U 
                                                                                & ((vlSelf->top__DOT___2031_[1U] 
                                                                                << 0x1dU) 
                                                                                | (0x10000000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1788_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7f00000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0514_) 
                                                                                << 0x13U) 
                                                                                | ((0x70000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U))))))))))))) 
                                                                                << 3U)) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0235_))))))) 
                                                                               >> 0x2aU)))))) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___1598_)) 
                                                   << 0x29U) 
                                                  | (((QData)((IData)(
                                                                      (0x1ffffffU 
                                                                       & (IData)(
                                                                                (0x1ffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                ((0x3eU 
                                                                                & ((IData)(vlSelf->top__DOT___2008_) 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT___1531_)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1068_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___2008_)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1028_) 
                                                                                << 0x1fU) 
                                                                                | ((0x7e000000U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1826_) 
                                                                                << 0x18U) 
                                                                                | ((0xfff000U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0606_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1754_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___2032_[0U] 
                                                                                >> 1U))))))))))) 
                                                                                << 1U) 
                                                                                | (QData)((IData)(vlSelf->top__DOT___0617_)))))) 
                                                                                + 
                                                                                ((((QData)((IData)(
                                                                                ((0x70U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1193_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1553_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU)))))))) 
                                                                                << 0x22U) 
                                                                                | ((QData)((IData)(
                                                                                ((0x70000000U 
                                                                                & ((vlSelf->top__DOT___2031_[1U] 
                                                                                << 0x1dU) 
                                                                                | (0x10000000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1788_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7f00000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0514_) 
                                                                                << 0x13U) 
                                                                                | ((0x70000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___1887_ 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1101_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (vlSelf->top__DOT___2031_[0U] 
                                                                                >> 3U))))))))))))) 
                                                                                << 3U)) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0235_))))))) 
                                                                                >> 0x10U)))))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->top__DOT___1685_) 
                                                                         << 0xfU) 
                                                                        | (0x7fffU 
                                                                           & (((0x6000U 
                                                                                & vlSelf->top__DOT___2032_[0U]) 
                                                                               | (((IData)(vlSelf->top__DOT___0606_) 
                                                                                << 0xcU) 
                                                                                | ((0xc00U 
                                                                                & vlSelf->top__DOT___2032_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1754_) 
                                                                                << 9U) 
                                                                                | ((0x1feU 
                                                                                & vlSelf->top__DOT___2032_[0U]) 
                                                                                | (IData)(vlSelf->top__DOT___0617_)))))) 
                                                                              + 
                                                                              ((0x7ff8U 
                                                                                & vlSelf->top__DOT___2031_[0U]) 
                                                                               | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0401_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0235_))))))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___2030_[0U] = __Vtemp_6[0U];
    vlSelf->top__DOT___2030_[1U] = __Vtemp_6[1U];
    vlSelf->top__DOT___2030_[2U] = (7U & __Vtemp_4[2U]);
    vlSelf->top__DOT___1617_ = (1U & ((((0x3ffcU & 
                                         (vlSelf->top__DOT___2030_[0U] 
                                          << 2U)) | 
                                        (((IData)(vlSelf->top__DOT___0995_) 
                                          << 1U) | (IData)(vlSelf->top__DOT___0082_))) 
                                       + (((IData)(vlSelf->top__DOT___1469_) 
                                           << 0xdU) 
                                          | (((IData)(vlSelf->top__DOT___1408_) 
                                              << 0xcU) 
                                             | ((0xe00U 
                                                 & ((IData)(vlSelf->top__DOT___2023_) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->top__DOT___0327_) 
                                                    << 8U) 
                                                   | ((0xfcU 
                                                       & ((IData)(vlSelf->top__DOT___2023_) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelf->top__DOT___0425_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0091_)))))))) 
                                      >> 0xdU));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__273(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__273\n"); );
    // Body
    vlSelf->top__DOT___0353_ = (1U & (~ (((IData)(vlSelf->top__DOT___1430_) 
                                          & (IData)(vlSelf->top__DOT___1406_)) 
                                         | ((IData)(vlSelf->top__DOT___1429_) 
                                            & (IData)(vlSelf->top__DOT___0289_)))));
    vlSelf->top__DOT___0838_ = (1U & (~ ((IData)(vlSelf->top__DOT___1101_) 
                                         & (IData)(vlSelf->top__DOT___0353_))));
    vlSelf->top__DOT___0352_ = ((IData)(vlSelf->top__DOT___0354_) 
                                & (~ (IData)(vlSelf->top__DOT___0353_)));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__274(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__274\n"); );
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__275(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__275\n"); );
    // Body
    vlSelf->top__DOT___0579_ = (1U & ((((0xfc00U & 
                                         (vlSelf->top__DOT___2030_[1U] 
                                          >> 9U)) | 
                                        (((IData)(vlSelf->top__DOT___0619_) 
                                          << 9U) | 
                                         (((IData)(vlSelf->top__DOT___0408_) 
                                           << 8U) | 
                                          (((IData)(vlSelf->top__DOT___0177_) 
                                            << 7U) 
                                           | ((0x40U 
                                               & (vlSelf->out_data[0x3cU] 
                                                  << 6U)) 
                                              | (((IData)(vlSelf->top__DOT___1362_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___1004_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___0024_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___0173_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___0417_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0657_))))))))))) 
                                       + (8U | ((0xfff0U 
                                                 & vlSelf->top__DOT___2079_) 
                                                | (((IData)(vlSelf->top__DOT___0613_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0732_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1015_)))))) 
                                      >> 0xfU));
    vlSelf->top__DOT___1173_ = (1U & ((((0x7c00U & 
                                         (vlSelf->top__DOT___2030_[1U] 
                                          >> 9U)) | 
                                        (((IData)(vlSelf->top__DOT___0619_) 
                                          << 9U) | 
                                         (((IData)(vlSelf->top__DOT___0408_) 
                                           << 8U) | 
                                          (((IData)(vlSelf->top__DOT___0177_) 
                                            << 7U) 
                                           | ((0x40U 
                                               & (vlSelf->out_data[0x3cU] 
                                                  << 6U)) 
                                              | (((IData)(vlSelf->top__DOT___1362_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___1004_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___0024_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___0173_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___0417_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0657_))))))))))) 
                                       + (8U | ((0x7ff0U 
                                                 & vlSelf->top__DOT___2079_) 
                                                | (((IData)(vlSelf->top__DOT___0613_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0732_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1015_)))))) 
                                      >> 0xeU));
    vlSelf->top__DOT___0555_ = (1U & (~ (((IData)(vlSelf->top__DOT___0821_) 
                                          & (IData)(vlSelf->top__DOT___0116_)) 
                                         | (IData)(vlSelf->top__DOT___1173_))));
    vlSelf->top__DOT___1901_[0U] = ((0xfffe0007U & 
                                     vlSelf->top__DOT___1901_[0U]) 
                                    | (0xfffffff8U 
                                       & (((IData)(vlSelf->top__DOT___0555_) 
                                           << 0x10U) 
                                          | ((IData)(vlSelf->top__DOT___3718_) 
                                             << 3U))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__276(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__276\n"); );
    // Body
    vlSelf->top__DOT___0850_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0x3ffU 
                                                                     & (vlSelf->top__DOT___2030_[1U] 
                                                                        >> 0xeU)))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0705_)) 
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
                                                                                | (IData)(vlSelf->top__DOT___0082_))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0x30U 
                                                                      & ((IData)(vlSelf->top__DOT___1994_) 
                                                                         >> 2U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x26U)) 
                                                                            << 3U)) 
                                                                        | ((6U 
                                                                            & ((IData)(vlSelf->top__DOT___1994_) 
                                                                               >> 2U)) 
                                                                           | (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x23U)))))))) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       (3U 
                                                                        & (vlSelf->top__DOT___2048_[1U] 
                                                                           >> 0x12U)))) 
                                                       << 0x32U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x20U))))) 
                                                          << 0x31U) 
                                                         | (((QData)((IData)(
                                                                             ((0xc0000000U 
                                                                               & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                              | ((0x38000000U 
                                                                                & ((IData)(vlSelf->top__DOT___2005_) 
                                                                                << 0x13U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3800000U 
                                                                                & ((IData)(vlSelf->top__DOT___2005_) 
                                                                                << 0x13U)) 
                                                                                | ((0x600000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                                             << 0x11U) 
                                                            | (QData)((IData)(
                                                                              (((IData)(vlSelf->top__DOT___0192_) 
                                                                                << 0x10U) 
                                                                               | ((0xc000U 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1469_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1408_) 
                                                                                << 0xcU) 
                                                                                | ((0xe00U 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0327_) 
                                                                                << 8U) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0425_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0091_)))))))))))))))) 
                                                 >> 0x39U))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__277(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__277\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__278(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__278\n"); );
    // Body
    vlSelf->top__DOT___0679_ = (1U & ((((0x1cU & (vlSelf->top__DOT___2030_[0U] 
                                                  << 2U)) 
                                        | (((IData)(vlSelf->top__DOT___0995_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0082_))) 
                                       + ((0x1cU & 
                                           ((IData)(vlSelf->top__DOT___2023_) 
                                            << 2U)) 
                                          | (((IData)(vlSelf->top__DOT___0425_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___0091_)))) 
                                      >> 4U));
    vlSelf->top__DOT___0351_ = ((IData)(vlSelf->top__DOT___0679_) 
                                & (IData)(vlSelf->top__DOT___0678_));
    vlSelf->top__DOT___1940_ = ((0x3ffffffffdULL & vlSelf->top__DOT___1940_) 
                                | ((QData)((IData)(vlSelf->top__DOT___0351_)) 
                                   << 1U));
    vlSelf->top__DOT___0349_ = ((IData)(vlSelf->top__DOT___0351_) 
                                & (~ ((IData)(vlSelf->top__DOT___3732_) 
                                      >> 5U)));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__279(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__279\n"); );
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__280(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__280\n"); );
    // Body
    vlSelf->top__DOT___2188_ = ((0x1f80000U & (vlSelf->top__DOT___3787_ 
                                               << 5U)) 
                                | ((0x40000U & (vlSelf->top__DOT___3787_ 
                                                << 5U)) 
                                   | ((0x3ffe0U & (vlSelf->top__DOT___3787_ 
                                                   << 5U)) 
                                      | (((IData)(vlSelf->top__DOT___0352_) 
                                          << 4U) | 
                                         (((IData)(vlSelf->top__DOT___1691_) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT___1422_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0796_)))))));
    vlSelf->top__DOT____VdfgTmp_hd12911ea__0 = ((0x1000U 
                                                 & (vlSelf->top__DOT___3787_ 
                                                    >> 1U)) 
                                                | (0xfffU 
                                                   & (vlSelf->top__DOT___2188_ 
                                                      >> 6U)));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__281(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__281\n"); );
    // Body
    vlSelf->top__DOT___2077_ = ((0x100000U & ((((IData)(vlSelf->top__DOT___0581_) 
                                                << 0x14U) 
                                               | (((IData)(vlSelf->top__DOT___0148_) 
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
                                                                       | (IData)(vlSelf->top__DOT___0099_)))))))))) 
                                              + ((0x1fff80U 
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
                                                                   | (IData)(vlSelf->top__DOT___0139_)))))))))) 
                                | (((IData)(vlSelf->top__DOT___1403_) 
                                    << 0x13U) | ((0x78000U 
                                                  & ((((IData)(vlSelf->top__DOT___0489_) 
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
                                                                        | (IData)(vlSelf->top__DOT___0099_)))))))) 
                                                     + 
                                                     ((0x7ff80U 
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
                                                                        | (IData)(vlSelf->top__DOT___0139_)))))))))) 
                                                 | (((IData)(vlSelf->top__DOT___0742_) 
                                                     << 0xeU) 
                                                    | ((0x3c00U 
                                                        & (((0x3ff8U 
                                                             & ((IData)(vlSelf->top__DOT___2042_) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelf->top__DOT___1532_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___0637_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___0099_)))) 
                                                           + 
                                                           ((0x3f80U 
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
                                                                              | (IData)(vlSelf->top__DOT___0139_)))))))))) 
                                                       | (((IData)(vlSelf->top__DOT___0089_) 
                                                           << 9U) 
                                                          | ((0x180U 
                                                              & (((0x1f8U 
                                                                   & ((IData)(vlSelf->top__DOT___2042_) 
                                                                      << 2U)) 
                                                                  | (((IData)(vlSelf->top__DOT___1532_) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->top__DOT___0637_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___0099_)))) 
                                                                 + 
                                                                 ((0x180U 
                                                                   & (vlSelf->top__DOT___1975_[1U] 
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
                                                                                | (IData)(vlSelf->top__DOT___0139_)))))))))) 
                                                             | (((IData)(vlSelf->top__DOT___1227_) 
                                                                 << 6U) 
                                                                | (((IData)(vlSelf->top__DOT___1643_) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT___1542_) 
                                                                       << 4U) 
                                                                      | (0xfU 
                                                                         & (((8U 
                                                                              & ((IData)(vlSelf->top__DOT___2042_) 
                                                                                << 2U)) 
                                                                             | (((IData)(vlSelf->top__DOT___1532_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0637_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0099_)))) 
                                                                            + 
                                                                            ((8U 
                                                                              & ((IData)(vlSelf->top__DOT___3749_) 
                                                                                << 2U)) 
                                                                             | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1970_ 
                                                                                >> 5U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0681_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0139_))))))))))))))));
    vlSelf->top__DOT____VdfgTmp_h9fd02057__0 = (((IData)(vlSelf->top__DOT___0742_) 
                                                 << 0x10U) 
                                                | ((0xf000U 
                                                    & (vlSelf->top__DOT___2077_ 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->top__DOT___0089_) 
                                                       << 0xbU) 
                                                      | ((0x600U 
                                                          & (vlSelf->top__DOT___2077_ 
                                                             << 2U)) 
                                                         | (((IData)(vlSelf->top__DOT___1227_) 
                                                             << 8U) 
                                                            | (((IData)(vlSelf->top__DOT___1643_) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->top__DOT___1542_) 
                                                                   << 6U) 
                                                                  | ((0x3cU 
                                                                      & (vlSelf->top__DOT___2077_ 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelf->top__DOT___0631_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___1368_))))))))));
    vlSelf->top__DOT___1776_ = (1U & (((((IData)(vlSelf->top__DOT___0145_) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->top__DOT___0419_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0014_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0232_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0080_))))) 
                                       + ((0x1eU & 
                                           (vlSelf->top__DOT___2077_ 
                                            << 1U)) 
                                          | (1U & (IData)(
                                                          (vlSelf->top__DOT___3799_ 
                                                           >> 0x25U))))) 
                                      >> 4U));
    vlSelf->top__DOT___1428_ = (1U & (((((IData)(vlSelf->top__DOT___0848_) 
                                         << 6U) | (
                                                   ((IData)(vlSelf->top__DOT___0099_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___0145_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___0419_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___0014_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___0232_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0080_))))))) 
                                       + (((IData)(vlSelf->top__DOT___1643_) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT___1542_) 
                                            << 5U) 
                                           | ((0x1eU 
                                               & (vlSelf->top__DOT___2077_ 
                                                  << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT___3799_ 
                                                            >> 0x25U))))))) 
                                      >> 6U));
    vlSelf->top__DOT___0433_ = (1U & (~ (((IData)(vlSelf->top__DOT___1428_) 
                                          & (IData)(vlSelf->top__DOT___0385_)) 
                                         | ((IData)(vlSelf->top__DOT___1427_) 
                                            & (IData)(vlSelf->top__DOT___1028_)))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__282(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__282\n"); );
    // Body
    vlSelf->top__DOT___2078_ = ((0x3f0000U & (((0x3ffc00U 
                                                & (vlSelf->top__DOT___2030_[1U] 
                                                   >> 9U)) 
                                               | (((IData)(vlSelf->top__DOT___0619_) 
                                                   << 9U) 
                                                  | (((IData)(vlSelf->top__DOT___0408_) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->top__DOT___0177_) 
                                                         << 7U) 
                                                        | ((0x40U 
                                                            & (vlSelf->out_data[0x3cU] 
                                                               << 6U)) 
                                                           | (((IData)(vlSelf->top__DOT___1362_) 
                                                               << 5U) 
                                                              | (((IData)(vlSelf->top__DOT___1004_) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSelf->top__DOT___0024_) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSelf->top__DOT___0173_) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelf->top__DOT___0417_) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->top__DOT___0657_))))))))))) 
                                              + (8U 
                                                 | ((0x3ffff0U 
                                                     & vlSelf->top__DOT___2079_) 
                                                    | (((IData)(vlSelf->top__DOT___0613_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___0732_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___1015_))))))) 
                                | (((IData)(vlSelf->top__DOT___0579_) 
                                    << 0xfU) | (((IData)(vlSelf->top__DOT___1173_) 
                                                 << 0xeU) 
                                                | ((0x3fc0U 
                                                    & (((0x3c00U 
                                                         & (vlSelf->top__DOT___2030_[1U] 
                                                            >> 9U)) 
                                                        | (((IData)(vlSelf->top__DOT___0619_) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->top__DOT___0408_) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->top__DOT___0177_) 
                                                                  << 7U) 
                                                                 | ((0x40U 
                                                                     & (vlSelf->out_data[0x3cU] 
                                                                        << 6U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1362_) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->top__DOT___1004_) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->top__DOT___0024_) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->top__DOT___0173_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0417_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0657_))))))))))) 
                                                       + 
                                                       (8U 
                                                        | ((0x3ff0U 
                                                            & vlSelf->top__DOT___2079_) 
                                                           | (((IData)(vlSelf->top__DOT___0613_) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->top__DOT___0732_) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->top__DOT___1015_))))))) 
                                                   | (((IData)(vlSelf->top__DOT___0826_) 
                                                       << 5U) 
                                                      | (0x1fU 
                                                         & ((((IData)(vlSelf->top__DOT___1004_) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT___0024_) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->top__DOT___0173_) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->top__DOT___0417_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0657_))))) 
                                                            + 
                                                            (8U 
                                                             | ((0x10U 
                                                                 & vlSelf->top__DOT___2079_) 
                                                                | (((IData)(vlSelf->top__DOT___0613_) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->top__DOT___0732_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___1015_))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__283(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__283\n"); );
    // Body
    vlSelf->top__DOT___1906_ = ((0x1eU & ((((0x7cU 
                                             & (vlSelf->top__DOT___2049_[2U] 
                                                >> 0xcU)) 
                                            | (((IData)(vlSelf->top__DOT___0394_) 
                                                << 1U) 
                                               | (IData)(vlSelf->top__DOT___0650_))) 
                                           + ((0x60U 
                                               & (vlSelf->top__DOT___2017_[1U] 
                                                  >> 0xeU)) 
                                              | (((IData)(vlSelf->top__DOT___0655_) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->top__DOT___0127_) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT___0453_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___0191_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0354_))))))) 
                                          >> 2U)) | (IData)(vlSelf->top__DOT___0744_));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__284(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__284\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    __Vtemp_2[1U] = ((0xffff0000U & (vlSelf->top__DOT___2030_[1U] 
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
    __Vtemp_5[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0705_)) 
                              << 0x2fU) | (((QData)((IData)(
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
    __Vtemp_5[1U] = __Vtemp_2[1U];
    __Vtemp_5[2U] = ((0xff00U & vlSelf->top__DOT___2049_[2U]) 
                     | ((0x80U & ((IData)((vlSelf->top__DOT___3641_ 
                                           >> 4U)) 
                                  << 7U)) | ((0x60U 
                                              & vlSelf->top__DOT___2049_[2U]) 
                                             | (0x1fU 
                                                & ((0xfffcU 
                                                    & (vlSelf->top__DOT___2030_[2U] 
                                                       << 2U)) 
                                                   | (vlSelf->top__DOT___2030_[1U] 
                                                      >> 0x1eU))))));
    __Vtemp_6[0U] = (IData)((((QData)((IData)((3U & 
                                               (vlSelf->top__DOT___2048_[1U] 
                                                >> 0x12U)))) 
                              << 0x32U) | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT___3818_ 
                                                                        >> 0x20U))))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               ((0xc0000000U 
                                                                 & (vlSelf->top__DOT___2048_[1U] 
                                                                    << 0xfU)) 
                                                                | ((0x38000000U 
                                                                    & ((IData)(vlSelf->top__DOT___2005_) 
                                                                       << 0x13U)) 
                                                                   | ((0x4000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                          << 0x1aU)) 
                                                                      | ((0x3800000U 
                                                                          & ((IData)(vlSelf->top__DOT___2005_) 
                                                                             << 0x13U)) 
                                                                         | ((0x600000U 
                                                                             & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                            | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                               | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                               << 0x11U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___0192_) 
                                                                  << 0x10U) 
                                                                 | ((0xc000U 
                                                                     & ((IData)(vlSelf->top__DOT___2023_) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1469_) 
                                                                        << 0xdU) 
                                                                       | (((IData)(vlSelf->top__DOT___1408_) 
                                                                           << 0xcU) 
                                                                          | ((0xe00U 
                                                                              & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0327_) 
                                                                                << 8U) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0425_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0091_)))))))))))))));
    __Vtemp_6[1U] = ((0xfff00000U & (((IData)(vlSelf->top__DOT___0383_) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->top__DOT___0186_) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->top__DOT___1127_) 
                                                       << 0x1dU) 
                                                      | (((IData)(vlSelf->top__DOT___0133_) 
                                                          << 0x1cU) 
                                                         | ((0xf000000U 
                                                             & ((IData)(vlSelf->top__DOT___1994_) 
                                                                << 0x12U)) 
                                                            | ((0x800000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3818_ 
                                                                            >> 0x26U)) 
                                                                   << 0x17U)) 
                                                               | ((0x600000U 
                                                                   & ((IData)(vlSelf->top__DOT___1994_) 
                                                                      << 0x12U)) 
                                                                  | (0x100000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x23U)) 
                                                                        << 0x14U)))))))))) 
                     | (IData)(((((QData)((IData)((3U 
                                                   & (vlSelf->top__DOT___2048_[1U] 
                                                      >> 0x12U)))) 
                                  << 0x32U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___3818_ 
                                                                            >> 0x20U))))) 
                                                << 0x31U) 
                                               | (((QData)((IData)(
                                                                   ((0xc0000000U 
                                                                     & (vlSelf->top__DOT___2048_[1U] 
                                                                        << 0xfU)) 
                                                                    | ((0x38000000U 
                                                                        & ((IData)(vlSelf->top__DOT___2005_) 
                                                                           << 0x13U)) 
                                                                       | ((0x4000000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                              << 0x1aU)) 
                                                                          | ((0x3800000U 
                                                                              & ((IData)(vlSelf->top__DOT___2005_) 
                                                                                << 0x13U)) 
                                                                             | ((0x600000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                                   << 0x11U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___0192_) 
                                                                      << 0x10U) 
                                                                     | ((0xc000U 
                                                                         & ((IData)(vlSelf->top__DOT___2023_) 
                                                                            << 2U)) 
                                                                        | (((IData)(vlSelf->top__DOT___1469_) 
                                                                            << 0xdU) 
                                                                           | (((IData)(vlSelf->top__DOT___1408_) 
                                                                               << 0xcU) 
                                                                              | ((0xe00U 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0327_) 
                                                                                << 8U) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0425_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0091_)))))))))))))) 
                                >> 0x20U)));
    __Vtemp_6[2U] = (0xfffffU & ((0xc000U & ((IData)(
                                                     (vlSelf->top__DOT___1969_ 
                                                      >> 0x1dU)) 
                                             << 0xeU)) 
                                 | ((0x2000U & (vlSelf->top__DOT___3633_[0U] 
                                                >> 0xcU)) 
                                    | ((0x1fffU & (IData)(
                                                          (vlSelf->top__DOT___1969_ 
                                                           >> 0xfU))) 
                                       | (0xfffffU 
                                          & (((IData)(vlSelf->top__DOT___0383_) 
                                              >> 1U) 
                                             | (((IData)(vlSelf->top__DOT___0186_) 
                                                 >> 2U) 
                                                | (((IData)(vlSelf->top__DOT___1127_) 
                                                    >> 3U) 
                                                   | ((IData)(vlSelf->top__DOT___0133_) 
                                                      >> 4U)))))))));
    VL_ADD_W(3, __Vtemp_7, __Vtemp_5, __Vtemp_6);
    vlSelf->top__DOT___1445_ = (1U & (__Vtemp_7[2U] 
                                      >> 0xfU));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__285(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__285\n"); );
    // Body
    vlSelf->top__DOT___2074_ = ((0x40U & ((IData)((vlSelf->top__DOT___3641_ 
                                                   >> 0x11U)) 
                                          << 6U)) | 
                                ((0x30U & (vlSelf->top__DOT___2049_[2U] 
                                           >> 0xeU)) 
                                 | (((IData)(vlSelf->top__DOT___0865_) 
                                     << 2U) | (((IData)(vlSelf->top__DOT___0354_) 
                                                << 1U) 
                                               | (1U 
                                                  & vlSelf->out_data[0x3cU])))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__286(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__286\n"); );
    // Body
    vlSelf->top__DOT___0973_ = (1U & ((((0x10U & (vlSelf->top__DOT___2049_[2U] 
                                                  >> 0xeU)) 
                                        | (((IData)(vlSelf->top__DOT___0865_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0354_) 
                                               << 1U) 
                                              | (1U 
                                                 & vlSelf->out_data[0x3cU])))) 
                                       + (((IData)(vlSelf->top__DOT___0587_) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT___0503_) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT___0651_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___0241_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0905_)))))) 
                                      >> 4U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__287(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__287\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_17;
    // Body
    __Vtemp_2[1U] = ((0xffff0000U & (vlSelf->top__DOT___2030_[1U] 
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
    __Vtemp_5[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0705_)) 
                              << 0x2fU) | (((QData)((IData)(
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
    __Vtemp_5[1U] = __Vtemp_2[1U];
    __Vtemp_5[2U] = ((0xfff00U & vlSelf->top__DOT___2049_[2U]) 
                     | ((0x80U & ((IData)((vlSelf->top__DOT___3641_ 
                                           >> 4U)) 
                                  << 7U)) | ((0x60U 
                                              & vlSelf->top__DOT___2049_[2U]) 
                                             | (0x1fU 
                                                & ((0xfffcU 
                                                    & (vlSelf->top__DOT___2030_[2U] 
                                                       << 2U)) 
                                                   | (vlSelf->top__DOT___2030_[1U] 
                                                      >> 0x1eU))))));
    __Vtemp_6[0U] = (IData)((((QData)((IData)((3U & 
                                               (vlSelf->top__DOT___2048_[1U] 
                                                >> 0x12U)))) 
                              << 0x32U) | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT___3818_ 
                                                                        >> 0x20U))))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               ((0xc0000000U 
                                                                 & (vlSelf->top__DOT___2048_[1U] 
                                                                    << 0xfU)) 
                                                                | ((0x38000000U 
                                                                    & ((IData)(vlSelf->top__DOT___2005_) 
                                                                       << 0x13U)) 
                                                                   | ((0x4000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                          << 0x1aU)) 
                                                                      | ((0x3800000U 
                                                                          & ((IData)(vlSelf->top__DOT___2005_) 
                                                                             << 0x13U)) 
                                                                         | ((0x600000U 
                                                                             & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                            | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                               | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                               << 0x11U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___0192_) 
                                                                  << 0x10U) 
                                                                 | ((0xc000U 
                                                                     & ((IData)(vlSelf->top__DOT___2023_) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1469_) 
                                                                        << 0xdU) 
                                                                       | (((IData)(vlSelf->top__DOT___1408_) 
                                                                           << 0xcU) 
                                                                          | ((0xe00U 
                                                                              & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0327_) 
                                                                                << 8U) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0425_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0091_)))))))))))))));
    __Vtemp_6[1U] = ((0xfff00000U & (((IData)(vlSelf->top__DOT___0383_) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->top__DOT___0186_) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->top__DOT___1127_) 
                                                       << 0x1dU) 
                                                      | (((IData)(vlSelf->top__DOT___0133_) 
                                                          << 0x1cU) 
                                                         | ((0xf000000U 
                                                             & ((IData)(vlSelf->top__DOT___1994_) 
                                                                << 0x12U)) 
                                                            | ((0x800000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3818_ 
                                                                            >> 0x26U)) 
                                                                   << 0x17U)) 
                                                               | ((0x600000U 
                                                                   & ((IData)(vlSelf->top__DOT___1994_) 
                                                                      << 0x12U)) 
                                                                  | (0x100000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x23U)) 
                                                                        << 0x14U)))))))))) 
                     | (IData)(((((QData)((IData)((3U 
                                                   & (vlSelf->top__DOT___2048_[1U] 
                                                      >> 0x12U)))) 
                                  << 0x32U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___3818_ 
                                                                            >> 0x20U))))) 
                                                << 0x31U) 
                                               | (((QData)((IData)(
                                                                   ((0xc0000000U 
                                                                     & (vlSelf->top__DOT___2048_[1U] 
                                                                        << 0xfU)) 
                                                                    | ((0x38000000U 
                                                                        & ((IData)(vlSelf->top__DOT___2005_) 
                                                                           << 0x13U)) 
                                                                       | ((0x4000000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                              << 0x1aU)) 
                                                                          | ((0x3800000U 
                                                                              & ((IData)(vlSelf->top__DOT___2005_) 
                                                                                << 0x13U)) 
                                                                             | ((0x600000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                                   << 0x11U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___0192_) 
                                                                      << 0x10U) 
                                                                     | ((0xc000U 
                                                                         & ((IData)(vlSelf->top__DOT___2023_) 
                                                                            << 2U)) 
                                                                        | (((IData)(vlSelf->top__DOT___1469_) 
                                                                            << 0xdU) 
                                                                           | (((IData)(vlSelf->top__DOT___1408_) 
                                                                               << 0xcU) 
                                                                              | ((0xe00U 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0327_) 
                                                                                << 8U) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0425_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0091_)))))))))))))) 
                                >> 0x20U)));
    __Vtemp_6[2U] = (0xfffffU & ((0xfc000U & ((IData)(
                                                      (vlSelf->top__DOT___1969_ 
                                                       >> 0x1dU)) 
                                              << 0xeU)) 
                                 | ((0x2000U & (vlSelf->top__DOT___3633_[0U] 
                                                >> 0xcU)) 
                                    | ((0x1fffU & (IData)(
                                                          (vlSelf->top__DOT___1969_ 
                                                           >> 0xfU))) 
                                       | (0xfffffU 
                                          & (((IData)(vlSelf->top__DOT___0383_) 
                                              >> 1U) 
                                             | (((IData)(vlSelf->top__DOT___0186_) 
                                                 >> 2U) 
                                                | (((IData)(vlSelf->top__DOT___1127_) 
                                                    >> 3U) 
                                                   | ((IData)(vlSelf->top__DOT___0133_) 
                                                      >> 4U)))))))));
    VL_ADD_W(3, __Vtemp_7, __Vtemp_5, __Vtemp_6);
    __Vtemp_10[1U] = ((0xffff0000U & (vlSelf->top__DOT___2030_[1U] 
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
    __Vtemp_13[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0705_)) 
                               << 0x2fU) | (((QData)((IData)(
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
    __Vtemp_13[1U] = __Vtemp_10[1U];
    __Vtemp_13[2U] = ((0x7f00U & vlSelf->top__DOT___2049_[2U]) 
                      | ((0x80U & ((IData)((vlSelf->top__DOT___3641_ 
                                            >> 4U)) 
                                   << 7U)) | ((0x60U 
                                               & vlSelf->top__DOT___2049_[2U]) 
                                              | (0x1fU 
                                                 & ((0xfffcU 
                                                     & (vlSelf->top__DOT___2030_[2U] 
                                                        << 2U)) 
                                                    | (vlSelf->top__DOT___2030_[1U] 
                                                       >> 0x1eU))))));
    __Vtemp_14[0U] = (IData)((((QData)((IData)((3U 
                                                & (vlSelf->top__DOT___2048_[1U] 
                                                   >> 0x12U)))) 
                               << 0x32U) | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT___3818_ 
                                                                         >> 0x20U))))) 
                                             << 0x31U) 
                                            | (((QData)((IData)(
                                                                ((0xc0000000U 
                                                                  & (vlSelf->top__DOT___2048_[1U] 
                                                                     << 0xfU)) 
                                                                 | ((0x38000000U 
                                                                     & ((IData)(vlSelf->top__DOT___2005_) 
                                                                        << 0x13U)) 
                                                                    | ((0x4000000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                           << 0x1aU)) 
                                                                       | ((0x3800000U 
                                                                           & ((IData)(vlSelf->top__DOT___2005_) 
                                                                              << 0x13U)) 
                                                                          | ((0x600000U 
                                                                              & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                             | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                                << 0x11U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___0192_) 
                                                                   << 0x10U) 
                                                                  | ((0xc000U 
                                                                      & ((IData)(vlSelf->top__DOT___2023_) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1469_) 
                                                                         << 0xdU) 
                                                                        | (((IData)(vlSelf->top__DOT___1408_) 
                                                                            << 0xcU) 
                                                                           | ((0xe00U 
                                                                               & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0327_) 
                                                                                << 8U) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0425_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0091_)))))))))))))));
    __Vtemp_14[1U] = ((0xfff00000U & (((IData)(vlSelf->top__DOT___0383_) 
                                       << 0x1fU) | 
                                      (((IData)(vlSelf->top__DOT___0186_) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->top__DOT___1127_) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->top__DOT___0133_) 
                                            << 0x1cU) 
                                           | ((0xf000000U 
                                               & ((IData)(vlSelf->top__DOT___1994_) 
                                                  << 0x12U)) 
                                              | ((0x800000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3818_ 
                                                              >> 0x26U)) 
                                                     << 0x17U)) 
                                                 | ((0x600000U 
                                                     & ((IData)(vlSelf->top__DOT___1994_) 
                                                        << 0x12U)) 
                                                    | (0x100000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___3818_ 
                                                                   >> 0x23U)) 
                                                          << 0x14U)))))))))) 
                      | (IData)(((((QData)((IData)(
                                                   (3U 
                                                    & (vlSelf->top__DOT___2048_[1U] 
                                                       >> 0x12U)))) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT___3818_ 
                                                                             >> 0x20U))))) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(
                                                                    ((0xc0000000U 
                                                                      & (vlSelf->top__DOT___2048_[1U] 
                                                                         << 0xfU)) 
                                                                     | ((0x38000000U 
                                                                         & ((IData)(vlSelf->top__DOT___2005_) 
                                                                            << 0x13U)) 
                                                                        | ((0x4000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                               << 0x1aU)) 
                                                                           | ((0x3800000U 
                                                                               & ((IData)(vlSelf->top__DOT___2005_) 
                                                                                << 0x13U)) 
                                                                              | ((0x600000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                                    << 0x11U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0192_) 
                                                                       << 0x10U) 
                                                                      | ((0xc000U 
                                                                          & ((IData)(vlSelf->top__DOT___2023_) 
                                                                             << 2U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1469_) 
                                                                             << 0xdU) 
                                                                            | (((IData)(vlSelf->top__DOT___1408_) 
                                                                                << 0xcU) 
                                                                               | ((0xe00U 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0327_) 
                                                                                << 8U) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0425_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0091_)))))))))))))) 
                                 >> 0x20U)));
    __Vtemp_14[2U] = (0xfffffU & ((0x4000U & ((IData)(
                                                      (vlSelf->top__DOT___1969_ 
                                                       >> 0x1dU)) 
                                              << 0xeU)) 
                                  | ((0x2000U & (vlSelf->top__DOT___3633_[0U] 
                                                 >> 0xcU)) 
                                     | ((0x1fffU & (IData)(
                                                           (vlSelf->top__DOT___1969_ 
                                                            >> 0xfU))) 
                                        | (0xfffffU 
                                           & (((IData)(vlSelf->top__DOT___0383_) 
                                               >> 1U) 
                                              | (((IData)(vlSelf->top__DOT___0186_) 
                                                  >> 2U) 
                                                 | (((IData)(vlSelf->top__DOT___1127_) 
                                                     >> 3U) 
                                                    | ((IData)(vlSelf->top__DOT___0133_) 
                                                       >> 4U)))))))));
    VL_ADD_W(3, __Vtemp_15, __Vtemp_13, __Vtemp_14);
    __Vtemp_17[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0850_)) 
                               << 0x39U) | ((0x1ffffffffffc000ULL 
                                             & ((((QData)((IData)(
                                                                  (0x1ffU 
                                                                   & (vlSelf->top__DOT___2030_[1U] 
                                                                      >> 0xeU)))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0705_)) 
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
                                                                                | (IData)(vlSelf->top__DOT___0082_))))))))))) 
                                                + (
                                                   ((QData)((IData)(
                                                                    ((0x10U 
                                                                      & ((IData)(vlSelf->top__DOT___1994_) 
                                                                         >> 2U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x26U)) 
                                                                            << 3U)) 
                                                                        | ((6U 
                                                                            & ((IData)(vlSelf->top__DOT___1994_) 
                                                                               >> 2U)) 
                                                                           | (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x23U)))))))) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       (3U 
                                                                        & (vlSelf->top__DOT___2048_[1U] 
                                                                           >> 0x12U)))) 
                                                       << 0x32U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x20U))))) 
                                                          << 0x31U) 
                                                         | (((QData)((IData)(
                                                                             ((0xc0000000U 
                                                                               & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                              | ((0x38000000U 
                                                                                & ((IData)(vlSelf->top__DOT___2005_) 
                                                                                << 0x13U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3800000U 
                                                                                & ((IData)(vlSelf->top__DOT___2005_) 
                                                                                << 0x13U)) 
                                                                                | ((0x600000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                                             << 0x11U) 
                                                            | (QData)((IData)(
                                                                              (((IData)(vlSelf->top__DOT___0192_) 
                                                                                << 0x10U) 
                                                                               | ((0xc000U 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1469_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1408_) 
                                                                                << 0xcU) 
                                                                                | ((0xe00U 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0327_) 
                                                                                << 8U) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0425_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0091_))))))))))))))))) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___1617_) 
                                                                << 0xdU) 
                                                               | ((0x1fe0U 
                                                                   & (((0x1ffcU 
                                                                        & (vlSelf->top__DOT___2030_[0U] 
                                                                           << 2U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0995_) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->top__DOT___0082_))) 
                                                                      + 
                                                                      (((IData)(vlSelf->top__DOT___1408_) 
                                                                        << 0xcU) 
                                                                       | ((0xe00U 
                                                                           & ((IData)(vlSelf->top__DOT___2023_) 
                                                                              << 2U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0327_) 
                                                                              << 8U) 
                                                                             | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0425_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0091_)))))))) 
                                                                  | (((IData)(vlSelf->top__DOT___0679_) 
                                                                      << 4U) 
                                                                     | ((0xcU 
                                                                         & (((0xcU 
                                                                              & (vlSelf->top__DOT___2030_[0U] 
                                                                                << 2U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0995_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0082_))) 
                                                                            + 
                                                                            ((0xcU 
                                                                              & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0425_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0091_))))) 
                                                                        | (((IData)(vlSelf->top__DOT___0954_) 
                                                                            << 1U) 
                                                                           | (1U 
                                                                              & ((IData)(vlSelf->top__DOT___0082_) 
                                                                                + (IData)(vlSelf->top__DOT___0091_)))))))))))));
    __Vtemp_17[1U] = ((0xfc000000U & __Vtemp_15[1U]) 
                      | (IData)(((((QData)((IData)(vlSelf->top__DOT___0850_)) 
                                   << 0x39U) | ((0x1ffffffffffc000ULL 
                                                 & ((((QData)((IData)(
                                                                      (0x1ffU 
                                                                       & (vlSelf->top__DOT___2030_[1U] 
                                                                          >> 0xeU)))) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0705_)) 
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
                                                                                | (IData)(vlSelf->top__DOT___0082_))))))))))) 
                                                    + 
                                                    (((QData)((IData)(
                                                                      ((0x10U 
                                                                        & ((IData)(vlSelf->top__DOT___1994_) 
                                                                           >> 2U)) 
                                                                       | ((8U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x26U)) 
                                                                              << 3U)) 
                                                                          | ((6U 
                                                                              & ((IData)(vlSelf->top__DOT___1994_) 
                                                                                >> 2U)) 
                                                                             | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x23U)))))))) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         (3U 
                                                                          & (vlSelf->top__DOT___2048_[1U] 
                                                                             >> 0x12U)))) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x20U))))) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(
                                                                               ((0xc0000000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x38000000U 
                                                                                & ((IData)(vlSelf->top__DOT___2005_) 
                                                                                << 0x13U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3800000U 
                                                                                & ((IData)(vlSelf->top__DOT___2005_) 
                                                                                << 0x13U)) 
                                                                                | ((0x600000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                                               << 0x11U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0192_) 
                                                                                << 0x10U) 
                                                                                | ((0xc000U 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1469_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1408_) 
                                                                                << 0xcU) 
                                                                                | ((0xe00U 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0327_) 
                                                                                << 8U) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0425_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0091_))))))))))))))))) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->top__DOT___1617_) 
                                                                    << 0xdU) 
                                                                   | ((0x1fe0U 
                                                                       & (((0x1ffcU 
                                                                            & (vlSelf->top__DOT___2030_[0U] 
                                                                               << 2U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0995_) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->top__DOT___0082_))) 
                                                                          + 
                                                                          (((IData)(vlSelf->top__DOT___1408_) 
                                                                            << 0xcU) 
                                                                           | ((0xe00U 
                                                                               & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0327_) 
                                                                                << 8U) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0425_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0091_)))))))) 
                                                                      | (((IData)(vlSelf->top__DOT___0679_) 
                                                                          << 4U) 
                                                                         | ((0xcU 
                                                                             & (((0xcU 
                                                                                & (vlSelf->top__DOT___2030_[0U] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0995_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0082_))) 
                                                                                + 
                                                                                ((0xcU 
                                                                                & ((IData)(vlSelf->top__DOT___2023_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0425_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0091_))))) 
                                                                            | (((IData)(vlSelf->top__DOT___0954_) 
                                                                                << 1U) 
                                                                               | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___0082_) 
                                                                                + (IData)(vlSelf->top__DOT___0091_)))))))))))) 
                                 >> 0x20U)));
    vlSelf->top__DOT___2047_[0U] = __Vtemp_17[0U];
    vlSelf->top__DOT___2047_[1U] = __Vtemp_17[1U];
    vlSelf->top__DOT___2047_[2U] = ((0xf0000U & __Vtemp_7[2U]) 
                                    | (((IData)(vlSelf->top__DOT___1445_) 
                                        << 0xfU) | 
                                       (0x7fffU & __Vtemp_15[2U])));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__288(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__288\n"); );
    // Body
    vlSelf->top__DOT___1183_ = (1U & (~ (((IData)(vlSelf->top__DOT___1170_) 
                                          & ((((0xeU 
                                                & ((((0x1c0U 
                                                      & (vlSelf->top__DOT____VdfgTmp_h1b9402e5__0 
                                                         >> 0xbU)) 
                                                     | (((IData)(vlSelf->top__DOT___0636_) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->top__DOT___0718_) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->top__DOT___0284_) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->top__DOT___0456_) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelf->top__DOT___0631_) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->top__DOT___0000_))))))) 
                                                    + 
                                                    ((0x100U 
                                                      & ((IData)(vlSelf->top__DOT___2050_) 
                                                         << 6U)) 
                                                     | (((IData)(vlSelf->top__DOT___1296_) 
                                                         << 7U) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSelf->top__DOT___2050_) 
                                                               << 6U)) 
                                                           | (((IData)(vlSelf->top__DOT___0297_) 
                                                               << 4U) 
                                                              | (((IData)(vlSelf->top__DOT___0351_) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelf->top__DOT___0454_) 
                                                                     << 2U) 
                                                                    | (((IData)(vlSelf->top__DOT___0018_) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->top__DOT___1132_))))))))) 
                                                   >> 4U)) 
                                               | (IData)(vlSelf->top__DOT___0105_)) 
                                              + (((IData)(vlSelf->top__DOT___0873_) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT___0368_) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->top__DOT____VdfgTmp_hfc16dbdc__0)))) 
                                             >> 3U)) 
                                         | (IData)(vlSelf->top__DOT___0062_))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__289(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__289\n"); );
    // Body
    vlSelf->top__DOT___1433_ = (1U & (~ (((IData)(vlSelf->top__DOT___0150_) 
                                          & (IData)(vlSelf->top__DOT___0351_)) 
                                         | ((IData)(vlSelf->top__DOT___1170_) 
                                            & (IData)(vlSelf->top__DOT___1406_)))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__290(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__290\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_had263644__0 = ((0x6000U 
                                                 & (vlSelf->top__DOT___2077_ 
                                                    << 6U)) 
                                                | (((IData)(vlSelf->top__DOT___1227_) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->top__DOT___1643_) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->top__DOT___1542_) 
                                                          << 0xaU) 
                                                         | ((0x3c0U 
                                                             & (vlSelf->top__DOT___2077_ 
                                                                << 6U)) 
                                                            | (((IData)(vlSelf->top__DOT___0893_) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->top__DOT___0420_) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->top__DOT___1235_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___0157_) 
                                                                         << 2U) 
                                                                        | ((IData)(vlSelf->top__DOT___0358_) 
                                                                           << 1U))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__291(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__291\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hb87cfcd5__0 = ((0x40000U 
                                                 & ((IData)(vlSelf->top__DOT___2174_) 
                                                    << 0x12U)) 
                                                | (((IData)(vlSelf->top__DOT___0343_) 
                                                    << 0x11U) 
                                                   | ((0x10000U 
                                                       & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_ha7e79421__0)) 
                                                          << 0x10U)) 
                                                      | (((IData)(vlSelf->top__DOT___1614_) 
                                                          << 0xfU) 
                                                         | (((IData)(vlSelf->top__DOT___0019_) 
                                                             << 0xdU) 
                                                            | ((0x1000U 
                                                                & ((~ (IData)(vlSelf->top__DOT___1064_)) 
                                                                   << 0xcU)) 
                                                               | ((0x800U 
                                                                   & (vlSelf->top__DOT___2077_ 
                                                                      >> 9U)) 
                                                                  | (((IData)(vlSelf->top__DOT___1403_) 
                                                                      << 0xaU) 
                                                                     | ((0x3c0U 
                                                                         & (vlSelf->top__DOT___2077_ 
                                                                            >> 9U)) 
                                                                        | (((IData)(vlSelf->top__DOT___0742_) 
                                                                            << 5U) 
                                                                           | ((0x1eU 
                                                                               & (vlSelf->top__DOT___2077_ 
                                                                                >> 9U)) 
                                                                              | (IData)(vlSelf->top__DOT___0089_))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__292(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__292\n"); );
    // Body
    vlSelf->top__DOT___2087_ = (0x400000U | ((0x80000000U 
                                              & (vlSelf->top__DOT___3694_ 
                                                 << 7U)) 
                                             | ((0x40000000U 
                                                 & (vlSelf->top__DOT___1966_[0U] 
                                                    << 0x1aU)) 
                                                | (((IData)(vlSelf->top__DOT___0818_) 
                                                    << 0x1dU) 
                                                   | ((0x10000000U 
                                                       & (vlSelf->top__DOT___1966_[0U] 
                                                          << 0x1aU)) 
                                                      | (((IData)(vlSelf->top__DOT___0394_) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelf->top__DOT___0092_) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelf->top__DOT___0401_) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelf->top__DOT___0140_) 
                                                                   << 0x18U) 
                                                                  | ((0x800000U 
                                                                      & ((~ (IData)(vlSelf->top__DOT___0091_)) 
                                                                         << 0x17U)) 
                                                                     | ((0x200000U 
                                                                         & (vlSelf->top__DOT___2077_ 
                                                                            << 1U)) 
                                                                        | (((IData)(vlSelf->top__DOT___1403_) 
                                                                            << 0x14U) 
                                                                           | ((0xf0000U 
                                                                               & (vlSelf->top__DOT___2077_ 
                                                                                << 1U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0742_) 
                                                                                << 0xfU) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2077_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0089_) 
                                                                                << 0xaU) 
                                                                                | ((0x300U 
                                                                                & (vlSelf->top__DOT___2077_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1227_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1643_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1542_) 
                                                                                << 5U) 
                                                                                | ((0x1eU 
                                                                                & (vlSelf->top__DOT___2077_ 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x25U))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__293(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__293\n"); );
    // Body
    vlSelf->top__DOT___0040_ = (1U & ((((0x200000U 
                                         & ((IData)(vlSelf->top__DOT___3695_) 
                                            << 0x13U)) 
                                        | ((0x100000U 
                                            & ((IData)(vlSelf->top__DOT___3695_) 
                                               << 0x13U)) 
                                           | ((0x80000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___2069_ 
                                                           >> 2U)) 
                                                  << 0x13U)) 
                                              | (((IData)(vlSelf->top__DOT___0175_) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->top__DOT___1020_) 
                                                     << 0x10U) 
                                                    | ((0x8000U 
                                                        & ((IData)(vlSelf->top__DOT___3715_) 
                                                           << 1U)) 
                                                       | ((0x6000U 
                                                           & vlSelf->top__DOT___2107_) 
                                                          | ((0x1fe0U 
                                                              & ((IData)(vlSelf->top__DOT___2092_) 
                                                                 >> 2U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(vlSelf->top__DOT___3715_) 
                                                                    << 1U)) 
                                                                | ((8U 
                                                                    & ((IData)(vlSelf->top__DOT___2092_) 
                                                                       >> 2U)) 
                                                                   | ((6U 
                                                                       & vlSelf->top__DOT___2107_) 
                                                                      | (IData)(vlSelf->top__DOT___0368_)))))))))))) 
                                       + ((0x380000U 
                                           & (vlSelf->top__DOT___2078_ 
                                              << 3U)) 
                                          | (((IData)(vlSelf->top__DOT___0579_) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->top__DOT___1173_) 
                                                 << 0x11U) 
                                                | ((0x1fe00U 
                                                    & (vlSelf->top__DOT___2078_ 
                                                       << 3U)) 
                                                   | (((IData)(vlSelf->top__DOT___0826_) 
                                                       << 8U) 
                                                      | ((0xf8U 
                                                          & (vlSelf->top__DOT___2078_ 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3799_ 
                                                                         >> 0x25U)) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelf->top__DOT___0162_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0904_)))))))))) 
                                      >> 0x15U));
    vlSelf->top__DOT___1728_ = (1U & ((((0x1000000U 
                                         & ((IData)(vlSelf->top__DOT___3695_) 
                                            << 0x13U)) 
                                        | ((0xc00000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___2069_ 
                                                        >> 5U)) 
                                               << 0x16U)) 
                                           | ((0x200000U 
                                               & ((IData)(vlSelf->top__DOT___3695_) 
                                                  << 0x13U)) 
                                              | ((0x100000U 
                                                  & ((IData)(vlSelf->top__DOT___3695_) 
                                                     << 0x13U)) 
                                                 | ((0x80000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___2069_ 
                                                                 >> 2U)) 
                                                        << 0x13U)) 
                                                    | (((IData)(vlSelf->top__DOT___0175_) 
                                                        << 0x12U) 
                                                       | (((IData)(vlSelf->top__DOT___1020_) 
                                                           << 0x10U) 
                                                          | ((0x8000U 
                                                              & ((IData)(vlSelf->top__DOT___3715_) 
                                                                 << 1U)) 
                                                             | ((0x6000U 
                                                                 & vlSelf->top__DOT___2107_) 
                                                                | ((0x1fe0U 
                                                                    & ((IData)(vlSelf->top__DOT___2092_) 
                                                                       >> 2U)) 
                                                                   | ((0x10U 
                                                                       & ((IData)(vlSelf->top__DOT___3715_) 
                                                                          << 1U)) 
                                                                      | ((8U 
                                                                          & ((IData)(vlSelf->top__DOT___2092_) 
                                                                             >> 2U)) 
                                                                         | ((6U 
                                                                             & vlSelf->top__DOT___2107_) 
                                                                            | (IData)(vlSelf->top__DOT___0368_)))))))))))))) 
                                       + ((0x1f80000U 
                                           & (vlSelf->top__DOT___2078_ 
                                              << 3U)) 
                                          | (((IData)(vlSelf->top__DOT___0579_) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->top__DOT___1173_) 
                                                 << 0x11U) 
                                                | ((0x1fe00U 
                                                    & (vlSelf->top__DOT___2078_ 
                                                       << 3U)) 
                                                   | (((IData)(vlSelf->top__DOT___0826_) 
                                                       << 8U) 
                                                      | ((0xf8U 
                                                          & (vlSelf->top__DOT___2078_ 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3799_ 
                                                                         >> 0x25U)) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelf->top__DOT___0162_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0904_)))))))))) 
                                      >> 0x18U));
    vlSelf->top__DOT___1274_ = ((IData)(vlSelf->top__DOT___1728_) 
                                | (IData)(vlSelf->top__DOT___1727_));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__294(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__294\n"); );
    // Body
    vlSelf->top__DOT___2073_ = ((0x60U & (((0x40U & (IData)(vlSelf->top__DOT___2074_)) 
                                           | ((0x30U 
                                               & (vlSelf->top__DOT___2049_[2U] 
                                                  >> 0xeU)) 
                                              | (((IData)(vlSelf->top__DOT___0865_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0354_) 
                                                     << 1U) 
                                                    | (1U 
                                                       & vlSelf->out_data[0x3cU]))))) 
                                          + (((IData)(vlSelf->top__DOT___0692_) 
                                              << 6U) 
                                             | (((IData)(vlSelf->top__DOT___0229_) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->top__DOT___0587_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___0503_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0651_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___0241_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0905_))))))))) 
                                | (((IData)(vlSelf->top__DOT___0973_) 
                                    << 4U) | ((8U & 
                                               ((((IData)(vlSelf->top__DOT___0865_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0354_) 
                                                     << 1U) 
                                                    | (1U 
                                                       & vlSelf->out_data[0x3cU]))) 
                                                + (
                                                   ((IData)(vlSelf->top__DOT___0503_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0651_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0241_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0905_)))))) 
                                              | (((IData)(vlSelf->top__DOT___0280_) 
                                                  << 2U) 
                                                 | (3U 
                                                    & ((((IData)(vlSelf->top__DOT___0354_) 
                                                         << 1U) 
                                                        | (1U 
                                                           & vlSelf->out_data[0x3cU])) 
                                                       + 
                                                       (((IData)(vlSelf->top__DOT___0241_) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top__DOT___0905_))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__295(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__295\n"); );
    // Body
    vlSelf->top__DOT___1912_ = ((0xff00000001ULL & vlSelf->top__DOT___1912_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0019_) 
                                                     << 0x1eU) 
                                                    | (((IData)(vlSelf->top__DOT___1183_) 
                                                        << 0x1dU) 
                                                       | ((0x1fffc000U 
                                                           & ((((0xffffff8U 
                                                                 & ((vlSelf->in_data[0x2cU] 
                                                                     << 0xeU) 
                                                                    | (0x3ff8U 
                                                                       & (vlSelf->in_data[0x2bU] 
                                                                          >> 0x12U)))) 
                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h36267824__0)) 
                                                               + 
                                                               ((0xf000000U 
                                                                 & ((IData)(vlSelf->top__DOT___1985_) 
                                                                    << 0x16U)) 
                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->top__DOT___0235_) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->top__DOT___0275_) 
                                                                          << 0x15U) 
                                                                         | ((0x100000U 
                                                                             & ((~ (IData)(vlSelf->top__DOT___0438_)) 
                                                                                << 0x14U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0272_) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->top__DOT___0325_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___1046_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0324_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___1322_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0253_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0469_) 
                                                                                << 0xdU) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h79b5eac2__0)))))))))))))) 
                                                              << 1U)) 
                                                          | (((IData)(vlSelf->top__DOT___1592_) 
                                                              << 0xdU) 
                                                             | ((0x1e00U 
                                                                 & ((((0xff8U 
                                                                       & (vlSelf->in_data[0x2bU] 
                                                                          >> 0x12U)) 
                                                                      | (IData)(vlSelf->top__DOT____VdfgTmp_h36267824__0)) 
                                                                     + (IData)(vlSelf->top__DOT____VdfgTmp_h2be8dd32__0)) 
                                                                    << 1U)) 
                                                                | (((IData)(vlSelf->top__DOT___0188_) 
                                                                    << 8U) 
                                                                   | ((0xfeU 
                                                                       & ((((0x78U 
                                                                             & (vlSelf->in_data[0x2bU] 
                                                                                >> 0x12U)) 
                                                                            | (IData)(vlSelf->top__DOT____VdfgTmp_h36267824__0)) 
                                                                           + 
                                                                           ((0x60U 
                                                                             & vlSelf->top__DOT___2020_) 
                                                                            | (IData)(vlSelf->top__DOT____VdfgTmp_h43e592f8__0))) 
                                                                          << 1U)) 
                                                                      | (IData)(vlSelf->top__DOT___0631_)))))))))) 
                                   << 1U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__296(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__296\n"); );
    // Body
    vlSelf->top__DOT___2111_ = (0x400000000ULL | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT___3657_[2U] 
                                                                       >> 0x1aU)))) 
                                                   << 0x33U) 
                                                  | (((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (vlSelf->top__DOT___3657_[2U] 
                                                                          >> 0xaU)))) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & (vlSelf->top__DOT___3694_ 
                                                                             >> 0x19U)))) 
                                                         << 0x1dU) 
                                                        | (QData)((IData)(
                                                                          ((0x10000000U 
                                                                            & (vlSelf->top__DOT___2087_ 
                                                                               >> 3U)) 
                                                                           | ((0xfe00000U 
                                                                               & (vlSelf->top__DOT___3694_ 
                                                                                << 4U)) 
                                                                              | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3694_ 
                                                                                << 4U)) 
                                                                                | ((0xffff0U 
                                                                                & (vlSelf->top__DOT___3694_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0469_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0866_))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__297(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__297\n"); );
    // Body
    vlSelf->top__DOT___2106_ = ((0x7e000000U & (((0x40000000U 
                                                  & (vlSelf->top__DOT___1995_ 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSelf->top__DOT___0224_) 
                                                     << 0x1dU) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___1995_ 
                                                           << 0x10U)) 
                                                       | (((IData)(vlSelf->top__DOT___1379_) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->top__DOT___0041_) 
                                                              << 0x1aU) 
                                                             | ((0x2000000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___2069_ 
                                                                             >> 8U)) 
                                                                    << 0x19U)) 
                                                                | ((0x1000000U 
                                                                    & ((IData)(vlSelf->top__DOT___3695_) 
                                                                       << 0x13U)) 
                                                                   | ((0xc00000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___2069_ 
                                                                                >> 5U)) 
                                                                          << 0x16U)) 
                                                                      | ((0x200000U 
                                                                          & ((IData)(vlSelf->top__DOT___3695_) 
                                                                             << 0x13U)) 
                                                                         | ((0x100000U 
                                                                             & ((IData)(vlSelf->top__DOT___3695_) 
                                                                                << 0x13U)) 
                                                                            | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2069_ 
                                                                                >> 2U)) 
                                                                                << 0x13U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0175_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___1020_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___3715_) 
                                                                                << 1U)) 
                                                                                | ((0x6000U 
                                                                                & vlSelf->top__DOT___2107_) 
                                                                                | ((0x1fe0U 
                                                                                & ((IData)(vlSelf->top__DOT___2092_) 
                                                                                >> 2U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3715_) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___2092_) 
                                                                                >> 2U)) 
                                                                                | ((6U 
                                                                                & vlSelf->top__DOT___2107_) 
                                                                                | (IData)(vlSelf->top__DOT___0368_)))))))))))))))))))) 
                                                + (
                                                   (0x7e000000U 
                                                    & (vlSelf->top__DOT___1967_[0U] 
                                                       << 0x18U)) 
                                                   | ((0x1f80000U 
                                                       & (vlSelf->top__DOT___2078_ 
                                                          << 3U)) 
                                                      | (((IData)(vlSelf->top__DOT___0579_) 
                                                          << 0x12U) 
                                                         | (((IData)(vlSelf->top__DOT___1173_) 
                                                             << 0x11U) 
                                                            | ((0x1fe00U 
                                                                & (vlSelf->top__DOT___2078_ 
                                                                   << 3U)) 
                                                               | (((IData)(vlSelf->top__DOT___0826_) 
                                                                   << 8U) 
                                                                  | ((0xf8U 
                                                                      & (vlSelf->top__DOT___2078_ 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x25U)) 
                                                                            << 2U)) 
                                                                        | (((IData)(vlSelf->top__DOT___0162_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___0904_)))))))))))) 
                                | (((IData)(vlSelf->top__DOT___1728_) 
                                    << 0x18U) | ((0xc00000U 
                                                  & (((0xc00000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___2069_ 
                                                                   >> 5U)) 
                                                          << 0x16U)) 
                                                      | ((0x200000U 
                                                          & ((IData)(vlSelf->top__DOT___3695_) 
                                                             << 0x13U)) 
                                                         | ((0x100000U 
                                                             & ((IData)(vlSelf->top__DOT___3695_) 
                                                                << 0x13U)) 
                                                            | ((0x80000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___2069_ 
                                                                            >> 2U)) 
                                                                   << 0x13U)) 
                                                               | (((IData)(vlSelf->top__DOT___0175_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___1020_) 
                                                                      << 0x10U) 
                                                                     | ((0x8000U 
                                                                         & ((IData)(vlSelf->top__DOT___3715_) 
                                                                            << 1U)) 
                                                                        | ((0x6000U 
                                                                            & vlSelf->top__DOT___2107_) 
                                                                           | ((0x1fe0U 
                                                                               & ((IData)(vlSelf->top__DOT___2092_) 
                                                                                >> 2U)) 
                                                                              | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3715_) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___2092_) 
                                                                                >> 2U)) 
                                                                                | ((6U 
                                                                                & vlSelf->top__DOT___2107_) 
                                                                                | (IData)(vlSelf->top__DOT___0368_))))))))))))) 
                                                     + 
                                                     ((0xf80000U 
                                                       & (vlSelf->top__DOT___2078_ 
                                                          << 3U)) 
                                                      | (((IData)(vlSelf->top__DOT___0579_) 
                                                          << 0x12U) 
                                                         | (((IData)(vlSelf->top__DOT___1173_) 
                                                             << 0x11U) 
                                                            | ((0x1fe00U 
                                                                & (vlSelf->top__DOT___2078_ 
                                                                   << 3U)) 
                                                               | (((IData)(vlSelf->top__DOT___0826_) 
                                                                   << 8U) 
                                                                  | ((0xf8U 
                                                                      & (vlSelf->top__DOT___2078_ 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x25U)) 
                                                                            << 2U)) 
                                                                        | (((IData)(vlSelf->top__DOT___0162_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___0904_))))))))))) 
                                                 | (((IData)(vlSelf->top__DOT___0040_) 
                                                     << 0x15U) 
                                                    | (0x1fffffU 
                                                       & (((0x100000U 
                                                            & ((IData)(vlSelf->top__DOT___3695_) 
                                                               << 0x13U)) 
                                                           | ((0x80000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___2069_ 
                                                                           >> 2U)) 
                                                                  << 0x13U)) 
                                                              | (((IData)(vlSelf->top__DOT___0175_) 
                                                                  << 0x12U) 
                                                                 | (((IData)(vlSelf->top__DOT___1020_) 
                                                                     << 0x10U) 
                                                                    | ((0x8000U 
                                                                        & ((IData)(vlSelf->top__DOT___3715_) 
                                                                           << 1U)) 
                                                                       | ((0x6000U 
                                                                           & vlSelf->top__DOT___2107_) 
                                                                          | ((0x1fe0U 
                                                                              & ((IData)(vlSelf->top__DOT___2092_) 
                                                                                >> 2U)) 
                                                                             | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3715_) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___2092_) 
                                                                                >> 2U)) 
                                                                                | ((6U 
                                                                                & vlSelf->top__DOT___2107_) 
                                                                                | (IData)(vlSelf->top__DOT___0368_))))))))))) 
                                                          + 
                                                          ((0x180000U 
                                                            & (vlSelf->top__DOT___2078_ 
                                                               << 3U)) 
                                                           | (((IData)(vlSelf->top__DOT___0579_) 
                                                               << 0x12U) 
                                                              | (((IData)(vlSelf->top__DOT___1173_) 
                                                                  << 0x11U) 
                                                                 | ((0x1fe00U 
                                                                     & (vlSelf->top__DOT___2078_ 
                                                                        << 3U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0826_) 
                                                                        << 8U) 
                                                                       | ((0xf8U 
                                                                           & (vlSelf->top__DOT___2078_ 
                                                                              << 3U)) 
                                                                          | ((4U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0904_)))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__298(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__298\n"); );
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__299(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__299\n"); );
    // Body
    vlSelf->top__DOT___1252_ = (1U & ((((0x78U & (vlSelf->top__DOT___2143_[1U] 
                                                  >> 0x12U)) 
                                        | (((IData)(vlSelf->top__DOT___0600_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0553_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0987_)))) 
                                       + (4U | ((0x40U 
                                                 & (IData)(vlSelf->top__DOT___1932_)) 
                                                | (((IData)(vlSelf->top__DOT___0595_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___0079_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___0116_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___0866_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___1274_)))))))) 
                                      >> 6U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__300(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__300\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x3ffffU 
                                               & ((vlSelf->top__DOT___3712_[1U] 
                                                   << 0xbU) 
                                                  | (vlSelf->top__DOT___3712_[0U] 
                                                     >> 0x15U))))) 
                              << 0x22U) | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT___3712_[0U] 
                                                                >> 0x14U)))) 
                                            << 0x21U) 
                                           | (((QData)((IData)(
                                                               (0xfffffU 
                                                                & vlSelf->top__DOT___3712_[0U]))) 
                                               << 0xdU) 
                                              | (QData)((IData)(
                                                                ((0x1800U 
                                                                  & ((IData)(vlSelf->top__DOT___2073_) 
                                                                     << 6U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0973_) 
                                                                     << 0xaU) 
                                                                    | ((0x200U 
                                                                        & ((IData)(vlSelf->top__DOT___2073_) 
                                                                           << 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0280_) 
                                                                           << 8U) 
                                                                          | ((0xc0U 
                                                                              & ((IData)(vlSelf->top__DOT___2073_) 
                                                                                << 6U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0521_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0692_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0137_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0681_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0978_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0631_)))))))))))))))));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___3712_[3U])) 
                                << 0x39U) | (((QData)((IData)(
                                                              vlSelf->top__DOT___3712_[2U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->top__DOT___3712_[1U])) 
                                                >> 7U)))) 
                      << 0x14U) | (IData)(((((QData)((IData)(
                                                             (0x3ffffU 
                                                              & ((vlSelf->top__DOT___3712_[1U] 
                                                                  << 0xbU) 
                                                                 | (vlSelf->top__DOT___3712_[0U] 
                                                                    >> 0x15U))))) 
                                             << 0x22U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___3712_[0U] 
                                                                    >> 0x14U)))) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   (0xfffffU 
                                                                    & vlSelf->top__DOT___3712_[0U]))) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
                                                                    ((0x1800U 
                                                                      & ((IData)(vlSelf->top__DOT___2073_) 
                                                                         << 6U)) 
                                                                     | (((IData)(vlSelf->top__DOT___0973_) 
                                                                         << 0xaU) 
                                                                        | ((0x200U 
                                                                            & ((IData)(vlSelf->top__DOT___2073_) 
                                                                               << 6U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0280_) 
                                                                               << 8U) 
                                                                              | ((0xc0U 
                                                                                & ((IData)(vlSelf->top__DOT___2073_) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0521_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0692_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0137_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0681_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0978_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0631_)))))))))))))))) 
                                           >> 0x20U)));
    vlSelf->top__DOT___2102_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___2102_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2102_[2U] = (((IData)((((QData)((IData)(
                                                               vlSelf->top__DOT___3712_[3U])) 
                                               << 0x39U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->top__DOT___3712_[2U])) 
                                                  << 0x19U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT___3712_[1U])) 
                                                    >> 7U)))) 
                                     >> 0xcU) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->top__DOT___3712_[3U])) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->top__DOT___3712_[2U])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->top__DOT___3712_[1U])) 
                                                                 >> 7U))) 
                                                          >> 0x20U)) 
                                                 << 0x14U));
    vlSelf->top__DOT___2102_[3U] = (((IData)(vlSelf->top__DOT___2096_) 
                                     << 0x15U) | (((IData)(vlSelf->top__DOT___0477_) 
                                                   << 0x14U) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->top__DOT___3712_[3U])) 
                                                                << 0x39U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->top__DOT___3712_[2U])) 
                                                                   << 0x19U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->top__DOT___3712_[1U])) 
                                                                     >> 7U))) 
                                                              >> 0x20U)) 
                                                     >> 0xcU)));
    vlSelf->top__DOT___2102_[4U] = (((IData)(vlSelf->top__DOT___0984_) 
                                     << 0x1fU) | (((IData)(vlSelf->top__DOT___1247_) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->top__DOT___0221_) 
                                                      << 0x1dU) 
                                                     | (((IData)(vlSelf->top__DOT___2096_) 
                                                         >> 0xbU) 
                                                        | ((IData)(
                                                                   (vlSelf->top__DOT___2096_ 
                                                                    >> 0x20U)) 
                                                           << 0x15U)))));
    vlSelf->top__DOT___2102_[5U] = (((IData)(vlSelf->top__DOT___0865_) 
                                     << 5U) | (((IData)(vlSelf->top__DOT___1651_) 
                                                << 4U) 
                                               | (((IData)(vlSelf->top__DOT___0134_) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT___0289_) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top__DOT___0683_) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top__DOT___0681_))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__301(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__301\n"); );
    // Body
    vlSelf->top__DOT___2175_ = ((0x1f80U & (((0x1ff8U 
                                              & (vlSelf->top__DOT___2143_[1U] 
                                                 >> 0x12U)) 
                                             | (((IData)(vlSelf->top__DOT___0600_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0553_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0987_)))) 
                                            + (4U | 
                                               ((0x1800U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___2029_ 
                                                             >> 0x13U)) 
                                                    << 0xbU)) 
                                                | (((IData)(vlSelf->top__DOT___1357_) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSelf->top__DOT___0338_) 
                                                       << 9U) 
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
                                                                  | (((IData)(vlSelf->top__DOT___0079_) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSelf->top__DOT___0116_) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelf->top__DOT___0866_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___1274_)))))))))))))) 
                                | (((IData)(vlSelf->top__DOT___1252_) 
                                    << 6U) | ((0x30U 
                                               & (((0x38U 
                                                    & (vlSelf->top__DOT___2143_[1U] 
                                                       >> 0x12U)) 
                                                   | (((IData)(vlSelf->top__DOT___0600_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0553_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0987_)))) 
                                                  + 
                                                  (4U 
                                                   | (((IData)(vlSelf->top__DOT___0595_) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT___0079_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___0116_) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT___0866_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___1274_)))))))) 
                                              | (((IData)(vlSelf->top__DOT___0839_) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT___0836_) 
                                                     << 2U) 
                                                    | (3U 
                                                       & ((((IData)(vlSelf->top__DOT___0553_) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top__DOT___0987_)) 
                                                          + 
                                                          (((IData)(vlSelf->top__DOT___0866_) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top__DOT___1274_)))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__302(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__302\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<6>/*191:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_21;
    VlWide<6>/*191:0*/ __Vtemp_22;
    VlWide<6>/*191:0*/ __Vtemp_23;
    VlWide<6>/*191:0*/ __Vtemp_27;
    // Body
    vlSelf->top__DOT___0508_ = (1U & (((((0xfffe000U 
                                          & vlSelf->top__DOT___2102_[0U]) 
                                         | ((0x1800U 
                                             & ((IData)(vlSelf->top__DOT___2073_) 
                                                << 6U)) 
                                            | (((IData)(vlSelf->top__DOT___0973_) 
                                                << 0xaU) 
                                               | ((0x200U 
                                                   & ((IData)(vlSelf->top__DOT___2073_) 
                                                      << 6U)) 
                                                  | (((IData)(vlSelf->top__DOT___0280_) 
                                                      << 8U) 
                                                     | (0xc0U 
                                                        & ((IData)(vlSelf->top__DOT___2073_) 
                                                           << 6U))))))) 
                                        | (((IData)(vlSelf->top__DOT___0521_) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT___0692_) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT___0137_) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT___0681_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___0978_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0631_))))))) 
                                       + (((0x8000000U 
                                            & vlSelf->top__DOT___2101_[0U]) 
                                           | ((0x4000000U 
                                               & (vlSelf->top__DOT___3684_ 
                                                  << 0x1aU)) 
                                              | ((0x3ffff00U 
                                                  & (vlSelf->top__DOT___1980_ 
                                                     << 2U)) 
                                                 | (((IData)(vlSelf->top__DOT___1367_) 
                                                     << 7U) 
                                                    | (0x40U 
                                                       & (vlSelf->top__DOT___1980_ 
                                                          << 2U)))))) 
                                          | (((IData)(vlSelf->top__DOT___1681_) 
                                              << 5U) 
                                             | ((0x1cU 
                                                 & (vlSelf->top__DOT___1980_ 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0914_)))))) 
                                      >> 0x1bU));
    __Vtemp_10[0U] = ((0xf0000000U & (vlSelf->top__DOT___2102_[1U] 
                                      << 0x1aU)) | 
                      ((0x8000000U & (vlSelf->top__DOT___3712_[0U] 
                                      << 7U)) | ((0x7ffff80U 
                                                  & ((vlSelf->top__DOT___2102_[1U] 
                                                      << 0x1aU) 
                                                     | (0x3ffff80U 
                                                        & (vlSelf->top__DOT___2102_[0U] 
                                                           >> 6U)))) 
                                                 | ((0x60U 
                                                     & (IData)(vlSelf->top__DOT___2073_)) 
                                                    | (((IData)(vlSelf->top__DOT___0973_) 
                                                        << 4U) 
                                                       | ((8U 
                                                           & (IData)(vlSelf->top__DOT___2073_)) 
                                                          | (((IData)(vlSelf->top__DOT___0280_) 
                                                              << 2U) 
                                                             | (3U 
                                                                & (IData)(vlSelf->top__DOT___2073_)))))))));
    __Vtemp_10[1U] = (((0xfff8000U & ((IData)((((QData)((IData)(vlSelf->top__DOT___0477_)) 
                                                << 0x3fU) 
                                               | (0x7fffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT___2102_[3U])) 
                                                      << 0x2bU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT___2102_[2U])) 
                                                         << 0xbU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT___2102_[1U])) 
                                                           >> 0x15U)))))) 
                                      << 0xfU)) | (
                                                   (0x4000U 
                                                    & (vlSelf->top__DOT___3712_[1U] 
                                                       << 7U)) 
                                                   | (0x3fffU 
                                                      & (vlSelf->top__DOT___2102_[1U] 
                                                         >> 6U)))) 
                      | (0xf0000000U & ((IData)((((QData)((IData)(vlSelf->top__DOT___0477_)) 
                                                  << 0x3fU) 
                                                 | (0x7fffffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT___2102_[3U])) 
                                                        << 0x2bU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->top__DOT___2102_[2U])) 
                                                           << 0xbU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->top__DOT___2102_[1U])) 
                                                             >> 0x15U)))))) 
                                        << 0xfU)));
    __Vtemp_10[2U] = ((((IData)((((QData)((IData)(vlSelf->top__DOT___0477_)) 
                                  << 0x3fU) | (0x7fffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->top__DOT___2102_[3U])) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->top__DOT___2102_[2U])) 
                                                      << 0xbU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->top__DOT___2102_[1U])) 
                                                        >> 0x15U)))))) 
                        >> 0x11U) | (0xfff8000U & ((IData)(
                                                           ((((QData)((IData)(vlSelf->top__DOT___0477_)) 
                                                              << 0x3fU) 
                                                             | (0x7fffffffffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelf->top__DOT___2102_[3U])) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->top__DOT___2102_[2U])) 
                                                                       << 0xbU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->top__DOT___2102_[1U])) 
                                                                         >> 0x15U))))) 
                                                            >> 0x20U)) 
                                                   << 0xfU))) 
                      | (0xf0000000U & ((IData)(((((QData)((IData)(vlSelf->top__DOT___0477_)) 
                                                   << 0x3fU) 
                                                  | (0x7fffffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top__DOT___2102_[3U])) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->top__DOT___2102_[2U])) 
                                                            << 0xbU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->top__DOT___2102_[1U])) 
                                                              >> 0x15U))))) 
                                                 >> 0x20U)) 
                                        << 0xfU)));
    __Vtemp_10[3U] = (((0xfff8000U & ((IData)(vlSelf->top__DOT___2096_) 
                                      << 0xfU)) | ((IData)(
                                                           ((((QData)((IData)(vlSelf->top__DOT___0477_)) 
                                                              << 0x3fU) 
                                                             | (0x7fffffffffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelf->top__DOT___2102_[3U])) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->top__DOT___2102_[2U])) 
                                                                       << 0xbU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->top__DOT___2102_[1U])) 
                                                                         >> 0x15U))))) 
                                                            >> 0x20U)) 
                                                   >> 0x11U)) 
                      | (0xf0000000U & ((IData)(vlSelf->top__DOT___2096_) 
                                        << 0xfU)));
    __Vtemp_15[0U] = ((__Vtemp_10[0U] << 6U) | (((IData)(vlSelf->top__DOT___0521_) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->top__DOT___0692_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___0137_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0681_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___0978_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0631_)))))));
    __Vtemp_15[1U] = ((__Vtemp_10[0U] >> 0x1aU) | (
                                                   __Vtemp_10[1U] 
                                                   << 6U));
    __Vtemp_15[2U] = ((__Vtemp_10[1U] >> 0x1aU) | (
                                                   __Vtemp_10[2U] 
                                                   << 6U));
    __Vtemp_15[3U] = ((__Vtemp_10[2U] >> 0x1aU) | (
                                                   __Vtemp_10[3U] 
                                                   << 6U));
    __Vtemp_15[4U] = ((__Vtemp_10[3U] >> 0x1aU) | (
                                                   ((IData)(vlSelf->top__DOT___0984_) 
                                                    << 0x1fU) 
                                                   | (((IData)(vlSelf->top__DOT___1247_) 
                                                       << 0x1eU) 
                                                      | (((IData)(vlSelf->top__DOT___0221_) 
                                                          << 0x1dU) 
                                                         | ((0x1fffc0U 
                                                             & ((IData)(vlSelf->top__DOT___2096_) 
                                                                >> 0xbU)) 
                                                            | ((IData)(
                                                                       (vlSelf->top__DOT___2096_ 
                                                                        >> 0x20U)) 
                                                               << 0x15U))))));
    __Vtemp_15[5U] = ((0x20U & ((IData)(vlSelf->top__DOT___0865_) 
                                << 5U)) | ((0x30U & 
                                            ((IData)(vlSelf->top__DOT___1651_) 
                                             << 4U)) 
                                           | ((0x38U 
                                               & ((IData)(vlSelf->top__DOT___0134_) 
                                                  << 3U)) 
                                              | ((0x3cU 
                                                  & ((IData)(vlSelf->top__DOT___0289_) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelf->top__DOT___0683_) 
                                                        << 1U)) 
                                                    | (3U 
                                                       & ((IData)(vlSelf->top__DOT___0681_) 
                                                          | (((IData)(vlSelf->top__DOT___0984_) 
                                                              >> 1U) 
                                                             | (((IData)(vlSelf->top__DOT___1247_) 
                                                                 >> 2U) 
                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                    >> 3U) 
                                                                   | ((IData)(
                                                                              (vlSelf->top__DOT___2096_ 
                                                                               >> 0x20U)) 
                                                                      >> 0xbU)))))))))));
    __Vtemp_16[0U] = (((IData)((0x1000000000000000ULL 
                                | (((QData)((IData)(vlSelf->top__DOT___0152_)) 
                                    << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0626_)) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0683_)) 
                                                     << 0x3dU) 
                                                    | (((QData)((IData)(
                                                                        (0xfU 
                                                                         & (vlSelf->top__DOT___2101_[2U] 
                                                                            >> 0x1aU)))) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x22U))))) 
                                                           << 0x37U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->top__DOT___2101_[2U] 
                                                                                >> 0x18U)))) 
                                                              << 0x36U) 
                                                             | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 0x1aU))))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x16U))))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 0x14U))))) 
                                                                       << 0x26U) 
                                                                      | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x10U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x7fff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 3U)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1634_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0166_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0438_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & (vlSelf->top__DOT___2101_[1U] 
                                                                                >> 8U)))))))))))))) 
                                                                          << 6U) 
                                                                         | (QData)((IData)(
                                                                                ((0x20U 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 8U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2101_[1U] 
                                                                                >> 2U))))))))))))))))) 
                       << 0x1cU) | ((0x8000000U & (vlSelf->top__DOT___3684_ 
                                                   << 0x14U)) 
                                    | ((0x7e00000U 
                                        & ((vlSelf->top__DOT___2101_[1U] 
                                            << 0x1aU) 
                                           | (0x3e00000U 
                                              & (vlSelf->top__DOT___2101_[0U] 
                                                 >> 6U)))) 
                                       | ((0x100000U 
                                           & (vlSelf->top__DOT___3684_ 
                                              << 0x14U)) 
                                          | ((0xffffcU 
                                              & (vlSelf->top__DOT___1980_ 
                                                 >> 4U)) 
                                             | (((IData)(vlSelf->top__DOT___1367_) 
                                                 << 1U) 
                                                | (1U 
                                                   & (vlSelf->top__DOT___1980_ 
                                                      >> 4U))))))));
    __Vtemp_16[1U] = (((IData)((0x1000000000000000ULL 
                                | (((QData)((IData)(vlSelf->top__DOT___0152_)) 
                                    << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0626_)) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0683_)) 
                                                     << 0x3dU) 
                                                    | (((QData)((IData)(
                                                                        (0xfU 
                                                                         & (vlSelf->top__DOT___2101_[2U] 
                                                                            >> 0x1aU)))) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x22U))))) 
                                                           << 0x37U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->top__DOT___2101_[2U] 
                                                                                >> 0x18U)))) 
                                                              << 0x36U) 
                                                             | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 0x1aU))))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x16U))))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 0x14U))))) 
                                                                       << 0x26U) 
                                                                      | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x10U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x7fff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 3U)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1634_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0166_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0438_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & (vlSelf->top__DOT___2101_[1U] 
                                                                                >> 8U)))))))))))))) 
                                                                          << 6U) 
                                                                         | (QData)((IData)(
                                                                                ((0x20U 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 8U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2101_[1U] 
                                                                                >> 2U))))))))))))))))) 
                       >> 4U) | ((IData)(((0x1000000000000000ULL 
                                           | (((QData)((IData)(vlSelf->top__DOT___0152_)) 
                                               << 0x3fU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0626_)) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0683_)) 
                                                     << 0x3dU) 
                                                    | (((QData)((IData)(
                                                                        (0xfU 
                                                                         & (vlSelf->top__DOT___2101_[2U] 
                                                                            >> 0x1aU)))) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x22U))))) 
                                                           << 0x37U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->top__DOT___2101_[2U] 
                                                                                >> 0x18U)))) 
                                                              << 0x36U) 
                                                             | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 0x1aU))))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x16U))))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 0x14U))))) 
                                                                       << 0x26U) 
                                                                      | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x10U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x7fff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 3U)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1634_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0166_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0438_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & (vlSelf->top__DOT___2101_[1U] 
                                                                                >> 8U)))))))))))))) 
                                                                          << 6U) 
                                                                         | (QData)((IData)(
                                                                                ((0x20U 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 8U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2101_[1U] 
                                                                                >> 2U)))))))))))))))) 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp_16[2U] = ((IData)(((0x1000000000000000ULL 
                                | (((QData)((IData)(vlSelf->top__DOT___0152_)) 
                                    << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0626_)) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0683_)) 
                                                     << 0x3dU) 
                                                    | (((QData)((IData)(
                                                                        (0xfU 
                                                                         & (vlSelf->top__DOT___2101_[2U] 
                                                                            >> 0x1aU)))) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x22U))))) 
                                                           << 0x37U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->top__DOT___2101_[2U] 
                                                                                >> 0x18U)))) 
                                                              << 0x36U) 
                                                             | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 0x1aU))))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x16U))))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 0x14U))))) 
                                                                       << 0x26U) 
                                                                      | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3740_ 
                                                                                >> 0x10U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x7fff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1895_ 
                                                                                >> 3U)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1634_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0166_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0198_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0438_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & (vlSelf->top__DOT___2101_[1U] 
                                                                                >> 8U)))))))))))))) 
                                                                          << 6U) 
                                                                         | (QData)((IData)(
                                                                                ((0x20U 
                                                                                & (vlSelf->top__DOT___3684_ 
                                                                                >> 8U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2101_[1U] 
                                                                                >> 2U)))))))))))))))) 
                               >> 0x20U)) >> 4U);
    __Vtemp_21[3U] = (IData)((((QData)((IData)((7U 
                                                & (vlSelf->top__DOT___2101_[5U] 
                                                   >> 3U)))) 
                               << 0x3dU) | (((QData)((IData)(
                                                             (0xfU 
                                                              & ((IData)(vlSelf->top__DOT___2045_) 
                                                                 >> 5U)))) 
                                             << 0x39U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___2012_ 
                                                                            >> 0x1cU))))) 
                                                << 0x29U) 
                                               | (((QData)((IData)(
                                                                   (((IData)(
                                                                             (vlSelf->top__DOT___3655_ 
                                                                              >> 0x24U)) 
                                                                     << 0x1fU) 
                                                                    | ((0x7c000000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___2012_ 
                                                                                >> 0x16U)) 
                                                                           << 0x1aU)) 
                                                                       | ((0x2000000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3655_ 
                                                                                >> 0x1eU)) 
                                                                              << 0x19U)) 
                                                                          | ((0x1000000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3655_ 
                                                                                >> 0x1dU)) 
                                                                                << 0x18U)) 
                                                                             | ((0xffffc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2012_ 
                                                                                >> 2U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3655_ 
                                                                                >> 0xaU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2101_[3U] 
                                                                                >> 0xfU)))))))))) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___1368_) 
                                                                      << 8U) 
                                                                     | ((0x40U 
                                                                         & (vlSelf->top__DOT___1951_[3U] 
                                                                            >> 0x15U)) 
                                                                        | ((0x20U 
                                                                            & ((IData)(vlSelf->top__DOT___3726_) 
                                                                               << 1U)) 
                                                                           | ((0x1cU 
                                                                               & (vlSelf->top__DOT___1951_[3U] 
                                                                                >> 0x15U)) 
                                                                              | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___3726_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0379_)))))))))))));
    __Vtemp_21[4U] = (IData)(((((QData)((IData)((7U 
                                                 & (vlSelf->top__DOT___2101_[5U] 
                                                    >> 3U)))) 
                                << 0x3dU) | (((QData)((IData)(
                                                              (0xfU 
                                                               & ((IData)(vlSelf->top__DOT___2045_) 
                                                                  >> 5U)))) 
                                              << 0x39U) 
                                             | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT___2012_ 
                                                                             >> 0x1cU))))) 
                                                 << 0x29U) 
                                                | (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3655_ 
                                                                               >> 0x24U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x7c000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___2012_ 
                                                                                >> 0x16U)) 
                                                                            << 0x1aU)) 
                                                                        | ((0x2000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3655_ 
                                                                                >> 0x1eU)) 
                                                                               << 0x19U)) 
                                                                           | ((0x1000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3655_ 
                                                                                >> 0x1dU)) 
                                                                                << 0x18U)) 
                                                                              | ((0xffffc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2012_ 
                                                                                >> 2U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3655_ 
                                                                                >> 0xaU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2101_[3U] 
                                                                                >> 0xfU)))))))))) 
                                                    << 9U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1368_) 
                                                                       << 8U) 
                                                                      | ((0x40U 
                                                                          & (vlSelf->top__DOT___1951_[3U] 
                                                                             >> 0x15U)) 
                                                                         | ((0x20U 
                                                                             & ((IData)(vlSelf->top__DOT___3726_) 
                                                                                << 1U)) 
                                                                            | ((0x1cU 
                                                                                & (vlSelf->top__DOT___1951_[3U] 
                                                                                >> 0x15U)) 
                                                                               | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___3726_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0379_)))))))))))) 
                              >> 0x20U));
    __Vtemp_22[0U] = ((__Vtemp_16[0U] << 6U) | (((IData)(vlSelf->top__DOT___1681_) 
                                                 << 5U) 
                                                | ((0x1cU 
                                                    & (vlSelf->top__DOT___1980_ 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->top__DOT___0287_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0914_)))));
    __Vtemp_22[1U] = ((__Vtemp_16[0U] >> 0x1aU) | (
                                                   __Vtemp_16[1U] 
                                                   << 6U));
    __Vtemp_22[2U] = ((__Vtemp_16[1U] >> 0x1aU) | (
                                                   __Vtemp_16[2U] 
                                                   << 6U));
    __Vtemp_22[3U] = (((0x30U & ((IData)(vlSelf->top__DOT___1395_) 
                                 << 4U)) | ((0x38U 
                                             & ((IData)(vlSelf->top__DOT___1380_) 
                                                << 3U)) 
                                            | ((0x3cU 
                                                & ((IData)(vlSelf->top__DOT___0603_) 
                                                   << 2U)) 
                                               | (__Vtemp_16[2U] 
                                                  >> 0x1aU)))) 
                      | (__Vtemp_21[3U] << 6U));
    __Vtemp_22[4U] = ((__Vtemp_21[3U] >> 0x1aU) | (
                                                   __Vtemp_21[4U] 
                                                   << 6U));
    __Vtemp_22[5U] = (__Vtemp_21[4U] >> 0x1aU);
    VL_ADD_W(6, __Vtemp_23, __Vtemp_15, __Vtemp_22);
    __Vtemp_27[0U] = ((0xf0000000U & __Vtemp_23[0U]) 
                      | (((IData)(vlSelf->top__DOT___0508_) 
                          << 0x1bU) | (0x7ffffffU & 
                                       ((((0x7ffe000U 
                                           & vlSelf->top__DOT___2102_[0U]) 
                                          | ((0x1800U 
                                              & ((IData)(vlSelf->top__DOT___2073_) 
                                                 << 6U)) 
                                             | (((IData)(vlSelf->top__DOT___0973_) 
                                                 << 0xaU) 
                                                | ((0x200U 
                                                    & ((IData)(vlSelf->top__DOT___2073_) 
                                                       << 6U)) 
                                                   | (((IData)(vlSelf->top__DOT___0280_) 
                                                       << 8U) 
                                                      | (0xc0U 
                                                         & ((IData)(vlSelf->top__DOT___2073_) 
                                                            << 6U))))))) 
                                         | (((IData)(vlSelf->top__DOT___0521_) 
                                             << 5U) 
                                            | (((IData)(vlSelf->top__DOT___0692_) 
                                                << 4U) 
                                               | (((IData)(vlSelf->top__DOT___0137_) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT___0681_) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top__DOT___0978_) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top__DOT___0631_))))))) 
                                        + (((0x4000000U 
                                             & (vlSelf->top__DOT___3684_ 
                                                << 0x1aU)) 
                                            | ((0x3ffff00U 
                                                & (vlSelf->top__DOT___1980_ 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->top__DOT___1367_) 
                                                   << 7U) 
                                                  | (0x40U 
                                                     & (vlSelf->top__DOT___1980_ 
                                                        << 2U))))) 
                                           | (((IData)(vlSelf->top__DOT___1681_) 
                                               << 5U) 
                                              | ((0x1cU 
                                                  & (vlSelf->top__DOT___1980_ 
                                                     << 2U)) 
                                                 | (((IData)(vlSelf->top__DOT___0287_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0914_)))))))));
    vlSelf->top__DOT___2100_[0U] = __Vtemp_27[0U];
    vlSelf->top__DOT___2100_[1U] = ((0xfffffffU & __Vtemp_23[1U]) 
                                    | (0xf0000000U 
                                       & __Vtemp_23[1U]));
    vlSelf->top__DOT___2100_[2U] = ((0xfffffffU & __Vtemp_23[2U]) 
                                    | (0xf0000000U 
                                       & __Vtemp_23[2U]));
    vlSelf->top__DOT___2100_[3U] = ((0xfffffffU & __Vtemp_23[3U]) 
                                    | (0xf0000000U 
                                       & __Vtemp_23[3U]));
    vlSelf->top__DOT___2100_[4U] = ((0xfffffffU & __Vtemp_23[4U]) 
                                    | (0xf0000000U 
                                       & __Vtemp_23[4U]));
    vlSelf->top__DOT___2100_[5U] = (0x3fU & __Vtemp_23[5U]);
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__303(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__303\n"); );
    // Body
    vlSelf->top__DOT___1901_[0U] = ((0x1fffffffU & 
                                     vlSelf->top__DOT___1901_[0U]) 
                                    | ((IData)((vlSelf->top__DOT___1893_ 
                                                >> 0x26U)) 
                                       << 0x1dU));
    vlSelf->top__DOT___1901_[1U] = ((0xf8000000U & 
                                     vlSelf->top__DOT___1901_[1U]) 
                                    | (0x1fffffffU 
                                       & ((0x1c000000U 
                                           & ((IData)(vlSelf->top__DOT___1023_) 
                                              << 0x1aU)) 
                                          | ((0x3ffff80U 
                                              & ((((0x7ff80U 
                                                    & (vlSelf->top__DOT___1964_[0U] 
                                                       >> 3U)) 
                                                   | (((IData)(vlSelf->top__DOT___1433_) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->top__DOT___0733_) 
                                                          << 5U) 
                                                         | ((0x10U 
                                                             & ((~ (IData)(vlSelf->top__DOT___0091_)) 
                                                                << 4U)) 
                                                            | (((IData)(vlSelf->top__DOT___0672_) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->top__DOT___0134_) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->top__DOT___1038_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___1422_)))))))) 
                                                  + 
                                                  ((0x7e000U 
                                                    & ((IData)(vlSelf->top__DOT___2175_) 
                                                       << 6U)) 
                                                   | (((IData)(vlSelf->top__DOT___1252_) 
                                                       << 0xcU) 
                                                      | ((0xc00U 
                                                          & ((IData)(vlSelf->top__DOT___2175_) 
                                                             << 6U)) 
                                                         | (((IData)(vlSelf->top__DOT___0839_) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->top__DOT___0836_) 
                                                                << 8U) 
                                                               | ((((IData)(vlSelf->top__DOT___0379_) 
                                                                    & (~ (IData)(vlSelf->top__DOT___0378_))) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->top__DOT___0015_) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->top__DOT___0779_) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->top__DOT___0300_) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->top__DOT___0076_) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->top__DOT___0454_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (((IData)(vlSelf->top__DOT___0569_) 
                                                                                & (IData)(vlSelf->top__DOT___0680_)) 
                                                                                | (IData)(vlSelf->top__DOT___0841_)))))))))))))))) 
                                                 << 7U)) 
                                             | ((0x1fffffc0U 
                                                 & ((IData)(vlSelf->top__DOT___0225_) 
                                                    << 6U)) 
                                                | ((0x1fffffe0U 
                                                    & ((IData)(vlSelf->top__DOT___1229_) 
                                                       << 5U)) 
                                                   | ((0x1ffffff0U 
                                                       & ((IData)(vlSelf->top__DOT___0133_) 
                                                          << 4U)) 
                                                      | (0xfU 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___1893_ 
                                                                     >> 0x26U)) 
                                                            >> 3U)))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__304(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__304\n"); );
    // Body
    vlSelf->top__DOT___1949_ = ((0x3e0U & ((((0x1feU 
                                              & (vlSelf->top__DOT___3698_[0U] 
                                                 >> 0x11U)) 
                                             | (IData)(vlSelf->top__DOT___0129_)) 
                                            + ((0x1c0U 
                                                & (vlSelf->top__DOT___2100_[2U] 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->top__DOT___0264_) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->top__DOT___1425_) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->top__DOT___0662_) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->top__DOT___0149_) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->top__DOT___0944_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___0383_)))))))) 
                                           << 1U)) 
                                | (((IData)(vlSelf->top__DOT___1883_) 
                                    << 4U) | (((IData)(vlSelf->top__DOT___0372_) 
                                               << 2U) 
                                              | ((IData)(vlSelf->top__DOT___0982_) 
                                                 << 1U))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__305(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__305\n"); );
    // Body
    vlSelf->top__DOT___2165_ = (((QData)((IData)((0x3ffU 
                                                  & ((vlSelf->top__DOT___2100_[5U] 
                                                      << 8U) 
                                                     | (vlSelf->top__DOT___2100_[4U] 
                                                        >> 0x18U))))) 
                                 << 0x25U) | (((QData)((IData)(vlSelf->top__DOT___1663_)) 
                                               << 0x24U) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0288_)) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT___3742_) 
                                                                         >> 1U)))) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->top__DOT___3742_)))) 
                                                        << 0x21U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (~ (IData)(vlSelf->top__DOT___0481_))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->top__DOT___1808_) 
                                                                              << 0x1fU) 
                                                                             | (((IData)(vlSelf->top__DOT___0216_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1038_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___1254_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0468_) 
                                                                                << 0x1bU) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->top__DOT___2006_) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0404_) 
                                                                                << 0x19U) 
                                                                                | ((0x1800000U 
                                                                                & ((IData)(vlSelf->top__DOT___2006_) 
                                                                                << 0x14U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1308_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlSelf->top__DOT___0320_))) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1095_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1023_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___2147_) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1869_) 
                                                                                << 0x10U) 
                                                                                | ((0xf000U 
                                                                                & ((IData)(vlSelf->top__DOT___2147_) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3753_) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3753_) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0626_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0678_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0682_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0436_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0659_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1377_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0303_))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT___2194_ = ((0x400U & (vlSelf->top__DOT___3751_ 
                                           >> 7U)) 
                                | ((0x200U & (vlSelf->top__DOT___3751_ 
                                              >> 7U)) 
                                   | ((0x100U & ((IData)(vlSelf->top__DOT___2134_) 
                                                 << 2U)) 
                                      | ((0x80U & (vlSelf->top__DOT___3751_ 
                                                   >> 7U)) 
                                         | ((0x60U 
                                             & ((IData)(vlSelf->top__DOT___2134_) 
                                                << 2U)) 
                                            | ((0x10U 
                                                & (vlSelf->top__DOT___3751_ 
                                                   >> 7U)) 
                                               | (((IData)(vlSelf->top__DOT___0503_) 
                                                   << 3U) 
                                                  | ((4U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___2165_ 
                                                                  >> 0xbU)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((IData)(vlSelf->top__DOT___3753_) 
                                                            << 1U)) 
                                                        | (IData)(vlSelf->top__DOT___0004_))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__306(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__306\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__307(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__307\n"); );
    // Body
    vlSelf->top__DOT___1618_ = (1U & (((2U | ((0x8000U 
                                               & (vlSelf->top__DOT___2060_[1U] 
                                                  >> 4U)) 
                                              | ((0x4000U 
                                                  & (vlSelf->top__DOT___3687_ 
                                                     << 4U)) 
                                                 | ((0x2000U 
                                                     & (vlSelf->top__DOT___1964_[1U] 
                                                        >> 7U)) 
                                                    | ((0x1000U 
                                                        & ((IData)(vlSelf->top__DOT___3810_) 
                                                           << 3U)) 
                                                       | ((0xe00U 
                                                           & (vlSelf->top__DOT___1964_[1U] 
                                                              >> 7U)) 
                                                          | ((0x100U 
                                                              & ((IData)(vlSelf->top__DOT___3810_) 
                                                                 << 3U)) 
                                                             | ((0xc0U 
                                                                 & (vlSelf->top__DOT___1964_[1U] 
                                                                    >> 7U)) 
                                                                | ((0x20U 
                                                                    & ((IData)(vlSelf->top__DOT___3810_) 
                                                                       << 3U)) 
                                                                   | ((0x10U 
                                                                       & (vlSelf->top__DOT___1964_[1U] 
                                                                          >> 7U)) 
                                                                      | ((8U 
                                                                          & ((IData)(vlSelf->top__DOT___3810_) 
                                                                             << 3U)) 
                                                                         | (((IData)(vlSelf->top__DOT___0226_) 
                                                                             << 2U) 
                                                                            | (IData)(vlSelf->top__DOT___1028_))))))))))))) 
                                       + ((0xe000U 
                                           & (vlSelf->top__DOT___1901_[0U] 
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
                                                                     | (IData)(vlSelf->top__DOT___1017_)))))))))))) 
                                      >> 0xfU));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__308(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__308\n"); );
    // Body
    vlSelf->top__DOT___2160_ = (((QData)((IData)((0x7ffffffU 
                                                  & ((vlSelf->top__DOT___3711_[3U] 
                                                      << 0x18U) 
                                                     | (vlSelf->top__DOT___3711_[2U] 
                                                        >> 8U))))) 
                                 << 0x18U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0749_) 
                                                               << 0x17U) 
                                                              | (((IData)(vlSelf->top__DOT___0590_) 
                                                                  << 0x16U) 
                                                                 | ((0x3c0000U 
                                                                     & ((vlSelf->top__DOT___1901_[2U] 
                                                                         << 0x13U) 
                                                                        | (0x40000U 
                                                                           & (vlSelf->top__DOT___1901_[1U] 
                                                                              >> 0xdU)))) 
                                                                    | (((IData)(vlSelf->top__DOT___1575_) 
                                                                        << 0x11U) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT___1901_[1U] 
                                                                              >> 0xdU)) 
                                                                          | (((IData)(vlSelf->top__DOT___0855_) 
                                                                              << 0xfU) 
                                                                             | (((IData)(vlSelf->top__DOT___1459_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0058_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0298_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & (vlSelf->top__DOT___1936_[1U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1612_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1936_[1U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0418_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___1936_[1U] 
                                                                                >> 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3641_ 
                                                                                >> 4U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0548_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0309_))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__309(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__309\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (0x3ffU & ((((IData)(vlSelf->top__DOT___0633_) 
                             << 9U) | (((IData)(vlSelf->top__DOT___0162_) 
                                        << 8U) | ((0x80U 
                                                   & (IData)(vlSelf->top__DOT___1959_)) 
                                                  | (((IData)(vlSelf->top__DOT___1202_) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->top__DOT___1431_) 
                                                         << 5U) 
                                                        | ((0x18U 
                                                            & (IData)(vlSelf->top__DOT___1959_)) 
                                                           | (((IData)(vlSelf->top__DOT___1145_) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->top__DOT___1089_) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->top__DOT___0948_))))))))) 
                           + ((0x200U & ((IData)(vlSelf->top__DOT___3718_) 
                                         >> 1U)) | 
                              ((0x1c0U & (vlSelf->top__DOT___1901_[0U] 
                                          >> 4U)) | 
                               ((0x20U & ((IData)(vlSelf->top__DOT___3718_) 
                                          >> 1U)) | 
                                ((0x1cU & (vlSelf->top__DOT___1901_[0U] 
                                           >> 4U)) 
                                 | ((2U & (((IData)(vlSelf->top__DOT___3620_) 
                                            >> 1U) 
                                           & ((~ ((
                                                   (vlSelf->top__DOT___3798_[2U] 
                                                    >> 8U) 
                                                   & (IData)(vlSelf->top__DOT___0831_)) 
                                                  | ((vlSelf->top__DOT___3751_ 
                                                      >> 0x11U) 
                                                     & (vlSelf->top__DOT___3706_[1U] 
                                                        >> 0x17U)))) 
                                              << 1U))) 
                                    | (1U & vlSelf->out_data[0x1eU]))))))));
    vlSelf->out_data[0x19U] = ((0xfffffc00U & vlSelf->out_data[0x19U]) 
                               | __Vtemp_1);
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__310(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__310\n"); );
    // Body
    vlSelf->top__DOT___2081_ = (0x40U | ((0xfe000000U 
                                          & ((IData)(vlSelf->top__DOT___1911_) 
                                             << 0x11U)) 
                                         | ((0x1000000U 
                                             & (vlSelf->top__DOT___3748_ 
                                                << 6U)) 
                                            | ((0x800000U 
                                                & (vlSelf->top__DOT___3748_ 
                                                   << 6U)) 
                                               | ((0x400000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___2063_ 
                                                               >> 0x1cU)) 
                                                      << 0x16U)) 
                                                  | ((0x200000U 
                                                      & (vlSelf->top__DOT___3748_ 
                                                         << 6U)) 
                                                     | ((0x100000U 
                                                         & (vlSelf->top__DOT___3748_ 
                                                            << 6U)) 
                                                        | ((0x80000U 
                                                            & (vlSelf->top__DOT___3748_ 
                                                               << 6U)) 
                                                           | (((IData)(vlSelf->top__DOT___1376_) 
                                                               << 0x12U) 
                                                              | ((0x30000U 
                                                                  & (vlSelf->top__DOT___3748_ 
                                                                     << 6U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0127_) 
                                                                     << 0xfU) 
                                                                    | (((IData)(vlSelf->top__DOT___0337_) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->top__DOT___0134_) 
                                                                           << 0xdU) 
                                                                          | ((0x1000U 
                                                                              & ((IData)(vlSelf->top__DOT___3645_) 
                                                                                << 0xbU)) 
                                                                             | (((IData)(vlSelf->top__DOT___0662_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0988_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0091_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1627_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
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
                                                                                >> 0x1dU)))))))))))))))))))))));
    vlSelf->top__DOT___0008_ = (1U & ((((0x780000U 
                                         & vlSelf->top__DOT___2082_) 
                                        | ((0x40000U 
                                            & (vlSelf->top__DOT___3651_[0U] 
                                               >> 7U)) 
                                           | ((0x38000U 
                                               & vlSelf->top__DOT___2082_) 
                                              | (((IData)(vlSelf->top__DOT___0044_) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->top__DOT___0149_) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->top__DOT___0379_) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->top__DOT___0607_) 
                                                           << 0xaU) 
                                                          | ((0x3c0U 
                                                              & (vlSelf->top__DOT___1936_[1U] 
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
                                                                            | (IData)(vlSelf->top__DOT___0009_)))))))))))))) 
                                       + (0x40U | (
                                                   (0x400000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___2063_ 
                                                                >> 0x1cU)) 
                                                       << 0x16U)) 
                                                   | ((0x200000U 
                                                       & vlSelf->top__DOT___2081_) 
                                                      | ((0x100000U 
                                                          & (vlSelf->top__DOT___3748_ 
                                                             << 6U)) 
                                                         | ((0x80000U 
                                                             & vlSelf->top__DOT___2081_) 
                                                            | (((IData)(vlSelf->top__DOT___1376_) 
                                                                << 0x12U) 
                                                               | ((0x30000U 
                                                                   & vlSelf->top__DOT___2081_) 
                                                                  | (((IData)(vlSelf->top__DOT___0127_) 
                                                                      << 0xfU) 
                                                                     | (((IData)(vlSelf->top__DOT___0337_) 
                                                                         << 0xeU) 
                                                                        | (((IData)(vlSelf->top__DOT___0134_) 
                                                                            << 0xdU) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3645_) 
                                                                                << 0xbU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0662_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0988_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0091_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1627_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
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
                                                                                >> 0x1dU))))))))))))))))))))) 
                                      >> 0x16U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__311(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__311\n"); );
    // Body
    vlSelf->top__DOT___1261_ = (1U & ((((8U & ((IData)(
                                                       (vlSelf->top__DOT___3655_ 
                                                        >> 0x24U)) 
                                               << 3U)) 
                                        | (((IData)(vlSelf->top__DOT___1610_) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelf->top__DOT___0309_)) 
                                                << 1U)) 
                                              | (IData)(vlSelf->top__DOT___0047_)))) 
                                       + (((IData)(vlSelf->top__DOT___0503_) 
                                           << 3U) | 
                                          ((4U & ((IData)(
                                                          (vlSelf->top__DOT___2165_ 
                                                           >> 0xbU)) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((IData)(vlSelf->top__DOT___3753_) 
                                                << 1U)) 
                                              | (IData)(vlSelf->top__DOT___0004_))))) 
                                      >> 3U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__312(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__312\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & (IData)(
                                                            (vlSelf->top__DOT___3791_ 
                                                             >> 0x18U))))) 
                              << 0x3dU) | (((QData)((IData)(
                                                            (3U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT___1984_ 
                                                                        >> 0x24U))))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3791_ 
                                                                           >> 0x15U))))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (0xfffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___1984_ 
                                                                              >> 0xfU))))) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___3791_)))) 
                                                     << 0x25U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fffU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3670_ 
                                                                                >> 0x14U))))) 
                                                        << 0x18U) 
                                                       | (QData)((IData)(
                                                                         (8U 
                                                                          | ((0xff0000U 
                                                                              & (vlSelf->top__DOT___2014_ 
                                                                                << 6U)) 
                                                                             | ((0xf000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1988_ 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3670_ 
                                                                                >> 7U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1988_ 
                                                                                >> 0x31U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3670_ 
                                                                                >> 5U)) 
                                                                                << 9U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1988_ 
                                                                                >> 0x2eU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3670_ 
                                                                                >> 2U)) 
                                                                                << 6U)) 
                                                                                | ((0x30U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1988_ 
                                                                                >> 0x2bU)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0191_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0325_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0453_)))))))))))))))))))));
    __Vtemp_1[1U] = (((IData)((vlSelf->top__DOT___1984_ 
                               >> 0x27U)) << 0x1eU) 
                     | (IData)(((((QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT___3791_ 
                                                              >> 0x18U))))) 
                                  << 0x3dU) | (((QData)((IData)(
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___1984_ 
                                                                            >> 0x24U))))) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT___3791_ 
                                                                               >> 0x15U))))) 
                                                   << 0x3aU) 
                                                  | (((QData)((IData)(
                                                                      (0xfffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT___1984_ 
                                                                                >> 0xfU))))) 
                                                      << 0x26U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(vlSelf->top__DOT___3791_)))) 
                                                         << 0x25U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fffU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3670_ 
                                                                                >> 0x14U))))) 
                                                            << 0x18U) 
                                                           | (QData)((IData)(
                                                                             (8U 
                                                                              | ((0xff0000U 
                                                                                & (vlSelf->top__DOT___2014_ 
                                                                                << 6U)) 
                                                                                | ((0xf000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1988_ 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3670_ 
                                                                                >> 7U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1988_ 
                                                                                >> 0x31U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3670_ 
                                                                                >> 5U)) 
                                                                                << 9U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1988_ 
                                                                                >> 0x2eU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3670_ 
                                                                                >> 2U)) 
                                                                                << 6U)) 
                                                                                | ((0x30U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1988_ 
                                                                                >> 0x2bU)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0191_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0325_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0453_)))))))))))))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___2245_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___2245_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2245_[2U] = (((IData)(vlSelf->top__DOT___0752_) 
                                     << 0x11U) | ((0x1e000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3791_ 
                                                               >> 0x28U)) 
                                                      << 0xdU)) 
                                                  | ((0x1e00U 
                                                      & (vlSelf->top__DOT___2141_ 
                                                         >> 0xaU)) 
                                                     | ((0x1c0U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3791_ 
                                                                     >> 0x21U)) 
                                                            << 6U)) 
                                                        | (0x3fU 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___1984_ 
                                                                       >> 0x27U)) 
                                                              >> 2U))))));
}
